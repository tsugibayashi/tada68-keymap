#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _AL 1
#define _FL 2
#define _SL 3
#define _FSL 4
// Row 1
#define JP_GRV  S(KC_LBRC) // ` (USキーボードの Shift+[)
#define JP_MINS KC_MINS    // - (USキーボードの -)
#define JP_EQL  S(KC_MINS) // = (USキーボードの Shift+-)
// Row 2
#define JP_LBRC KC_RBRC    // [ (USキーボードの ])
#define JP_RBRC KC_BSLS    // ] (USキーボードの \)
#define JP_BSLS KC_INT3    // \ (KC_INT3. USキーボードには無いキー)
// Row 3
#define JP_SCLN KC_SCLN    // ; (USキーボードの ;)
#define JP_QUOT S(KC_7)    // ' (USキーボードの Shift+7)
// Row 4
#define JP_COMM KC_COMM    // , (USキーボードの ,)
#define JP_DOT  KC_DOT     // . (USキーボードの .)
#define JP_SLSH KC_SLSH    // / (USキーボードの /)
// Row 1 (FN)
#define JP_ZKHK KC_GRV     // 半角/全角 (USキーボードの `)
// Row 1 (Shift)
#define JP_TILD S(KC_EQL)  // ~ (USキーボードの Shift+0)
#define JP_EXLM S(KC_1)    // ! (USキーボードの Shift+1)
#define JP_AT   KC_LBRC    // @ (USキーボードの [)
#define JP_HASH S(KC_3)    // # (USキーボードの Shift+3)
#define JP_DLR  S(KC_4)    // $ (USキーボードの Shift+4)
#define JP_PERC S(KC_5)    // % (USキーボードの Shift+5)
#define JP_CIRC KC_EQL     // ^ (USキーボードの =)
#define JP_AMPR S(KC_6)    // & (USキーボードの Shift+6)
#define JP_ASTR S(KC_QUOT) // * (USキーボードの Shift+')
#define JP_LPRN S(KC_8)    // ( (USキーボードの Shift+8)
#define JP_RPRN S(KC_9)    // ) (USキーボードの Shift+9)
#define JP_UNDS S(KC_INT1) // _ (KC_INT1. USキーボードには無いキー)
#define JP_PLUS S(KC_SCLN) // + (USキーボードの Shift+;)
// Row 2 (Shift)
#define JP_LCBR S(KC_RBRC) // { (USキーボードの Shift+])
#define JP_RCBR S(KC_BSLS) // } (USキーボードの Shift+\)
#define JP_PIPE S(KC_INT3) // | (S(KC_INT3). USキーボードには無いキー)
// Row 3 (Shift)
#define JP_COLN KC_QUOT    // : (USキーボードの ')
#define JP_DQUO S(KC_2)    // " (USキーボードの Shift+2)
// Row 4 (Shift)
#define JP_LABK S(KC_COMM) // < (USキーボードの Shift+,)
#define JP_RABK S(KC_DOT)  // > (USキーボードの Shift+.)
#define JP_QUES S(KC_SLSH) // ? (USキーボードの Shift+/)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _BL: (Base Layer) Default Layer
     * ,----------------------------------------------------------------.
     * |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |~ ` |
     * |----------------------------------------------------------------|
     * |Tab  |  q|  w|  e|  r|  t|  y|  u|  i|  o|  p|  [|  ]|  \  |Del |
     * |----------------------------------------------------------------|
     * |Ctrl   |  a|  s|  d|  f|  g|  h|  j|  k|  l|  ;|  '|Return |PgUp|
     * |----------------------------------------------------------------|
     * |Shift   |  z|  x|  c|  v|  b|  n|  m|  ,|  .|  /|Shift | Up|PgDn|
     * |----------------------------------------------------------------|
     * |Ctrl|FN  |Alt |        Space          |Alt| FN|Ctrl|Lef|Dow|Righ|
     * `----------------------------------------------------------------'
     */
    [_BL] = LAYOUT_65_ansi(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    JP_MINS, JP_EQL,  KC_BSPC, JP_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    JP_LBRC, JP_RBRC, JP_BSLS, KC_DEL,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    JP_SCLN, JP_QUOT,          KC_ENT,  KC_PGUP,
        MO(_SL),          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    JP_COMM, JP_DOT,  JP_SLSH, MO(_SL), KC_UP,   KC_PGDN,
        KC_LCTL, MO(_FL), LM(_AL,MOD_LALT),               KC_SPC,               LM(_AL,MOD_RALT), MO(_FL), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Keymap _AL: Alt Layer
     * ,----------------------------------------------------------------.
     * |ZKHK|   |   |   |   |   |   |   |   |   |   |   |   |       |   |
     * |----------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |    |
     * |----------------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |    |
     * |----------------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |    |
     * |----------------------------------------------------------------|
     * |    |    |    |                       |   |   |    |   |   |    |
     * `----------------------------------------------------------------'
     */
    [_AL] = LAYOUT_65_ansi(
        JP_ZKHK, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______, _______
    ),

    /* Keymap _FL: Function Layer
     * ,-------------------------------------------------------------------.
     * |ZKHK| F2|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del   |C(Home)|
     * |-------------------------------------------------------------------|
     * |A(Tab)|   |C-s|   |   |   |C-c|   |   |   |C-v|Prt|   |     |C(End)|
     * |-------------------------------------------------------------------|
     * |      |   |   |C-x|   |   |<- |Dwn|Up | ->|   |   |A(Rtrn) |Home   |
     * |-------------------------------------------------------------------|
     * |Shift   |   |Del|Bl-|BL |BL+|Lck|MUT|VU-|VU+|   |Shift |   |End    |
     * |-------------------------------------------------------------------|
     * |    |    |    |         Win           |   |   |    |   |   |       |
     * `-------------------------------------------------------------------'
     */
    [_FL] = LAYOUT_65_ansi(
        JP_ZKHK,   KC_F2,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,  KC_F10,     KC_F11,  KC_F12,  KC_DEL, C(KC_HOME),
      A(KC_TAB), _______, C(KC_S), _______, _______, _______, C(KC_C),    _______, _______, _______, C(KC_V), A(KC_PSCR), _______, _______,  C(KC_END),
        _______, _______, _______, C(KC_X), _______, _______, KC_LEFT,    KC_DOWN, KC_UP,   KC_RGHT, _______,    _______,        A(KC_ENT),    KC_HOME,
        KC_LSFT,          _______,  KC_DEL, BL_DEC,  BL_TOGG, BL_INC,  LWIN(KC_L), KC_MUTE, KC_VOLD, KC_VOLU,    _______, KC_RSFT, _______,     KC_END,
        _______, _______, _______,                            KC_LGUI,                   _______, _______, _______, _______, _______, _______
    ),

    /* Keymap _SL: Shift Layer
     * ,----------------------------------------------------------------.
     * |    | !|  @|  #|  $|  %|  ^|  &|  *|  (|  )|  _|  +|Backsp |~   |
     * |----------------------------------------------------------------|
     * |  TAB|  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  {|  }| '|' |Del |
     * |----------------------------------------------------------------|
     * |       |  A|  S|  D|  F|  G|  H|  J|  K|  L|  :|  "|Return |PgUp|
     * |----------------------------------------------------------------|
     * |        |  Z|  X|  C|  V|  B|  N|  M|  <|  >|  ?|      | Up|PgDn|
     * |----------------------------------------------------------------|
     * |    |  FN|    |                       |   |   |    |Lef|Dow|Righ|
     * `----------------------------------------------------------------'
     */
    [_SL] = LAYOUT_65_ansi(
        _______,  JP_EXLM,   JP_AT, JP_HASH,  JP_DLR, JP_PERC, JP_CIRC, JP_AMPR, JP_ASTR, JP_LPRN, JP_RPRN, JP_UNDS,    JP_PLUS,    KC_BSPC,    JP_TILD,
      S(KC_TAB),  S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T), S(KC_Y), S(KC_U), S(KC_I), S(KC_O), S(KC_P), JP_LCBR,    JP_RCBR,    JP_PIPE,     KC_DEL,
        _______,  S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G), S(KC_H), S(KC_J), S(KC_K), S(KC_L), JP_COLN, JP_DQUO,                 KC_ENT,    KC_PGUP,
        _______,           S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B), S(KC_N), S(KC_M), JP_LABK, JP_RABK, JP_QUES,    _______,   S(KC_UP), S(KC_PGDN),
        _______, MO(_FSL), _______,                           _______,                    _______, _______, _______, S(KC_LEFT), S(KC_DOWN), S(KC_RGHT)
    ),

    /* Keymap _FSL: Function + Shift Layer
     * ,----------------------------------------------------------------.
     * |    |   |   |   |   |   |   |   |   |   |   |   |   |       |   |
     * |----------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |    |
     * |----------------------------------------------------------------|
     * |      |   |   |   |   |   |<- |Dwn|Up | ->|   |   |        |    |
     * |----------------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |    |
     * |----------------------------------------------------------------|
     * |    |    |    |                       |   |   |    |   |   |    |
     * `----------------------------------------------------------------'
     */
    [_FSL] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______,    _______,    _______,  _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,    _______,    _______,  _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, S(KC_LEFT), S(KC_DOWN), S(KC_UP), S(KC_RGHT), _______, _______,          _______, _______,
        _______,          _______, _______, _______, _______,    _______,    _______,  _______,    _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                             _______, _______, _______, _______, _______, _______
    ),
};
