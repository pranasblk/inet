//
// Copyright (C) OpenSim Ltd.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#ifndef __INET_FRAGMENTTAGBASEDFRAGMENTER_H
#define __INET_FRAGMENTTAGBASEDFRAGMENTER_H

#include "inet/protocol/common/HeaderPosition.h"
#include "inet/protocol/fragmentation/base/FragmenterBase.h"

namespace inet {

using namespace inet::queueing;

class INET_API FragmentTagBasedFragmenter : public FragmenterBase
{
  protected:
    Packet *createFragmentPacket(Packet *packet, b fragmentOffset, b fragmentLength, int fragmentNumber, int numFragments) override;
};

} // namespace inet

#endif

