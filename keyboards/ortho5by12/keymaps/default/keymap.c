/* Copyright 2015-2017 Jack Humbert
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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_ENT,
        KC_BSLS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, MO(3), KC_LALT, KC_LSFT, KC_MEDIA_PLAY_PAUSE, KC_LEFT, KC_LEFT, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT ),
    [1] = LAYOUT(
        KC_GRAVE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F11, KC_F12, KC_MINS, KC_EQL, KC_DELETE,
        KC_LEFT_BRACKET, _______,  _______, _______, _______,  _______, _______, _______,  _______, _______, _______,  KC_RIGHT_BRACKET,
        _______, _______,  _______, _______, _______,  _______, _______, _______,  _______, _______, _______,  _______,
        _______, _______,  _______, _______, _______,  _______, _______, _______,  _______, _______, _______,  _______,
        _______, KC_LGUI,  _______, _______, _______,       _______,      _______, _______,  _______, _______, _______ ),
    [2] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______,  _______, KC_MRWD, KC_MFFD,  KC_DELETE,
        _______, _______,  _______, _______, _______,  _______, _______, _______,  _______, _______, KC_PSCR,  _______,
        _______, _______,  _______, _______, _______,  _______, _______, _______,  _______, _______, _______,  _______,
        _______, _______,  _______, KC_CALC, _______,  _______, _______, _______,  _______, _______, _______,  KC_APP,
        _______, _______,  _______, _______, _______,       _______,      _______, KC_HOME,  KC_PAGE_DOWN, KC_PAGE_UP, KC_END),
    [3] = LAYOUT( //Useful for flashing boot loader
        RESET, _______,  _______, _______, _______,  _______, _______, _______,  _______, _______, _______,  _______,
        _______, _______,  _______, _______, _______,  _______, _______, _______,  _______, _______, _______,  _______,
        KC_CAPS, _______,  _______, _______, _______,  _______, _______, _______,  _______, _______, _______,  _______,
        _______, _______,  _______, _______, _______,  _______, _______, _______,  _______, _______, _______,  _______,
        _______, _______,  _______, _______, _______,       _______,      _______, _______,  _______, _______, _______ )
};

// bool encoder_update_user(uint8_t index, bool clockwise) {
// 	if (index == 0) {
// 		if (clockwise) {
//   			tap_code(KC_VOLU);
// 		} else {
//   			tap_code(KC_VOLD);
// 		}

// 	}
// 	return false;
// }
