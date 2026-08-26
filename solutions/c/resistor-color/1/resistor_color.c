#include "resistor_color.h"

static resistor_band_t color_list[] = {
    BLACK,
    BROWN,
    RED,
    ORANGE, 
    YELLOW, 
    GREEN, 
    BLUE, 
    VIOLET, 
    GREY, 
    WHITE
};

uint16_t color_code(resistor_band_t color) {
    return (uint16_t)color;
}

const resistor_band_t *colors(void) {
    return color_list;
}