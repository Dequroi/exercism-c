#include "eliuds_eggs.h"

// Show the actual number of eggs in the coop
// Instruction: Count # of 1 bits in binary representation

// Last bit of a number is 1 if odd, 0 if even
// Position encoding: 


unsigned int egg_count(unsigned int eggs) {
    unsigned int result = 0;
    
    while (eggs != 0) {
        if (eggs % 2 == 1) {
            result++;
        }
        eggs = eggs >> 1;
        // eggs >>= 1; also works
    }
    return result;
}
