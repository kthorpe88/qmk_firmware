// Copyright 2024 TDC

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once


#include "quantum.h"

#define ____ KC_NO

#define LAYOUT( \
    K000, K001, K002, K003,       K004,       K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, K017, K018, K019, \
    K100, K101, K102, K103,       K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116,       K118, K119, \
    K200, K201, K202, K203,       K204,       K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, K217, K218, K219, \
    K300, K301, K302,             K304,       K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, K317,       K319, \
    K400, K401, K402, K403,             K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415, K416,       K418, K419, \
          K501, K502,             K504, K505, K506, K507,                   K511,                   K515, K516, K517, K518, K519  \
) { \
   { K000, K001, K002, K003,       K004, ____, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, K017, K018, K019 }, \
   { K100, K101, K102, K103,       K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, ____, K118, K119 }, \
   { K200, K201, K202, K203,       K204, ____, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, K217, K218, K219 }, \
   { K300, K301, K302, ____,       K304, ____, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, K317, ____, K319 }, \
   { K400, K401, K402, K403,       ____, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415, K416, ____, K418, K419 }, \
   { ____, K501, K502, ____,       K504, K505, K506, K507, ____, ____, ____, K511, ____, ____, ____, K515, K516, K517, K518, K519 }, \
}
