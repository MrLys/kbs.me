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
  DV_8
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DVORAK] = LAYOUT_65_iso_blocker(
    //┌──────────┬───────────────┬───────────┬───────────┬────────┬────────────┬────────┐ DVORAK ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        DV_DLR,     DV_PERC,        KC_5,       KC_3,       KC_3,       KC_1,       KC_9,       KC_0,       KC_2,       KC_4,       KC_6,       KC_8,       KC_NO,      KC_BSPC,        KC_DEL,
        KC_TAB,     KC_SCLN,        KC_COMM,    KC_DOT,     KC_P,       KC_Y,       KC_F,       KC_G,       KC_C,       KC_R,       KC_L,       KC_SLSH,    KC_NO,      /*nothing*/     KC_END,
        KC_ESC,     KC_A,           KC_O,       KC_E,       KC_U,       KC_I,       KC_D,       KC_H,       KC_T,       KC_N,       KC_S,       KC_MINS,    KC_BSLS,    KC_ENT,         KC_NO,
        KC_LSFT,    TO(1),          KC_QUOT,    KC_Q,       KC_J,       KC_K,       KC_X,       KC_B,       KC_M,       KC_W,       KC_V,       KC_Z,       KC_RSFT,    KC_UP,          KC_NO,
        KC_LCTL,    LGUI(KC_NO),    KC_LALT,    /*----------------------------space-----------------------------*/      KC_SPC,     KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,        KC_RGHT
    ),
	[_NAVIGATION] = LAYOUT_65_iso_blocker(
        KC_ESC,     KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,
        KC_NO,      KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_UP,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      /*nothin*/      KC_NO,
        KC_ESC,     KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,
        KC_NO,      TO(0),        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,      
        KC_LCTL,    LGUI(KC_NO),    KC_LALT,    /*----------------------------space-----------------------------*/      KC_SPC,     KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,        KC_RGHT
    ),
	[_SYMBOLS] = LAYOUT_65_iso_blocker(
        KC_ESC,     KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,
        KC_NO,      KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_UP,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      /*nothin*/      KC_NO,
        KC_ESC,     KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,
        KC_NO,      TO(0),        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,      
        KC_LCTL,    LGUI(KC_NO),    KC_LALT,    /*----------------------------space-----------------------------*/      KC_SPC,     KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,        KC_RGHT
    ),
	[_QWERTY] = LAYOUT_65_iso_blocker(
        KC_ESC,     KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,
        KC_NO,      KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_UP,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      /*nothin*/      KC_NO,
        KC_ESC,     KC_NO,        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,
        KC_NO,      TO(0),        KC_NO,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_NO,      
        KC_LCTL,    LGUI(KC_NO),    KC_LALT,    /*----------------------------space-----------------------------*/      KC_SPC,     KC_NO,      KC_NO,      KC_LEFT,    KC_DOWN,        KC_RGHT
    )
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DV_DLR:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          unregister_code(KC_LSFT);
          tap_code16(RALT(KC_RBRC));
          register_code(KC_LSFT);
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
      return true;
    case DV_5:
      return true;
    case DV_3:
      return true;
    case DV_1:
      return true;
    case DV_9:
      return true;
    case DV_0:
      return true;
    case DV_2:
      return true;
    case DV_4:
      return true;
    case DV_6:
      return true;
    case DV_8:



    default:
      return true;
  }
}
//const key_override_t dvorak_tilde = ko_make_with_layers_negmods_and_options(
//  MOD_MASK_SHIFT,
//  DV_DLR,
//  RALT(KC_RBRC),
//  0,
//  MOD_MASK_CSA,
//  ko_option_no_reregister_trigger);
//const key_override_t dvorak_percent = ko_make_with_layers_negmods_and_options(
//  MOD_MASK_SHIFT,
//  DV_PERC,
//  LSFT(KC_6),
//  0,
//  MOD_MASK_CA,
//  ko_option_no_reregister_trigger);
//// This globally defines all key overrides to be used
//const key_override_t **key_overrides = (const key_override_t *[]){
//    //&dvorak_tilde,
//    &dvorak_percent,
//    NULL
//};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





