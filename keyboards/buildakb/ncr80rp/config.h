// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS { GP16, GP14, GP13, GP12, GP11, GP10 }
#define MATRIX_COL_PINS { GP17, GP18, GP19, GP20, GP21, GP22, GP26, GP15, GP9, GP8, GP7, GP6, GP5, GP4, GP0, GP1, GP2 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define LED_NUM_LOCK_PIN GP28
#define LED_CAPS_LOCK_PIN GP27
#define LED_SCROLL_LOCK_PIN GP3

