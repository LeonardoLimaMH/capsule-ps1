#include "common.h"

void func_800A11B8(void) {
    extern u8 D_80063940[];
    extern u8 D_80085428[];
    extern u8 D_80091618[];
    extern u8 D_800EF364[];
    extern u8 D_800F2D30[];
    extern u8 D_800F2D98[];
    extern s16 D_800F2D9E[];
    extern u8 D_80100F38[];
    u16 sp10;
    u16 sp12;                                       /* compiler-managed */
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_s2;
    s16 temp_a2;
    s16 temp_t0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v0_5;
    s32 var_v1;
    u16 temp_a0_2;
    u16 temp_a1;
    u16 temp_s4_2;
    u16 temp_v0_2;
    u16 temp_v1;
    u8 *temp_a0;
    u8 *var_v0;
    u8 *var_v0_2;
    u8 *var_v0_3;
    u8 *var_v0_4;
    u8 temp_s4;
    void *temp_v0_5;
    void *var_a0_3;
    void *var_s6;

    var_s3 = 0;
    if ((*D_800F2D9E) > 0) {
        var_v0 = D_800F2D98;
        do {
            temp_s4 = *var_v0;
            temp_a0 = temp_s4 + D_800F2D30;
            if (*temp_a0 == 0xFF) {
                var_a0 = 0;
                var_v0_2 = D_800F2D98;
loop_4:
                if (*var_v0_2 != (temp_s4 & 0xFF)) {
                    var_a0 += 1;
                    var_v0_2 = &(D_800F2D98)[var_a0];
                    if (var_a0 < 6) {
                        goto loop_4;
                    }
                }
                if (var_a0 == 6) {
                    var_a0_2 = 0;
                    var_v0_3 = D_800F2D98;
loop_8:
                    if (*var_v0_3 != 0xFF) {
                        var_a0_2 += 1;
                        var_v0_3 = &(D_800F2D98)[var_a0_2];
                        if (var_a0_2 < 6) {
                            goto loop_8;
                        }
                    }
                    var_v1 = var_a0_2;
                    var_v0_4 = &(D_800F2D98)[var_v1];
                    if (var_v1 == 6) {
                        var_v1 = 5;
                        var_v0_4 = D_800F2D98 + 5;
                    }
                    *var_v0_4 = temp_s4;
                } else {
                    var_v1 = var_a0;
                }
            } else {
                var_v1 = (s32) *temp_a0;
            }
            func_8001A49C((var_v1 * 0x15800) + 0x80146A18);
            var_s3 += 1;
            var_v0 = &(D_800F2D98)[var_s3];
        } while (var_s3 < (*D_800F2D9E));
        var_s3 = 0;
    }
    var_s2 = D_80091618;
    var_s1 = D_80100F38;
    do {
        temp_v0 = func_800AECC8(var_s3 & 0xFFFF);
        if (temp_v0 != -1) {
            temp_s4_2 = M2C_FIELD(var_s2, u16 *, 0);
            if (temp_v0 != 2) {
                func_800E19D0(temp_v0);
                func_800A1F44(temp_v0, 1, 0);
                var_v0_5 = temp_s4_2 * 0x10;
            } else {
                temp_v0_2 = M2C_FIELD(var_s2, u16 *, 0xA4);
                temp_v1 = M2C_FIELD(var_s2, u16 *, 0xA8);
                M2C_FIELD(var_s1, s16 *, 0x326) = 0;
                M2C_FIELD(var_s1, s16 *, 0x324) = 0;
                sp10 = temp_v0_2;
                sp12 = temp_v1;
                M2C_FIELD(var_s1, u16 *, 0x336) = temp_v0_2;
                M2C_FIELD(var_s1, u16 *, 0x332) = temp_v0_2;
                M2C_FIELD(var_s1, u16 *, 0x338) = temp_v1;
                M2C_FIELD(var_s1, u16 *, 0x334) = temp_v1;
                temp_v1_2 = temp_v1 + (((s32) (temp_v0_2 << 0x10) >> 0xD) - 9);
                M2C_FIELD(var_s1, s16 *, 0x32C) = temp_v1_2;
                M2C_FIELD(var_s1, s16 *, 0x32A) = temp_v1_2;
                var_v0_5 = temp_s4_2 * 0x10;
            }
            temp_s0 = var_s3 & 0xFFFF;
            M2C_FIELD(var_s2, s16 *, 0x9E) = (s16) (M2C_FIELD((((var_v0_5 - temp_s4_2) * 4) + D_80063940), u8 *, 0xB) | 0x80);
            func_800A7600(temp_s0);
            func_800A76C0(temp_s0);
        }
        var_s2 += 0x1A8;
        var_s3 += 1;
        var_s1 += 0x79C;
    } while (var_s3 < 6);
    var_s3_2 = 0;
    var_s1_2 = D_80091618;
    var_s0 = D_80100F38;
    var_s2_2 = 0;
    var_s6 = D_80100F38 + 0x1EC;
loop_25:
    if ((M2C_FIELD(var_s1_2, u16 *, 0x10) != 0xFFFF) && (M2C_FIELD(var_s1_2, u16 *, 0x90) != 0) && (M2C_FIELD(var_s1_2, u16 *, 0x8A) == 0xFFFF)) {
        M2C_FIELD(var_s1_2, u16 *, 0x90) = 0U;
        if (M2C_FIELD(var_s1_2, s16 *, 0x1A0) == 1) {
            sp10 = 1;
            sp12 = 1;
loop_30:
            var_a0_3 = D_80100F38 + 0x1CC;
            if (func_800A510C(var_s3_2 & 0xFFFF, (s16) sp10, (s16) sp12) != 1) {
                temp_v0_3 = sp12 + 1;
                sp12 = temp_v0_3;
                if (temp_v0_3 >= 9) {
                    sp10 = 8;
                    sp12 = 1;
loop_33:
                    var_a0_3 = D_80100F38 + 0x1CC;
                    if (func_800A510C(var_s3_2 & 0xFFFF, (s16) sp10, (s16) sp12) != 1) {
                        temp_v0_4 = sp12 + 1;
                        sp12 = temp_v0_4;
                        if (temp_v0_4 >= 9) {
                            M2C_FIELD(var_s1_2, s16 *, 0x1A0) = 0;
                            M2C_FIELD(var_s1_2, s16 *, 0x1A4) = 0;
                            M2C_FIELD((var_s3_2 + D_80085428), s8 *, 0xD7C) = 0;
                            goto block_37;
                        }
                        goto loop_33;
                    }
                    goto block_36;
                }
                goto loop_30;
            }
block_36:
            M2C_FIELD(var_s0, u16 *, 0x336) = sp10;
            M2C_FIELD(var_s0, u16 *, 0x332) = sp10;
            M2C_FIELD(var_s0, u16 *, 0x338) = (u16) sp12;
            M2C_FIELD(var_s0, u16 *, 0x334) = (u16) sp12;
            M2C_FIELD(var_s1_2, s32 *, 0xA8) = (s32) (s16) (u16) sp12;
            M2C_FIELD(var_s1_2, s32 *, 0xA4) = (s32) (s16) sp10;
            M2C_FIELD(var_s1_2, s32 *, 0xAC) = 5;
            temp_a2 = (u16) sp12 + (((s16) sp10 * 8) - 9);
            M2C_FIELD(var_s0, s16 *, 0x32C) = temp_a2;
            M2C_FIELD(var_s0, s16 *, 0x32A) = temp_a2;
            M2C_FIELD(var_s0, s16 *, 0x326) = 0;
            M2C_FIELD(var_s0, s16 *, 0x324) = 0;
            func_800D0730(var_s2_2 + var_a0_3, (s16) (M2C_FIELD(var_s0, u16 *, 0x336) - 1), (s16) (M2C_FIELD(var_s0, u16 *, 0x338) - 1), 0);
            func_800D0730(var_s6, (s16) (M2C_FIELD(var_s0, u16 *, 0x336) - 1), (s16) (M2C_FIELD(var_s0, u16 *, 0x338) - 1), 0);
            temp_s0_2 = var_s3_2 & 0xFFFF;
            func_800DED74(1, temp_s0_2, (s16) sp10, sp12);
            func_800DF7EC(1, temp_s0_2);
            func_800DF914(1, temp_s0_2);
            func_800DFB80(1, temp_s0_2);
            return;
        }
block_37:
        temp_a0_2 = M2C_FIELD(var_s0, u16 *, 0x336);
        temp_a1 = M2C_FIELD(var_s0, u16 *, 0x338);
        sp10 = temp_a0_2;
        sp12 = temp_a1;
        if (M2C_FIELD((((s32) (temp_a0_2 << 0x10) >> 0xD) + ((M2C_FIELD(var_s1_2, u16 *, 0x10) << 6) + D_800EF364) + (s16) temp_a1), u8 *, -9) == 0xFF) {
            func_800A4BF8(var_s3_2 & 0xFFFF, &sp10, &sp12);
            M2C_FIELD(var_s0, u16 *, 0x336) = sp10;
            M2C_FIELD(var_s0, u16 *, 0x332) = sp10;
            M2C_FIELD(var_s0, u16 *, 0x338) = sp12;
            M2C_FIELD(var_s0, u16 *, 0x334) = sp12;
            M2C_FIELD(var_s1_2, s32 *, 0xA8) = (s32) (s16) sp12;
            M2C_FIELD(var_s1_2, s32 *, 0xAC) = 5;
            temp_v0_5 = var_s2_2 + (D_80100F38 + 0x1D4);
            M2C_FIELD(var_s1_2, s32 *, 0xA4) = (s32) (s16) sp10;
            temp_t0 = sp12 + (((s16) sp10 * 8) - 9);
            M2C_FIELD(temp_v0_5, s16 *, 0) = 0;
            M2C_FIELD(temp_v0_5, s16 *, 2) = 0;
            M2C_FIELD(temp_v0_5, s16 *, 4) = 0;
            M2C_FIELD(var_s0, s16 *, 0x32C) = temp_t0;
            M2C_FIELD(var_s0, s16 *, 0x32A) = temp_t0;
            func_800D0730(var_s2_2 + (D_80100F38 + 0x1CC), (s16) (sp10 - 1), (s16) (sp12 - 1), 0);
        }
        goto block_39;
    }
block_39:
    var_s1_2 += 0x1A8;
    var_s0 += 0x79C;
    var_s2_2 += 0x79C;
    var_s3_2 += 1;
    var_s6 += 0x79C;
    if (var_s3_2 >= 6) {
        return;
    }
    goto loop_25;
}
