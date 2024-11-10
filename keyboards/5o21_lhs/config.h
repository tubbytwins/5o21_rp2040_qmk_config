#pragma once

#define MATRIX_COLS 6
#define MATRIX_ROWS 4

#define DIRECT_PINS { \
    { NO_PIN, GP2,    GP1,    GP0,  NO_PIN, NO_PIN }, \
    { GP7,    GP6,    GP5,    GP4,  GP3,    NO_PIN }, \
    { GP13,   GP12,   GP9,    GP8,  GP22,   GP20 }, \
    { NO_PIN, NO_PIN, NO_PIN, GP16, GP21,   GP23 } \
}

#define DEBOUNCE 5


