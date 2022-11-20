#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ' │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │Bsp├───┐   ┌───┤Spc│
      *               └───┤Tab│   │Ent├───┘
      *                   └───┘   └───┘
      */
    [0] = LAYOUT_split_3x5_2(
        KC_Q,          KC_W,         KC_E,            KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,              KC_O,              KC_P,
        LSFT_T(KC_A),  KC_S,         KC_D,            KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,              KC_L,              RSFT_T(KC_QUOT),
        LCTL_T(KC_Z),  LALT_T(KC_X), LGUI_T(KC_C),    KC_V,    KC_B,                               KC_N,    KC_M,    RGUI_T(KC_COMM),   ALGR_T(KC_DOT),    RCTL_T(KC_SLSH),
                                                     LT(1,KC_BSPC), LT(2,KC_TAB),           LT(3,KC_ENT),  LT(2,KC_SPC)
    ),

    [1] = LAYOUT_split_3x5_2(
        KC_ESC,     KC_NO,    KC_NO,    KC_NO,    KC_NO,                             LCTL(KC_Y),  LCTL(KC_X),  LCTL(KC_C),  LCTL(KC_V),  LCTL(KC_Z),
        KC_LSFT,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                             KC_CAPS,      KC_LEFT,     KC_DOWN,     KC_UP,       KC_RGHT,    
        KC_LCTL,    KC_LALT,  KC_LGUI,  KC_NO,    DF(1),                             KC_INS,        KC_HOME,     KC_PGDN,     KC_PGUP,     KC_END,
                                                  DF(0),  KC_TAB,           KC_ENT,  KC_SPC
    ),

    [2] = LAYOUT_split_3x5_2(
        KC_ESC,     KC_NO,    KC_NO,    KC_NO,    KC_NO,                           KC_BTN3,  KC_BTN1, KC_BTN2, KC_WH_U, KC_WH_D,
        KC_LSFT,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                           KC_NO,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,    
        KC_LCTL,    KC_LALT,  KC_LGUI,  KC_NO,    DF(2),                           KC_NO,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                                                  KC_TAB, DF(0),          KC_ENT,  KC_SPC
    ),

    [3] = LAYOUT_split_3x5_2(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                               KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_DEL,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                               KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_RSFT,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,                               DF(3),    KC_NO,    KC_RGUI,  KC_LALT,  KC_RCTL,
                                            KC_RPRN, KC_UNDS,           DF(0), KC_NO
    ),

    [4] = LAYOUT_split_3x5_2(
        KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,                               KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_DEL,
        KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,                                KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_RSFT,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,                               DF(4),    KC_NO,    KC_RGUI,  KC_LALT,  KC_RCTL,
                                            KC_0,    KC_MINS,           KC_NO,  DF(0)
    )
};
