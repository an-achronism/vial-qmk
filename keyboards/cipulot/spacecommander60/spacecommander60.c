/* Copyright 2022 Cipulot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "spacecommander60.h"

led_config_t g_led_config = { {
    {  13, 12,     11, 10, 9,      8,  7,      6,          5,  4,  3,  2,  1,      0  },
    {  14, 15,     16, 17, 18,     19, 20,     21,         22, 23, 24, 25, 26,     27 },
    {  40, NO_LED, 39, 38, 37,     36, 35,     34,         33, 32, 31, 30, 29,     28 },
    {  41, NO_LED, 42, 43, 44,     45, 46,     47,         48, 49, 50, 51, NO_LED, 52 },
    {  63, 62,     61, 60, NO_LED, 59, NO_LED, 58, NO_LED, 57, 56, 55, 53, 53 }
}, {
    {  0,0  }, { 16,0  }, { 33,0  }, { 49,0  }, { 65,0  }, { 81,0  }, { 98,0  }, {114,0  }, {130,0  }, {147,0  }, {163,0  }, {179,0  }, {195,0  }, {220,0  },
    {  4,16 }, { 24,16 }, { 41,16 }, { 57,16 }, { 73,16 }, { 90,16 }, {106,16 }, {122,16 }, {138,16 }, {155,16 }, {171,16 }, {187,16 }, {204,16 }, {224,16 },
    {  6,32 }, { 29,32 }, { 45,32 }, { 61,32 }, { 77,32 }, { 94,32 }, {110,32 }, {126,32 }, {143,32 }, {159,32 }, {175,32 }, {191,32 }, {218,32 }, { 10,48 },
    { 37,48 }, { 53,48 }, { 69,48 }, { 86,48 }, {102,48 }, {118,48 }, {134,48 }, {151,48 }, {167,48 }, {183,48 }, {214,48 }, {  0,64 }, { 16,64 }, { 33,64 },
    { 51,64 }, { 79,64 }, {120,64 }, {153,64 }, {171,64 }, {187,64 }, {204,64 }, {224,64 }
}, {
    1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
    1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
    1,        1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,
    1,        1,   1,   1,   1,   1,   1,   1,   1,   1,   1,        1,
    1,   1,   1,   1,        1,        1,        1,   1,   1,   1,   1
} };

