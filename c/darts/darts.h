#ifndef DARTS_H
#define DARTS_H

#include <stdint.h> // Use to access uint_8

// Create the struct using typedef so I can type coordinate _t X in the future
// Use the float data type to get a 32 bit decimal number
typedef struct {
  float x;
  float y;
} coordinate_t;

// This function and field definition was found inside test_darts.c
uint8_t score(coordinate_t landing_pos);

#endif
