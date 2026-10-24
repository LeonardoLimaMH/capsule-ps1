#include "common.h"

s32 func_800B91C8(void) {
    extern s16 D_800EFF54[];
    s32 var_v0;

    if ((*D_800EFF54) != 1) {
        if ((*D_800EFF54) < 2) {
            if ((*D_800EFF54) != 0) {
                return 0;
            }
            var_v0 = func_800AA60C();
            goto block_10;
        }
        switch ((*D_800EFF54)) {                       /* irregular */
        case 2:
            var_v0 = func_8009E598();
block_10:
            if (var_v0 == -1) {
                goto block_11;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return 0;
        case 3:
            (*D_800EFF54) = 0;
            return 1;
        default:
            return 0;
        }
    } else {
        func_8009E568();
block_11:
        (*D_800EFF54) = (u16) (*D_800EFF54) + 1;
        return 0;
    }
}
