/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS { GP10, GP9, GP7, GP6, GP16 }
#define MATRIX_COL_PINS { GP21, GP20, GP19, GP22, GP23, GP24, GP25, GP18, GP8, GP11, GP15, GP14, GP13, GP12, GP3 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 500
#define PERMISSIVE_HOLD

#define LED_CAPS_LOCK_PIN GP5

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

//#define DEBUG_MATRIX_SCAN_RATE

// Set USB polling rate to 1000 Hz
#define USB_POLLING_INTERVAL_MS 1

#define RGBLIGHT_LED_COUNT 20

// #define QMK_WAITING_TEST_BUSY_PIN GP8
// #define QMK_WAITING_TEST_YIELD_PIN GP9

// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// #define BACKLIGHT_PWM_DRIVER PWMD4
// #define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_B

// #define AUDIO_PIN GP16
// #define AUDIO_PWM_DRIVER PWMD0
// #define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A

// #define ADC_PIN GP26

