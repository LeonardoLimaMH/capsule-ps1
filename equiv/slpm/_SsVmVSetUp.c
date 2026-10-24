#include "common.h"

s32 _SsVmVSetUp(s16 arg0, s16 arg1) {
    extern M2C_UNK D_801383A0[];
    extern M2C_UNK D_801383E0[];
    extern M2C_UNK D_80138428[];
    extern s16 D_8013846A[];
    extern s32 D_8013846C[];
    extern s32 D_80138474[];
    extern s32 D_80138478[];
    extern M2C_UNK D_80138481[];
    extern M2C_UNK D_801384A0[];
    s32 temp_a1;
    s32 temp_v0;
    s32 var_v0;

    if ((u32) (arg0 & 0xFFFF) < 0x10U) {
        var_v0 = -1;
        if (*(D_801384A0 + arg0) == 1) {
            temp_v0 = arg0 * 4;
            if (arg1 >= (*D_8013846A)) {
                goto block_3;
            }
            temp_a1 = *(D_801383A0 + temp_v0);
            M2C_FIELD(D_80138481, s8 *, 0) = (s8) arg0;
            M2C_FIELD(D_80138481, s8 *, 5) = (s8) arg1;
            (*D_80138478) = *(D_80138428 + temp_v0);
            (*D_80138474) = *(D_801383E0 + temp_v0);
            (*D_8013846C) = temp_a1;
            var_v0 = 0;
            M2C_FIELD(D_80138481, u8 *, 6) = (u8) M2C_FIELD(((arg1 * 0x10) + temp_a1), u8 *, 8);
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_3:
    return -1;
}
