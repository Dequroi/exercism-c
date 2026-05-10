#include "hamming.h"
// Calculate hamming distance
// Find at least 7 differences in the string
// How to find strlen without strlen in <string.h>
// Can just pointers be used?

// Need to use string compare or something like that 
// lhs[i] == *(lhs + i) == i[lhs]
// *lhs - direct pointer dereference. current character
// lhs* = invalid syntax
// Double quotes is for strings
// Single quotes for characters! Use '\0'

int compute(const char *lhs, const char *rhs) {
  // First check if both strings are valid (Equal length && Not empty)
  // Return -1 only when the lengths are unequal
  int count = 0;

  while (*lhs != '\0' && *rhs != '\0') {
    if (*lhs == *rhs) {
      count++;
    }
    lhs++;
    rhs++;
  }

  if (*lhs != '\0' || *rhs != '\0') {
    return -1;
  }

  // Returns number of character differences
  return count;

}

// Note: Use ! (Logical Not) as a shorthand for Null Check
// (lhs == NULL) || (lhs == 0) || (!lhs)

// Shorthand to find length instead of strlen
// int len = 0; while (lhs[len] != '\0') len++;

// Inefficient Method
// #include <string.h>
//
// int compute(const char *lhs, const char *rhs) {
//     // ... length checks as before ...
//
//     int distance = 0;
//     for (size_t i = 0; i < len_lhs; i++) {
//         // strncmp returns 0 if the strings match
//         // We compare 1 character starting at the address of lhs[i]
//         if (strncmp(&lhs[i], &rhs[i], 1) != 0) {
//             distance++;
//         }
//     }
//     return distance;
// }
