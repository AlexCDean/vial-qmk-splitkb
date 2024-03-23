/* SPDX-License-Identifier: GPL-2.0-or-later */
/* Copyright 2023 splitkb.com <support@splitkb.com> */

#pragma once

#define VIAL_KEYBOARD_UID {0x0F, 0xF9, 0x13, 0x6C, 0x1D, 0xBF, 0x7D, 0xA6}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 1 }

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// EC11K encoders have a different resolution than other EC11 encoders.
// When using the default resolution of 4, if you notice your encoder skipping
// every other tick, lower the resolution to 2.
#define ENCODER_RESOLUTION 2
// Double tap left shift to turn on caps word.
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define TAPPING_TERM 125
