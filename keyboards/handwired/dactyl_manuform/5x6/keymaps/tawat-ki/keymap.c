#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _D 0
#define _LOWER 1
#define _RAISE 2
#define _NAV 3
#define _NAV 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define NAV MO(_NAV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(

        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        NAV,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                          KC_LALT, KC_LALT,                                                       KC_QUOT, KC_BSLS,
                                            RAISE,   KC_LSFT,                   LOWER,   KC_LGUI,
                                            KC_LCTL, KC_SPC,                    KC_ENT,  NAV,
                                            KC_LALT, KC_LALT,                   KC_LALT, KC_LALT
    ),


    [_RAISE] = LAYOUT_5x6(
        KC_F12 ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,                   KC_F6  ,  KC_F7 , KC_F8 ,  KC_F9 ,  KC_F10 , KC_F11 ,
        KC_F12 ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,                   KC_F6  ,  KC_F7 , KC_F8 ,  KC_F9 ,  KC_F10 , KC_F11 ,
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_RCBR,
        _______,LSG(KC_1),LSG(KC_2),LSG(KC_3),LSG(KC_4),LSG(KC_5),              KC_TILD, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
                          KC_PGDN, KC_PGUP,                                                       KC_HOME, KC_END,
                                            _______, _______,                   _______, _______,
                                            _______, _______,              LGUI(KC_ENT), _______,
                                            _______, _______,                   _______, _______
    ),

    [_LOWER] = LAYOUT_5x6(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_ESC,  KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        _______,LGUI(KC_1),LGUI(KC_2),LGUI(KC_3),LGUI(KC_4),LGUI(KC_5),         KC_GRV, KC_MINS,  KC_EQL,  KC_LBRC, KC_RBRC, XXXXXXX,
                          _______, _______,                                                       _______, _______,
                                            _______, _______,                   _______, _______,
                                            _______, _______,                   _______, _______,
                                            _______, _______,                   _______, _______

    ),
    [_NAV] = LAYOUT_5x6(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, TO(_D),  XXXXXXX, XXXXXXX, KC_RGHT, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX,                   XXXXXXX, KC_LEFT, XXXXXXX, XXXXXXX, KC_END,  XXXXXXX,
        _______, XXXXXXX, XXXXXXX, KC_DOWN, KC_UP,   XXXXXXX,                   XXXXXXX, KC_HOME, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                          _______, _______,                                                       _______, _______,
                                            _______, _______,                   _______, _______,
                                            _______, _______,                   _______, _______,
                                            _______, _______,                   _______, _______

    )
};
