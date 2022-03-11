#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    // Row 1
    _______, _______, _______, _______, _______, _______, KC_HOME,
        KC_END, _______, _______, _______, _______, _______, _______,
    // Row 2
    _______, KC_V, KC_G, KC_M, KC_F, KC_SCOLON, LM(2, MOD_LALT),
        _______, KC_QUOTE, KC_K, KC_U, KC_J, KC_Z, _______,
    // Row 3
    ST_MACRO_0, KC_R, LALT_T(KC_S), LCTL_T(KC_T), LGUI_T(KC_H), KC_P, KC_RALT,
        _______, KC_Y, RGUI_T(KC_I), RCTL_T(KC_E), LALT_T(KC_O), KC_A, _______,
    // Row 4
    _______, TD(DANCE_0), KC_C, KC_L, KC_D, KC_B,
        KC_MINUS, KC_W, KC_COMMA, KC_DOT, TD(DANCE_1), _______,
    // Row 5
    _______, _______, LM(2, MOD_LGUI), _______, KC_TAB,
        OSL(3), OSL(3), // Big red thumb buttons
        KC_BSPACE, KC_DELETE, _______, _______, _______,
    // Piano keys
    MT(MOD_LSFT, KC_N), LT(2, KC_ESCAPE), _______,
        _______, LT(2, KC_ENTER), MT(MOD_RSFT, KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    // Row 1
    _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
    // Row 2
    _______, KC_Q, KC_W, KC_E, KC_R, KC_T, _______,
        _______, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLASH,
    // Row 3
    _______, LSFT_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LGUI_T(KC_F), KC_G, _______,
        _______, KC_H, RGUI_T(KC_J), RCTL_T(KC_K), LALT_T(KC_L), RSFT_T(KC_SCOLON), KC_QUOTE,
    // Row 4
    _______, KC_Z, KC_X, KC_C, KC_V, KC_B,
        KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, _______,
    // Row 5
    _______, _______, _______, _______, _______,
        _______, _______,
        _______, _______, _______, _______, _______,
    // Piano keys
    _______, _______, _______,
        _______, _______, _______
  ),
  [2] = LAYOUT_moonlander(
    // Row 1
    KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, _______,
        KC_COMMA, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,         
    // Row 2
    _______, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, _______,
        KC_INSERT, KC_BSLASH, KC_7, KC_8, KC_9, KC_ASTR, KC_F12, 
    // Row 3
    _______, TD(DANCE_2), TD(DANCE_3), TD(DANCE_4), TD(DANCE_5), KC_GRAVE, ST_MACRO_1,
        ST_MACRO_2, ST_MACRO_3, RGUI_T(KC_4),RCTL_T(KC_5),LALT_T(KC_6),TD(DANCE_6), KC_MINUS,
    // Row 4
    _______, KC_PERC, KC_CIRC, KC_LBRACKET, KC_RBRACKET, KC_TILD,
        KC_AMPR, KC_1, KC_2, KC_3, KC_SLASH, _______, 
    // Row 5
    _______, _______, _______, KC_LABK, KC_RABK,
        _______, _______,
        KC_BSPACE, KC_0, KC_DOT, KC_EQUAL, _______, 
    // Piano keys
    _______, _______, _______,
        _______, _______, _______
  ),
  [3] = LAYOUT_moonlander(
    // Row 1
    _______, _______, _______, _______, _______, _______, _______,
        KC_PSCREEN, _______, _______, _______, _______, _______, RESET,
    // Row 2
    _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_PGDOWN, KC_PGUP, _______, _______, _______,
    // Row 3
    _______, _______, _______, _______, _______, _______, _______,
        LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, LCTL(KC_RIGHT), _______, 
    // Row 4
    _______, _______, _______, _______, _______, _______,
        KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP, KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,_______, _______,
    // Row 5
    _______, _______, _______, _______, _______,
        _______, TO(2),
        KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,LALT(LGUI(KC_F4)),_______, 
    // Piano keys
    _______, _______, _______,
        TO(4), TO(1), TO(0)
  ),
  [4] = LAYOUT_moonlander(
    // Row 1
    KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, TD(DANCE_7),
        _______, _______, _______, _______, _______, _______, _______, 
    // Row 2
    KC_ENTER, KC_T, KC_Q, KC_W, KC_E, KC_R, TO(0),
        _______, _______, _______, _______, _______, _______, _______, 
    // Row 3
    KC_TAB, KC_G, KC_A, KC_S, KC_D, KC_F, TD(DANCE_8),
        _______, _______, _______, _______, _______, _______, _______, 
    // Row 4
    TT(5), KC_B, KC_Z, KC_X, KC_C, KC_V,
        _______, _______, _______, _______, _______, _______, 
    // Row 5
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,
        _______, _______,
        _______, _______, _______, _______, _______, 
    // Piano keys
    LSFT_T(KC_SPACE), KC_LCTRL, KC_LALT,
        _______, _______, _______
  ),
  [5] = LAYOUT_moonlander(
    // Row 1
    KC_ESCAPE, KC_0, KC_9, KC_8, KC_7, KC_6, KC_F11,
        _______, _______, _______, _______, _______, _______, _______, 
    // Row 2
    _______, KC_P, KC_O, KC_I, KC_U, KC_Y, _______,
        _______, _______, _______, _______, _______, _______, _______, 
    // Row 3
    KC_LCTRL, KC_SCOLON, KC_L, KC_K, KC_J, KC_H, KC_F12,
        _______, _______, _______, _______, _______, _______, _______, 
    // Row 4
    _______, KC_SLASH, KC_DOT, KC_COMMA, KC_M, KC_N,
        _______, _______, _______, _______, _______, _______, 
    // Row 5
    KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        TD(DANCE_9), _______,
        _______, _______, _______, _______, _______, 
    // Piano keys
    TD(DANCE_10), _______, _______, _______, _______, _______
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

/* RGB LED map appears to number keys thusly
0 5 10 15 20 25 29         65 61 56 51 46 41 36
1 6 11 16 21 26 30         66 62 57 52 47 42 37
2 7 12 17 22 27 31         67 63 58 53 48 43 38
3 8 13 18 23 28               64 59 54 49 44 39
4 9 14 19 24    35         71    60 55 50 45 40
             32 33 34   70 69 68                */
const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {
        // Left hand
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136}, {0,0,0},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136}, {130,125,136},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136}, {0,0,0},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136}, {130,125,136},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136},
        {130,125,136}, {130,125,136}, {130,125,136},
        {130,125,136}, {130,125,136}, {130,125,136}, {0,0,0},
        // Right hand
        {0,0,0}, {130,125,136}, {130,125,136}, {0,0,0}, {0,0,0},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136}, {0,0,0},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136}, {0,0,0},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136}, {0,0,0},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136}, {130,125,136},
        {0,0,0}, {130,125,136}, {130,125,136}, {130,125,136},
        {130,125,136}, {0,0,0}, {0,0,0},
        {130,125,136}, {130,125,136}, {130,125,136}, {0,0,0}
    },

    [1] = {
        // Left hand
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204}, {0,0,0},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204}, {0,0,0},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204},
        {1,218,204}, {1,218,204}, {1,218,204},
        {1,218,204}, {1,218,204}, {1,218,204}, {0,0,0},
        // Right hand
        {0,0,0}, {1,218,204}, {1,218,204}, {0,0,0}, {0,0,0},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204}, {0,0,0},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204}, {0,0,0},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204}, {0,0,0},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204}, {1,218,204},
        {0,0,0}, {1,218,204}, {1,218,204}, {1,218,204},
        {1,218,204}, {0,0,0}, {0,0,0},
        {1,218,204}, {1,218,204}, {1,218,204}, {0,0,0}
    },

    [2] = {
        // Left hand
        {238,113,177}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177}, {0,0,0},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177}, {130,125,136},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177},
        {130,125,136}, {130,125,136}, {238,113,177},
        {130,125,136}, {130,125,136}, {130,125,136}, {0,0,0},
        // Right hand
        {238,113,177}, {238,113,177}, {238,113,177}, {0,0,0}, {0,0,0},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177},
        {238,113,177}, {238,113,177}, {238,113,177}, {238,113,177},
        {238,113,177}, {238,113,177}, {238,113,177},
        {130,125,136}, {130,125,136}, {130,125,136}, {0,0,0}
    },

    [3] = {
        // Left hand
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {130,125,136},
        // Right hand
        {30,207,250}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {30,207,250}, {0,0,0}, {30,207,250},
        {0,0,0}, {0,0,0}, {30,207,250}, {30,207,250}, {30,207,250},
        {0,0,0}, {30,207,250}, {30,207,250}, {30,207,250}, {30,207,250},
        {0,0,0}, {30,207,250}, {30,207,250}, {30,207,250}, {30,207,250},
        {0,0,0}, {0,0,0}, {30,207,250}, {30,207,250},
        {30,207,250}, {0,0,0}, {30,207,250},
        {130,125,136}, {1,218,204}, {77,255,207}, {238,113,177}
    },

    [4] = {
        // Left hand
        {77,255,207}, {77,255,207}, {77,255,207}, {19,229,254}, {77,255,207},
        {77,255,207}, {77,255,207}, {77,255,207}, {77,255,207}, {77,255,207},
        {77,255,207}, {77,255,207}, {77,255,255}, {77,255,207}, {77,255,207},
        {77,255,207}, {77,255,255}, {77,255,255}, {77,255,207}, {77,255,207},
        {77,255,207}, {77,255,207}, {77,255,255}, {77,255,207}, {77,255,207},
        {77,255,207}, {77,255,207}, {77,255,207}, {77,255,207},
        {77,255,207}, {131,126,242}, {77,255,207},
        {77,255,207}, {77,255,207}, {77,255,207}, {77,255,207},
        // Right hand
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}
    },

    [5] = {
        // Left hand
        {19,229,254}, {19,229,254}, {19,229,254}, {77,255,207}, {19,229,254},
        {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254},
        {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254},
        {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254},
        {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254},
        {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254},
        {19,229,254}, {19,229,254}, {19,229,254},
        {19,229,254}, {19,229,254}, {19,229,254}, {19,229,254},
        // Right hand
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}
    },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Q) SS_DELAY(100) SS_TAP(X_U));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RALT) SS_DELAY(100) SS_TAP(X_BSLASH) SS_DELAY(100) SS_TAP(X_COMMA));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RALT) SS_DELAY(100) SS_TAP(X_MINUS) SS_DELAY(100) SS_TAP(X_MINUS) SS_DELAY(100) SS_TAP(X_DOT));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RALT) SS_DELAY(100) SS_TAP(X_MINUS) SS_DELAY(100) SS_TAP(X_MINUS) SS_DELAY(100) SS_TAP(X_MINUS));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[11];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case SINGLE_HOLD: register_code16(KC_Q); break;
        case DOUBLE_TAP: register_code16(KC_X); register_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case SINGLE_HOLD: unregister_code16(KC_Q); break;
        case DOUBLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_SLASH);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_SLASH); break;
        case SINGLE_HOLD: register_code16(KC_BSLASH); break;
        case DOUBLE_TAP: register_code16(KC_SLASH); register_code16(KC_SLASH); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SLASH); register_code16(KC_SLASH);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_SLASH); break;
        case SINGLE_HOLD: unregister_code16(KC_BSLASH); break;
        case DOUBLE_TAP: unregister_code16(KC_SLASH); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SLASH); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_HASH);
        tap_code16(KC_HASH);
        tap_code16(KC_HASH);
    }
    if(state->count > 3) {
        tap_code16(KC_HASH);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_HASH); break;
        case SINGLE_HOLD: register_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code16(KC_HASH); register_code16(KC_HASH); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_HASH); register_code16(KC_HASH);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_HASH); break;
        case SINGLE_HOLD: unregister_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code16(KC_HASH); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_HASH); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DLR);
        tap_code16(KC_DLR);
        tap_code16(KC_DLR);
    }
    if(state->count > 3) {
        tap_code16(KC_DLR);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_DLR); break;
        case SINGLE_HOLD: register_code16(KC_LALT); break;
        case DOUBLE_TAP: register_code16(KC_DLR); register_code16(KC_DLR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DLR); register_code16(KC_DLR);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_DLR); break;
        case SINGLE_HOLD: unregister_code16(KC_LALT); break;
        case DOUBLE_TAP: unregister_code16(KC_DLR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DLR); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case SINGLE_HOLD: register_code16(KC_LCTRL); break;
        case DOUBLE_TAP: register_code16(KC_LPRN); register_code16(KC_LPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case SINGLE_HOLD: unregister_code16(KC_LCTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_RPRN);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_RPRN); break;
        case SINGLE_HOLD: register_code16(KC_LGUI); break;
        case DOUBLE_TAP: register_code16(KC_RPRN); register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RPRN); register_code16(KC_RPRN);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_RPRN); break;
        case SINGLE_HOLD: unregister_code16(KC_LGUI); break;
        case DOUBLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RPRN); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PLUS);
        tap_code16(KC_PLUS);
        tap_code16(KC_PLUS);
    }
    if(state->count > 3) {
        tap_code16(KC_PLUS);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_PLUS); break;
        case SINGLE_HOLD: register_code16(KC_RSHIFT); break;
        case DOUBLE_TAP: register_code16(KC_PLUS); register_code16(KC_PLUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PLUS); register_code16(KC_PLUS);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_PLUS); break;
        case SINGLE_HOLD: unregister_code16(KC_RSHIFT); break;
        case DOUBLE_TAP: unregister_code16(KC_PLUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PLUS); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
    }
    if(state->count > 3) {
        tap_code16(KC_EQUAL);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_EQUAL); break;
        case SINGLE_HOLD: register_code16(KC_MINUS); break;
        case DOUBLE_TAP: register_code16(KC_EQUAL); register_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_EQUAL); register_code16(KC_EQUAL);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_EQUAL); break;
        case SINGLE_HOLD: unregister_code16(KC_MINUS); break;
        case DOUBLE_TAP: unregister_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_EQUAL); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RBRACKET);
        tap_code16(KC_RBRACKET);
        tap_code16(KC_RBRACKET);
    }
    if(state->count > 3) {
        tap_code16(KC_RBRACKET);
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_RBRACKET); break;
        case SINGLE_HOLD: register_code16(KC_LBRACKET); break;
        case DOUBLE_TAP: register_code16(KC_RBRACKET); register_code16(KC_RBRACKET); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RBRACKET); register_code16(KC_RBRACKET);
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_RBRACKET); break;
        case SINGLE_HOLD: unregister_code16(KC_LBRACKET); break;
        case DOUBLE_TAP: unregister_code16(KC_RBRACKET); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RBRACKET); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F9);
        tap_code16(KC_F9);
        tap_code16(KC_F9);
    }
    if(state->count > 3) {
        tap_code16(KC_F9);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_F9); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_F9); register_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F9); register_code16(KC_F9);
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_F9); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F9); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case SINGLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_TAP: register_code16(KC_F5); register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case SINGLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[10].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
};

