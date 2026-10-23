#include "common.h"

s32 VSync(s32 arg0) {
    extern s32 * D_80071D14[];
    extern s32 * D_80071D18[];
    extern s32 D_80071D1C[];
    extern s32 D_80071D20[];
    extern s32 D_80072E4C[];
    s32 sp10;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_v0;

    do {
        sp10 = *(*D_80071D18);
    } while (sp10 != *(*D_80071D18));
    temp_s1 = (sp10 - (*D_80071D1C)) & 0xFFFF;
    if (arg0 < 0) {
        return (*D_80072E4C);
    }
    if (arg0 != 1) {
        if (arg0 > 0) {
            var_v0 = (*D_80071D20) - 1 + arg0;
        } else {
            var_v0 = (*D_80071D20);
        }
        var_a1 = 0;
        if (arg0 > 0) {
            var_a1 = arg0 - 1;
        }
        func_80042984(var_v0, var_a1);
        temp_s0 = *(*D_80071D14);
        func_80042984((*D_80072E4C) + 1, 1);
        if ((temp_s0 & 0x400000) && ((temp_s0 ^ *(*D_80071D14)) >= 0)) {
            do {

            } while (!((temp_s0 ^ *(*D_80071D14)) & 0x80000000));
        }
        (*D_80071D20) = (*D_80072E4C);
        do {
            (*D_80071D1C) = *(*D_80071D18);
        } while ((*D_80071D1C) != *(*D_80071D18));
    }
    return temp_s1;
}
