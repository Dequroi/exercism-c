#include "space_age.h"
#include <stdint.h>
// Calculate how old someone would be on a planet in the Solar System
// Need to switch between the ratios. Index of enum matches to a look up table

float age(planet_t planet, int64_t seconds) {
  float const orbital_ratio[] = {
    0.2408467,   // MERCURY
    0.61519726,  // VENUS
    1.0,         // EARTH
    1.8808158,   // MARS
    11.862615,   // JUPITER
    29.447498,   // SATURN
    84.016846,   // URANUS
    164.79132    // NEPTUNE
  };
  float earth_year = seconds / 31557600.0f;
  return earth_year / orbital_ratio[planet];
}
