#include "common.h"

s32 func_800A0AD4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern M2C_UNK D_80065310[];
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;
    u8 temp_a1;
    u8 temp_a1_2;

    if (M2C_FIELD((arg0 + arg1), u8 *, 0x5E4) != 0xFF) {
        if (((arg2 == 0) || ((temp_v0 = func_800CB400(arg0, arg1), (temp_v0 == 2)) && (arg1 == M2C_FIELD(arg0, u8 *, 0xBCA))) || ((temp_v0 == 0) && (arg1 != M2C_FIELD(arg0, u8 *, 0xBCA)))) && (func_800202A4(5) == 0)) {
            if (arg1 == M2C_FIELD(arg0, u8 *, 0xBCA)) {
                if (arg3 == 0) {
                    temp_a1 = M2C_FIELD((arg0 + arg1), u8 *, 0x5E4);
                    var_a0 = 0;
                    if (temp_a1 < 8U) {
                        var_a0 = (arg1 * 0x980) - 0x5580;
                    }
                    var_v0 = M2C_FIELD((*((temp_a1 * 4) + D_80065310) + var_a0), s32 *, 0x5C) + var_a0;
                    goto block_16;
                }
                /* Duplicate return node #18. Try simplifying control flow for better match */
                return 0;
            }
            if (arg3 != 0) {
                temp_a1_2 = M2C_FIELD((arg0 + arg1), u8 *, 0x5E4);
                var_a0_2 = 0;
                if (temp_a1_2 < 8U) {
                    var_a0_2 = (arg1 * 0x980) - 0x5580;
                }
                var_v0 = M2C_FIELD((*((temp_a1_2 * 4) + D_80065310) + var_a0_2), s32 *, 0x60) + var_a0_2;
block_16:
                M2C_FIELD(arg0, s32 *, 0x14) = var_v0;
                return 1;
            }
            goto block_17;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return 0;
    }
block_17:
    return 0;
}
