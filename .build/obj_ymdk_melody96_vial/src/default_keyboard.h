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
#include "quantum.h"

// Layout content

#define LAYOUT_all(k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I, kBI, kBH, kBF, kBE, kBD, kBG, kBC, kBB, kBA, k6D, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, kAI, kAH, kAF, kAE, kAD, kAG, kAC, kAB, kAA, k6E, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k9I, k9H, k9F, k9E, k9D, k9G, k9C, k9B, k9A, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k8I, k8H, k8F, k8E, k8G, k8C, k8B, k8A, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k7I, k7H, k7F, k7E, k7D, k7G, k7C, k7B, k7A, k0A, k0B, k0C, k0G, k0I, k0H, k0F, k0E, k0D, k6G, k6C, k6B, k6A) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I}, \
	 {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I}, \
	 {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I}, \
	 {k6A, k6B, k6C, k6D, k6E, KC_NO, k6G, KC_NO, KC_NO}, \
	 {k7A, k7B, k7C, k7D, k7E, k7F, k7G, k7H, k7I}, \
	 {k8A, k8B, k8C, KC_NO, k8E, k8F, k8G, k8H, k8I}, \
	 {k9A, k9B, k9C, k9D, k9E, k9F, k9G, k9H, k9I}, \
	 {kAA, kAB, kAC, kAD, kAE, kAF, kAG, kAH, kAI}, \
	 {kBA, kBB, kBC, kBD, kBE, kBF, kBG, kBH, kBI} \
}

#define LAYOUT_96_ansi(k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I, kBI, kBH, kBF, kBE, kBD, kBG, kBC, kBB, kBA, k6D, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, kAI, kAH, kAF, kAE, kAG, kAC, kAB, kAA, k6E, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k9I, k9H, k9F, k9E, k9D, k9G, k9C, k9B, k8A, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k8I, k8H, k8F, k8E, k8G, k8C, k8B, k1A, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k7I, k7H, k7F, k7E, k7D, k7G, k7C, k7B, k6A, k0A, k0B, k0C, k0G, k0I, k0H, k0F, k0E, k0D, k6G, k6C, k6B) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I}, \
	 {k1A, KC_NO, k1C, k1D, k1E, k1F, k1G, k1H, k1I}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I}, \
	 {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I}, \
	 {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I}, \
	 {k6A, k6B, k6C, k6D, k6E, KC_NO, k6G, KC_NO, KC_NO}, \
	 {KC_NO, k7B, k7C, k7D, k7E, k7F, k7G, k7H, k7I}, \
	 {k8A, k8B, k8C, KC_NO, k8E, k8F, k8G, k8H, k8I}, \
	 {KC_NO, k9B, k9C, k9D, k9E, k9F, k9G, k9H, k9I}, \
	 {kAA, kAB, kAC, KC_NO, kAE, kAF, kAG, kAH, kAI}, \
	 {kBA, kBB, kBC, kBD, kBE, kBF, kBG, kBH, kBI} \
}

#define LAYOUT_96_ansi_splitbs(k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I, kBI, kBH, kBF, kBE, kBD, kBG, kBC, kBB, kBA, k6D, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, kAI, kAH, kAF, kAE, kAD, kAG, kAC, kAB, kAA, k6E, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k9I, k9H, k9F, k9E, k9D, k9G, k9C, k9B, k8A, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k8I, k8H, k8F, k8E, k8G, k8C, k8B, k1A, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k7I, k7H, k7F, k7E, k7D, k7G, k7C, k7B, k6A, k0A, k0B, k0C, k0G, k0I, k0H, k0F, k0E, k0D, k6G, k6C, k6B) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I}, \
	 {k1A, KC_NO, k1C, k1D, k1E, k1F, k1G, k1H, k1I}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I}, \
	 {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I}, \
	 {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I}, \
	 {k6A, k6B, k6C, k6D, k6E, KC_NO, k6G, KC_NO, KC_NO}, \
	 {KC_NO, k7B, k7C, k7D, k7E, k7F, k7G, k7H, k7I}, \
	 {k8A, k8B, k8C, KC_NO, k8E, k8F, k8G, k8H, k8I}, \
	 {KC_NO, k9B, k9C, k9D, k9E, k9F, k9G, k9H, k9I}, \
	 {kAA, kAB, kAC, kAD, kAE, kAF, kAG, kAH, kAI}, \
	 {kBA, kBB, kBC, kBD, kBE, kBF, kBG, kBH, kBI} \
}

