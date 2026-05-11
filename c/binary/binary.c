#include "binary.h"
#include <math.h>

// Convert binary numbers represented as strings to a decimal equivalent
// Rightmost digit: 2^0 * 1
// Use pow(x,y) from the math.h library to compute power
int convert(const char *input) {
  if (!input) {
    return INVALID;
  }

  // Instead of using strlen
  int len = 0;
  for (int j = 0; input[j] != '\0';j++) {
    len++;
  }

  int value = 0;
  int i = 0;
  // The loop should run while the input is still inside the string
  const char *start = input; // Memory address of the starting positition. Compare the pointer values
  input += len - 1; // Character just before null terminator
  
  while (input >= start) {
    if (*input == '1'){
      value += (int) pow(2, i); // Power returns a double so cast it to an int
    }
    else if (*input == '0') {

    }
    else {
      // Unknown character
      return INVALID;
    }
    i++;
    input--; // Switch traversal
  }
  return value;
}


// Ctrl + R - Redo in NeoVim

// Original Incorrect solution!
// Wrong because i traverses left to right but left most is the highest value.
// Fixes: 
// Switch the traversal: right to left

// Convert binary numbers represented as strings to a decimal equivalent
// Rightmost digit: 2^0 * 1
// Use pow(x,y) from the math.h library to compute power
// int convert(const char *input) {
//   if (!input) {
//     return INVALID;
//   }
//   int value = 0;
//   int i = 0;
//   while (*input != '\0') {
//     if (*input == '0') {
//       value += 0;
//     }
//     else if (*input == '1'){
//       value += pow(2, i);
//     }
//     else {
//       // Unknown character
//       return INVALID;
//     }
//     i++;
//     input++;
//   }
//   return value;
// }
