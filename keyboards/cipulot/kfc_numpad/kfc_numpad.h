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

#define LAYOUT_default( \
    k000,  k001,  k002,  k003,  \
    k100,  k101,  k102,  k103,  \
    k200,  k201,  k202,         \
    k300,  k301,  k302,  k303,  \
    k400,         k402          \
) { \
    { k000,  k001,  k002,  k003  }, \
    { k100,  k101,  k102,  k103  }, \
    { k200,  k201,  k202,  KC_NO }, \
    { k300,  k301,  k302,  k303  }, \
    { k400,  KC_NO, k402,  KC_NO }  \
}
