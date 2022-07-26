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

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 14

#define APLEX_EN_PIN_0 B9
#define APLEX_EN_PIN_1 B8
#define DISCHARGE_PIN B0
#define ANALOG_PORT_0 A3

#define MATRIX_ROW_PINS { B3, A15, A14, B4 }
#define MATRIX_COL_CHANNELS { 3, 0, 1, 2, 5, 7, 6, 4 }
#define MUX_SEL_PINS { B7, B6, B5 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */

#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define SPI_DRIVER SPID1
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A7
#define SPI_MISO_PIN A6
#define SPI_CS_PIN B1