#define LAYOUT_96_iso(k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I, kBI, kBH, kBF, kBE, kBD, kBG, kBC, kBB, kBA, k6D, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, kAI, kAH, kAF, kAE, kAG, kAC, kAB, kAA, k6E, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k9I, k9H, k9F, k9E, k9G, k9C, k9B, k8A, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k8I, k8H, k8F, k8E, k9D, k8G, k8C, k8B, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k7I, k7H, k7F, k7E, k7D, k7G, k7C, k7B, k6A, k0A, k0B, k0C, k0G, k0I, k0H, k0F, k0E, k0D, k6G, k6C, k6B) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I}, \
	 {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I}, \
	 {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I}, \
	 {k6A, k6B, k6C, k6D, k6E, KC_NO, k6G, KC_NO, KC_NO}, \
	 {KC_NO, k7B, k7C, k7D, k7E, k7F, k7G, k7H, k7I}, \
	 {k8A, k8B, k8C, KC_NO, k8E, k8F, k8G, k8H, k8I}, \
	 {KC_NO, k9B, k9C, k9D, k9E, k9F, k9G, k9H, k9I}, \
	 {kAA, kAB, kAC, KC_NO, kAE, kAF, kAG, kAH, kAI}, \
	 {kBA, kBB, kBC, kBD, kBE, kBF, kBG, kBH, kBI} \
}

#define LAYOUT_96_iso_splitbs(k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I, kBI, kBH, kBF, kBE, kBD, kBG, kBC, kBB, kBA, k6D, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, kAI, kAH, kAF, kAE, kAD, kAG, kAC, kAB, kAA, k6E, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k9I, k9H, k9F, k9E, k9G, k9C, k9B, k8A, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k8I, k8H, k8F, k8E, k9D, k8G, k8C, k8B, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k7I, k7H, k7F, k7E, k7D, k7G, k7C, k7B, k6A, k0A, k0B, k0C, k0G, k0I, k0H, k0F, k0E, k0D, k6G, k6C, k6B) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I}, \
	 {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I}, \
	 {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I}, \
	 {k6A, k6B, k6C, k6D, k6E, KC_NO, k6G, KC_NO, KC_NO}, \
	 {KC_NO, k7B, k7C, k7D, k7E, k7F, k7G, k7H, k7I}, \
	 {k8A, k8B, k8C, KC_NO, k8E, k8F, k8G, k8H, k8I}, \
	 {KC_NO, k9B, k9C, k9D, k9E, k9F, k9G, k9H, k9I}, \
	 {kAA, kAB, kAC, kAD, kAE, kAF, kAG, kAH, kAI}, \
	 {kBA, kBB, kBC, kBD, kBE, kBF, kBG, kBH, kBI} \
}

#define LAYOUT_96_with60(k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I, kBI, kBH, kBF, kBE, kBD, kBG, kBC, kBB, kBA, k6D, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, kAI, kAH, kAF, kAE, kAG, kAC, kAB, kAA, k6E, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k9I, k9H, k9F, k9E, k8E, k9G, k9C, k9B, k8A, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k8I, k8H, k8F, k9D, k8G, k8C, k8B, k1A, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k7I, k7H, k7F, k7E, k7G, k7C, k7B, k6A, k0A, k0B, k0C, k0G, k0I, k0H, k0E, k0D, k6C, k6B) { \
	 {k0A, k0B, k0C, k0D, k0E, KC_NO, k0G, k0H, k0I}, \
	 {k1A, KC_NO, k1C, k1D, k1E, k1F, k1G, k1H, k1I}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I}, \
	 {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I}, \
	 {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I}, \
	 {k6A, k6B, k6C, k6D, k6E, KC_NO, KC_NO, KC_NO, KC_NO}, \
	 {KC_NO, k7B, k7C, KC_NO, k7E, k7F, k7G, k7H, k7I}, \
	 {k8A, k8B, k8C, KC_NO, k8E, k8F, k8G, k8H, k8I}, \
	 {KC_NO, k9B, k9C, k9D, k9E, k9F, k9G, k9H, k9I}, \
	 {kAA, kAB, kAC, KC_NO, kAE, kAF, kAG, kAH, kAI}, \
	 {kBA, kBB, kBC, kBD, kBE, kBF, kBG, kBH, kBI} \
}

