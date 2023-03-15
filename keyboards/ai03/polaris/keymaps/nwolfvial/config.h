/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Vial-specific definitions. */
#define VIAL_KEYBOARD_UID {0x9D, 0x3B, 0x74, 0x74, 0x8B, 0xC8, 0x8E, 0x91}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }


// place overrides here
#define RSPC_KEYS KC_RSFT, KC_LSFT, KC_NUBS

/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
