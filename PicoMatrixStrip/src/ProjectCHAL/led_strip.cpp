#include "os_led_strip.h"
#include "ArduinoCHAL/hsv2rgb.h"

os_led_strip_t strip_one;
int os_led_strip_init(os_led_strip_t *strip, uint32_t num_pixels) {
    if (strip == NULL) {
        return OS_RET_NULL_PTR; // or any appropriate error code
    }

    // Initialize the NeoPixel strip object
    strip->pixels = new NeoPixelConnect(4, num_pixels, pio0, 0);
    strip->num_pixels = num_pixels;

    return OS_RET_OK;
}

int os_led_strip_set(os_led_strip_t *strip, uint32_t n, uint8_t r, uint8_t g, uint8_t b) {
    if (strip == NULL) {
        return OS_RET_NULL_PTR; // or any appropriate error code
    }

    // Set the color of the specified pixel
    strip->pixels->neoPixelSetValue(n, r, g, b, false);

    return OS_RET_OK;
}

int os_led_strip_set_hsv(os_led_strip_t *strip, uint32_t n, uint8_t h, uint8_t s, uint8_t v) {
    if (strip == NULL) {
        return OS_RET_NULL_PTR; // or any appropriate error code
    }

    // Set the color of the specified pixel using HSV values
    HSV hsv_col = {h, s, v};
    RGB col = HSVtoRGB(hsv_col);

    strip->pixels->neoPixelSetValue(n, col.r, col.g, col.b);

    return OS_RET_OK;
}

int os_led_strip_clear(os_led_strip_t *strip) {
    if (strip == NULL) {
        return OS_RET_NULL_PTR; // or any appropriate error code
    }

    // Clear all the pixels in the strip (set them to black)
    strip->pixels->neoPixelClear();

    return OS_RET_OK;
}

int os_led_strip_set_strip(os_led_strip_t *strip, uint8_t r, uint8_t g, uint8_t b) {
    if (strip == NULL) {
        return OS_RET_NULL_PTR; // or any appropriate error code
    }

    strip->pixels->neoPixelFill(r, g, b);
    strip->pixels->neoPixelShow();

    return OS_RET_OK;
}

int os_led_strip_set_strip_hsv(os_led_strip_t *strip, uint8_t h, uint8_t s, uint8_t v) {
    if (strip == NULL) {
        return OS_RET_NULL_PTR; // or any appropriate error code
    }

    HSV hsv_col = {h, s, v};
    RGB col = HSVtoRGB(hsv_col);

    return os_led_strip_set_strip(strip, col.r, col.g, col.b);
}

int os_led_strip_show(os_led_strip_t *strip) {
    if (strip == NULL) {
        return OS_RET_NULL_PTR; // or any appropriate error code
    }

    strip->pixels->neoPixelShow();

    return OS_RET_OK;
}