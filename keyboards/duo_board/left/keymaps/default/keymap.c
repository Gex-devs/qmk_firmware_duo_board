// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_P7,   KC_P8,   KC_P9,  KC_PSLS,  KC_NO, KC_NO, KC_NO,
        KC_P4,   KC_P5,   KC_P6,  KC_PAST,  KC_NO, KC_NO, KC_NO,
        KC_P1,   KC_P2,   KC_P3,  KC_PMNS,  KC_NO, KC_NO, KC_NO,
                                            KC_NO, KC_NO
    )
};

void matrix_init_user(void) {
    setPinInputHigh(B15);
}

void matrix_scan_user(void) {
    // Check if the pin is LOW (key pressed)
    if (readPin(B15)) {
        tap_code(KC_MUTE);
    }
}
