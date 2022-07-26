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
#include "unimap_trans.h"

/* ,-----------------------------------------------------------.       ,---------------.       ,-----------.
 * | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9 | F10  |       |NmL|  /|  *|  -|       | A1| B2| A3|
 * `-----------------------------------------------------------'       |---------------|       `-----------'
 *                                                                     |NmL|  /|  *|  -|
 *                                                                     |---------------|
 * ,-----------------------------------------------------------.       |NmL|  /|  *|  -|
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| JY|Bsp|       |---------------|
 * |-----------------------------------------------------------|       |NmL|  /|  *|  -|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Ret |       |---------------|
 * |------------------------------------------------------`    |       |NmL|  /|  *|  -|
 * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  \|    |       |---------------|
 * |-----------------------------------------------------------|       |NmL|  /|  *|  -|
 * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RO|Shift |       |---------------|
 * |-----------------------------------------------------------|       |NmL|  /|  *|  -|
 * |Ctrl |         |           Space            |        | Ctrl|       `---------------'
 * `-----------------------------------------------------------'
 *
 *
 * PS/2 scan codes
 * http://download.microsoft.com/download/1/6/1/161ba512-40e2-4cc9-843a-923143f3456c/translate.pdf
 * ,-----------------------------------------------------------.       ,---------------.       ,-----------.
 * | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9 | F10  |       |NmL|  /|  *|  -|       | A1| B2| A3|
 * `-----------------------------------------------------------'       |---------------|       `-----------'
 *                                                                     |NmL|  /|  *|  -|
 *                                                                     |---------------|
 * ,-----------------------------------------------------------.       |NmL|  /|  *|  -|
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| JY|Bsp|       |---------------|
 * |-----------------------------------------------------------|       |NmL|  /|  *|  -|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Ret |       |---------------|
 * |------------------------------------------------------`    |       |NmL|  /|  *|  -|
 * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  \|    |       |---------------|
 * |-----------------------------------------------------------|       |NmL|  /|  *|  -|
 * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RO|Shift |       |---------------|
 * |-----------------------------------------------------------|       |NmL|  /|  *|  -|
 * |Ctrl |         |           Space            |        | Ctrl|       `---------------'
 * `-----------------------------------------------------------'
 *
 */
/* All keys */
#define BKE( \
    K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C,                           K52, K3D, K5D, K5E,  K60, K61, K62, \
                                                                                K3C, K3E, K40, K5F,                 \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F,  K41, K45, K4A, K3B,                 \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K18, K19, K1A, K1B, K1C, K2A,  K42, K46, K4B, K4F,                 \
    K1D, K1E, K1F, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29,            K43, K47, K4C, K50,                 \
    K2B, K2C, K2D, K2E, K2F, K30, K31, K32, K33, K34, K35, K36, K37,            K44, K48, K4D, K51,                 \
    K38,                     K39,                               K3A,            K49, K4E, K3F                       \

) { \
    { KC_NO,    K01, K02, K03, K04, K05, K06, K07 }, \
    { K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, KC_NO    }, \
    { K18, K19, K1A, K1B, K1C, K1D, K1E, KC_NO    }, \
    { K20, K21, K22, K23, K24, K25, K26, KC_NO    }, \
    { K28, K29, K2A, K2B, K2C, K2D, K2E, KC_NO    }, \
    { K30, K31, K32, K33, K34, K35, K36, KC_NO    }, \
    { K38, KC_NO,    K3A, K3B, K3C, K3D, K3E, KC_NO    }, \
    { K40, K41, K42, K43, K44, K45, K46, KC_NO    }, \
    { K48, K49, K4A, K4B, K4C, K4D, K4E, KC_NO    }, \
    { K50, K51, K52, KC_NO,    K54, K55, KC_NO,    K57 }, \
    { K58, K59, K5A, K5B, KC_NO,    K5D, KC_NO,    K5F }, \
    { KC_NO,    K61, KC_NO,    K63, K64, KC_NO,    K66, K67 }, \
    { K68, K69, K6A, K6B, K6C, K6D, KC_NO,    KC_NO    }, \
    { K70, K71, K72, K73, K74, K75, K76, K77 }, \
    { K78, K79, K7A, K7B, K7C, K7D, K7E, KC_NO    }, \
    { KC_NO,    KC_NO,    KC_NO,    K83, KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
    { K90, K91, KC_NO,    KC_NO,    K94, K95, KC_NO,    KC_NO    }, \
    { K98, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    K9F }, \
    { KA0, KA1, KC_NO,    KA3, KC_NO,    KC_NO,    KC_NO,    KA7 }, \
    { KA8, KC_NO,    KC_NO,    KAB, KC_NO,    KC_NO,    KC_NO,    KAF }, \
    { KB0, KC_NO,    KB2, KC_NO,    KB4, KC_NO,    KC_NO,    KB7 }, \
    { KB8, KC_NO,    KBA, KBB, KC_NO,    KC_NO,    KC_NO,    KBF }, \
    { KC0, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
    { KC8, KC_NO,    KCA, KC_NO,    KC_NO,    KCD, KC_NO,    KC_NO    }, \
    { KD0, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
    { KC_NO,    KC_NO,    KDA, KC_NO,    KC_NO,    KC_NO,    KDE, KC_NO    }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
    { KC_NO,    KE9, KC_NO,    KEB, KEC, KC_NO,    KC_NO,    KC_NO    }, \
    { KF0, KF1, KF2, KC_NO,    KF4, KF5, KC_NO,    KC_NO    }, \
    { KC_NO,    KC_NO,    KFA, KC_NO,    KFC, KFD, KFE, KC_NO    }, \
}
