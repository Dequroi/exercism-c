#ifndef HIGH_SCORES_H
#define HIGH_SCORES_H

#include <stddef.h>
// size_t - unsigned integer

#include <stdint.h>
// in32_t - 32-bit signed integer

// #include <string.h>
/* 
Use for Main C File!
void *memcpy(void *dest, const void *src, size_t n)
// Copies n bytes from src to dest

Example
memcpy(output, scores, 3 * sizeof(int32_t)) → copies 3 scores
Not needed for this problem
*/

/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len);

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len);

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output);

#endif
