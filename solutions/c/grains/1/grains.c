#include "grains.h"
uint64_t square(uint8_t index) {
    uint64_t squareGrain = 1;
    if (index == 0) {
        return 0;
    }
    for (int i = 1; i < index; i++) {
        squareGrain *= 2;
    }
    return squareGrain;
}
uint64_t total(void) {
    uint64_t sum = 0;
    for (uint64_t i = 1; i <= 64; i++) {
        sum += square(i);
    }
    return sum;
}