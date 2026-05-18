#include "pangram.h"

// Sentence using every letter of the alphabet at least once
// Case insensitive

// Hint!
// Don't need to hardcode all 26 letters
// ASCII values for a-z are (97-122)
// Check if the ASCII value for a character falls in that range
// Remember, chars are just ASCII values!!

bool is_pangram(const char *sentence) {

    if (!sentence) return false;

    // Keep track of the values I've seen!
    bool seen[26] = {false};

    // Loop through sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        // Account for signed chars w/ negative values via cast
        char c = tolower((unsigned char)sentence[i]);
        if (c >= 'a' && c <= 'z') {
            seen[c - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!seen[i]) return false;
    }
    return true;
}