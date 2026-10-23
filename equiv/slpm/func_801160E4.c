#include "common.h"

s32 func_801160E4(s32 arg0) {
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C48[];
    extern s32 D_80131C5C[];
    extern s32 D_80131C60[];
    s32 temp_s0;
    s32 var_v0;

    if (arg0 == 0) {
        func_80116220();
loop_3:
        if ((*D_80131C5C) != (*D_80131C60)) {
            func_80115D34();
            var_v0 = -1;
            if (func_80116254() == 0) {
                goto loop_3;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return var_v0;
        }
loop_6:
        if (!(*(*D_80131C48) & 0x01000000) && (*(*D_80131C3C) & 0x04000000)) {
            return 0;
        }
        var_v0 = -1;
        if (func_80116254() == 0) {
            goto loop_6;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_s0 = ((*D_80131C5C) - (*D_80131C60)) & 0x3F;
    if (temp_s0 != 0) {
        func_80115D34();
    }
    if ((*(*D_80131C48) & 0x01000000) || (var_v0 = temp_s0, ((*(*D_80131C3C) & 0x04000000) == 0))) {
        var_v0 = temp_s0;
        if (temp_s0 == 0) {
            var_v0 = 1;
        }
    }
    return var_v0;
}
