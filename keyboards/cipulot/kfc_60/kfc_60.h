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

#define LAYOUT_default(\
	K000, K010, K001, K011, K002, K012, K003, K013, K004, K014, K005, K015, K006, K016, K007, \
	K020, K030, K021, K031, K022, K032, K023, K033, K024, K034, K025, K035, K026, K027, \
	K040, K050, K041, K051, K042, K052, K043, K053, K044, K054, K045, K055, K047,       \
	K060, K070, K061, K071, K062, K072, K063, K073, K064, K074, K065, K067,             \
 	K080, K090, K081,                   K083,             K094, K085, K095              \
) { \
	{ K000,  K001,   K002,   K003,   K004,   K005,   K006,   K007  }, \
	{ K010,  K011,   K012,   K013,   K014,   K015,   K016,   KC_NO }, \
	{ K020,  K021,   K022,   K023,   K024,   K025,   K026,   K027  }, \
	{ K030,  K031,   K032,   K033,   K034,   K035,   KC_NO,  KC_NO }, \
	{ K040,  K041,   K042,   K043,   K044,   K045,   KC_NO,  K047  }, \
	{ K050,  K051,   K052,   K053,   K054,   K055,   KC_NO,  KC_NO }, \
	{ K060,  K061,   K062,   K063,   K064,   K065,   KC_NO,  K067  }, \
	{ K070,  K071,   K072,   K073,   K074,   KC_NO,  KC_NO,  KC_NO }, \
	{ K080,  K081,   KC_NO,  K083,   KC_NO,  K085,   KC_NO,  KC_NO }, \
	{ K090,  KC_NO,  KC_NO,  KC_NO,  K094,   K095,   KC_NO,  KC_NO }, \
}

