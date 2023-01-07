#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE TG(_RAISE)
#define LOWER MO(_LOWER)

/* #define ONE_GRV LT(1,KC_GRAVE) */
/* #define CTL_Z LCTL_T(KC_Z) */
/* #define ALT_SHFT LALT(KC_LSFT) */
/* #define ALT_MENU LALT_T(KC_MENU) */
/* #define LG_QUOT LGUI_T(KC_QUOT) */
/* #define CTL_ESC LCTL_T(KC_ESC) */
/* #define CTL_SLS LCTL_T(KC_SLSH) */
/* #define LT2_COL LT(_LOWER, KC_SCLN) */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x6(
        _______,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5  ,                                        KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_EQL ,
        KC_DEL ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T  ,                                        KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_MINS,
        KC_TAB ,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G  ,                                        KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,
        _______,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B  ,                                        KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,_______,
                KC_LSFT,KC_LCTL,KC_LGUI,KC_LALT,                                                       KC_RALT,KC_RGUI,KC_RCTL,KC_RSFT,
                                                       KC_LCTL ,KC_LGUI,       KC_RGUI,KC_ESC  ,
                                                KC_TAB,KC_SPACE, RAISE ,       KC_RCTL,KC_ENTER,KC_BSPC,
                                                                 LOWER ,       LOWER
    ),
    [_LOWER] = LAYOUT_6x6(
        _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                                       KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,
        _______,KC_EXLM,KC_AT  ,KC_LBRC,KC_RBRC,KC_PIPE,                                       KC_UP  ,KC_P7  ,KC_P8  ,KC_P9  ,KC_RGHT,KC_F12 ,
        _______,KC_HASH,KC_DLR ,KC_LPRN,KC_RPRN,KC_GRV ,                                       KC_LEFT,KC_P4  ,KC_P5  ,KC_PAST,KC_PPLS,_______,
        _______,KC_PERC,KC_CIRC,KC_DOWN,KC_UP  ,KC_TILD,                                       KC_AMPR,KC_P1  ,KC_P2  ,KC_P3  ,KC_PSLS,_______,
                KC_LSFT,KC_LCTL,KC_LGUI,KC_LALT,                                                       KC_RALT,KC_RGUI,KC_RCTL,KC_RSFT,
                                                        _______,_______,       _______,_______,
                                                _______,_______,_______,       _______,_______,_______,
                                                                _______,       _______
    ),
    [_RAISE] = LAYOUT_6x6(
        _______,_______,_______,_______,_______,_______,                                       _______,_______,_______,_______,_______,_______,
        _______,_______,_______,KC_MS_U,_______,_______,                                       _______,_______,_______,_______,_______,_______,
        _______,_______,KC_MS_L,KC_MS_D,KC_MS_R,_______,                                       _______,_______,_______,_______,_______,KC_MPLY,
        _______,_______,_______,_______,_______,_______,                                       _______,_______,KC_MPRV,KC_MNXT,_______,_______,
                _______,_______,KC_BTN1,KC_BTN2,                                                       KC_VOLU,KC_VOLD,KC_MUTE,_______,
                                                        _______,_______,       _______,_______,
                                                _______,_______,_______,       _______,_______,_______,
                                                                _______,       _______
    )
};
