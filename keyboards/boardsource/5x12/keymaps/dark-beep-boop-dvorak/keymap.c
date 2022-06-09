#include QMK_KEYBOARD_H
#include <quantum/keymap_extras/keymap_spanish.h>

enum layers {
    _MAIN,
    _ESDV,
    _OVER,
    _UNDER,
};

#define LAYER_NUM 3

// Readability keycodes
#define OVER    MO(_OVER)
#define UNDER   MO(_UNDER)

#define MAIN    DF(_MAIN)
#define ESDV    DF(_ESDV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Assuming ES Dvorak layout
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Tab│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │Bsp│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Esc│ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ñ │ ´ │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │Ent│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ < │Ctl│Alt│Sys│Und│Spc│Spc│Ovr│Lft│Dwn│Up │Rgt│
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 *
 * Shift
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Tab│   │   │   │   │   │   │   │   │   │   │Bsp│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Esc│   │   │   │   │   │   │   │   │   │   │ ¨ │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Sft│   │   │   │   │   │   │   │ ; │ : │ _ │Ent│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ > │Ctl│Alt│Sys│Und│Spc│Spc│Ovr│Lft│Dwn│Up │Rgt│
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 *
 * AltGr
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Tab│   │   │ € │   │   │   │   │   │   │   │Bsp│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Esc│   │   │   │   │   │   │   │   │   │   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Sft│   │   │   │   │   │   │   │   │   │   │Ent│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │   │Ctl│Alt│Sys│Und│Spc│Spc│Ovr│Lft│Dwn│Up │Rgt│
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 */
  [_MAIN] = LAYOUT_ortho_5x12(
    KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,

    KC_TAB,       KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,
    KC_Y,         KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,

    KC_ESC,       KC_A,       KC_S,       KC_D,       KC_F,       KC_G,
    KC_H,         KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,

    KC_LSFT,      KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,
    KC_N,         KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ENT,

    KC_NUBS,      KC_LCTL,    KC_LALT,    KC_LGUI,    UNDER,      KC_SPC,
    KC_SPC,       OVER,       KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT
  ),

/* Assuming ES layout
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Tab│ . │ , │ Ñ │ P │ Y │ F │ G │ C │ H │ L │Bsp│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Esc│ A │ O │ E │ U │ I │ D │ R │ T │ N │ S │ ´ │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Sft│ - │ Q │ J │ K │ X │ B │ M │ W │ V │ Z │Ent│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ < │Ctl│Alt│Sys│Und│Spc│Spc│Ovr│Lft│Dwn│Up │Rgt│
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 *
 * Shift
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Tab│ : │ ; │   │   │   │   │   │   │   │   │Bsp│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Esc│   │   │   │   │   │   │   │   │   │   │ ¨ │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Sft│ _ │   │   │   │   │   │   │   │   │   │Ent│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ > │Ctl│Alt│Sys│Und│Spc│Spc│Ovr│Lft│Dwn│Up │Rgt│
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 *
 * AltGr
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Tab│   │   │   │   │   │   │   │   │   │   │Bsp│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Esc│   │   │ € │   │   │   │   │   │   │   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Sft│   │   │   │   │   │   │   │   │   │   │Ent│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │   │Ctl│Alt│Sys│Und│Spc│Spc│Ovr│Lft│Dwn│Up │Rgt│
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 */
  [_ESDV] = LAYOUT_ortho_5x12(
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,

    KC_TAB,     ES_DOT,     ES_COMM,    ES_NTIL,    ES_P,       ES_Y,
    ES_F,       ES_G,       ES_C,       ES_H,       ES_L,       KC_BSPC,

    KC_ESC,     ES_A,       ES_O,       ES_E,       ES_U,       ES_I,
    ES_D,       ES_R,       ES_T,       ES_N,       ES_S,       ES_ACUT,

    KC_LSFT,    ES_MINS,    ES_Q,       ES_J,       ES_K,       ES_X,
    ES_B,       ES_M,       ES_W,       ES_V,       ES_Z,       KC_ENT,

    ES_LABK,    KC_LCTL,    KC_LALT,    KC_LGUI,    UNDER,      KC_SPC,
    KC_SPC,     OVER,       KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT
  ),

/* Assuming ES layout
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ ~ │ ! │ @ │ # │ $ │ % │ & │ * │ ( │ ) │ = │___│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │___│ ' │ " │ ¿ │ ? │ / │ _ │ + │ { │ } │ - │ | │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │___│ < │ > │ ¡ │ ! │ \ │ ´ │ ` │ [ │ ] │ ^ │___│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │___│___│___│___│NOP│___│___│NOP│   │   │   │   │
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 */
 [_OVER] = LAYOUT_ortho_5x12(
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,

    ES_TILD,    ES_EXLM,    ES_AT,      ES_HASH,    ES_DLR,     KC_PERC,
    ES_AMPR,    ES_ASTR,    ES_LPRN,    ES_RPRN,    ES_EQL,     _______,

    _______,    ES_QUOT,    ES_DQUO,    ES_IQUE,    ES_QUES,    ES_SLSH,
    ES_UNDS,    ES_PLUS,    ES_LCBR,    ES_RCBR,    ES_MINS,    ES_PIPE,

    _______,    ES_LABK,    ES_RABK,    ES_IEXL,    ES_EXLM,    ES_BSLS,
    ES_ACUT,    ES_GRV,     ES_LBRC,    ES_RBRC,    ES_CIRC,    _______,

    _______,    _______,    _______,    _______,    KC_NO,      _______,
    _______,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO
  ),

/* Assuming ES layout
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│NOP│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │ º │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │___│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │___│F1 │F2 │F3 │F4 │F5 │F6 │MAN│ESD│Mut│PSc│Del│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │___│F7 │F8 │F9 │F10│F11│F12│BrD│BrU│PgD│PgU│___│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
 * │Rst│___│___│Cap│NOP│___│___│Sys│Nxt│VoD│VoU│Ply│
 * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
 */
  [_UNDER] = LAYOUT_ortho_5x12(
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,

    ES_MORD,    ES_1,       ES_2,       ES_3,       ES_4,       ES_5,
    ES_6,       ES_7,       ES_8,       ES_9,       ES_0,       _______,

    _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,
    KC_F6,      MAIN,       ESDV,       KC_MUTE,    KC_PSCR,    KC_DEL,

    _______,    KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
    KC_F12,     KC_BRID,    KC_BRIU,    KC_PGDN,    KC_PGUP,    _______,

    RESET,      _______,    _______,    KC_CAPS,    KC_NO,      _______,
    _______,    KC_LGUI,    KC_MNXT,    KC_VOLD,    KC_VOLU,    KC_MPLY
  )
};
