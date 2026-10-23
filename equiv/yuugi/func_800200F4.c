#include "common.h"

s32 func_800200F4(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 D_8008EDF0[];
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;

    var_s0 = arg0;
    if ((*D_8008EDF0) & 0x1000) {
        if (arg2 != 1) {
            var_v0_2 = var_s0 - 1;
            if (var_s0 <= 0) {
                var_v0_2 = arg1 - 1;
            }
            var_s0 = var_v0_2;
            goto block_18;
        }
        goto block_6;
    }
block_6:
    if (!((*D_8008EDF0) & 0x4000) || (var_v0_3 = arg1 - 1, (arg2 == 1))) {
        if (((*D_8008EDF0) & 0x8000) && (arg2 != 0)) {
            var_v0_4 = var_s0 - 1;
            if (var_s0 <= 0) {
                var_v0_4 = arg1 - 1;
            }
            var_s0 = var_v0_4;
            goto block_18;
        }
        var_v0 = var_s0;
        if ((*D_8008EDF0) & 0x2000) {
            var_v0_3 = arg1 - 1;
            if (arg2 != 0) {
                goto block_15;
            }
            goto block_19;
        }
    } else {
block_15:
        var_v1 = 0;
        if (var_s0 < var_v0_3) {
            var_v1 = var_s0 + 1;
        }
        var_s0 = var_v1;
block_18:
        func_80034AB0(0x84);
block_19:
        var_v0 = var_s0;
    }
    return var_v0;
}
