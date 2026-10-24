#include "common.h"

s32 func_800AFEB8(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C28[];
    extern s32 D_8008EDF0[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800ED1C4[];
    extern s16 D_800EEAA4[];
    extern M2C_UNK D_800EEB9C[];
    extern s32 D_800EEBA8[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    extern s16 D_800F0710[];
    extern s32 D_800F1924[];
    extern M2C_UNK D_80100F38[];
    M2C_UNK *var_s1;
    s16 temp_a3;
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_s0_2;

    var_s5 = 0;
    if (!((*D_8008EDF0) & 0xC)) {
        var_v0 = 0;
        if (!((*D_8008EDF0) & 3)) {
            if ((*D_8008EDF0) & 0x20) {
                goto block_3;
            }
            if ((M2C_FIELD(D_800EEB9C, s32 *, 0xC) != 3) || (M2C_FIELD(D_800EEB9C, s32 *, 0x24) != 6) || (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) != 1)) {
                if (((u32) ((*D_800EEBA8) - 0x24) >= 4U) || (var_v0 = 0, ((*D_800F1924) != 0x1C))) {
                    if (func_800E16EC(D_800EEB9C) != 1) {
                        var_v0 = 0;
                        if ((*D_800EFA4C) == (*D_800EFA4A)) {
                            var_v0 = 0;
                            if ((*D_80078C28) == 0) {
                                var_s3 = 0;
                                if ((*D_800F0710) != 1) {
                                    var_s1 = D_80091618;
                                    do {
                                        temp_a0 = var_s3 & 0xFFFF;
                                        var_s2 = -1;
                                        if (M2C_FIELD(((temp_a0 * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF) {
                                            if (temp_a0 == (*D_8006AF80)) {
                                                var_s2 = 1;
                                            } else {
                                                var_s2 = (temp_a0 != M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A)) * 2;
                                            }
                                        }
                                        if ((var_s2 != -1) && (var_s2 != 2)) {
                                            temp_s0 = var_s3 & 0xFFFF;
                                            if (((M2C_FIELD(M2C_FIELD(var_s1, void **, 0x178), s32 *, 0x38) & 1) != 1) && (func_800E1820(temp_s0) == 0) && (func_800E17F8(temp_s0) != 0) && (func_800E16AC(temp_s0) != 1) && (func_800E1674(temp_s0) != 1) && (func_800E1624(temp_s0) != 1) && (func_800E1140(temp_s0) != 0) && (func_800E1388(temp_s0) != 0) && (func_800E1594(temp_s0) != 1)) {
                                                if ((*D_800EEAA4) == 1) {
                                                    (*D_800EEAA4) = 0;
                                                    goto block_33;
                                                }
                                                temp_a3 = M2C_FIELD(var_s1, s16 *, 0xD0);
                                                if ((temp_a3 < 5) && ((M2C_FIELD(var_s1, s32 *, 0xCC) / 28800) >= *((temp_a3 * 2) + ((M2C_FIELD(var_s1, u16 *, 0x92) * 0xA) + D_800ED1C4)))) {
block_33:
                                                    temp_a0_2 = var_s3 & 0xFFFF;
                                                    temp_s0_2 = *M2C_FIELD(((temp_a0_2 * 0x79C) + D_80100F38), u8 **, 0x2BC);
                                                    var_v0_2 = 0;
                                                    if (func_800E14C4(temp_a0_2) == 0) {
                                                        var_v0_2 = 1;
                                                        if ((u32) (temp_s0_2 - 0x52) >= 2U) {
                                                            var_v0_2 = 0;
                                                            if (temp_s0_2 == 0x69) {
                                                                var_v0_2 = 1;
                                                            }
                                                        }
                                                    }
                                                    temp_s0_3 = var_s3 & 0xFFFF;
                                                    if (var_v0_2 != 1) {
                                                        temp_v0 = func_800E6DCC(temp_s0_3);
                                                        if (temp_v0 != -1) {
                                                            var_s5 = 0x10;
                                                            M2C_FIELD(var_s1, s16 *, 6) = temp_v0;
                                                            M2C_FIELD(var_s1, u16 *, 2) = (u16) M2C_FIELD(var_s1, u16 *, 0);
                                                            func_800DEBA0(var_s2, temp_s0_3);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        var_s3 += 1;
                                        var_s1 += 0x1A8;
                                    } while (var_s3 < 6);
                                    goto block_41;
                                }
                                goto block_3;
                            }
                        }
                        /* Duplicate return node #42. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_3;
                }
                /* Duplicate return node #42. Try simplifying control flow for better match */
                return var_v0;
            }
block_3:
            return 0;
        }
        /* Duplicate return node #42. Try simplifying control flow for better match */
        return var_v0;
    }
block_41:
    var_v0 = var_s5;
    return var_v0;
}
