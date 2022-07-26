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

#define VENDOR_ID       0x6369
#define PRODUCT_ID      0x6B87
#define DEVICE_VER      0x0001
#define MANUFACTURER    Cipulot
#define PRODUCT         Sony MKS-8050 Converter


/* matrix size */
#define MATRIX_ROWS 32  // keycode bit: 7-3
#define MATRIX_COLS 8   // keycode bit: 2-0


/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) || \
    keyboard_report->mods == (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT)) \
)


/*
 * PS/2 Pin interrupt
 */
#ifdef PS2_USE_INT
#if defined(__AVR_ATmega16U4__) || defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega32U2__)
/* uses INT1 for clock line(ATMega32U4) */
#define PS2_CLOCK_PORT  PORTD
#define PS2_CLOCK_PIN   PIND
#define PS2_CLOCK_DDR   DDRD
#define PS2_CLOCK_BIT   1
#define PS2_DATA_PORT   PORTD
#define PS2_DATA_PIN    PIND
#define PS2_DATA_DDR    DDRD
#define PS2_DATA_BIT    0
#define PS2_INT_INIT()  do {    \
    EICRA |= ((1<<ISC11) |      \
              (0<<ISC10));      \
} while (0)
#define PS2_INT_ON()  do {      \
    EIMSK |= (1<<INT1);         \
} while (0)
#define PS2_INT_OFF() do {      \
    EIMSK &= ~(1<<INT1);        \
} while (0)
#define PS2_INT_VECT    INT1_vect

#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega168P__) || defined(__AVR_ATmega328P__)
/* uses PCINT17(PD1) for clock line. this doesn't work with VUSB */
#define PS2_CLOCK_PORT  PORTD
#define PS2_CLOCK_PIN   PIND
#define PS2_CLOCK_DDR   DDRD
#define PS2_CLOCK_BIT   1
#define PS2_DATA_PORT   PORTD
#define PS2_DATA_PIN    PIND
#define PS2_DATA_DDR    DDRD
#define PS2_DATA_BIT    0
#define PS2_INT_INIT()  do {    \
    PCICR  |= (1<<PCIE2);       \
} while (0)
#define PS2_INT_ON()  do {      \
    PCMSK2 |= (1<<PCINT17);     \
} while (0)
#define PS2_INT_OFF() do {      \
    PCMSK2 &= ~(1<<PCINT17);    \
} while (0)
#define PS2_INT_VECT    PCINT2_vect
#endif
#endif
