#include "quantum.h"

/* Shortcut to help see the layout */

// readability
#define ___ KC_NO

#define single_4x6_pad( \
             K01, K02, K03, \
        K04, K05, K06, K07, K08, \
        K09, K10, K11, K12,         K13, K14, \
                               K15, K16, K17 \
    ) \
    { \
        { ___, K01, K02, K03, ___, ___ }, \
        { K04, K05, K06, K07, K08, ___ }, \
        { K09, K10, K11, K12, K13, K14 }, \
        { ___, ___, ___, K15, K16, K17 }, \
    }

#define LAYOUT LAYOUT_single_4x6_pad


