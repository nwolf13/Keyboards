/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Vial-specific definitions. */
#define VIAL_KEYBOARD_UID {0xEB, 0xA1, 0xB0, 0xE6, 0xA1, 0xB3, 0x96, 0xFB}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 12 }

/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
