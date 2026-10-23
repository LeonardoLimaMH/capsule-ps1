#include "common.h"

s32 func_8004C02C(s32 arg0) {
    extern s32 * D_80078A24[];
    extern s32 * D_80078A30[];
    extern s32 D_80078A44[];
    extern s32 D_80078A48[];
    s32 temp_s0;
    s32 var_v0;

    if (arg0 == 0) {
        func_8004C168();
loop_3:
        if ((*D_80078A44) != (*D_80078A48)) {
            func_8004BC7C();
            var_v0 = -1;
            if (func_8004C19C() == 0) {
                goto loop_3;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return var_v0;
        }
loop_6:
        if (!(*(*D_80078A30) & 0x01000000) && (*(*D_80078A24) & 0x04000000)) {
            return 0;
        }
        var_v0 = -1;
        if (func_8004C19C() == 0) {
            goto loop_6;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_s0 = ((*D_80078A44) - (*D_80078A48)) & 0x3F;
    if (temp_s0 != 0) {
        func_8004BC7C();
    }
    if ((*(*D_80078A30) & 0x01000000) || (var_v0 = temp_s0, ((*(*D_80078A24) & 0x04000000) == 0))) {
        var_v0 = temp_s0;
        if (temp_s0 == 0) {
            var_v0 = 1;
        }
    }
    return var_v0;
}
