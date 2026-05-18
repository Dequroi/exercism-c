#include "two_fer.h"

// Determine what you will say as you give an extra cookie

// Known names are the testing file
// Just Alice and Bob

// Might want to use string compare for this

// buffer is where result is written, anme is either a string or empty
// What function allows 

// #include <string.h>
// strcmp()
// strcmp(const char * str1, const char * str2);
// compares 2 strings and returns an int value. + if first is greater, - if second greater, 0 if equal.

#include <stdio.h>
// to copy a string into a buffer, use sprintf!!

// This hard code approach would pass the test_two_fer but wouldn't work online for exercism

// void two_fer(char *buffer, const char *name) {
    
//     // Extra condition as a reminder for how to directly handle empty case
//     if (!name) {

//         // sprintf(buffer, "format string", args....) - similar to printf
//         // buffer is where to write the string into
//         sprintf(buffer, "One for you, one for me.");
//     }

//     else if (!(strcmp("Alice", name))) {
//         sprintf(buffer, "One for Alice, one for me.");
//     }

//     else if (!(strcmp("Bob", name))) {
//         sprintf(buffer, "One for Bob, one for me.");
//     }
    
//     else {
//         sprintf(buffer, "One for you, one for me.");
//     }
// }

// Switch case w/ Enum does not work because you can't hard code all the possible names

////////////////////////////////////////

// Ternary Syntax
// condition ? value if true : value if false
// true for all non-Null value, false otherwise

// Alternative Implementation w/ Ternary

// void two_fer(char *buffer, const char *name) {

//     // Rewrite the callee variable depending on the value need
//     // However, cannot rewrite for this problem due to the const
//     const char *person = name ? name : "you";
//     sprintf(buffer, "One for %s, one for me.", person);

// }


void two_fer(char *buffer, const char *name) {

    if (name) {
        sprintf(buffer, "One for %s, one for me.", name);
    }
    else {
        sprintf(buffer, "One for you, one for me.");
    }
}