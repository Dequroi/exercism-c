#include "dnd_character.h"

#include <stdlib.h>

/*
int rand(void);
// Returns a pseudo-random int between 0 and RAND_max
// Use modulo to limit rnage: rand() % 6 + 1 -> 1-6 

void srand(unsigned int seed);
// Seeds the random num gen
// Call once at program start
*/

#include <time.h>
/*
time_t time(time_t *t);
// Return current time as a number
// Pass NULL as arg, use to seed srand

*/


// Roll 4 6-sided die, record sum of 3 largest dice
int ability() {
    // Need to use random functionality and seed a number
    // Number will be seeded from time
    srand(time(NULL));

    // Create a stack buffer for storing the 4 rolls!!
    int rolls[4];
    
    for (int i = 0; i < 4; i++) {
    rolls[i] = rand() % 6 + 1;
    }

    // Find min
    int min = rolls[0];
    for (int i = 1; i < 4; i++) {
        if (rolls[i] < min) min = rolls[i];
    }

    // Sum all and subtract the minimum
    int sum = 0;
    for (int i = 0; i < 4; i++) sum += rolls[i];
    // Provides sum without the minimum
    return sum - min;

}


// Take a score (the consitution) and return HP
int modifier(int score) {
    // Change score into the constitution modifier with the formula
    // Must round down!
    score -= 10;

    // THis fixes the rounding of negative numbers so -7/2 rounds to -4, not -3
    if (score < 0 && score % 2 != 0) return (score / 2) - 1;
    return score / 2;
    // HP + Char Modif = Init HP

    // FOR FUTURE REFERENCE!!!
    // return (int)floor((score - 10) / 2.0);
    // Use the floor function to fix the rounding
}

// Call ability() 6 times to fill struct, and modifier() for HP
dnd_character_t make_dnd_character() {
    dnd_character_t character;
    
    int scores[6];
    for (int i = 0; i < 6; i++) scores[i] = ability();
    character.strength     = scores[0];
    character.dexterity    = scores[1];
    character.constitution = scores[2];
    character.intelligence = scores[3];
    character.wisdom       = scores[4];
    character.charisma     = scores[5];
    character.hitpoints    = 10 + modifier(scores[2]);

    return character;
}


// From testing file:
// const dnd_character_t character = make_dnd_character();

// character.strenght --> character is a struct variable
// character->strength --> used when character is a pointer to a struct
//     character.strength = ability, can manually assign to the fields or create a new temporary array

//     modifier(character.constitution);