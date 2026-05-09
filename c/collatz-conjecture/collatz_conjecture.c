#include "collatz_conjecture.h"

// Collatz Conjecture: Can every number find its way to 1?
// For positive integer, if even, divide by 2. If odd, multiply by 3 & add 1.
// Repeat steps indefinitely with result until number is one
// Given a positive integer, return the number of steps it takes to reach 1 according to the rules of the Collatz Conjecture.


int steps(int start) {
  // Return error value of -1 if non-positive value
  if (start <= 0) {
    return ERROR_VALUE; 
  }

  int count = 0;

  // Must use if else to make them mutually exclusive (cannot run at same time)
  while (start != 1) {
    if (start % 2 == 0) {
      start = start / 2;
    }
    else if (start % 2 == 1) {
      start *= 3;
      start += 1;
    }
    count++;
  }
  return count;
}
