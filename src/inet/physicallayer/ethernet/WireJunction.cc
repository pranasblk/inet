/*
 * Copyright (C) 2003 Andras Varga; CTIE, Monash University, Australia
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include "inet/common/Simsignals.h"
#include "inet/physicallayer/ethernet/WireJunction.h"

namespace inet {
namespace physicallayer {

Define_Module(WireJunction);

inline std::ostream& operator<<(std::ostream& os, cMessage *msg)
{
    os << "(" << msg->getClassName() << ")" << msg->getFullName();
    return os;
}

void WireJunction::initialize()
{
    numPorts = gateSize("ethg");
    inputGateBaseId = gateBaseId("ethg$i");
    outputGateBaseId = gateBaseId("ethg$o");

    numMessages = 0;
    WATCH(numMessages);

    // ensure we receive frames when their first bits arrive
    for (int i = 0; i < numPorts; i++)
        gate(inputGateBaseId + i)->setDeliverImmediately(true);
    subscribe(POST_MODEL_CHANGE, this);    // we'll need to do the same for dynamically added gates as well

    setTxUpdateSupport(true);
    checkConnections(true);
}

void WireJunction::checkConnections(bool errorWhenAsymmetric)
{
    int numActivePorts = 0;
    double datarate = 0.0;
    dataratesDiffer = false;

    for (int i = 0; i < numPorts; i++) {
        cGate *igate = gate(inputGateBaseId + i);
        cGate *ogate = gate(outputGateBaseId + i);
        if (!igate->isConnected() && !ogate->isConnected())
            continue;

        if (!igate->isConnected() || !ogate->isConnected()) {
            // half connected gate
            if (errorWhenAsymmetric)
                throw cRuntimeError("The input or output gate not connected at port %i", i);
            dataratesDiffer = true;
            EV << "The input or output gate not connected at port " << i << ".\n";
            continue;
        }

        numActivePorts++;
        double drate = igate->getIncomingTransmissionChannel()->getNominalDatarate();

        if (numActivePorts == 1)
            datarate = drate;
        else if (datarate != drate) {
            if (errorWhenAsymmetric)
                throw cRuntimeError("The input datarate at port %i differs from datarates of previous ports", i);
            dataratesDiffer = true;
            EV << "The input datarate at port " << i << " differs from datarates of previous ports.\n";
        }

        cDatarateChannel *outTrChannel = check_and_cast<cDatarateChannel *>(ogate->getTransmissionChannel());
        if (outTrChannel->getMode() != cDatarateChannel::MULTI)
            outTrChannel->setMode(cDatarateChannel::MULTI);
        drate = outTrChannel->getNominalDatarate();

        if (datarate != drate) {
            if (errorWhenAsymmetric)
                throw cRuntimeError("The output datarate at port %i differs from datarates of previous ports", i);
            dataratesDiffer = true;
            EV << "The output datarate at port " << i << " differs from datarates of previous ports.\n";
        }

        if (!outTrChannel->isSubscribed(POST_MODEL_CHANGE, this))
            outTrChannel->subscribe(POST_MODEL_CHANGE, this);
    }
}

void WireJunction::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj, cObject *details)
{
    Enter_Method_Silent();

    ASSERT(signalID == POST_MODEL_CHANGE);

    // if new gates have been added, we need to call setDeliverOnReceptionStart(true) on them
    cPostGateVectorResizeNotification *notif = dynamic_cast<cPostGateVectorResizeNotification *>(obj);
    if (notif) {
        if (strcmp(notif->gateName, "ethg") == 0) {
            int newSize = gateSize("ethg");
            for (int i = notif->oldSize; i < newSize; i++)
                gate(inputGateBaseId + i)->setDeliverImmediately(true);
        }
        return;
    }

    cPostPathCreateNotification *connNotif = dynamic_cast<cPostPathCreateNotification *>(obj);
    if (connNotif) {
        if ((this == connNotif->pathStartGate->getOwnerModule()) || (this == connNotif->pathEndGate->getOwnerModule()))
            checkConnections(false);
        return;
    }

    cPostPathCutNotification *cutNotif = dynamic_cast<cPostPathCutNotification *>(obj);
    if (cutNotif) {
        if ((this == cutNotif->pathStartGate->getOwnerModule()) || (this == cutNotif->pathEndGate->getOwnerModule()))
            checkConnections(false);
        return;
    }

    // note: we are subscribed to the channel object too
    cPostParameterChangeNotification *parNotif = dynamic_cast<cPostParameterChangeNotification *>(obj);
    if (parNotif) {
        cChannel *channel = dynamic_cast<cDatarateChannel *>(parNotif->par->getOwner());
        if (channel) {
            cGate *gate = channel->getSourceGate();
            if (gate->pathContains(this))
                checkConnections(false);
        }
        return;
    }
}

void WireJunction::handleMessage(cMessage *msg)
{
    if (dataratesDiffer)
        checkConnections(true);

    cPacket *signal = check_and_cast<cPacket *>(msg);

    // Handle frame sent down from the network entity: send out on every other port
    int arrivalPort = signal->getArrivalGate()->getIndex();
    EV << "Frame " << signal << " arrived on port " << arrivalPort << ", broadcasting on all other ports\n";

    numMessages++;
    emit(packetReceivedSignal, signal);

    if (numPorts <= 1) {
        delete signal;
        return;
    }

    long origPacketId = signal->getOrigPacketId();
    for (int i = 0; i < numPorts; i++) {
        if (i != arrivalPort) {
            cGate *ogate = gate(outputGateBaseId + i);
            if (!ogate->isConnected())
                continue;

            cPacket *outSignal = signal->dup();
            SendOptions sendOptions;
            sendOptions.duration(signal->getDuration());

            if (origPacketId == -1) {
                registerSignalId(signal->getId(), i, outSignal->getId());
            }
            else {
                long outOrigId = getOutSignalIdFor(origPacketId, i);
                sendOptions.updateTx(outOrigId, signal->getRemainingDuration());
            }

            // send
            send(outSignal, sendOptions, ogate);
        }
    }
    delete signal;
}

void WireJunction::registerSignalId(long incomingSignalId, int port, long outgoingSignalId)
{
    signalIdMap.insert(std::pair<SignalKey, long>(SignalKey(incomingSignalId, port), outgoingSignalId));
}

void WireJunction::deregisterSignalId(long incomingSignalId)
{
    for (int i=0; i < numPorts; i++)
        signalIdMap.erase(SignalKey(incomingSignalId, i));
}

long WireJunction::getOutSignalIdFor(long incomingSignalId, int port)
{
    return signalIdMap.at(SignalKey(incomingSignalId, port));
}

void WireJunction::finish()
{
    simtime_t t = simTime();
    recordScalar("simulated time", t);

    if (t > 0)
        recordScalar("messages/sec", numMessages / t);
}

} // namespace physicallayer
} // namespace inet

