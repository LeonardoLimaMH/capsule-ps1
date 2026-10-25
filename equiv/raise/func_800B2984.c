#include "common.h"

s32 func_800B2984(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern u8 D_80091618[];
    extern s32 D_800EEB74[];
    extern s16 D_800EEB84[];
    extern s32 D_800F2DB8[];
    extern u8 D_80100F38[];
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_2;

    temp_s0 = arg0 & 0xFFFF;
    temp_s2 = (temp_s0 * 0x1A8) + D_80091618;
    temp_s6 = (*D_8006AF84);
    if (M2C_FIELD(temp_s2, u16 *, 0x62) == 0) {
        temp_s1 = arg1 & 0xFFFF;
        if ((func_800E0FB8(temp_s0, temp_s1) != 1) && (func_800B284C(temp_s0, temp_s1) != 0)) {
            if ((*D_800EEB74) == 1) {
                (*D_800EEB74) = 0;
                goto block_17;
            }
            var_v0 = 0;
            if (M2C_FIELD(((temp_s0 * 0x79C) + D_80100F38), s16 *, 0x37E) == 0) {
                var_v0 = 0;
                if (M2C_FIELD(((temp_s1 * 0x79C) + D_80100F38), s16 *, 0x37E) == 0) {
                    var_v0 = 0;
                    if (func_800E14C4(temp_s0) != 1) {
                        if ((func_800E14C4(temp_s1) == 1) || (func_800B20A4(temp_s0, temp_s1) == 0) || (func_800B21F0(temp_s0, temp_s1) < 0)) {
                            goto block_11;
                        }
                        var_a1 = 4;
                        if (M2C_FIELD(temp_s2, s16 *, 0x8E) == 0) {
                            var_a1 = 1;
                        }
                        temp_v0 = ((arg1 & 0xFFFF) * 0x1A8) + D_80091618;
                        temp_s0_2 = M2C_FIELD(temp_s2, u16 *, 0xE2) + M2C_FIELD(temp_v0, u16 *, 0xE2);
                        temp_v1 = M2C_FIELD(temp_v0, u16 *, 0xD8) + M2C_FIELD(temp_s2, u16 *, 0xD8);
                        if ((temp_s0_2 >= 0x100) && (temp_v1 < 0x154)) {
                            var_v0 = 0;
                            if (func_800202A4(0x3E8, var_a1) < ((s32) (temp_s0_2 * (0x154 - temp_v1) * 0x3E8) / (s32) (var_a1 * 0xA9560))) {
block_17:
                                (*D_800EEB84) = 0;
                                temp_s0_3 = arg0 & 0xFFFF;
                                (*D_800F2DB8) = 0x190;
                                temp_v1_2 = (temp_s0_3 * 0x1A8) + D_80091618;
                                temp_a1 = arg1 & 0xFFFF;
                                temp_v0_2 = (temp_a1 * 0x1A8) + D_80091618;
                                M2C_FIELD(temp_v1_2, s16 *, 0x62) = 1;
                                M2C_FIELD(temp_v0_2, s16 *, 0x62) = 1;
                                M2C_FIELD(temp_v1_2, s32 *, 0x6C) = temp_s6;
                                M2C_FIELD(temp_v0_2, s32 *, 0x6C) = temp_s6;
                                func_800D0C3C(1, temp_a1, D_80091618, 1);
                                func_800D1CC4(temp_s0_3, 0x1A, 0, 0);
                                var_v0 = 1;
                            }
                            /* Duplicate return node #18. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        goto block_11;
                    }
                }
            }
            return var_v0;
        }
    }
block_11:
    return 0;
}
