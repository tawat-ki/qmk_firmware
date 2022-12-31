
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_LOWER (1 << 1)
#define L_RAISE (1 << 2)
#define L_ADJUST (1 << 3)
#define L_ADJUST_TRI (L_ADJUST | L_RAISE | L_LOWER)

char layer_state_str[24];

//const char *read_layer_state(void) {
//  switch (layer_state)
//  {
//  case L_BASE:
//    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
//    break;
//  case L_RAISE:
//    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
//    break;
//  case L_LOWER:
//    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
//    break;
//  case L_ADJUST:
//  case L_ADJUST_TRI:
//    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
//    break;
//  default:
//    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%u", layer_state);
//  }
//
//  return layer_state_str;
//}
const char *read_layer_state(void) {
  switch (layer_state)
  {
  case 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
    break;
  case 0:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
    break;
  case 3:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: FN");
    break;
  case 2:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: FN");
    break;
  case 4:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Mouse");
    break;
  case 8:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: DOTA2");
    break;
  case 16:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: DVORAK");
    break;
  case 48:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: FN_DVORAK");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%u", layer_state);
  }
  return layer_state_str;
}
