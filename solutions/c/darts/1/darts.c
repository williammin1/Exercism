#include "darts.h"

uint8_t score(coordinate_t landing_position) {
    double squared_distance = landing_position.x * landing_position.x + landing_position.y * landing_position.y;
    if (squared_distance <= 1)
        return 10;
    else if (squared_distance <= 25)
        return 5;
    else if (squared_distance <= 100)
        return 1;
    else
        return 0;
}