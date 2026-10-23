#include "common.h"

s32 func_800D9798(s32 arg0) {
    extern M2C_UNK D_8006B2A4[];
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_fp;
    s32 temp_s1_2;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s5;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_a2;
    u32 temp_s0;
    u32 temp_v0_2;
    u32 var_a0;
    u8 *temp_a2_2;
    u8 *temp_s0_2;
    u8 temp_a1;
    u8 temp_a2_3;
    u8 temp_v1;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1_2;

    var_s7 = 0;
    temp_a2 = (u32) (arg0 & 0xFF) >> 7;
    temp_fp = 1 - temp_a2;
    temp_v1 = M2C_FIELD(((((arg0 & 0x7F) - 1) * 0x7C) + ((temp_a2 & 0xFF) * 0x2E8) + D_80085428), u8 *, 0x5E8);
    var_s5 = -1;
    if (temp_v1 != 0x2D) {
        if ((s32) temp_v1 < 0x2E) {
            var_s0 = 0;
            if (temp_v1 != 0x1D) {

            } else {
                goto block_6;
            }
        } else if ((temp_v1 == 0x4F) || (var_s0 = 0, (temp_v1 == 0x5C))) {
block_6:
            var_s0 = 1;
        }
    } else {
        var_s0 = 0;
    }
    var_s2 = 0;
    temp_v0 = (M2C_FIELD(((((arg0 & 0x7F) - 1) * 0x7C) + (((u32) (arg0 & 0xFF) >> 7) * 0x2E8) + D_80085428), u8 *, 0x5E8) * 0x58) + D_8006B2A4;
    M2C_FIELD(temp_v0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x10) | 0x18000);
    var_a0 = arg0 & 0xFF;
    do {
        temp_v0_2 = func_800D741C(var_a0, D_80119660, var_s2 & 0xFF) & 0xFF;
        var_a0_2 = 0;
        if (temp_v0_2 != 0) {
            var_v1 = 0;
            if (temp_v0_2 != 0) {
                var_v0_2 = 0 & 0xFF;
                do {
                    if (((u8) *(var_v0_2 + D_80119660) >> 7) == (temp_fp & 0xFF)) {
                        var_v1 += 1;
                    } else {
                        var_v1 -= 1;
                    }
                    var_a0_2 += 1;
                    var_v0_2 = var_a0_2 & 0xFF;
                } while ((u32) (var_a0_2 & 0xFF) < temp_v0_2);
            }
            if (var_s0 < var_v1) {
                var_s0 = var_v1;
                var_s5 = var_s2 & 0xFF;
            }
        }
        var_s2 += 1;
        var_a0 = arg0 & 0xFF;
    } while ((u32) (var_s2 & 0xFF) < 8U);
    temp_s0 = arg0 & 0xFF;
    temp_s1 = (((arg0 & 0x7F) - 1) * 0x7C) + ((temp_s0 >> 7) * 0x2E8) + D_80085428;
    temp_v0_3 = (M2C_FIELD(temp_s1, u8 *, 0x5E8) * 0x58) + D_8006B2A4;
    M2C_FIELD(temp_v0_3, s32 *, 0x10) = (s32) ((M2C_FIELD(temp_v0_3, s32 *, 0x10) & 0xFFFE7FFF) | 0x10000);
    var_v0 = 0;
    if (var_s5 != -1) {
        func_800D90C0(temp_s0, D_80085428, D_8006B2A4);
        temp_v0_4 = (M2C_FIELD(temp_s1, u8 *, 0x5E8) * 0x58) + D_8006B2A4;
        M2C_FIELD(temp_v0_4, s32 *, 0x10) = (s32) (M2C_FIELD(temp_v0_4, s32 *, 0x10) | 0x18000);
        temp_s1_2 = func_800D741C(temp_s0, D_80119660, var_s5, 0x18000);
        temp_v1_2 = (M2C_FIELD(temp_s1, u8 *, 0x5E8) * 0x58) + D_8006B2A4;
        var_s2_2 = 0;
        M2C_FIELD(temp_v1_2, s32 *, 0x10) = (s32) ((M2C_FIELD(temp_v1_2, s32 *, 0x10) & 0xFFFE7FFF) | 0x10000);
        if (temp_s1_2 & 0xFF) {
            var_s0_2 = 0 & 0xFF;
            do {
                temp_s0_2 = var_s0_2 + D_80119660;
                func_800D943C(arg0 & 0xFF, *temp_s0_2);
                if (((u8) *temp_s0_2 >> 7) == (temp_fp & 0xFF)) {
                    var_s7 = var_s2_2;
                }
                var_s2_2 += 1;
                var_s0_2 = var_s2_2 & 0xFF;
            } while ((u32) (var_s2_2 & 0xFF) < (u32) (temp_s1_2 & 0xFF));
        }
        temp_a2_2 = (var_s7 & 0xFF) + D_80119660;
        temp_a1 = *temp_a2_2;
        M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(((((temp_a1 & 0x7F) - 1) * 0x7C) + ((temp_a1 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FD);
        temp_a2_3 = *temp_a2_2;
        var_v0 = 1;
        M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(((((temp_a2_3 & 0x7F) - 1) * 0x7C) + ((temp_a2_3 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FE);
    }
    return var_v0;
}
