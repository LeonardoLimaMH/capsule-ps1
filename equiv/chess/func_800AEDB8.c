#include "common.h"

void func_800AEDB8(s32 arg1, void *arg2, void *arg3) {
    extern u8 D_80063940[];
    extern u8 D_80100F48[];
    extern u8 D_80100F4C[];
    u32 sp10;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_s0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_v0;
    s32 var_v1;
    u8 temp_a0_3;
    u8 temp_a1;
    u8 temp_s1;
    u8 var_s1_2;
    u8 var_v1_2;
    u8 var_v1_3;
    void *temp_s6;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a1_2;
    void *var_a1_3;
    void *var_s3;
    void *var_v0_2;

    var_s2 = 0;
    temp_s6 = ((arg1 & 0xFF) * 0x3C) + D_80063940;
    var_s3 = arg2;
    sp10 = (u32) M2C_FIELD(arg2, u8 *, 9);
    do {
        var_a1 = M2C_FIELD(var_s3, u8 *, 9) - M2C_FIELD(((M2C_FIELD(arg2, u8 *, 0) * 0x3C) + D_80063940 + var_s2), u8 *, 0xE);
        if ((var_s2 == 0) && (M2C_FIELD(arg2, u8 *, 9) == 0xFF)) {
            var_a1 += 0xF;
        }
        var_a0 = M2C_FIELD((arg3 + var_s2), u8 *, 9) - M2C_FIELD(((M2C_FIELD(arg3, u8 *, 0) * 0x3C) + D_80063940 + var_s2), u8 *, 0xE);
        if (var_s2 == 0) {
            if (M2C_FIELD(arg3, u8 *, 9) == 0xFF) {
                var_a0 += 0xF;
            }
        }
        if (var_s2 != 3) {
            temp_a0 = var_a0 + var_a1;
            if (temp_a0 > 0) {
                var_v1 = temp_a0 * 0xA;
                if (var_v1 < 0) {
                    var_v1 += 0xF;
                }
                temp_a1 = *(s16 *)(var_s2 + D_80100F4C);
                var_s1 = temp_a0 / 2;
                if ((temp_a1 < (u32) (var_v1 >> 4)) && ((u32) var_s1 < temp_a1)) {
                    var_s1 = (s32) temp_a1;
                }
            } else {
                var_s1 = (temp_a0 * 2) / 5;
            }
            var_s1_2 = var_s1 + M2C_FIELD((temp_s6 + var_s2), u8 *, 0xE);
            var_v1_2 = *(s16 *)(var_s2 + D_80100F48);
        } else {
            temp_a0_2 = var_a0 + var_a1;
            if (temp_a0_2 > 0) {
                var_v0 = temp_a0_2 * 0xA;
                if (var_v0 < 0) {
                    var_v0 += 0xF;
                }
                var_s1_3 = temp_a0_2 / 2;
                if (((u8) M2C_FIELD(D_80100F4C, u8 *, 3) < (u32) (var_v0 >> 4)) && ((u32) var_s1_3 < (u8) M2C_FIELD(D_80100F4C, u8 *, 3))) {
                    var_s1_3 = (s32) M2C_FIELD(D_80100F4C, u8 *, 3);
                }
            } else {
                var_s1_3 = (temp_a0_2 * 2) / 5;
            }
            temp_s0 = func_80020304(2, var_a1);
            var_v1_2 = *(s16 *)(var_s2 + D_80100F48);
            var_s1_2 = var_s1_3 + (M2C_FIELD((temp_s6 + var_s2), u8 *, 0xE) + (temp_s0 * func_80020304(2)));
        }
        if (var_v1_2 >= var_s1_2) {
            var_v1_2 = var_s1_2;
        }
        M2C_FIELD(var_s3, u8 *, 9) = var_v1_2;
        var_s2 += 1;
        var_s3 += 1;
    } while (var_s2 < 4);
    var_s2_2 = 0;
    if (M2C_FIELD(arg2, u8 *, 0x6A) != 0) {
        var_a1_2 = arg2;
        do {
            M2C_FIELD(var_a1_2, s8 *, 0x32) = 0;
            temp_v1 = arg2 + M2C_FIELD(var_a1_2, u8 *, 0x2E);
            var_s2_2 += 1;
            M2C_FIELD(temp_v1, u8 *, 0xE) = (u8) (M2C_FIELD(temp_v1, u8 *, 0xE) - M2C_FIELD(var_a1_2, u8 *, 0x30));
            M2C_FIELD(var_a1_2, u8 *, 0x30) = 0;
            var_a1_2 += 6;
        } while (var_s2_2 < (s32) M2C_FIELD(arg2, u8 *, 0x6A));
    }
    M2C_FIELD(arg2, u8 *, 0x6A) = 0U;
    var_s2_3 = 0;
    if (M2C_FIELD(arg3, u8 *, 0x6A) != 0) {
        var_a1_3 = arg3;
        do {
            M2C_FIELD(var_a1_3, s8 *, 0x32) = 0;
            temp_v1_2 = arg3 + M2C_FIELD(var_a1_3, u8 *, 0x2E);
            var_s2_3 += 1;
            M2C_FIELD(temp_v1_2, u8 *, 0xE) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 0xE) - M2C_FIELD(var_a1_3, u8 *, 0x30));
            M2C_FIELD(var_a1_3, u8 *, 0x30) = 0;
            var_a1_3 += 6;
        } while (var_s2_3 < (s32) M2C_FIELD(arg3, u8 *, 0x6A));
    }
    M2C_FIELD(arg3, u8 *, 0x6A) = 0U;
    temp_a0_3 = M2C_FIELD(arg2, u8 *, 9);
    temp_s1 = ((((u32) (M2C_FIELD(arg2, u8 *, 0xE) * 0x64) / sp10) + ((s32) (M2C_FIELD(arg3, u8 *, 0xE) * 0x64) / (s32) M2C_FIELD(arg3, u8 *, 9))) * temp_a0_3) / 200;
    var_v1_3 = temp_s1;
    if (temp_s1 != 0) {
        if (temp_a0_3 < var_v1_3) {
            var_v1_3 = temp_a0_3;
        }
    } else {
        var_v1_3 = 1;
    }
    M2C_FIELD(arg2, u8 *, 0xE) = var_v1_3;
    var_s2_4 = 1;
    var_v0_2 = arg2 + 1;
    do {
        var_s2_4 += 1;
        M2C_FIELD(var_v0_2, u8 *, 0xE) = (u8) M2C_FIELD(var_v0_2, u8 *, 9);
        var_v0_2 = arg2 + var_s2_4;
    } while (var_s2_4 < 4);
    M2C_FIELD(arg3, s8 *, 0x28) = 0;
    M2C_FIELD(arg2, s8 *, 0x28) = 0;
    M2C_FIELD(arg3, s8 *, 0x29) = 0;
    M2C_FIELD(arg2, s8 *, 0x29) = 0;
    M2C_FIELD(M2C_FIELD(arg3, void **, 0x70), s16 *, 0x64) = 0;
    M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), s16 *, 0x64) = 0;
}
