#include "common.h"

void func_800ABEA0(void) {
    extern u8 D_80063940[];
    extern u8 D_80085428[];
    extern u8 D_800B3D18[];
    extern u8 D_800B3D46[];
    extern u8 D_800B3D48[];
    u8 *var_a3;
    u8 *var_a3_2;
    u8 *var_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_t2;
    s32 var_t2_2;
    u8 *temp_v1_2;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v1;
    u8 temp_v1_4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v0;
    void *temp_v0_4;
    void *temp_v1_3;
    void *temp_v1_5;
    void *temp_v1_6;
    void *var_v1;
    void *var_v1_2;
    void *var_v1_3;
    void *var_v1_4;

    var_a0 = 0;
    M2C_FIELD(D_800B3D48, u8 *, 1) = 0U;
    M2C_FIELD(D_800B3D48, u8 *, 0) = 0U;
    M2C_FIELD(D_800B3D46, s8 *, 1) = 0;
    M2C_FIELD(D_800B3D46, s8 *, 0) = 0;
    var_v0 = D_800B3D18;
    do {
        var_a0 += 1;
        M2C_FIELD(var_v0, s8 *, 4) = 0x7F;
        M2C_FIELD(var_v0, s8 *, 0) = 0x7F;
        var_v0 = var_a0 + D_800B3D18;
    } while (var_a0 < 4);
    if (M2C_FIELD(D_80085428, u8 *, 0x5DC) != 0) {
        var_t2 = 0;
        var_a3 = D_80085428;
        do {
            temp_v1 = M2C_FIELD(var_a3, u8 *, 0x613);
            if (temp_v1 == 1) {
                temp_v1_2 = var_t2 + D_800B3D18;
                M2C_FIELD(D_800B3D46, s8 *, 0) = 1;
                M2C_FIELD(D_800B3D48, u8 *, 0) = (u8) (M2C_FIELD(D_800B3D48, u8 *, 0) + 1);
                var_t2 += 1;
                *temp_v1_2 = M2C_FIELD(var_a3, u8 *, 0x614);
            } else {
                var_a0_2 = 0;
                if (temp_v1 == 2) {
                    M2C_FIELD(D_800B3D46, s8 *, 0) = 1;
                    temp_t0 = M2C_FIELD(var_a3, u8 *, 0x614);
                    temp_v0 = D_80085428 + (temp_t0 * 0xE);
                    M2C_FIELD(temp_v0, u8 *, 0x50) = (u8) M2C_FIELD(var_a3, u8 *, 0x5E8);
                    var_v1 = temp_v0;
                    do {
                        temp_v0_2 = M2C_FIELD((var_a3 + var_a0_2), u8 *, 0x5E9);
                        var_a0_2 += 1;
                        M2C_FIELD(var_v1, u8 *, 0x51) = temp_v0_2;
                        var_v1 = temp_v0 + var_a0_2;
                    } while (var_a0_2 < 8);
                    var_a0_3 = 0;
                    temp_a2 = D_80085428 + (temp_t0 * 0xE);
                    var_v1_2 = temp_a2;
                    do {
                        temp_v0_3 = M2C_FIELD((var_a3 + var_a0_3), u8 *, 0x5F1);
                        var_a0_3 += 1;
                        M2C_FIELD(var_v1_2, u8 *, 0x59) = temp_v0_3;
                        var_v1_2 = temp_a2 + var_a0_3;
                    } while (var_a0_3 < 5);
                    temp_a0 = D_80085428 + (temp_t0 * 0xE);
                    if ((((u32) M2C_FIELD(((M2C_FIELD(temp_a0, u8 *, 0x50) * 0x3C) + D_80063940), u32 *, 0x14) >> 5) & 1) != 1) {
                        M2C_FIELD(D_80085428, u8 *, 4) = (u8) (M2C_FIELD(D_80085428, u8 *, 4) + 1);
                    }
                    temp_v1_3 = (M2C_FIELD(temp_a0, u8 *, 0x50) * 0x3C) + D_80063940;
                    M2C_FIELD(temp_v1_3, s32 *, 0x14) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0x14) | 0x20);
                }
            }
            var_a3 += 0x7C;
        } while ((s32) var_a3 < (s32) (D_80085428 + 0x26C));
    }
    if ((M2C_FIELD(D_80085428, u8 *, 0x5D0) == 2) && (M2C_FIELD(D_80085428, u8 *, 0x5DD) != 0)) {
        var_t2_2 = 0;
        var_a3_2 = D_80085428;
        do {
            temp_v1_4 = M2C_FIELD(var_a3_2, u8 *, 0x8FB);
            if (temp_v1_4 == 1) {
                temp_v1_5 = var_t2_2 + D_800B3D18;
                M2C_FIELD(D_800B3D46, s8 *, 1) = 1;
                M2C_FIELD(D_800B3D48, u8 *, 1) = (u8) (M2C_FIELD(D_800B3D48, u8 *, 1) + 1);
                var_t2_2 += 1;
                M2C_FIELD(temp_v1_5, u8 *, 4) = (u8) M2C_FIELD(var_a3_2, u8 *, 0x8FC);
            } else {
                var_a0_4 = 0;
                if (temp_v1_4 == 2) {
                    M2C_FIELD(D_800B3D46, s8 *, 1) = 1;
                    temp_t0_2 = M2C_FIELD(var_a3_2, u8 *, 0x8FC);
                    temp_v0_4 = D_80085428 + (temp_t0_2 * 0xE);
                    M2C_FIELD(temp_v0_4, u8 *, 0x30C) = (u8) M2C_FIELD(var_a3_2, u8 *, 0x8D0);
                    var_v1_3 = temp_v0_4;
                    do {
                        temp_v0_5 = M2C_FIELD((var_a3_2 + var_a0_4), u8 *, 0x8D1);
                        var_a0_4 += 1;
                        M2C_FIELD(var_v1_3, u8 *, 0x30D) = temp_v0_5;
                        var_v1_3 = temp_v0_4 + var_a0_4;
                    } while (var_a0_4 < 8);
                    var_a0_5 = 0;
                    temp_a2_2 = D_80085428 + (temp_t0_2 * 0xE);
                    var_v1_4 = temp_a2_2;
                    do {
                        temp_v0_6 = M2C_FIELD((var_a3_2 + var_a0_5), u8 *, 0x8D9);
                        var_a0_5 += 1;
                        M2C_FIELD(var_v1_4, u8 *, 0x315) = temp_v0_6;
                        var_v1_4 = temp_a2_2 + var_a0_5;
                    } while (var_a0_5 < 5);
                    temp_a0_2 = D_80085428 + (temp_t0_2 * 0xE);
                    if ((((u32) M2C_FIELD(((M2C_FIELD(temp_a0_2, u8 *, 0x30C) * 0x3C) + D_80063940), u32 *, 0x14) >> 6) & 1) != 1) {
                        M2C_FIELD(D_80085428, u8 *, 5) = (u8) (M2C_FIELD(D_80085428, u8 *, 5) + 1);
                    }
                    temp_v1_6 = (M2C_FIELD(temp_a0_2, u8 *, 0x30C) * 0x3C) + D_80063940;
                    M2C_FIELD(temp_v1_6, s32 *, 0x14) = (s32) (M2C_FIELD(temp_v1_6, s32 *, 0x14) | 0x40);
                }
            }
            var_a3_2 += 0x7C;
        } while ((s32) var_a3_2 < (s32) (D_80085428 + 0x26C));
    }
}
