/* Copyright 2021 Drewkeys
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 #pragma once

 #include "quantum.h"
 /* Standard arrangement / LAYOUT
  * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐
  * │Esc│   │F1 │F2 │F3 │F4 │ │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│ │PSc│Scr│Pse│
  * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘
  * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐
  * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │Ins│Hom│PgU│
  * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤
  * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ │Del│End│PgD│
  * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┴───┘
  * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
  * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐
  * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │
  * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐
  * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│ │ ← │ ↓ │ → │
  * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘
  */
  #define LAYOUT( \
    k00,       k02, k03, k04, k05, k06, k07, k08, k09,      k0B, k0C, k0D, k0E, k0F, k0G, k0H,  \
    k10, k11,  k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C,       k1E, k1F, k1G, k1H,  \
    k20,       k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H,  \
    k30,       k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C,       k3E,                    \
    k40,       k42, k43, k44, k45, k46, k47, k48, k49, k4A,      k4C,       k4E,       k4G,        \
    k50, k51,  k52,                k56,                k5A,      k5C, k5D, k5E, k5F, k5G, k5H   \
) { \
    { k00, KC_NO, k02, k03,   k04,   k05,   k06, k07,   k08,   k09,   KC_NO, k0B, k0C, k0D,  k0E, k0F,  k0G,  k0H },  \
    { k10, k11,   k12, k13,   k14,   k15,   k16, k17,   k18,   k19,   k1A, k1B, k1C, KC_NO, k1E, k1F,  k1G,  k1H },  \
    { k20, KC_NO, k22, k23,   k24,   k25,   k26, k27,   k28,   k29,   k2A, k2B, k2C, k2D,  k2E, k2F,  k2G,  k2H },  \
    { k30, KC_NO, k32, k33,   k34,   k35,   k36, k37,   k38,   k39,   k3A, k3B, k3C, KC_NO, k3E, KC_NO, KC_NO, KC_NO }, \
    { k40, KC_NO, k42, k43,   k44,   k45,   k46, k47,   k48,   k49,   k4A, KC_NO, k4C, KC_NO, k4E, KC_NO, k4G,  KC_NO }, \
    { k50, k51,   k52, KC_NO, KC_NO, KC_NO, k56, KC_NO, KC_NO, KC_NO, k5A, KC_NO, k5C, k5D,  k5E, k5F,  k5G,  k5H }   \
}
