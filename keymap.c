#include QMK_KEYBOARD_H

#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

/*
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | ESC  |  7   |  5   |  3   |  3   |  1   |  9   |  0   |  2   |  4   |  6   |  8   |  NO  | BSPC | DEL  |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* | TAB  |  ;   |  ,   |  .   |  P   |  Y   |  F   |  G   |  C   |  R   |  L   |  /   |  NO  | END  | ESC  |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* |  A   |  O   |  E   |  U   |  I   |  D   |  H   |  T   |  N   |  S   |  -   |  \   |  EN  |      | LSFT |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* | TO 1 |  '   |  Q   |  J   |  K   |  X   |  B   |  M   |  W   |  V   |  Z   | RSFT |  UP  |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
* | LCTL | LGUI | LALT | SPC  |      |      | LEFT | DOWN | RGHT |      |      |      |      |      |      |
* `-------------------------------------------------------------------------------------------------------------------'
*/
enum layer_names {
    _DVORAK,
    _NAVIGATION,
    _SYMBOLS,
    _QWERTY

};
enum my_keycodes {
  DV_PERC = SAFE_RANGE,
  DV_DLR,
  DV_7,
  DV_5,
  DV_3,
  DV_1,
  DV_9,
  DV_0,
  DV_2,
  DV_4,
  DV_6,
  DV_8,
  DV_TICK,
  DV_SCOL,
  DV_COMM,
  DV_DOT,
  DV_QM,
  DV_RBRC,
  DV_SLSH,
  DV_BSLS,
  DV_MINS,
  DV_QUOT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* default mapping:
   *
	// Default layer
	[0] = LAYOUT_65_iso_blocker(
		QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,        KC_HOME,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,         KC_PGUP,
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,                 KC_PGDN,
		KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                 KC_UP,   KC_END,
		KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                                      KC_RALT, KC_RGUI,        KC_LEFT, KC_DOWN, KC_RGHT),
    */
    //┌──────────┬───────────────┬───────────┬───────────┬────────┬────────────┬────────┐ DVORAK ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
	//[_DVORAK] = LAYOUT_65_iso_blocker(
  //      DV_DLR,     DV_PERC,        DV_7,       DV_5,       DV_3,       DV_1,       DV_9,       DV_0,       DV_2,       DV_4,       DV_6,       DV_8,       DV_TICK,    KC_BSPC,        KC_DEL,
  //      KC_TAB,     DV_SCOL,        DV_COMM,    DV_DOT,     KC_P,       KC_Y,       KC_F,       KC_G,       KC_C,       KC_R,       KC_L,       DV_QM,      DV_RBRC,    /*nothing*/     KC_END,
  //      KC_ESC,     KC_A,           KC_O,       KC_E,       KC_U,       KC_I,       KC_D,       KC_H,       KC_T,       KC_N,       KC_S,       DV_MINS,    DV_BSLS,    KC_ENT,         KC_NO,
  //      KC_LSFT,    TO(1),          DV_QUOT,    KC_Q,       KC_J,       KC_K,       KC_X,       KC_B,       KC_M,       KC_W,       KC_V,       KC_Z,       KC_RSFT,    KC_UP,          KC_NO,
  //      KC_LCTL,    LGUI(KC_NO),    KC_LALT,    /*----------------------------space-----------------------------*/      KC_7,       KC_NO,      TO(2),      KC_LEFT,    KC_DOWN,        KC_RGHT
  //  ),
	[_DVORAK] = LAYOUT_65_iso_blocker(
        DV_DLR,     DV_PERC,        DV_7,         DV_5,       DV_3,       DV_1,       DV_9,       DV_0,       DV_2,       DV_4,       DV_6,       DV_8,       DV_TICK,    KC_BSPC,        KC_DEL,
		    KC_TAB,     DV_SCOL,        DV_COMM,      DV_DOT,     KC_P,       KC_Y,       KC_F,       KC_G,       KC_C,       KC_R,       KC_L,       DV_QM,      DV_RBRC,    KC_ENT,         KC_PGUP,
		    KC_ESC,     KC_A,           KC_O,         KC_E,       KC_U,       KC_I,       KC_D,       KC_H,       KC_T,       KC_N,       KC_S,       DV_MINS,    DV_BSLS,                    TO(3),
		    KC_LSFT,    MO(2),          DV_QUOT,      KC_Q,       KC_J,       KC_K,       KC_X,       KC_B,       KC_M,       KC_W,       KC_V,       KC_Z,       KC_RSFT,    KC_UP,          KC_END,
		    KC_LCTL,    KC_LGUI,        KC_LALT,                              KC_SPC,                                                     KC_RALT,    KC_RGUI,    KC_LEFT,    KC_DOWN,        KC_RGHT
    ),
	[_NAVIGATION] = LAYOUT_65_iso_blocker(
        KC_ESC,     KC_NO,          KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,
        KC_NO,      KC_NO,          KC_UP,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_UP,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_TRNS,        KC_NO,
        KC_ESC,     KC_LEFT,        KC_DOWN,      KC_RGHT,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_H,       KC_J,       KC_K,       KC_L,       KC_NO,                      KC_NO,
        KC_NO,      TO(0),          KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_UP,          KC_NO,      
        KC_LCTL,    LGUI(KC_NO),    KC_LALT,    /*----------------------------space-----------------------------*/        KC_SPC,     KC_NO,      TO(2),      KC_LEFT,    KC_DOWN,        KC_RGHT
    ),
	[_SYMBOLS] = LAYOUT_65_iso_blocker(
        KC_ESC,     KC_TRNS,        KC_TRNS,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,
        KC_TRNS,    KC_TRNS,        KC_TRNS,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    DV_7,       DV_6,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,
        KC_ESC,     KC_TRNS,        KC_TRNS,      DV_0/***/,  DV_9/*=*/,  KC_TRNS,    KC_TRNS,    DV_1,       DV_5,       DV_3,       DV_2,       KC_TRNS,    KC_TRNS,                    KC_TRNS,
        KC_TRNS,    TO(1),          KC_TRNS,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_UP,          KC_TRNS,      
        KC_LCTL,    LGUI(KC_TRNS),  KC_LALT,    /*----------------------------space-----------------------------*/        KC_SPC,     KC_TRNS,    TO(0),      KC_LEFT,    KC_DOWN,        KC_RGHT
    ),
	[_QWERTY] = LAYOUT_65_iso_blocker(
        QK_GESC,    KC_1,           KC_2,         KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,        KC_HOME,
		    KC_TAB,     KC_Q,           KC_W,         KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,         KC_PGUP,
		    KC_CAPS,    KC_A,           KC_S,         KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,                 TO(0),
		    KC_LSFT,    KC_NUBS,        KC_Z,         KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                 KC_UP,   KC_END,
		    KC_LCTL,    KC_LGUI,        KC_LALT,                            KC_SPC,                                      KC_RALT, KC_RGUI,        KC_LEFT, KC_DOWN, KC_RGHT
    )
};

