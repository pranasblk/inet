//
// Copyright (C) 2014 OpenSim Ltd.
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

#include "inet/physicallayer/modulation/Qam1024Modulation.h"

namespace inet {

namespace physicallayer {

const double k = 1 / sqrt(170);

// generated by a small script according to http://patentimages.storage.googleapis.com/WO2003058904A1/imgf000014_0001.png
const std::vector<ApskSymbol> Qam1024Modulation::constellation = {
    k * ApskSymbol(-31,-31),
    k * ApskSymbol(-31,-29),
    k * ApskSymbol(-31,-25),
    k * ApskSymbol(-31,-27),
    k * ApskSymbol(-31,-17),
    k * ApskSymbol(-31,-19),
    k * ApskSymbol(-31,-23),
    k * ApskSymbol(-31,-21),
    k * ApskSymbol(-31,-1),
    k * ApskSymbol(-31,-3),
    k * ApskSymbol(-31,-7),
    k * ApskSymbol(-31,-5),
    k * ApskSymbol(-31,-15),
    k * ApskSymbol(-31,-13),
    k * ApskSymbol(-31,-9),
    k * ApskSymbol(-31,-11),
    k * ApskSymbol(-31,31),
    k * ApskSymbol(-31,29),
    k * ApskSymbol(-31,25),
    k * ApskSymbol(-31,27),
    k * ApskSymbol(-31,17),
    k * ApskSymbol(-31,19),
    k * ApskSymbol(-31,23),
    k * ApskSymbol(-31,21),
    k * ApskSymbol(-31,1),
    k * ApskSymbol(-31,3),
    k * ApskSymbol(-31,7),
    k * ApskSymbol(-31,5),
    k * ApskSymbol(-31,15),
    k * ApskSymbol(-31,13),
    k * ApskSymbol(-31,9),
    k * ApskSymbol(-31,11),
    k * ApskSymbol(-29,-31),
    k * ApskSymbol(-29,-29),
    k * ApskSymbol(-29,-25),
    k * ApskSymbol(-29,-27),
    k * ApskSymbol(-29,-17),
    k * ApskSymbol(-29,-19),
    k * ApskSymbol(-29,-23),
    k * ApskSymbol(-29,-21),
    k * ApskSymbol(-29,-1),
    k * ApskSymbol(-29,-3),
    k * ApskSymbol(-29,-7),
    k * ApskSymbol(-29,-5),
    k * ApskSymbol(-29,-15),
    k * ApskSymbol(-29,-13),
    k * ApskSymbol(-29,-9),
    k * ApskSymbol(-29,-11),
    k * ApskSymbol(-29,31),
    k * ApskSymbol(-29,29),
    k * ApskSymbol(-29,25),
    k * ApskSymbol(-29,27),
    k * ApskSymbol(-29,17),
    k * ApskSymbol(-29,19),
    k * ApskSymbol(-29,23),
    k * ApskSymbol(-29,21),
    k * ApskSymbol(-29,1),
    k * ApskSymbol(-29,3),
    k * ApskSymbol(-29,7),
    k * ApskSymbol(-29,5),
    k * ApskSymbol(-29,15),
    k * ApskSymbol(-29,13),
    k * ApskSymbol(-29,9),
    k * ApskSymbol(-29,11),
    k * ApskSymbol(-25,-31),
    k * ApskSymbol(-25,-29),
    k * ApskSymbol(-25,-25),
    k * ApskSymbol(-25,-27),
    k * ApskSymbol(-25,-17),
    k * ApskSymbol(-25,-19),
    k * ApskSymbol(-25,-23),
    k * ApskSymbol(-25,-21),
    k * ApskSymbol(-25,-1),
    k * ApskSymbol(-25,-3),
    k * ApskSymbol(-25,-7),
    k * ApskSymbol(-25,-5),
    k * ApskSymbol(-25,-15),
    k * ApskSymbol(-25,-13),
    k * ApskSymbol(-25,-9),
    k * ApskSymbol(-25,-11),
    k * ApskSymbol(-25,31),
    k * ApskSymbol(-25,29),
    k * ApskSymbol(-25,25),
    k * ApskSymbol(-25,27),
    k * ApskSymbol(-25,17),
    k * ApskSymbol(-25,19),
    k * ApskSymbol(-25,23),
    k * ApskSymbol(-25,21),
    k * ApskSymbol(-25,1),
    k * ApskSymbol(-25,3),
    k * ApskSymbol(-25,7),
    k * ApskSymbol(-25,5),
    k * ApskSymbol(-25,15),
    k * ApskSymbol(-25,13),
    k * ApskSymbol(-25,9),
    k * ApskSymbol(-25,11),
    k * ApskSymbol(-27,-31),
    k * ApskSymbol(-27,-29),
    k * ApskSymbol(-27,-25),
    k * ApskSymbol(-27,-27),
    k * ApskSymbol(-27,-17),
    k * ApskSymbol(-27,-19),
    k * ApskSymbol(-27,-23),
    k * ApskSymbol(-27,-21),
    k * ApskSymbol(-27,-1),
    k * ApskSymbol(-27,-3),
    k * ApskSymbol(-27,-7),
    k * ApskSymbol(-27,-5),
    k * ApskSymbol(-27,-15),
    k * ApskSymbol(-27,-13),
    k * ApskSymbol(-27,-9),
    k * ApskSymbol(-27,-11),
    k * ApskSymbol(-27,31),
    k * ApskSymbol(-27,29),
    k * ApskSymbol(-27,25),
    k * ApskSymbol(-27,27),
    k * ApskSymbol(-27,17),
    k * ApskSymbol(-27,19),
    k * ApskSymbol(-27,23),
    k * ApskSymbol(-27,21),
    k * ApskSymbol(-27,1),
    k * ApskSymbol(-27,3),
    k * ApskSymbol(-27,7),
    k * ApskSymbol(-27,5),
    k * ApskSymbol(-27,15),
    k * ApskSymbol(-27,13),
    k * ApskSymbol(-27,9),
    k * ApskSymbol(-27,11),
    k * ApskSymbol(-17,-31),
    k * ApskSymbol(-17,-29),
    k * ApskSymbol(-17,-25),
    k * ApskSymbol(-17,-27),
    k * ApskSymbol(-17,-17),
    k * ApskSymbol(-17,-19),
    k * ApskSymbol(-17,-23),
    k * ApskSymbol(-17,-21),
    k * ApskSymbol(-17,-1),
    k * ApskSymbol(-17,-3),
    k * ApskSymbol(-17,-7),
    k * ApskSymbol(-17,-5),
    k * ApskSymbol(-17,-15),
    k * ApskSymbol(-17,-13),
    k * ApskSymbol(-17,-9),
    k * ApskSymbol(-17,-11),
    k * ApskSymbol(-17,31),
    k * ApskSymbol(-17,29),
    k * ApskSymbol(-17,25),
    k * ApskSymbol(-17,27),
    k * ApskSymbol(-17,17),
    k * ApskSymbol(-17,19),
    k * ApskSymbol(-17,23),
    k * ApskSymbol(-17,21),
    k * ApskSymbol(-17,1),
    k * ApskSymbol(-17,3),
    k * ApskSymbol(-17,7),
    k * ApskSymbol(-17,5),
    k * ApskSymbol(-17,15),
    k * ApskSymbol(-17,13),
    k * ApskSymbol(-17,9),
    k * ApskSymbol(-17,11),
    k * ApskSymbol(-19,-31),
    k * ApskSymbol(-19,-29),
    k * ApskSymbol(-19,-25),
    k * ApskSymbol(-19,-27),
    k * ApskSymbol(-19,-17),
    k * ApskSymbol(-19,-19),
    k * ApskSymbol(-19,-23),
    k * ApskSymbol(-19,-21),
    k * ApskSymbol(-19,-1),
    k * ApskSymbol(-19,-3),
    k * ApskSymbol(-19,-7),
    k * ApskSymbol(-19,-5),
    k * ApskSymbol(-19,-15),
    k * ApskSymbol(-19,-13),
    k * ApskSymbol(-19,-9),
    k * ApskSymbol(-19,-11),
    k * ApskSymbol(-19,31),
    k * ApskSymbol(-19,29),
    k * ApskSymbol(-19,25),
    k * ApskSymbol(-19,27),
    k * ApskSymbol(-19,17),
    k * ApskSymbol(-19,19),
    k * ApskSymbol(-19,23),
    k * ApskSymbol(-19,21),
    k * ApskSymbol(-19,1),
    k * ApskSymbol(-19,3),
    k * ApskSymbol(-19,7),
    k * ApskSymbol(-19,5),
    k * ApskSymbol(-19,15),
    k * ApskSymbol(-19,13),
    k * ApskSymbol(-19,9),
    k * ApskSymbol(-19,11),
    k * ApskSymbol(-23,-31),
    k * ApskSymbol(-23,-29),
    k * ApskSymbol(-23,-25),
    k * ApskSymbol(-23,-27),
    k * ApskSymbol(-23,-17),
    k * ApskSymbol(-23,-19),
    k * ApskSymbol(-23,-23),
    k * ApskSymbol(-23,-21),
    k * ApskSymbol(-23,-1),
    k * ApskSymbol(-23,-3),
    k * ApskSymbol(-23,-7),
    k * ApskSymbol(-23,-5),
    k * ApskSymbol(-23,-15),
    k * ApskSymbol(-23,-13),
    k * ApskSymbol(-23,-9),
    k * ApskSymbol(-23,-11),
    k * ApskSymbol(-23,31),
    k * ApskSymbol(-23,29),
    k * ApskSymbol(-23,25),
    k * ApskSymbol(-23,27),
    k * ApskSymbol(-23,17),
    k * ApskSymbol(-23,19),
    k * ApskSymbol(-23,23),
    k * ApskSymbol(-23,21),
    k * ApskSymbol(-23,1),
    k * ApskSymbol(-23,3),
    k * ApskSymbol(-23,7),
    k * ApskSymbol(-23,5),
    k * ApskSymbol(-23,15),
    k * ApskSymbol(-23,13),
    k * ApskSymbol(-23,9),
    k * ApskSymbol(-23,11),
    k * ApskSymbol(-21,-31),
    k * ApskSymbol(-21,-29),
    k * ApskSymbol(-21,-25),
    k * ApskSymbol(-21,-27),
    k * ApskSymbol(-21,-17),
    k * ApskSymbol(-21,-19),
    k * ApskSymbol(-21,-23),
    k * ApskSymbol(-21,-21),
    k * ApskSymbol(-21,-1),
    k * ApskSymbol(-21,-3),
    k * ApskSymbol(-21,-7),
    k * ApskSymbol(-21,-5),
    k * ApskSymbol(-21,-15),
    k * ApskSymbol(-21,-13),
    k * ApskSymbol(-21,-9),
    k * ApskSymbol(-21,-11),
    k * ApskSymbol(-21,31),
    k * ApskSymbol(-21,29),
    k * ApskSymbol(-21,25),
    k * ApskSymbol(-21,27),
    k * ApskSymbol(-21,17),
    k * ApskSymbol(-21,19),
    k * ApskSymbol(-21,23),
    k * ApskSymbol(-21,21),
    k * ApskSymbol(-21,1),
    k * ApskSymbol(-21,3),
    k * ApskSymbol(-21,7),
    k * ApskSymbol(-21,5),
    k * ApskSymbol(-21,15),
    k * ApskSymbol(-21,13),
    k * ApskSymbol(-21,9),
    k * ApskSymbol(-21,11),
    k * ApskSymbol(-1,-31),
    k * ApskSymbol(-1,-29),
    k * ApskSymbol(-1,-25),
    k * ApskSymbol(-1,-27),
    k * ApskSymbol(-1,-17),
    k * ApskSymbol(-1,-19),
    k * ApskSymbol(-1,-23),
    k * ApskSymbol(-1,-21),
    k * ApskSymbol(-1,-1),
    k * ApskSymbol(-1,-3),
    k * ApskSymbol(-1,-7),
    k * ApskSymbol(-1,-5),
    k * ApskSymbol(-1,-15),
    k * ApskSymbol(-1,-13),
    k * ApskSymbol(-1,-9),
    k * ApskSymbol(-1,-11),
    k * ApskSymbol(-1,31),
    k * ApskSymbol(-1,29),
    k * ApskSymbol(-1,25),
    k * ApskSymbol(-1,27),
    k * ApskSymbol(-1,17),
    k * ApskSymbol(-1,19),
    k * ApskSymbol(-1,23),
    k * ApskSymbol(-1,21),
    k * ApskSymbol(-1,1),
    k * ApskSymbol(-1,3),
    k * ApskSymbol(-1,7),
    k * ApskSymbol(-1,5),
    k * ApskSymbol(-1,15),
    k * ApskSymbol(-1,13),
    k * ApskSymbol(-1,9),
    k * ApskSymbol(-1,11),
    k * ApskSymbol(-3,-31),
    k * ApskSymbol(-3,-29),
    k * ApskSymbol(-3,-25),
    k * ApskSymbol(-3,-27),
    k * ApskSymbol(-3,-17),
    k * ApskSymbol(-3,-19),
    k * ApskSymbol(-3,-23),
    k * ApskSymbol(-3,-21),
    k * ApskSymbol(-3,-1),
    k * ApskSymbol(-3,-3),
    k * ApskSymbol(-3,-7),
    k * ApskSymbol(-3,-5),
    k * ApskSymbol(-3,-15),
    k * ApskSymbol(-3,-13),
    k * ApskSymbol(-3,-9),
    k * ApskSymbol(-3,-11),
    k * ApskSymbol(-3,31),
    k * ApskSymbol(-3,29),
    k * ApskSymbol(-3,25),
    k * ApskSymbol(-3,27),
    k * ApskSymbol(-3,17),
    k * ApskSymbol(-3,19),
    k * ApskSymbol(-3,23),
    k * ApskSymbol(-3,21),
    k * ApskSymbol(-3,1),
    k * ApskSymbol(-3,3),
    k * ApskSymbol(-3,7),
    k * ApskSymbol(-3,5),
    k * ApskSymbol(-3,15),
    k * ApskSymbol(-3,13),
    k * ApskSymbol(-3,9),
    k * ApskSymbol(-3,11),
    k * ApskSymbol(-7,-31),
    k * ApskSymbol(-7,-29),
    k * ApskSymbol(-7,-25),
    k * ApskSymbol(-7,-27),
    k * ApskSymbol(-7,-17),
    k * ApskSymbol(-7,-19),
    k * ApskSymbol(-7,-23),
    k * ApskSymbol(-7,-21),
    k * ApskSymbol(-7,-1),
    k * ApskSymbol(-7,-3),
    k * ApskSymbol(-7,-7),
    k * ApskSymbol(-7,-5),
    k * ApskSymbol(-7,-15),
    k * ApskSymbol(-7,-13),
    k * ApskSymbol(-7,-9),
    k * ApskSymbol(-7,-11),
    k * ApskSymbol(-7,31),
    k * ApskSymbol(-7,29),
    k * ApskSymbol(-7,25),
    k * ApskSymbol(-7,27),
    k * ApskSymbol(-7,17),
    k * ApskSymbol(-7,19),
    k * ApskSymbol(-7,23),
    k * ApskSymbol(-7,21),
    k * ApskSymbol(-7,1),
    k * ApskSymbol(-7,3),
    k * ApskSymbol(-7,7),
    k * ApskSymbol(-7,5),
    k * ApskSymbol(-7,15),
    k * ApskSymbol(-7,13),
    k * ApskSymbol(-7,9),
    k * ApskSymbol(-7,11),
    k * ApskSymbol(-5,-31),
    k * ApskSymbol(-5,-29),
    k * ApskSymbol(-5,-25),
    k * ApskSymbol(-5,-27),
    k * ApskSymbol(-5,-17),
    k * ApskSymbol(-5,-19),
    k * ApskSymbol(-5,-23),
    k * ApskSymbol(-5,-21),
    k * ApskSymbol(-5,-1),
    k * ApskSymbol(-5,-3),
    k * ApskSymbol(-5,-7),
    k * ApskSymbol(-5,-5),
    k * ApskSymbol(-5,-15),
    k * ApskSymbol(-5,-13),
    k * ApskSymbol(-5,-9),
    k * ApskSymbol(-5,-11),
    k * ApskSymbol(-5,31),
    k * ApskSymbol(-5,29),
    k * ApskSymbol(-5,25),
    k * ApskSymbol(-5,27),
    k * ApskSymbol(-5,17),
    k * ApskSymbol(-5,19),
    k * ApskSymbol(-5,23),
    k * ApskSymbol(-5,21),
    k * ApskSymbol(-5,1),
    k * ApskSymbol(-5,3),
    k * ApskSymbol(-5,7),
    k * ApskSymbol(-5,5),
    k * ApskSymbol(-5,15),
    k * ApskSymbol(-5,13),
    k * ApskSymbol(-5,9),
    k * ApskSymbol(-5,11),
    k * ApskSymbol(-15,-31),
    k * ApskSymbol(-15,-29),
    k * ApskSymbol(-15,-25),
    k * ApskSymbol(-15,-27),
    k * ApskSymbol(-15,-17),
    k * ApskSymbol(-15,-19),
    k * ApskSymbol(-15,-23),
    k * ApskSymbol(-15,-21),
    k * ApskSymbol(-15,-1),
    k * ApskSymbol(-15,-3),
    k * ApskSymbol(-15,-7),
    k * ApskSymbol(-15,-5),
    k * ApskSymbol(-15,-15),
    k * ApskSymbol(-15,-13),
    k * ApskSymbol(-15,-9),
    k * ApskSymbol(-15,-11),
    k * ApskSymbol(-15,31),
    k * ApskSymbol(-15,29),
    k * ApskSymbol(-15,25),
    k * ApskSymbol(-15,27),
    k * ApskSymbol(-15,17),
    k * ApskSymbol(-15,19),
    k * ApskSymbol(-15,23),
    k * ApskSymbol(-15,21),
    k * ApskSymbol(-15,1),
    k * ApskSymbol(-15,3),
    k * ApskSymbol(-15,7),
    k * ApskSymbol(-15,5),
    k * ApskSymbol(-15,15),
    k * ApskSymbol(-15,13),
    k * ApskSymbol(-15,9),
    k * ApskSymbol(-15,11),
    k * ApskSymbol(-13,-31),
    k * ApskSymbol(-13,-29),
    k * ApskSymbol(-13,-25),
    k * ApskSymbol(-13,-27),
    k * ApskSymbol(-13,-17),
    k * ApskSymbol(-13,-19),
    k * ApskSymbol(-13,-23),
    k * ApskSymbol(-13,-21),
    k * ApskSymbol(-13,-1),
    k * ApskSymbol(-13,-3),
    k * ApskSymbol(-13,-7),
    k * ApskSymbol(-13,-5),
    k * ApskSymbol(-13,-15),
    k * ApskSymbol(-13,-13),
    k * ApskSymbol(-13,-9),
    k * ApskSymbol(-13,-11),
    k * ApskSymbol(-13,31),
    k * ApskSymbol(-13,29),
    k * ApskSymbol(-13,25),
    k * ApskSymbol(-13,27),
    k * ApskSymbol(-13,17),
    k * ApskSymbol(-13,19),
    k * ApskSymbol(-13,23),
    k * ApskSymbol(-13,21),
    k * ApskSymbol(-13,1),
    k * ApskSymbol(-13,3),
    k * ApskSymbol(-13,7),
    k * ApskSymbol(-13,5),
    k * ApskSymbol(-13,15),
    k * ApskSymbol(-13,13),
    k * ApskSymbol(-13,9),
    k * ApskSymbol(-13,11),
    k * ApskSymbol(-9,-31),
    k * ApskSymbol(-9,-29),
    k * ApskSymbol(-9,-25),
    k * ApskSymbol(-9,-27),
    k * ApskSymbol(-9,-17),
    k * ApskSymbol(-9,-19),
    k * ApskSymbol(-9,-23),
    k * ApskSymbol(-9,-21),
    k * ApskSymbol(-9,-1),
    k * ApskSymbol(-9,-3),
    k * ApskSymbol(-9,-7),
    k * ApskSymbol(-9,-5),
    k * ApskSymbol(-9,-15),
    k * ApskSymbol(-9,-13),
    k * ApskSymbol(-9,-9),
    k * ApskSymbol(-9,-11),
    k * ApskSymbol(-9,31),
    k * ApskSymbol(-9,29),
    k * ApskSymbol(-9,25),
    k * ApskSymbol(-9,27),
    k * ApskSymbol(-9,17),
    k * ApskSymbol(-9,19),
    k * ApskSymbol(-9,23),
    k * ApskSymbol(-9,21),
    k * ApskSymbol(-9,1),
    k * ApskSymbol(-9,3),
    k * ApskSymbol(-9,7),
    k * ApskSymbol(-9,5),
    k * ApskSymbol(-9,15),
    k * ApskSymbol(-9,13),
    k * ApskSymbol(-9,9),
    k * ApskSymbol(-9,11),
    k * ApskSymbol(-11,-31),
    k * ApskSymbol(-11,-29),
    k * ApskSymbol(-11,-25),
    k * ApskSymbol(-11,-27),
    k * ApskSymbol(-11,-17),
    k * ApskSymbol(-11,-19),
    k * ApskSymbol(-11,-23),
    k * ApskSymbol(-11,-21),
    k * ApskSymbol(-11,-1),
    k * ApskSymbol(-11,-3),
    k * ApskSymbol(-11,-7),
    k * ApskSymbol(-11,-5),
    k * ApskSymbol(-11,-15),
    k * ApskSymbol(-11,-13),
    k * ApskSymbol(-11,-9),
    k * ApskSymbol(-11,-11),
    k * ApskSymbol(-11,31),
    k * ApskSymbol(-11,29),
    k * ApskSymbol(-11,25),
    k * ApskSymbol(-11,27),
    k * ApskSymbol(-11,17),
    k * ApskSymbol(-11,19),
    k * ApskSymbol(-11,23),
    k * ApskSymbol(-11,21),
    k * ApskSymbol(-11,1),
    k * ApskSymbol(-11,3),
    k * ApskSymbol(-11,7),
    k * ApskSymbol(-11,5),
    k * ApskSymbol(-11,15),
    k * ApskSymbol(-11,13),
    k * ApskSymbol(-11,9),
    k * ApskSymbol(-11,11),
    k * ApskSymbol(31,-31),
    k * ApskSymbol(31,-29),
    k * ApskSymbol(31,-25),
    k * ApskSymbol(31,-27),
    k * ApskSymbol(31,-17),
    k * ApskSymbol(31,-19),
    k * ApskSymbol(31,-23),
    k * ApskSymbol(31,-21),
    k * ApskSymbol(31,-1),
    k * ApskSymbol(31,-3),
    k * ApskSymbol(31,-7),
    k * ApskSymbol(31,-5),
    k * ApskSymbol(31,-15),
    k * ApskSymbol(31,-13),
    k * ApskSymbol(31,-9),
    k * ApskSymbol(31,-11),
    k * ApskSymbol(31,31),
    k * ApskSymbol(31,29),
    k * ApskSymbol(31,25),
    k * ApskSymbol(31,27),
    k * ApskSymbol(31,17),
    k * ApskSymbol(31,19),
    k * ApskSymbol(31,23),
    k * ApskSymbol(31,21),
    k * ApskSymbol(31,1),
    k * ApskSymbol(31,3),
    k * ApskSymbol(31,7),
    k * ApskSymbol(31,5),
    k * ApskSymbol(31,15),
    k * ApskSymbol(31,13),
    k * ApskSymbol(31,9),
    k * ApskSymbol(31,11),
    k * ApskSymbol(29,-31),
    k * ApskSymbol(29,-29),
    k * ApskSymbol(29,-25),
    k * ApskSymbol(29,-27),
    k * ApskSymbol(29,-17),
    k * ApskSymbol(29,-19),
    k * ApskSymbol(29,-23),
    k * ApskSymbol(29,-21),
    k * ApskSymbol(29,-1),
    k * ApskSymbol(29,-3),
    k * ApskSymbol(29,-7),
    k * ApskSymbol(29,-5),
    k * ApskSymbol(29,-15),
    k * ApskSymbol(29,-13),
    k * ApskSymbol(29,-9),
    k * ApskSymbol(29,-11),
    k * ApskSymbol(29,31),
    k * ApskSymbol(29,29),
    k * ApskSymbol(29,25),
    k * ApskSymbol(29,27),
    k * ApskSymbol(29,17),
    k * ApskSymbol(29,19),
    k * ApskSymbol(29,23),
    k * ApskSymbol(29,21),
    k * ApskSymbol(29,1),
    k * ApskSymbol(29,3),
    k * ApskSymbol(29,7),
    k * ApskSymbol(29,5),
    k * ApskSymbol(29,15),
    k * ApskSymbol(29,13),
    k * ApskSymbol(29,9),
    k * ApskSymbol(29,11),
    k * ApskSymbol(25,-31),
    k * ApskSymbol(25,-29),
    k * ApskSymbol(25,-25),
    k * ApskSymbol(25,-27),
    k * ApskSymbol(25,-17),
    k * ApskSymbol(25,-19),
    k * ApskSymbol(25,-23),
    k * ApskSymbol(25,-21),
    k * ApskSymbol(25,-1),
    k * ApskSymbol(25,-3),
    k * ApskSymbol(25,-7),
    k * ApskSymbol(25,-5),
    k * ApskSymbol(25,-15),
    k * ApskSymbol(25,-13),
    k * ApskSymbol(25,-9),
    k * ApskSymbol(25,-11),
    k * ApskSymbol(25,31),
    k * ApskSymbol(25,29),
    k * ApskSymbol(25,25),
    k * ApskSymbol(25,27),
    k * ApskSymbol(25,17),
    k * ApskSymbol(25,19),
    k * ApskSymbol(25,23),
    k * ApskSymbol(25,21),
    k * ApskSymbol(25,1),
    k * ApskSymbol(25,3),
    k * ApskSymbol(25,7),
    k * ApskSymbol(25,5),
    k * ApskSymbol(25,15),
    k * ApskSymbol(25,13),
    k * ApskSymbol(25,9),
    k * ApskSymbol(25,11),
    k * ApskSymbol(27,-31),
    k * ApskSymbol(27,-29),
    k * ApskSymbol(27,-25),
    k * ApskSymbol(27,-27),
    k * ApskSymbol(27,-17),
    k * ApskSymbol(27,-19),
    k * ApskSymbol(27,-23),
    k * ApskSymbol(27,-21),
    k * ApskSymbol(27,-1),
    k * ApskSymbol(27,-3),
    k * ApskSymbol(27,-7),
    k * ApskSymbol(27,-5),
    k * ApskSymbol(27,-15),
    k * ApskSymbol(27,-13),
    k * ApskSymbol(27,-9),
    k * ApskSymbol(27,-11),
    k * ApskSymbol(27,31),
    k * ApskSymbol(27,29),
    k * ApskSymbol(27,25),
    k * ApskSymbol(27,27),
    k * ApskSymbol(27,17),
    k * ApskSymbol(27,19),
    k * ApskSymbol(27,23),
    k * ApskSymbol(27,21),
    k * ApskSymbol(27,1),
    k * ApskSymbol(27,3),
    k * ApskSymbol(27,7),
    k * ApskSymbol(27,5),
    k * ApskSymbol(27,15),
    k * ApskSymbol(27,13),
    k * ApskSymbol(27,9),
    k * ApskSymbol(27,11),
    k * ApskSymbol(17,-31),
    k * ApskSymbol(17,-29),
    k * ApskSymbol(17,-25),
    k * ApskSymbol(17,-27),
    k * ApskSymbol(17,-17),
    k * ApskSymbol(17,-19),
    k * ApskSymbol(17,-23),
    k * ApskSymbol(17,-21),
    k * ApskSymbol(17,-1),
    k * ApskSymbol(17,-3),
    k * ApskSymbol(17,-7),
    k * ApskSymbol(17,-5),
    k * ApskSymbol(17,-15),
    k * ApskSymbol(17,-13),
    k * ApskSymbol(17,-9),
    k * ApskSymbol(17,-11),
    k * ApskSymbol(17,31),
    k * ApskSymbol(17,29),
    k * ApskSymbol(17,25),
    k * ApskSymbol(17,27),
    k * ApskSymbol(17,17),
    k * ApskSymbol(17,19),
    k * ApskSymbol(17,23),
    k * ApskSymbol(17,21),
    k * ApskSymbol(17,1),
    k * ApskSymbol(17,3),
    k * ApskSymbol(17,7),
    k * ApskSymbol(17,5),
    k * ApskSymbol(17,15),
    k * ApskSymbol(17,13),
    k * ApskSymbol(17,9),
    k * ApskSymbol(17,11),
    k * ApskSymbol(19,-31),
    k * ApskSymbol(19,-29),
    k * ApskSymbol(19,-25),
    k * ApskSymbol(19,-27),
    k * ApskSymbol(19,-17),
    k * ApskSymbol(19,-19),
    k * ApskSymbol(19,-23),
    k * ApskSymbol(19,-21),
    k * ApskSymbol(19,-1),
    k * ApskSymbol(19,-3),
    k * ApskSymbol(19,-7),
    k * ApskSymbol(19,-5),
    k * ApskSymbol(19,-15),
    k * ApskSymbol(19,-13),
    k * ApskSymbol(19,-9),
    k * ApskSymbol(19,-11),
    k * ApskSymbol(19,31),
    k * ApskSymbol(19,29),
    k * ApskSymbol(19,25),
    k * ApskSymbol(19,27),
    k * ApskSymbol(19,17),
    k * ApskSymbol(19,19),
    k * ApskSymbol(19,23),
    k * ApskSymbol(19,21),
    k * ApskSymbol(19,1),
    k * ApskSymbol(19,3),
    k * ApskSymbol(19,7),
    k * ApskSymbol(19,5),
    k * ApskSymbol(19,15),
    k * ApskSymbol(19,13),
    k * ApskSymbol(19,9),
    k * ApskSymbol(19,11),
    k * ApskSymbol(23,-31),
    k * ApskSymbol(23,-29),
    k * ApskSymbol(23,-25),
    k * ApskSymbol(23,-27),
    k * ApskSymbol(23,-17),
    k * ApskSymbol(23,-19),
    k * ApskSymbol(23,-23),
    k * ApskSymbol(23,-21),
    k * ApskSymbol(23,-1),
    k * ApskSymbol(23,-3),
    k * ApskSymbol(23,-7),
    k * ApskSymbol(23,-5),
    k * ApskSymbol(23,-15),
    k * ApskSymbol(23,-13),
    k * ApskSymbol(23,-9),
    k * ApskSymbol(23,-11),
    k * ApskSymbol(23,31),
    k * ApskSymbol(23,29),
    k * ApskSymbol(23,25),
    k * ApskSymbol(23,27),
    k * ApskSymbol(23,17),
    k * ApskSymbol(23,19),
    k * ApskSymbol(23,23),
    k * ApskSymbol(23,21),
    k * ApskSymbol(23,1),
    k * ApskSymbol(23,3),
    k * ApskSymbol(23,7),
    k * ApskSymbol(23,5),
    k * ApskSymbol(23,15),
    k * ApskSymbol(23,13),
    k * ApskSymbol(23,9),
    k * ApskSymbol(23,11),
    k * ApskSymbol(21,-31),
    k * ApskSymbol(21,-29),
    k * ApskSymbol(21,-25),
    k * ApskSymbol(21,-27),
    k * ApskSymbol(21,-17),
    k * ApskSymbol(21,-19),
    k * ApskSymbol(21,-23),
    k * ApskSymbol(21,-21),
    k * ApskSymbol(21,-1),
    k * ApskSymbol(21,-3),
    k * ApskSymbol(21,-7),
    k * ApskSymbol(21,-5),
    k * ApskSymbol(21,-15),
    k * ApskSymbol(21,-13),
    k * ApskSymbol(21,-9),
    k * ApskSymbol(21,-11),
    k * ApskSymbol(21,31),
    k * ApskSymbol(21,29),
    k * ApskSymbol(21,25),
    k * ApskSymbol(21,27),
    k * ApskSymbol(21,17),
    k * ApskSymbol(21,19),
    k * ApskSymbol(21,23),
    k * ApskSymbol(21,21),
    k * ApskSymbol(21,1),
    k * ApskSymbol(21,3),
    k * ApskSymbol(21,7),
    k * ApskSymbol(21,5),
    k * ApskSymbol(21,15),
    k * ApskSymbol(21,13),
    k * ApskSymbol(21,9),
    k * ApskSymbol(21,11),
    k * ApskSymbol(1,-31),
    k * ApskSymbol(1,-29),
    k * ApskSymbol(1,-25),
    k * ApskSymbol(1,-27),
    k * ApskSymbol(1,-17),
    k * ApskSymbol(1,-19),
    k * ApskSymbol(1,-23),
    k * ApskSymbol(1,-21),
    k * ApskSymbol(1,-1),
    k * ApskSymbol(1,-3),
    k * ApskSymbol(1,-7),
    k * ApskSymbol(1,-5),
    k * ApskSymbol(1,-15),
    k * ApskSymbol(1,-13),
    k * ApskSymbol(1,-9),
    k * ApskSymbol(1,-11),
    k * ApskSymbol(1,31),
    k * ApskSymbol(1,29),
    k * ApskSymbol(1,25),
    k * ApskSymbol(1,27),
    k * ApskSymbol(1,17),
    k * ApskSymbol(1,19),
    k * ApskSymbol(1,23),
    k * ApskSymbol(1,21),
    k * ApskSymbol(1,1),
    k * ApskSymbol(1,3),
    k * ApskSymbol(1,7),
    k * ApskSymbol(1,5),
    k * ApskSymbol(1,15),
    k * ApskSymbol(1,13),
    k * ApskSymbol(1,9),
    k * ApskSymbol(1,11),
    k * ApskSymbol(3,-31),
    k * ApskSymbol(3,-29),
    k * ApskSymbol(3,-25),
    k * ApskSymbol(3,-27),
    k * ApskSymbol(3,-17),
    k * ApskSymbol(3,-19),
    k * ApskSymbol(3,-23),
    k * ApskSymbol(3,-21),
    k * ApskSymbol(3,-1),
    k * ApskSymbol(3,-3),
    k * ApskSymbol(3,-7),
    k * ApskSymbol(3,-5),
    k * ApskSymbol(3,-15),
    k * ApskSymbol(3,-13),
    k * ApskSymbol(3,-9),
    k * ApskSymbol(3,-11),
    k * ApskSymbol(3,31),
    k * ApskSymbol(3,29),
    k * ApskSymbol(3,25),
    k * ApskSymbol(3,27),
    k * ApskSymbol(3,17),
    k * ApskSymbol(3,19),
    k * ApskSymbol(3,23),
    k * ApskSymbol(3,21),
    k * ApskSymbol(3,1),
    k * ApskSymbol(3,3),
    k * ApskSymbol(3,7),
    k * ApskSymbol(3,5),
    k * ApskSymbol(3,15),
    k * ApskSymbol(3,13),
    k * ApskSymbol(3,9),
    k * ApskSymbol(3,11),
    k * ApskSymbol(7,-31),
    k * ApskSymbol(7,-29),
    k * ApskSymbol(7,-25),
    k * ApskSymbol(7,-27),
    k * ApskSymbol(7,-17),
    k * ApskSymbol(7,-19),
    k * ApskSymbol(7,-23),
    k * ApskSymbol(7,-21),
    k * ApskSymbol(7,-1),
    k * ApskSymbol(7,-3),
    k * ApskSymbol(7,-7),
    k * ApskSymbol(7,-5),
    k * ApskSymbol(7,-15),
    k * ApskSymbol(7,-13),
    k * ApskSymbol(7,-9),
    k * ApskSymbol(7,-11),
    k * ApskSymbol(7,31),
    k * ApskSymbol(7,29),
    k * ApskSymbol(7,25),
    k * ApskSymbol(7,27),
    k * ApskSymbol(7,17),
    k * ApskSymbol(7,19),
    k * ApskSymbol(7,23),
    k * ApskSymbol(7,21),
    k * ApskSymbol(7,1),
    k * ApskSymbol(7,3),
    k * ApskSymbol(7,7),
    k * ApskSymbol(7,5),
    k * ApskSymbol(7,15),
    k * ApskSymbol(7,13),
    k * ApskSymbol(7,9),
    k * ApskSymbol(7,11),
    k * ApskSymbol(5,-31),
    k * ApskSymbol(5,-29),
    k * ApskSymbol(5,-25),
    k * ApskSymbol(5,-27),
    k * ApskSymbol(5,-17),
    k * ApskSymbol(5,-19),
    k * ApskSymbol(5,-23),
    k * ApskSymbol(5,-21),
    k * ApskSymbol(5,-1),
    k * ApskSymbol(5,-3),
    k * ApskSymbol(5,-7),
    k * ApskSymbol(5,-5),
    k * ApskSymbol(5,-15),
    k * ApskSymbol(5,-13),
    k * ApskSymbol(5,-9),
    k * ApskSymbol(5,-11),
    k * ApskSymbol(5,31),
    k * ApskSymbol(5,29),
    k * ApskSymbol(5,25),
    k * ApskSymbol(5,27),
    k * ApskSymbol(5,17),
    k * ApskSymbol(5,19),
    k * ApskSymbol(5,23),
    k * ApskSymbol(5,21),
    k * ApskSymbol(5,1),
    k * ApskSymbol(5,3),
    k * ApskSymbol(5,7),
    k * ApskSymbol(5,5),
    k * ApskSymbol(5,15),
    k * ApskSymbol(5,13),
    k * ApskSymbol(5,9),
    k * ApskSymbol(5,11),
    k * ApskSymbol(15,-31),
    k * ApskSymbol(15,-29),
    k * ApskSymbol(15,-25),
    k * ApskSymbol(15,-27),
    k * ApskSymbol(15,-17),
    k * ApskSymbol(15,-19),
    k * ApskSymbol(15,-23),
    k * ApskSymbol(15,-21),
    k * ApskSymbol(15,-1),
    k * ApskSymbol(15,-3),
    k * ApskSymbol(15,-7),
    k * ApskSymbol(15,-5),
    k * ApskSymbol(15,-15),
    k * ApskSymbol(15,-13),
    k * ApskSymbol(15,-9),
    k * ApskSymbol(15,-11),
    k * ApskSymbol(15,31),
    k * ApskSymbol(15,29),
    k * ApskSymbol(15,25),
    k * ApskSymbol(15,27),
    k * ApskSymbol(15,17),
    k * ApskSymbol(15,19),
    k * ApskSymbol(15,23),
    k * ApskSymbol(15,21),
    k * ApskSymbol(15,1),
    k * ApskSymbol(15,3),
    k * ApskSymbol(15,7),
    k * ApskSymbol(15,5),
    k * ApskSymbol(15,15),
    k * ApskSymbol(15,13),
    k * ApskSymbol(15,9),
    k * ApskSymbol(15,11),
    k * ApskSymbol(13,-31),
    k * ApskSymbol(13,-29),
    k * ApskSymbol(13,-25),
    k * ApskSymbol(13,-27),
    k * ApskSymbol(13,-17),
    k * ApskSymbol(13,-19),
    k * ApskSymbol(13,-23),
    k * ApskSymbol(13,-21),
    k * ApskSymbol(13,-1),
    k * ApskSymbol(13,-3),
    k * ApskSymbol(13,-7),
    k * ApskSymbol(13,-5),
    k * ApskSymbol(13,-15),
    k * ApskSymbol(13,-13),
    k * ApskSymbol(13,-9),
    k * ApskSymbol(13,-11),
    k * ApskSymbol(13,31),
    k * ApskSymbol(13,29),
    k * ApskSymbol(13,25),
    k * ApskSymbol(13,27),
    k * ApskSymbol(13,17),
    k * ApskSymbol(13,19),
    k * ApskSymbol(13,23),
    k * ApskSymbol(13,21),
    k * ApskSymbol(13,1),
    k * ApskSymbol(13,3),
    k * ApskSymbol(13,7),
    k * ApskSymbol(13,5),
    k * ApskSymbol(13,15),
    k * ApskSymbol(13,13),
    k * ApskSymbol(13,9),
    k * ApskSymbol(13,11),
    k * ApskSymbol(9,-31),
    k * ApskSymbol(9,-29),
    k * ApskSymbol(9,-25),
    k * ApskSymbol(9,-27),
    k * ApskSymbol(9,-17),
    k * ApskSymbol(9,-19),
    k * ApskSymbol(9,-23),
    k * ApskSymbol(9,-21),
    k * ApskSymbol(9,-1),
    k * ApskSymbol(9,-3),
    k * ApskSymbol(9,-7),
    k * ApskSymbol(9,-5),
    k * ApskSymbol(9,-15),
    k * ApskSymbol(9,-13),
    k * ApskSymbol(9,-9),
    k * ApskSymbol(9,-11),
    k * ApskSymbol(9,31),
    k * ApskSymbol(9,29),
    k * ApskSymbol(9,25),
    k * ApskSymbol(9,27),
    k * ApskSymbol(9,17),
    k * ApskSymbol(9,19),
    k * ApskSymbol(9,23),
    k * ApskSymbol(9,21),
    k * ApskSymbol(9,1),
    k * ApskSymbol(9,3),
    k * ApskSymbol(9,7),
    k * ApskSymbol(9,5),
    k * ApskSymbol(9,15),
    k * ApskSymbol(9,13),
    k * ApskSymbol(9,9),
    k * ApskSymbol(9,11),
    k * ApskSymbol(11,-31),
    k * ApskSymbol(11,-29),
    k * ApskSymbol(11,-25),
    k * ApskSymbol(11,-27),
    k * ApskSymbol(11,-17),
    k * ApskSymbol(11,-19),
    k * ApskSymbol(11,-23),
    k * ApskSymbol(11,-21),
    k * ApskSymbol(11,-1),
    k * ApskSymbol(11,-3),
    k * ApskSymbol(11,-7),
    k * ApskSymbol(11,-5),
    k * ApskSymbol(11,-15),
    k * ApskSymbol(11,-13),
    k * ApskSymbol(11,-9),
    k * ApskSymbol(11,-11),
    k * ApskSymbol(11,31),
    k * ApskSymbol(11,29),
    k * ApskSymbol(11,25),
    k * ApskSymbol(11,27),
    k * ApskSymbol(11,17),
    k * ApskSymbol(11,19),
    k * ApskSymbol(11,23),
    k * ApskSymbol(11,21),
    k * ApskSymbol(11,1),
    k * ApskSymbol(11,3),
    k * ApskSymbol(11,7),
    k * ApskSymbol(11,5),
    k * ApskSymbol(11,15),
    k * ApskSymbol(11,13),
    k * ApskSymbol(11,9),
    k * ApskSymbol(11,11)
};

const Qam1024Modulation Qam1024Modulation::singleton;

Qam1024Modulation::Qam1024Modulation() : MqamModulationBase(&constellation)
{
}

} // namespace physicallayer

} // namespace inet

