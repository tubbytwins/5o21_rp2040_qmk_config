// Copyright 2022 Matthew A. Schnoor (@tubbytwins)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "5o21_lhs.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *     ┌───┬───┬───┐            
     *     │ W │ E │ R │            
     * ┌───┼───┼───┼───┼───┐        
     * │ A │ S │ D │ F │Bsp│        
     * ├───┼───┼───┼───┤   │        
     * │ Z │ X │ C │ V ├───┘        
     * │   ├───┴───┴───┘   ┌───┬───┐
     * └───┘               │ B │ M │
     *                 ┌───┼───┼───┤
     *                 │Tab│Spc│Ent│
     *                 │   │   │   │
     *                 └───┴───┴───┘  
     */
    [0] = single_4x6_pad(
                 KC_W,    KC_E,    KC_R,
        KC_A,    KC_S,    KC_D,    KC_F,   KC_BSPC,
        KC_Z,    KC_X,    KC_C,    KC_V,               KC_B,    KC_M,
                                          KC_TAB,    KC_SPC,    KC_ENTER
    )

};

