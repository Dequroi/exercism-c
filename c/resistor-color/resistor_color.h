#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H
// Don't forget to add the integer for the 1 byte (8 bit)
// #include <stdint.h>

typedef enum {
  BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE
} resistor_band_t;

// I: Color Band Number
int color_code(resistor_band_t color);

// Returns a list of the band colors - 8 bit number
const resistor_band_t* colors(void);

#endif
