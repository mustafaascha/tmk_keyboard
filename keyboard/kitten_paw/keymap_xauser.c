#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_COLS][MATRIX_ROWS] = {
    /* Layer 0: QWERTY */
    KEYMAP(\
         ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,  F12,       PSCR,SLCK,PAUS,                       \
         GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL,BSPC,  INS, HOME,PGUP,  NLCK,PSLS,PAST,PMNS, \
         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,  DEL, END, PGDN,  P7,  P8,  P9,  PPLS, \
         FN0, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,      ENT,                   P4,  P5,  P6,        \
         LSFT,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,       UP,         P1,  P2,  P3,  PENT, \
         LCTL,LGUI,LALT,               SPC,                RALT,RGUI, FN1,RCTL,  LEFT,DOWN,RGHT,  P0,  COMM),          \
    /* Layer 1: Space fn */
    KEYMAP(\
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,TRNS,TRNS,                       \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                   TRNS,TRNS,TRNS,      \
         TRNS,NO,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,       TRNS,       TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,               FN2,                TRNS,TRNS,APP, TRNS,  TRNS,TRNS,TRNS,  TRNS,TRNS),          \
    /* Layer 2: Mouse */
    KEYMAP(\
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,TRNS,TRNS,                       \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BTN3,BTN1,BTN3,BTN4,TRNS,TRNS,TRNS,  BTN1,BTN3,BTN2,  TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,     TRNS,                   TRNS,TRNS,TRNS,      \
         TRNS,NO,  TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,WH_D,WH_U,WH_R,TRNS,     TRNS,       MS_U,       TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,  MS_L,MS_D,MS_R,  TRNS,TRNS),          \
    /* Layer 3: Toggle */
    KEYMAP(\
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,TRNS,TRNS,                       \
         TRNS,FN3, FN4, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                   TRNS,TRNS,TRNS,      \
         TRNS,NO,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,       TRNS,       TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,  TRNS,TRNS),          \
    /* Layer 4: Function */
    KEYMAP(\
         SLEP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,TRNS,TRNS,                       \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PWR,   TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,TRNS, \
         TRNS,MSEL,VOLU,MPLY,PSCR,SLCK,PAUS,HOME,INS, DEL, END, TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,TRNS, \
         CAPS,MPRV,VOLD,MNXT,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     TRNS,                   TRNS,TRNS,TRNS,      \
         TRNS,NO,  TRNS,TRNS,TRNS,SPC, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,       TRNS,       TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,  TRNS,TRNS)
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(3, KC_ESC),
    [1] = ACTION_LAYER_MOMENTARY(4),
    [2] = ACTION_LAYER_TAP_KEY(4, KC_SPACE),
    [3] = ACTION_LAYER_TOGGLE(1),
    [4] = ACTION_LAYER_TOGGLE(2)
};
