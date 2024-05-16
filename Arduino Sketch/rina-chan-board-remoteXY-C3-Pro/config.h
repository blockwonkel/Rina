#ifndef config_h
#define config_h
#include <Adafruit_GFX.h>
#include <FastLED_NeoMatrix.h>
#define FASTLED_INTERRUPT_RETRY_COUNT 1
#include <FastLED.h>

#include <LEDMatrix.h>
//
// Used by LEDMatrix


#define MATRIX_TILE_WIDTH   16 // width of EACH NEOPIXEL MATRIX (not total display)
#define MATRIX_TILE_HEIGHT  32 // height of each matrix
#define MATRIX_TILE_H       1  // number of matrices arranged horizontally
#define MATRIX_TILE_V       1  // number of matrices arranged vertically
//int MATRIX_RGB_ORDER = 4;
/*
 * 0 = RGB
 * 1 = RBG
 * 2 = GRB
 * 3 = GBR
 * 4 = BRG
 * 5 = BGR
 */

//#define BRIGHTNESS 32

// Used by NeoMatrix
#define mw (MATRIX_TILE_WIDTH *  MATRIX_TILE_H)
#define mh (MATRIX_TILE_HEIGHT * MATRIX_TILE_V)
#define NUMMATRIX (mw*mh)

// Compat for some other demos
#define NUM_LEDS NUMMATRIX
#define MATRIX_HEIGHT mh
#define MATRIX_WIDTH mw


#endif
