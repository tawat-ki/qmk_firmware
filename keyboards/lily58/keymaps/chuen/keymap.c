#include QMK_KEYBOARD_H

enum layer_number {
  _D = 0,
  _FN,
  _M,
  _GM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* _DEFAULT
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  ]   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  [   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |BackSP|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   -   |    |    =  |------+------+------+------+------+------|
 * |  FN  |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |LCTRL | LGUI |LShift| /Space  /       \Enter \  | ESC  | LAlt |MOUSE |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_D] = LAYOUT(
  KC_GRV,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_RBRC,
  KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC,
  KC_BSPC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  MO(_FN),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, TO(_GM),  TO(_M),    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_BSLS,
                            KC_LCTRL, KC_LGUI, KC_LSFT,  KC_SPC,  KC_ENT,  KC_ESC, KC_LALT,  KC_DEL
),
//FUNCTION
[_FN] = LAYOUT(
  KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                   XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS,  KC_EQL, XXXXXXX,
  KC_F7,     KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RGHT, XXXXXXX,
  KC_CAPS, XXXXXXX, XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX,                   XXXXXXX, KC_LEFT, XXXXXXX, XXXXXXX,  KC_END, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, KC_DOWN,   KC_UP, XXXXXXX, TO(_GM),  TO(_M), XXXXXXX, KC_HOME, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______, _______, _______, _______
),
//GAME MODE
  [_GM] = LAYOUT(
  KC_ESC,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                   KC_BTN1, KC_BTN2, XXXXXXX, XXXXXXX, XXXXXXX,  TO(_D),
  KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_BSPC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                   DM_REC1, DM_REC2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_SPC,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, TO(_GM),  TO(_M), DM_PLY1, DM_PLY2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                            KC_LCTRL,  KC_GRV, KC_LSFT, KC_LALT, DM_RSTP,  TO(_D), XXXXXXX, XXXXXXX
),
//MOUSE
[_M] = LAYOUT(
  XXXXXXX, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TO(_D),
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_R, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_D, KC_WH_U, XXXXXXX,                   XXXXXXX, KC_MS_L, XXXXXXX, XXXXXXX, KC_WH_R, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, KC_MS_D, KC_MS_U, XXXXXXX, TO(_GM),  TO(_M), XXXXXXX, KC_WH_L, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, KC_BTN1, KC_BTN2,  TO(_D), _______, _______

)
};

