/*
Copyright 2022 Cipulot

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define LAYOUT_all( \
   LA0,      LA2, LA3, LA4, LA5, LA6, LA7, LA8, LA9, LA11, RA0,  RA1, RA2,   RA3, RA4, RA5,   RA6, RA7, RA8, RA9, \
   LB0, LB1, LB2, LB3, LB4, LB5, LB6, LB7, LB8, LB9, LB10, LB11, RB0, RB2,   RB3, RB4, RB5,   RB6, RB7, RB8, RB9, \
   LC0, LC1, LC2, LC3, LC4, LC5, LC6, LC7, LC8, LC9, LC10, RC0,  RC1, RC2,   RC3, RC4, RC5,   RC6, RC7, RC8, RC9, \
   LD0, LD1, LD2, LD3, LD4, LD5, LD6, LD7, LD8, LD9, LD10, RD0,  RD2,                         RD6, RD7, RD8,      \
   LE0, LE1, LE2, LE3, LE4, LE5, LE6, LE7, LE8, LE9, RE0,  RE2,                   RE4,        RE6, RE7, RE8, RE9, \
   LF0, LF1, LF2,           LF5,                LF9, RF0,  RF1,  RF2,        RF3, RF4, RF5,   RF6,      RF8       \
  ) \
  { \
    { LA0, KC_NO, LA2, LA3,   LA4,   LA5,   LA6,   LA7,   LA8,   LA9,   KC_NO, LA11  }, \
    { LB0, LB1,   LB2, LB3,   LB4,   LB5,   LB6,   LB7,   LB8,   LB9,   LB10,  LB11  }, \
    { LC0, LC1,   LC2, LC3,   LC4,   LC5,   LC6,   LC7,   LC8,   LC9,   LC10,  KC_NO }, \
    { LD0, LD1,   LD2, LD3,   LD4,   LD5,   LD6,   LD7,   LD8,   LD9,   LD10,  KC_NO }, \
    { LE0, LE1,   LE2, LE3,   LE4,   LE5,   LE6,   LE7,   LE8,   LE9,   KC_NO, KC_NO }, \
    { LF0, LF1,   LF2, KC_NO, KC_NO, LF5,   KC_NO, KC_NO, KC_NO, LF9,   KC_NO, KC_NO }, \
    { RA0, RA1,   RA2, RA3,   RA4,   RA5,   RA6,   RA7,   RA8,   RA9,   KC_NO, KC_NO }, \
    { RB0, KC_NO, RB2, RB3,   RB4,   RB5,   RB6,   RB7,   RB8,   RB9,   KC_NO, KC_NO }, \
    { RC0, RC1,   RC2, RC3,   RC4,   RC5,   RC6,   RC7,   RC8,   RC9,   KC_NO, KC_NO }, \
    { RD0, KC_NO, RD2, KC_NO, KC_NO, KC_NO, RD6,   RD7,   RD8,   KC_NO, KC_NO, KC_NO }, \
    { RE0, KC_NO, RE2, KC_NO, RE4,   KC_NO, RE6,   RE7,   RE8,   RE9,   KC_NO, KC_NO }, \
    { RF0, RF1,   RF2, RF3,   RF4,   RF5,   RF6,   KC_NO, RF8,   KC_NO, KC_NO, KC_NO } \
  }