#define LAYOUT_96_with60_splitbs(k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I, kBI, kBH, kBF, kBE, kBD, kBG, kBC, kBB, kBA, k6D, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, kAI, kAH, kAF, kAE, kAD, kAG, kAC, kAB, kAA, k6E, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k9I, k9H, k9F, k9E, k8E, k9G, k9C, k9B, k8A, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k8I, k8H, k8F, k9D, k8G, k8C, k8B, k1A, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k7I, k7H, k7F, k7E, k7G, k7C, k7B, k6A, k0A, k0B, k0C, k0G, k0I, k0H, k0E, k0D, k6C, k6B) { \
	 {k0A, k0B, k0C, k0D, k0E, KC_NO, k0G, k0H, k0I}, \
	 {k1A, KC_NO, k1C, k1D, k1E, k1F, k1G, k1H, k1I}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I}, \
	 {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I}, \
	 {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I}, \
	 {k6A, k6B, k6C, k6D, k6E, KC_NO, KC_NO, KC_NO, KC_NO}, \
	 {KC_NO, k7B, k7C, KC_NO, k7E, k7F, k7G, k7H, k7I}, \
	 {k8A, k8B, k8C, KC_NO, k8E, k8F, k8G, k8H, k8I}, \
	 {KC_NO, k9B, k9C, k9D, k9E, k9F, k9G, k9H, k9I}, \
	 {kAA, kAB, kAC, kAD, kAE, kAF, kAG, kAH, kAI}, \
	 {kBA, kBB, kBC, kBD, kBE, kBF, kBG, kBH, kBI} \
}

#define LAYOUT_96_with60_split_num0(k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I, kBI, kBH, kBF, kBE, kBD, kBG, kBC, kBB, kBA, k6D, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I, kAI, kAH, kAF, kAE, kAG, kAC, kAB, kAA, k6E, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k9I, k9H, k9F, k9E, k8E, k9G, k9C, k9B, k8A, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k8I, k8H, k8F, k9D, k8G, k8C, k8B, k1A, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k7I, k7H, k7F, k7E, k7G, k7C, k7B, k6A, k0A, k0B, k0C, k0G, k0I, k0H, k0E, k0D, k6G, k6C, k6B) { \
	 {k0A, k0B, k0C, k0D, k0E, KC_NO, k0G, k0H, k0I}, \
	 {k1A, KC_NO, k1C, k1D, k1E, k1F, k1G, k1H, k1I}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I}, \
	 {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I}, \
	 {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I}, \
	 {k6A, k6B, k6C, k6D, k6E, KC_NO, k6G, KC_NO, KC_NO}, \
	 {KC_NO, k7B, k7C, KC_NO, k7E, k7F, k7G, k7H, k7I}, \
	 {k8A, k8B, k8C, KC_NO, k8E, k8F, k8G, k8H, k8I}, \
	 {KC_NO, k9B, k9C, k9D, k9E, k9F, k9G, k9H, k9I}, \
	 {kAA, kAB, kAC, KC_NO, kAE, kAF, kAG, kAH, kAI}, \
	 {kBA, kBB, kBC, kBD, kBE, kBF, kBG, kBH, kBI} \
}

#ifndef LAYOUT
#   define LAYOUT LAYOUT_all
#endif

#ifndef LAYOUT_hotswap
#   define LAYOUT_hotswap LAYOUT_96_ansi
#endif

// Keycode content
