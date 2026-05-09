#include "resistor_color.h"

// Function Requirements:
// Looks up value associated with color band on resistor
// Lists the different band colors

// This exercise makes use of structs!! (Wrong)
// Header is empty so make sure to update
// Struct: Groups different pieces of data together
// Enum: List of named integer constants. C auto assinged 0, 1, 2 etc for each field
// Interfaces: Call functoin that the .c file implements

// Returns numerical representation of the color
int color_code(resistor_band_t color) {
  return color;
}

// Review Arrays!!
// Rule of thumb: 
// Fixed, constant data that must outlast functoin --> static
// Set to const so this pointer's contents cannot be modified later
const resistor_band_t* colors(void) {
  static resistor_band_t color_array[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
  return color_array;
}

// Use <stdlib.h>!! Standard library for malloc()
// Dynamic or size-unknown data --> malloc + caller or someone has to free
// #include <stdlib.h>
// uint8_t* colors(void) {
//     uint8_t* color_array = malloc(10 * sizeof(uint8_t))
//     return color_array;
// }

// CONCEPT MIX UP: Understand the difference between dereference operator and type declaration
// uint8_t* colors(void)  // return type is a pointer (an address)
// *color_array           // dereference: give me the value AT that address
