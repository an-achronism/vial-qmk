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

#pragma once

#include "quantum.h"

#define LAYOUT( \
    k000,  k001,   k002,  k003,  k004,  k005,  k006,  k007,  k008,  k009,  k010,  k011, \
    k100,  k101,   k102,  k103,  k104,  k105,  k106,  k107,  k108,  k109,  k110,  k111, \
    k200,  k201,   k202,  k203,  k204,  k205,  k206,  k207,  k208,  k209,  k210,  k211, \
    k300,  k301,   k302,  k303,  k304,  k305,  k306,  k307,  k308,  k309,  k310,  k311, \
    k400,  k401,   k402,  k403,  k404,  k405,  k406,  k407,  k408,  k409,  k410,  k411, \
    k500,  k501,   k502,  k503,  k504,  k505,  k506,  k507,  k508,  k509,  k510,  k511, \
    K600,  K601,   K602,  K603,  K604,  K605,  K606,  K607,  K608,  K609,  K610,  K611, \
    K700,  K701,   K702,  K703,  K704,  K705,  K706,  K707,  K708,  K709,  K710,  K711, \
    K800,  K801,   K802,  K803,  K804,  K805,  K806,  K807,  K808,  K809,  K810,  K811, \
    K900,  K901,   K902,  K903,  K904,  K905,  K906,  K907,  K908,  K909,  K910,  K911, \
    KA00,  KA01,   KA02,  KA03,  KA04,  KA05,  KA06,  KA07,  KA08,  KA09,  KA10,  KA11, \
    KB00,  KB01,   KB02,  KB03,  KB04,  KB05,  KB06,  KB07,  KB08,  KB09,  KB10,  KB11  \
) { \
    { k000,  k001,   k002,  k003,  k004,  k005,  k006,  k007,  k008,  k009,  k010,  k011 }, \
    { k100,  k101,   k102,  k103,  k104,  k105,  k106,  k107,  k108,  k109,  k110,  k111 }, \
    { k200,  k201,   k202,  k203,  k204,  k205,  k206,  k207,  k208,  k209,  k210,  k211 }, \
    { k300,  k301,   k302,  k303,  k304,  k305,  k306,  k307,  k308,  k309,  k310,  k311 }, \
    { k400,  k401,   k402,  k403,  k404,  k405,  k406,  k407,  k408,  k409,  k410,  k411 }, \
    { k500,  k501,   k502,  k503,  k504,  k505,  k506,  k507,  k508,  k509,  k510,  k511 }, \
    { K600,  K601,   K602,  K603,  K604,  K605,  K606,  K607,  K608,  K609,  K610,  K611 }, \
    { K700,  K701,   K702,  K703,  K704,  K705,  K706,  K707,  K708,  K709,  K710,  K711 }, \
    { K800,  K801,   K802,  K803,  K804,  K805,  K806,  K807,  K808,  K809,  K810,  K811 }, \
    { K900,  K901,   K902,  K903,  K904,  K905,  K906,  K907,  K908,  K909,  K910,  K911 }, \
    { KA00,  KA01,   KA02,  KA03,  KA04,  KA05,  KA06,  KA07,  KA08,  KA09,  KA10,  KA11 }, \
    { KB00,  KB01,   KB02,  KB03,  KB04,  KB05,  KB06,  KB07,  KB08,  KB09,  KB10,  KB11 }  \
}
