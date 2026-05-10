#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H

#include <stdint.h>
// Create resistor_band_t struct 

typedef enum {
  BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE
} resistor_band_t;

// Based on the testing file, output is uint16_t
// Takes in a literal array
uint16_t color_code(resistor_band_t *bands);
// Reminder
// uint16_t* returns a pointer to array of shorts
// *uint16_t returns the dereferenced value from the addr
#endif
