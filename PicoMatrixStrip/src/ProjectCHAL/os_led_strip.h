#ifndef _OS_LED_STRIP_H
#define _OS_LED_STRIP_H


#include "os_led_strip.h"
#include "global_includes.h"
//#include "NeoPixelConnect.h"

/**
 * @brief The OS LED strip structure.
 *
 * This structure represents an OS LED strip and contains a member for connecting
 * to the NeoPixel LED strip.
 */
typedef struct os_led_strip_t {
    //NeoPixelConnect *pixels; /**< The NeoPixel LED strip connection. */
    uint32_t num_pixels;
} os_led_strip_t;

extern os_led_strip_t strip_one;

/**
 * @brief Initializes the OS LED strip.
 *
 * This function initializes the OS LED strip by performing necessary setup
 * and configuring the NeoPixel LED strip connection.
 *
 * @param[in,out] strip A pointer to the OS LED strip structure.
 * @return An integer indicating the success (0) or failure (<0) of the initialization.
 */
int os_led_strip_init(os_led_strip_t *strip, uint32_t num_pixels);

/**
 * @brief Sets the color of an individual LED in the strip.
 *
 * This function sets the RGB color of the LED at the specified index in the OS LED strip.
 *
 * @param[in] strip A pointer to the OS LED strip structure.
 * @param[in] n The index of the LED to set the color for.
 * @param[in] r The red component of the RGB color (0-255).
 * @param[in] g The green component of the RGB color (0-255).
 * @param[in] b The blue component of the RGB color (0-255).
 * @return An integer indicating the success (0) or failure (<0) of the operation.
 */
int os_led_strip_set(os_led_strip_t *strip, uint32_t n, uint8_t r, uint8_t g, uint8_t b);

/**
 * @brief Sets the color of an individual LED in the strip using HSV color model.
 *
 * This function sets the color of the LED at the specified index in the OS LED strip
 * using the HSV (Hue, Saturation, Value) color model.
 *
 * @param[in] strip A pointer to the OS LED strip structure.
 * @param[in] n The index of the LED to set the color for.
 * @param[in] h The hue component of the HSV color (0-255).
 * @param[in] s The saturation component of the HSV color (0-255).
 * @param[in] v The value component of the HSV color (0-255).
 * @return An integer indicating the success (0) or failure (<0) of the operation.
 */
int os_led_strip_set_hsv(os_led_strip_t *strip, uint32_t n, uint8_t h, uint8_t s, uint8_t v);

/**
 * @brief Clears the color of all LEDs in the strip.
 *
 * This function clears the color of all LEDs in the OS LED strip, turning them off.
 *
 * @param[in] strip A pointer to the OS LED strip structure.
 * @return An integer indicating the success (0) or failure (<0) of the operation.
 */
int os_led_strip_clear(os_led_strip_t *strip);

/**
 * @brief Sets the same color for all LEDs in the strip.
 *
 * This function sets the same RGB color for all LEDs in the OS LED strip.
 *
 * @param[in] strip A pointer to the OS LED strip structure.
 * @param[in] r The red component of the RGB color (0-255).
 * @param[in] g The green component of the RGB color (0-255).
 * @param[in] b The blue component of the RGB color (0-255).
 * @return An integer indicating the success (0) or failure (<0) of the operation.
 */
int os_led_strip_set_strip(os_led_strip_t *strip, uint8_t r, uint8_t g, uint8_t b);

/**
 * @brief Sets the same color for all LEDs in the strip using HSV color model.
 *
 * This function sets the same color for all LEDs in the OS LED strip
 * using the HSV (Hue, Saturation, Value) color model.
 *
 * @param[in] strip A pointer to the OS LED strip structure.
 * @param[in] h The hue component of the HSV color (0-255).
 * @param[in] s The saturation component of the HSV color (0-255).
 * @param[in] v The value component of the HSV color (0-255).
 * @return An integer indicating the success (0) or failure (<0) of the operation.
 */
int os_led_strip_set_strip_hsv(os_led_strip_t *strip, uint8_t h, uint8_t s, uint8_t v);

#endif