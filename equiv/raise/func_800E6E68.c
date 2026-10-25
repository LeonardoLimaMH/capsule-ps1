#include "common.h"

s32 func_800E6E68(s32 arg0) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern u8 D_800ED504[];
    extern u8 D_800F2800[];
    extern u8 D_800F292C[];
    extern u8 D_800F2B84[];
    extern u8 D_800F2B98[];
    s16 *temp_v0;
    s16 *temp_v1_3;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_v1_2;
    s16 var_a0;
    s16 var_s1;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s2;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_a1_2;
    u16 temp_s6;
    void *temp_a1;
    void *temp_a2_4;
    void *temp_a3_2;
    void *temp_v1;
    void *temp_v1_4;
    void *var_v1_2;

    var_s2 = 2;
    temp_a1 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
    temp_a3 = M2C_FIELD(temp_a1, s16 *, 0xE8);
    temp_a2_2 = M2C_FIELD(temp_a1, s16 *, 0xEA);
    temp_s6 = *(s16 *)((M2C_FIELD(temp_a1, u16 *, 0) * 2) + D_800F2B98);
    temp_s4 = (*D_8008ED80);
    var_s5 = -1;
    if (temp_a2_2 < temp_a3) {
        var_s2 = ((M2C_FIELD(temp_a1, s16 *, 0xEC) < temp_a3) ^ 1) * 2;
        goto block_4;
    }
    var_v1 = 2 & 0xFF;
    if (M2C_FIELD(temp_a1, s16 *, 0xEC) < temp_a2_2) {
        var_s2 = 1;
block_4:
        var_v1 = var_s2 & 0xFF;
    }
    if (var_v1 != 1) {
        if (var_v1 < 2) {
            var_s1 = 0;
            if (var_v1 != 0) {
                var_s0 = arg0 & 0xFFFF;
            } else {
                var_v1_2 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
                var_a0 = M2C_FIELD(var_v1_2, s16 *, 0xE8);
                if ((var_a0 - M2C_FIELD(var_v1_2, s16 *, 0xEA)) >= 6) {
                    var_v0 = var_a0 - M2C_FIELD(var_v1_2, s16 *, 0xEC);
                    goto block_22;
                }
                goto block_14;
                goto block_24;
            }
        } else {
            var_s1 = 0;
            if (var_v1 != 2) {
                var_s0 = arg0 & 0xFFFF;
            } else {
                temp_v1 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
                temp_a0 = M2C_FIELD(temp_v1, s16 *, 0xEC);
                if ((temp_a0 - M2C_FIELD(temp_v1, s16 *, 0xEA)) < 6) {
                    var_s1 = 0;
                    if ((temp_a0 - M2C_FIELD(temp_v1, s16 *, 0xE8)) >= 6) {
                        var_s2 = 0;
                    }
                } else {
                    var_v0 = temp_a0 - M2C_FIELD(temp_v1, s16 *, 0xE8);
block_22:
                    var_s1 = 0;
                    if (var_v0 < 6) {
                        var_s2 = 1;
                    }
                }
                goto block_24;
            }
        }
    } else {
        var_v1_2 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        var_a0 = M2C_FIELD(var_v1_2, s16 *, 0xEA);
        if ((var_a0 - M2C_FIELD(var_v1_2, s16 *, 0xE8)) < 6) {
block_14:
            var_s1 = 0;
            if ((var_a0 - M2C_FIELD(var_v1_2, s16 *, 0xEC)) >= 6) {
                var_s2 = 2;
            }
        } else {
            var_s1 = 0;
            if ((var_a0 - M2C_FIELD(var_v1_2, s16 *, 0xEC)) < 6) {
                var_s2 = 0;
            }
        }
block_24:
        var_s0 = arg0 & 0xFFFF;
    }
loop_26:
    if (func_800E733C(var_s0, var_s1) == 0) {
        var_s1 += 1;
        if (var_s1 >= 0xA) {

        } else {
            goto loop_26;
        }
    }
    temp_a3_2 = (var_s0 * 0x1A8) + D_80091618;
    temp_a2_3 = var_s2 & 0xFF;
    temp_a1_2 = M2C_FIELD(temp_a3_2, u16 *, 0x92);
    temp_v1_2 = M2C_FIELD(((M2C_FIELD(temp_a3_2, s16 *, 0xD0) * 2) + ((temp_a2_3 * 0xA) + ((temp_a1_2 * 0x1E) + D_800F2800))), s16 *, -2);
    if (temp_v1_2 < var_s1) {
        var_s1 = temp_v1_2;
    }
    if (*(s16 *)((temp_a2_3 * 2) + ((temp_a1_2 * 6) + ((var_s1 * 0x3C) + D_800ED504))) == 3) {
        if ((temp_s4 % 100) < M2C_FIELD(temp_a3_2, s16 *, 0xEE)) {
            temp_v0 = (temp_a1_2 * 2) + D_800F2B84;
            var_v0_2 = -1 << 0x10;
            if (*temp_v0 != M2C_FIELD(temp_a3_2, u16 *, 0)) {
                M2C_FIELD(temp_a3_2, u16 *, 4) = (u16) *temp_v0;
                var_s5 = 0;
                goto block_38;
            }
        } else {
            goto block_36;
        }
    } else {
block_36:
        temp_a2_4 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        temp_v1_3 = (var_s1 * 2) + ((((var_s2 * 4) | var_s2) * 4) + ((M2C_FIELD(temp_a2_4, u16 *, 0x92) * 0x3C) + D_800F292C));
        temp_a0_2 = *temp_v1_3;
        if (temp_a0_2 != M2C_FIELD(temp_a2_4, u16 *, 0)) {
            M2C_FIELD(temp_a2_4, u16 *, 4) = (u16) *temp_v1_3;
            var_s5 = *(s16 *)((temp_a0_2 * 2) + D_800F2B98) < (s16) temp_s6;
        }
block_38:
        var_v0_2 = var_s5 << 0x10;
    }
    temp_a2 = var_v0_2 >> 0x10;
    if (temp_a2 >= 0) {
        temp_v1_4 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        M2C_FIELD(temp_v1_4, s16 *, 0xA0) = (s16) (((u32) M2C_FIELD(((M2C_FIELD(temp_v1_4, u16 *, 4) * 0x3C) + D_80063940), u32 *, 8) >> 0xC) & 3);
    }
    return temp_a2;
}