void unregister_tap_restore_internal(uint16_t keycode, bool doubletap) {
  bool left_shift = get_mods() == MOD_BIT(KC_LSFT);
  bool right_shift = get_mods() == MOD_BIT(KC_RSFT);
  if (left_shift) {
    unregister_code(KC_LSFT);
  }
  if (right_shift) {
    unregister_code(KC_RSFT);
  }
  
  tap_code16(keycode);
  if (doubletap) {
    tap_code16(keycode);
  }
  
  if (left_shift) {
    register_code(KC_LSFT);
  }
  if (right_shift) {
    register_code(KC_RSFT);
  }
}

void unregister_doubletap_restore(uint16_t keycode) {
  unregister_tap_restore_internal(keycode, true);
}

void unregister_tap_restore(uint16_t keycode) {
  unregister_tap_restore_internal(keycode, false);
}

bool shift_pressed = false;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    bool left_shift = get_mods() == MOD_BIT(KC_LSFT);
    bool right_shift = get_mods() == MOD_BIT(KC_RSFT);
     shift_pressed = left_shift || right_shift;
    case DV_DLR:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_doubletap_restore(RALT(KC_RBRC));
          return true;
        } else {
          tap_code16(RALT(KC_4));
        }
      }
      return false;
    case DV_PERC:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          tap_code(KC_5);
          return true;
        } else {
          tap_code16(S(KC_6));
        }
      }
      return false;
    case DV_7:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_7);
          return true;
        } else {
          tap_code16(RALT(KC_8));
        }
      }
      return false;
    case DV_5:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_5);
          return true;
        } else {
          tap_code16(RALT(KC_7));
        }
      }
      return false;
    case DV_3:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_3);
          return true;
        } else {
          tap_code16(RALT(KC_0));
        }
      }
      return false;
    case DV_1:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_1);
          return true;
        } else {
          tap_code16(S(KC_8));
        }
      }
      return false;
    case DV_9:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_9);
          return true;
        } else {
          tap_code16(S(KC_0));
        }
      }
      return false;
    case DV_0:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_0);
          return true;
        } else {
          tap_code16(S(KC_NUHS));
        }
      }
      return false;
    case DV_2:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_2);
          return true;
        } else {
          tap_code16(S(KC_9));
        }
      }
      return false;
    case DV_4:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_4);
          return true;
        } else {
          tap_code16(KC_MINS);
        }
      }
      return false;
    case DV_6:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_6);
          return true;
        } else {
          tap_code16(RALT(KC_9));
        }
      }
      return false;
    case DV_8:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_8);
          return true;
        } else {
          tap_code16(S(KC_1));
        }
      }
      return false;
    case DV_TICK:
      // # ` 
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(S(KC_EQL));
          return true;
        } else {
          tap_code16(S(KC_3));
        }
      }
      return false;
    case DV_SCOL:
      // ; :
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          tap_code16(S(KC_DOT));
          return true;
        } else {
          unregister_tap_restore(S(KC_COMM));
        }
      }
      return false;
    case DV_COMM:
      // , <
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_NUBS);
          return true;
        } else {
          tap_code16(KC_COMM);
        }
      }
      return false;
    case DV_DOT:
      // . > 
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(S(KC_NUBS));
          return true;
        } else {
          tap_code16(KC_DOT);
        }
      }
      return false;
    case DV_QM:
      // / ? 
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(S(KC_MINS));
          return true;
        } else {
          tap_code16(S(KC_7));
        }
      }
      return false;
    case DV_BSLS:
      // \ |
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(KC_GRV);
          return true;
        } else {
          tap_code16(KC_EQL);
        }
      }
      return false;
    case DV_MINS:
      // - _
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(S(KC_SLSH));
          return true;
        } else {
          tap_code16(KC_SLSH);
        }
      }
      return false;
    case DV_QUOT:
      // ' "
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_tap_restore(S(KC_2));
          return true;
        } else {
          tap_code16(KC_NUHS);
        }
      }
      return false;
    case DV_RBRC:
      // @ ^
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) { 
          unregister_doubletap_restore(S(KC_RBRC));
          return true;
        } else {
          tap_code16(RALT(KC_2));
        }
      }
      return false;
    default:
      return true;
  }
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





