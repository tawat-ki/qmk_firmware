#include QMK_KEYBOARD_H

enum layer_number {
  _D = 0,
  _L,
  _R,
  _M,
  _N,
  _G,
  _K,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* _DEFAULT
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  ]   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   -  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  [   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   =  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|MO(GM) |    |MO(M)  |------+------+------+------+------+------|
 * |  FN  |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LCTL | LGUI |LShift| /Space  /       \Enter \  | BSPC | ESC  |LAlt  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */


[_D] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  MO(_N),  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     TO(_G),  TO(_M), KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                             KC_LGUI, MO(_L),  KC_LSFT,  KC_SPC,  KC_ENT, MO(_R),  KC_LGUI, KC_LALT
),

[_L] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_RCBR,
  _______, LSG(KC_1),LSG(KC_2), LSG(KC_3), LSG(KC_4), LSG(KC_5), _______, _______, KC_TILD, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
                             _______, _______, _______, LGUI(KC_SPC), LGUI(KC_ENT), _______, _______, _______

),
[_R] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_ESC,  KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX,
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_RBRC,
  _______,LGUI(KC_1),LGUI(KC_2),LGUI(KC_3),LGUI(KC_4),LGUI(KC_5),_______, _______, KC_GRV, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
                             _______, _______, _______, _______, _______, _______, _______, _______
),

//Navigate MODE
[_N] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, TO(_D),  XXXXXXX, XXXXXXX, KC_RGHT, TO(_D),
  _______, XXXXXXX, XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX,                   XXXXXXX, KC_LEFT, XXXXXXX, XXXXXXX, KC_END,  XXXXXXX,
  _______, XXXXXXX, XXXXXXX, KC_DOWN, KC_UP,   XXXXXXX, TO(_G),  TO(_M),  XXXXXXX, KC_HOME, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______, _______, _______, _______
),
//MOUSE
[_M] = LAYOUT(
  XXXXXXX, MS_BTN1, MS_BTN2, MS_BTN3, MS_BTN4, MS_BTN5,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MS_RGHT, TO(_D),
  _______, XXXXXXX, XXXXXXX, MS_WHLD, MS_WHLU, XXXXXXX,                   XXXXXXX, MS_LEFT, XXXXXXX, XXXXXXX, MS_WHLR, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, MS_DOWN, MS_UP,   XXXXXXX, TO(_G),  TO(_M),  XXXXXXX, MS_WHLL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, MS_BTN1, MS_BTN2, MO(_N), _______, _______
),


[_G] = LAYOUT(
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      TO(_K),  TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      TO(_K),  TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),
  KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      TO(_K),  TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),
  KC_SPC,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    TO(_G),   TO(_K), TO(_K),  TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),
                             KC_RCTL, KC_GRV,  KC_LSFT, KC_LALT,  TO(_D), TO(_D),  TO(_D),  TO(_D)
),
[_K] = LAYOUT(
  KC_ESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                      TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),
  KC_F12,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),
  KC_F11, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),
  KC_F10,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    TO(_K),   TO(_K), TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),  TO(_D),
                             KC_RCTL, KC_F9,  KC_LSFT, KC_LALT,  TO(_D), TO(_D),  TO(_D),  TO(_D)
),
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
//

const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);
const char *read_layer_state_user(void);
const char *read_layer_state_user(void) {
    // NOTE;
    switch (get_highest_layer(layer_state)) {
        case _D:
            return "Layer: Colemak";
            break;
        case _M:
            return "Layer: Mouse  ";
            break;
        case _L:
            return "Layer: Lower  ";
            break;
        case _R:
            return "Layer: Raise  ";
            break;
        case _N:
            return "Layer: Nav    ";
            break;
        default:
            break;
    }
    char *layer_state_str = "Layer: Und-  ";
    layer_state_str[10]   = '0' + layer_state % 10;
    return layer_state_str;
}

// const char *read_mode_icon(bool swap);
// const char hoeuaoeuost_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
