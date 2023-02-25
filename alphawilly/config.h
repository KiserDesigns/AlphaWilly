/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Comment or uncomment the next line to change the orientation of the pro-micro */
// #define PRO_MICRO_FLIPPED

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B44
#define PRODUCT_ID      0x4157
#define DEVICE_VER      0x0001
#define MANUFACTURER    Kiser Designs
#define PRODUCT         Alpha Willy

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

#define MATRIX_ROW_PINS { GP14, GP13, GP0, GP12 }
#define MATRIX_COL_PINS { GP1, GP2, GP3, GP4, GP5, GP6, GP8, GP9, GP10, GP11 }

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
