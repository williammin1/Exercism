#include "space_age.h"

#define EARTH_YEAR_SECONDS 31557600.0

static const double orbital_periods[] = {
    0.2408467,   // MERCURY
    0.61519726,  // VENUS
    1.0,         // EARTH
    1.8808158,   // MARS
    11.862615,   // JUPITER
    29.447498,   // SATURN
    84.016846,   // URANUS
    164.79132    // NEPTUNE
};

#define NUM_PLANETS (sizeof(orbital_periods) / sizeof(orbital_periods[0]))

float age(planet_t planet, int64_t seconds) {
    if ((unsigned)planet >= NUM_PLANETS) {
        return -1;
    }
    return seconds / EARTH_YEAR_SECONDS / orbital_periods[planet];
}