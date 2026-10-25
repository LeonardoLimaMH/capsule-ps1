#include "common.h"

s32 func_800ACE80(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C28[];
    extern s32 D_8008EDF0[];
    extern u8 D_80091618[];
    extern u8 D_800EEB9C[];
    extern u8 D_80100F38[];
    M2C_UNK var_a0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    void *temp_v0;

    if ((*D_8006AF80) != 0xFFFF) {
        if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A) != 0xFFFF) {
            if ((func_800D1548(D_80091618, 0xFFFF) != 1) && ((*D_8008EDF0) & 3)) {
                if (((*D_80078C28) == 0) && (M2C_FIELD(D_800EEB9C, s32 *, 0x14) != 1)) {
                    var_s1 = 0;
                    if (M2C_FIELD(D_800EEB9C, s32 *, 0x18) != 1) {
                        var_s0 = 1;
                        do {
                            temp_v1 = func_800B1260(var_s0) & 0xFFFF;
                            if (temp_v1 != 0xFFFF) {
                                temp_v0 = (temp_v1 * 0x79C) + D_80100F38;
                                var_s1 = var_s1 | M2C_FIELD(temp_v0, s16 *, 0x228) | (((u32) M2C_FIELD(temp_v0, u32 *, 0x798) >> 5) & 1);
                            }
                            var_s0 -= 1;
                        } while (var_s0 >= 0);
                        if (var_s1 != 1) {
                            var_a0 = 1;
                            if ((*D_8008EDF0) & 2) {
                                var_a0 = -1;
                            }
                            func_800B8AD0(var_a0);
                            return 1;
                        }
                        goto block_15;
                    }
                    goto block_15;
                }
                /* Duplicate return node #16. Try simplifying control flow for better match */
                return 0;
            }
            goto block_15;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return 0;
    }
block_15:
    return 0;
}
