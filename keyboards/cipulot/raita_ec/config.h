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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x6369
#define PRODUCT_ID 0x6B83
#define DEVICE_VER 0x0001
#define MANUFACTURER Cipulot
#define PRODUCT Raita EC

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 1

/* Custom matrix pins and port select array */
#define MATRIX_ROW_PINS \
    { C13, B3, A15, A14, C14, C15, B4, B5 }

/* Hardware peripherals pins */
#define DISCHARGE_PIN B1
#define ANALOG_PORT A7

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
//#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define DEBUG_MATRIX_SCAN_RATE
