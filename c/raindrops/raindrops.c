#include "raindrops.h"

// Given a number, convert into a raindrop sound
// Switch won't work cleanly with division, use if/else

#include <string.h>
// strcat()	Appends one string to the end of another
// strcat(void *destination, void *source), returns a char type pointer to destination

#include <stdio.h>
// sprintf()	Writes a formatted string into a char array
// sprintf(char * destination, const char * format, arg1, arg2...);
// REturns an int value w/ number of characters that were written to the array

void convert(char result[], int drops) {
    
    if (!(drops % 3)) {
        strcat(result, "Pling");
    }
    if (!(drops % 5)) {
        strcat(result, "Plang");
    }    
    if (!(drops % 7)) {
        strcat(result, "Plong");
    }
    
    // Check if any matches happened at all
    if (*result == '\0'){
        // Return the number into result
        // Use sprintf
        sprintf(result, "%d", drops);
    }

    // Alternative
    // if (result[0] == '\0'){
    //     sprintf(result, "%d", drops);
    // }    

}