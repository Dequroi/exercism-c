#include "rna_transcription.h"
#include <stdlib.h> // Required to use malloc
#include <string.h> // for strlen()

// This solution must use malloc because a local stack string would create a dangling pointer that would be passed back into the caller 

// Soution 1: Uses switch case and string length
char *to_rna(const char *dna) {
  if (!dna) return NULL;
  char* rna = malloc(strlen(dna) + 1); // Allocate an extra character for the null delimitter
  // strlen() returns size_t, an unsigned integer, so it must be used for best practice
  // Prevents signed int vs. unsigned int comparison
  if (!rna) return NULL;
  
  // Equally valid run condition
  for (size_t i = 0; dna[i] != '\0'; i++) {

  // Use a switch case to properly map the nucleotides
  switch (dna[i]) {
      case 'G': rna[i] = 'C'; break;
      case 'C': rna[i] = 'G'; break;
      case 'T': rna[i] = 'A'; break;
      case 'A': rna[i] = 'U'; break;
      default: free(rna); return NULL; // review necessity of this free
      // The default case is used for when an unrecognized case is in the string to prevent a memory leak 
    }
  }
  rna[strlen(dna)] = '\0';
  // Example: malloc(3), loop fills 0 & 1. rna[2] = '\0'
  return rna;
}

// Solution 2

// char *to_rna(const char *dna) {
//   if (!dna) return NULL;
//
//   int len = 0;
//   // dna != '\0' is the pointer address null?
//   // *dna != '\0' is the character at that addr null?
//   const char *dna2 = dna;
//   // dna2 is a temporary copy of the memory addr! character
//   while (*dna2 != '\0') { 
//     len++;
//     dna2++;
//   }
//   char* rna = malloc(len + 1); // Allocate an extra character for the null delimitter
//   // strlen() returns size_t, an unsigned integer, so it must be used for best practice
//   // Prevents signed int vs. unsigned int comparison
//   if (!rna) return NULL;
//
//   // Equally valid run condition
//   for (int i = 0; i < len; i++) {
//
//   // Use a switch case to properly map the nucleotides
//   switch (dna[i]) {
//       case 'G': rna[i] = 'C'; break;
//       case 'C': rna[i] = 'G'; break;
//       case 'T': rna[i] = 'A'; break;
//       case 'A': rna[i] = 'U'; break;
//       default: free(rna); return NULL; // review necessity of this free
//       // The default case is used for when an unrecognized case is in the string to prevent a memory leak 
//     }
//   }
//   rna[len] = '\0';
//   // Example: malloc(3), loop fills 0 & 1. rna[2] = '\0'
//   return rna;
// }
