#include "high_scores.h"
// Includes are found in the header

// Build high score for Frogger!


/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len) {
    // return *(scores + scores_len * sizeof(size_t)); WRONG
    // Goes to the last index and returns the value of the memory at that addr
    // pointer arithmetic in C already accounts for the type size, so you don't multiply by sizeof(size_t)

    return *(scores + scores_len - 1);
    // return scores[scores_len - 1]
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len) {
    int32_t best = scores[0];
    for (size_t i = 0; i < scores_len; i++) {
        if (scores[i] > best) best = scores[i]; 
    }
    return best;
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output) {

    // Cap at 3, but if smaller, use score_len
    size_t count = scores_len < 3 ? scores_len : 3;

    // Copy scores into temp buffer to avoid mutating original scores array
    int32_t temp[scores_len];
    for (size_t i = 0; i < scores_len; i++) temp[i] = scores[i];

    for (size_t i = 0; i < count; i++) {
        // Find highest score in temp
        output[i] = personal_best(temp, scores_len);

        // Find and nullify (make -1) that score so next call gets the next best
        // Must break to ensure only one score is removed at a time
        for (size_t j = 0; j < scores_len; j++) {
            if (temp[j] == output[i]) {
                temp[j] = -1; 
                break;
            }
        }
    }
    return count;

}
