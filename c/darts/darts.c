#include "darts.h"
#include <stdint.h>
//  Given real point, calculate correct score earned by dart

// If outside target, 0 pts
// If outer middle, 1 pts
// Middle of target, 5 pts
// Inner Circle, 10 pts

// Dimensions of circle?
// Outer circle: Radius, r = 10
// Middle, r = 5
// Inner, r = 1

// 1^2 = 1, 5^2 = 25, 10^2 = 100
uint8_t score(coordinate_t pos) {

  // Mistake 1, created a square boundary
  // if (landing_pos.x > 10 || landing_pos.y > 10) {
  //   return 0;
  // }
  
  // Avoid using square roots if possible!

  float distance_sq = (pos.x * pos.x) + (pos.y * pos.y);

  if (distance_sq <= 1) return 10;
  if (distance_sq <= 25) return 5;
  if (distance_sq <= 100) return 1;
  return 0;
}


// Note: C assumes every literal has a default type!
//  10 --> int
//  1.0 --> 64 bit Double
//  1.0F --> 32 bit float
