// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

#ifndef BACKLIGHT_LEVELS
#    define BACKLIGHT_LEVELS 5
#endif // BACKLIGHT_LEVELS

#ifndef BACKLIGHT_PIN
#    define BACKLIGHT_PIN B6
#endif // BACKLIGHT_PIN

#ifndef BOOTMAGIC_LITE_COLUMN
#    define BOOTMAGIC_LITE_COLUMN 0
#endif // BOOTMAGIC_LITE_COLUMN

#ifndef BOOTMAGIC_LITE_ROW
#    define BOOTMAGIC_LITE_ROW 5
#endif // BOOTMAGIC_LITE_ROW

#ifndef LED_CAPS_LOCK_PIN
#    define LED_CAPS_LOCK_PIN C7
#endif // LED_CAPS_LOCK_PIN

#ifndef LED_NUM_LOCK_PIN
#    define LED_NUM_LOCK_PIN C6
#endif // LED_NUM_LOCK_PIN

#ifndef LED_SCROLL_LOCK_PIN
#    define LED_SCROLL_LOCK_PIN B5
#endif // LED_SCROLL_LOCK_PIN

#ifndef LED_PIN_ON_STATE
#    define LED_PIN_ON_STATE 0
#endif // LED_PIN_ON_STATE

#ifndef DIODE_DIRECTION
#    define DIODE_DIRECTION ROW2COL
#endif // DIODE_DIRECTION

#ifndef RGBLED_NUM
#    define RGBLED_NUM 18
#endif // RGBLED_NUM

#ifndef RGBLIGHT_SAT_STEP
#    define RGBLIGHT_SAT_STEP 8
#endif // RGBLIGHT_SAT_STEP

#ifndef RGBLIGHT_VAL_STEP
#    define RGBLIGHT_VAL_STEP 8
#endif // RGBLIGHT_VAL_STEP

#ifndef WS2812_DI_PIN
#    define WS2812_DI_PIN E2
#endif // WS2812_DI_PIN

#ifndef LAYOUT
#    define LAYOUT LAYOUT_all
#endif // LAYOUT

#ifndef LAYOUT_hotswap
#    define LAYOUT_hotswap LAYOUT_96_ansi
#endif // LAYOUT_hotswap

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0001
#endif // DEVICE_VER

#ifndef MANUFACTURER
#    define MANUFACTURER "YMDK"
#endif // MANUFACTURER

#ifndef PRODUCT
#    define PRODUCT "Melody96"
#endif // PRODUCT

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0x4D96
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0x594D
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#    define MATRIX_COLS 9
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 12
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { D0, D1, D2, D3, D5, D4, D6, D7, B4 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { B7, B3, B2, B1, B0, E6, F0, F1, F4, F5, F6, F7 }
#endif // MATRIX_ROW_PINS

#ifndef RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_BREATHING
#endif // RGBLIGHT_EFFECT_BREATHING

#ifndef RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#endif // RGBLIGHT_EFFECT_RAINBOW_MOOD

#ifndef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#endif // RGBLIGHT_EFFECT_RAINBOW_SWIRL

#ifndef RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_SNAKE
#endif // RGBLIGHT_EFFECT_SNAKE

#ifndef RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_KNIGHT
#endif // RGBLIGHT_EFFECT_KNIGHT

#ifndef RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_CHRISTMAS
#endif // RGBLIGHT_EFFECT_CHRISTMAS

#ifndef RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#endif // RGBLIGHT_EFFECT_STATIC_GRADIENT

#ifndef RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_RGB_TEST
#endif // RGBLIGHT_EFFECT_RGB_TEST

#ifndef RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_ALTERNATING
#endif // RGBLIGHT_EFFECT_ALTERNATING

#ifndef RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_EFFECT_TWINKLE
#endif // RGBLIGHT_EFFECT_TWINKLE
