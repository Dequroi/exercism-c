#include "resistor_color_duo.h"
#include <stdint.h>

uint16_t color_code(resistor_band_t *bands) {
  // 10s place, first color, bands[0]

  // 1s place, second color, bands[1]

  uint16_t resistance = (10*bands[0]) + bands[1];
  return resistance;
}

