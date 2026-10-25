#include "common.h"

s32 func_800B026C(void) {
    extern u16 D_8006AF80[];
    extern s32 D_8008EDF0[];
    extern u8 D_80091618[];
    extern u8 D_800EEB9C[];
    extern s32 D_800EEBA8[];
    extern s32 D_800F1924[];
    s32 temp_a0;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_s0;
    u16 temp_s1;
    void *temp_v1;

    temp_a0 = (*D_8006AF80) & 0xFFFF;
    var_v0 = 0;
    if (temp_a0 != 0xFFFF) {
        temp_v1 = (temp_a0 * 0x1A8) + D_80091618;
        var_v0_2 = 1;
        if (M2C_FIELD(temp_v1, u16 *, 0x10) != 0xFFFF) {
            var_v0_2 = M2C_FIELD(temp_v1, u16 *, 0) == 0xFFFF;
        }
        if ((var_v0_2 == 1) || ((u32) (M2C_FIELD(D_800EEB9C, s32 *, 0xC) - 0x29) < 4U)) {
            goto block_5;
        }
        var_v0 = 0;
        if (!((*D_8008EDF0) & 0xC)) {
            var_v0 = 0;
            if (!((*D_8008EDF0) & 3)) {
                var_v0 = 0;
                if (!((*D_8008EDF0) & 0x20)) {
                    if ((M2C_FIELD(D_800EEB9C, s32 *, 0xC) != 3) || (M2C_FIELD(D_800EEB9C, s32 *, 0x24) != 6) || (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) != 1)) {
                        if (((u32) ((*D_800EEBA8) - 0x24) >= 4U) || (var_v0 = 0, ((*D_800F1924) != 0x1C))) {
                            temp_s1 = M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A);
                            temp_s0 = (*D_8006AF80) & 0xFFFF;
                            if (temp_s1 == 0xFFFF) {
                                return func_800B065C((*D_8006AF80), 0xFFFFU, (*D_8006AF80), 1) & 0xFFFF;
                            }
                            if (func_800E0FB8(temp_s0, temp_s1, (*D_8006AF80), 1) == 0) {
                                var_v0 = func_800B065C(temp_s0, temp_s1) & 0xFFFF;
                                if (var_v0 == 0) {
                                    var_v0 = 0;
                                    if (func_800E0DF8() == 0) {
                                        goto block_20;
                                    }
                                }
                            } else {
block_20:
                                var_v0 = func_800B0440(temp_s0, temp_s1) & 0xFFFF;
                            }
                            /* Duplicate return node #21. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        /* Duplicate return node #21. Try simplifying control flow for better match */
                        return var_v0;
                    }
block_5:
                    return 0;
                }
            }
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
