#include "perfect_numbers.h"

// aliquot sum is defined as the sum of the factors of a number not including the number itself.
// Only for positive numbers!
// FIgure out an efficient way to find the factors of a number

kind classify_number(int number) {

    if (number <= 0) {
        return ERROR;
    }

    // O(n) run time to find factors
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Perfect
    if (number == sum) {
        return PERFECT_NUMBER;
    }

    // Abundant
    if (number < sum) {
        return ABUNDANT_NUMBER;
    }

    // Deficient
    if (number > sum) {
        return DEFICIENT_NUMBER;
    }

    return ERROR;
}