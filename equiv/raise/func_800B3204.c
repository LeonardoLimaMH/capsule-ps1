#include "common.h"

s32 func_800B3204(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern u8 D_80091618[];
    extern s32 D_800EEB7C[];
    extern s16 D_800EEB84[];
    extern s32 D_800F2DB8[];
    extern u8 D_80100F38[];
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_v0;
    void *temp_a1;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1_2;

    temp_s0 = arg0 & 0xFFFF;
    temp_s5 = (*D_8006AF84);
    if (M2C_FIELD(((temp_s0 * 0x1A8) + D_80091618), u16 *, 0x66) == 0) {
        if ((*D_800EEB7C) == 1) {
            (*D_800EEB7C) = 0;
            goto block_18;
        }
        temp_s1 = arg1 & 0xFFFF;
        if ((func_800E0FB8(temp_s0, temp_s1) == 1) || (func_800B284C(temp_s0, temp_s1) == 0)) {
            goto block_5;
        }
        var_v0 = 0;
        if (M2C_FIELD(((temp_s0 * 0x79C) + D_80100F38), s16 *, 0x37E) == 0) {
            var_v0 = 0;
            if (M2C_FIELD(((temp_s1 * 0x79C) + D_80100F38), s16 *, 0x37E) == 0) {
                var_v0 = 0;
                if (func_800E14C4(temp_s0) != 1) {
                    if ((func_800E14C4(temp_s1) != 1) && (func_800B20A4(temp_s0, temp_s1) != 0)) {
                        temp_v0 = func_800B21F0(temp_s0, temp_s1);
                        var_v0 = 0;
                        if (temp_v0 >= 0) {
                            if (temp_v0 != 8) {
                                temp_a1 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
                                var_a2 = 1;
                                if (M2C_FIELD(temp_a1, s16 *, 0x8E) == 0) {
                                    var_a2 = 4;
                                }
                                temp_v0_2 = ((arg1 & 0xFFFF) * 0x1A8) + D_80091618;
                                temp_s0_2 = M2C_FIELD(temp_a1, u16 *, 0xE2) + M2C_FIELD(temp_v0_2, u16 *, 0xE2);
                                temp_v1 = M2C_FIELD(temp_v0_2, u16 *, 0xD8) + M2C_FIELD(temp_a1, u16 *, 0xD8);
                                if (temp_s0_2 >= 0x100) {
                                    var_v0 = 0;
                                    if (temp_v1 >= 0x155) {
                                        var_v0 = 0;
                                        if (func_800202A4(0x3E8, temp_a1, var_a2) < ((s32) (temp_s0_2 * (temp_v1 - 0x154) * 0x3E8) / (s32) (var_a2 * 0x54AB0))) {
block_18:
                                            temp_a0 = arg0 & 0xFFFF;
                                            (*D_800EEB84) = 0;
                                            (*D_800F2DB8) = 0x190;
                                            temp_v1_2 = (temp_a0 * 0x1A8) + D_80091618;
                                            temp_v0_3 = ((arg1 & 0xFFFF) * 0x1A8) + D_80091618;
                                            M2C_FIELD(temp_v1_2, s16 *, 0x66) = 1;
                                            M2C_FIELD(temp_v0_3, s16 *, 0x66) = 1;
                                            M2C_FIELD(temp_v1_2, s32 *, 0x74) = temp_s5;
                                            M2C_FIELD(temp_v0_3, s32 *, 0x74) = temp_s5;
                                            func_800D1CC4(temp_a0, 0x1C, 0, 0);
                                            var_v0 = 1;
                                        }
                                    }
                                    /* Duplicate return node #19. Try simplifying control flow for better match */
                                    return var_v0;
                                }
                                goto block_5;
                            }
                            goto block_5;
                        }
                        /* Duplicate return node #19. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_5;
                }
            }
        }
        return var_v0;
    }
block_5:
    return 0;
}
