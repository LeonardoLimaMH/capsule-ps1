#include "common.h"

s32 func_800DD64C(s32 arg0, s32 arg1, s32 arg2, s16 arg3, s32 arg4) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EF364[];
    extern M2C_UNK D_800EFF58[];
    extern M2C_UNK D_80100F38[];
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    u8 var_s2;
    void *temp_a1_2;

    if (((u32) ((arg3 - 1) & 0xFFFF) >= 8U) || ((u32) ((arg4 - 1) & 0xFFFF) >= 8U)) {
        return 0;
    }
    temp_a1 = arg3 * 8;
    var_s2 = M2C_FIELD((temp_a1 + (((arg1 & 0xFFFF) << 6) + (*D_800EF364)) + (s16) arg4), u8 *, -9);
    if ((var_s2 != 0xFF) && (M2C_FIELD((((arg2 & 0xFFFF) << 6) + (*D_800EFF58) + temp_a1 + (s16) arg4), u8 *, 0x8B) != 1)) {
        var_v0 = var_s2 ^ 0xFF;
        if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x8A) != 0xFFFF) {
            temp_s0 = func_800B1260(arg0, temp_a1) & 0xFFFF;
            temp_v0 = func_800B12D8(arg0) & 0xFFFF;
            temp_a1_2 = (temp_v0 * 0x79C) + (*D_80100F38);
            if (M2C_FIELD(((temp_s0 * 0x1A8) + (*D_80091618)), u16 *, 0x90) != M2C_FIELD(((temp_v0 * 0x1A8) + (*D_80091618)), u16 *, 0x90)) {
                if (((arg3 == (M2C_FIELD(temp_a1_2, s16 *, 0x336) - 1)) && ((s16) arg4 == (M2C_FIELD(temp_a1_2, s16 *, 0x338) - 1))) || ((var_v0 = var_s2 ^ 0xFF, (arg3 == (M2C_FIELD(temp_a1_2, s16 *, 0x332) - 1))) && (var_v0 = var_s2 ^ 0xFF, ((s16) arg4 == (M2C_FIELD(temp_a1_2, s16 *, 0x334) - 1))))) {
                    goto block_11;
                }
            } else {
                goto block_12;
            }
        }
    } else {
block_11:
        var_s2 = 0xFF;
block_12:
        var_v0 = var_s2 ^ 0xFF;
    }
    return var_v0 != 0;
}
