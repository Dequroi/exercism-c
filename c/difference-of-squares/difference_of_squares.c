#include "difference_of_squares.h"

// Difference between square of sum and sum of squares of first N natural numbers
// Must use <math.h> to have the power function
#include <math.h>

// Prompt says starting at natural numbers!
// Exclude 0 and start from 1!!

unsigned int sum_of_squares(unsigned int number) {
  unsigned int sum = 0; 
  for (unsigned int i = 1; i <= number; i++) {
      sum += (unsigned int) pow(i, 2);
  }
  return sum;
}

unsigned int square_of_sum(unsigned int number) {
  unsigned int sum = 0; 
  for (unsigned int i = 1; i <= number; i++) {
      sum += i;
  }
  return (unsigned int) pow(sum, 2);
}

unsigned int difference_of_squares(unsigned int number) {
  return square_of_sum(number) - sum_of_squares(number);
}

