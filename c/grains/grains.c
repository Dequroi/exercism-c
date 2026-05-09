#include "grains.h"

// Calculate number of grains of wheat on a chess board
// 1. Number of grains on a square doubles for each increase --> 2. Total num of grains on board


// Grains at a square.
// Idea 1: While Loop
// uint64_t square(uint8_t index) {
//
//   // Handle invalid cases!!
//   if (index < 1 || index > 64) {
//     return (uin64_t) 0;
//   }
//
//   uint64_t grains = 1; // Sq1 starts at 1
//   uint64_t curr = 1; // Sq1 starts at 1
//   while (curr < index) {
//     grains *= 2;
//     curr++;
//   }
//   return grains;
// }

// #include <math.h>
// 2: Power
// Pattern: G1: 1, G2: 2, G3: 4
// This approach doesn't work because power returns a double and will truncate the needed numbers 
// uint64_t square(uint8_t index) {
// {
//
//   // Handle invalid cases!!
//   if (index < 1 || index > 64) {
//     return (uin64_t) 0;
//   }
//
//   // pow(x, y) -- x^y
//   uint64_t grains = (uint64_t) pow(2, index - 1);
//   return grains;
// }

// Most efficient approach
// 3: Bitshifting
uint64_t square(uint8_t index) {

  // Handle invalid cases!!
  if (index < 1 || index > 64) {
    return 0;
  }

  // Left Shifting for Unsigned 64 bit int!
  // Equivalent to multiplication by 2
  return 1ULL << (index -1);
}

// 4: Recursion
// Pattern: G1: 1, G2: 2, G3: 4
// uint64_t square(uint8_t index) {
// {
//
//   // Handle invalid cases!!
//   if (index < 1 || index > 64) {
//     return (uin64_t) 0;
//   }
//   if (index == 1) return 1;
//
//   return 2*square(index - 1);
//
// }

// The size of the chess board is constant 
uint64_t total(void) {
  // Incorrect: Cannot shift 64 bit long by 64.
  // return 2*square(64)  - 1;

  // bitwise NOT - flip all 64 zeros.
  return ~0ULL;
}
