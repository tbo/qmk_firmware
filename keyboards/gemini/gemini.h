/* Copyright 2020 Thomas Bonk
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

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

     // KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                          KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_BSPC ,
     // KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,                          KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_PIPE ,
     // KC_LCTL ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_BSPC ,        KC_ENT  ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
     // KC_MPLY ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,                          KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_NO   ,
     //                   KC_NO   ,KC_MINS ,KC_EQL  ,KC_NO   ,MT(MOD_LSFT, KC_SPC),        MT(MOD_LGUI , KC_ESC),KC_NO  ,KC_LBRC ,KC_RBRC
#define LAYOUT(\
     k00 ,k01 ,k02 ,k03 ,k04 ,k05 ,                  k06 ,k07 ,k08 ,k09 ,k10 ,k11 , \
     k12 ,k13 ,k14 ,k15 ,k16 ,k17 ,                  k18 ,k19 ,k20 ,k21 ,k22 ,k23 ,\
     k24 ,k25 ,k26 ,k27 ,k28 ,k29 ,k30 ,        k31 ,k32 ,k33 ,k34 ,k35 ,k36 ,k37 ,\
     k38 ,k39 ,k40 ,k41 ,k42 ,k43 ,                  k46 ,k47 ,k48 ,k49 ,k50 ,k51 ,\
               k52 ,k53 ,k54 ,k55 ,k56 ,        k57 ,k58 ,k59 ,k60 ,k61\
) \
{ \
    { k00 ,k01 ,k02 ,k03 ,k04, k05 },\
    { k12 ,k13 ,k14 ,k15 ,k16, k17 },\
    { k24 ,k25 ,k26 ,k27 ,k28 ,k29 ,k30 },\
    { k38 ,k39 ,k40 ,k41 ,k42 ,k43 },\
    { KC_NO, KC_NO,k52 ,k53 ,k54 ,KC_NO ,k56 },\
    { k11 ,k10 ,k09 ,k08 ,k07 ,k06 },\
    { k23 ,k22 ,k21 ,k20 ,k19 ,k18 },\
    { k37 ,k36 ,k35 ,k34 ,k33 ,k32 ,k31 },\
    { k51 ,k50 ,k49 ,k48 ,k47 ,k46 },\
    { KC_NO, KC_NO,k61 ,k60 ,k59 ,KC_NO ,k57 },\
}
