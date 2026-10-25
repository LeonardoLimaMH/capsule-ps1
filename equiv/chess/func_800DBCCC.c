#include "common.h"

s32 func_800DBCCC(s32 arg0) {
    extern u8 D_80085428[];
    extern u8 D_80085994[];
    extern u8 D_80118C18[];
    extern u8 D_80119660[];
    extern u8 D_8011970A[];
    s16 temp_a3;
    s16 var_a2;
    s16 var_s4;
    s32 temp_a2;
    s32 temp_a3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    u32 temp_a0;
    u32 temp_s0_3;
    u32 temp_s1;
    u32 temp_t0;
    u8 *temp_s0;
    u8 temp_s0_2;
    u8 var_s6;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_s2;
    void *temp_v1;

    var_s6 = 0;
    var_s4 = 0;
    temp_a0 = arg0 & 0xFF;
    temp_a2 = arg0 & 0x7F;
    temp_s2 = ((temp_a0 >> 7) * 0x2E8) + D_80085994 + (temp_a2 * 0x7C);
    temp_v0 = func_800D7328(temp_a0, D_80119660, temp_a2);
    temp_v0_2 = temp_v0 & 0xFF;
    if (temp_v0_2 != 0) {
        var_s1 = 0;
        if (temp_v0_2 != 0) {
            var_s0 = 0 & 0xFF;
            do {
                temp_s0 = var_s0 + D_80119660;
                var_a2 = func_800D24B4(arg0 & 0xFF, *temp_s0);
                temp_s0_2 = *temp_s0;
                temp_a3 = M2C_FIELD(temp_s2, u8 *, 9) - M2C_FIELD(temp_s2, u8 *, 0xE);
                temp_a0_2 = (((temp_s0_2 & 0x7F) - 1) * 0x7C) + ((temp_s0_2 >> 7) * 0x2E8) + (D_80085994 - 0x56C);
                var_v0 = var_a2 << 0x10;
                if (var_a2 >= (s32) M2C_FIELD(temp_a0_2, u8 *, 0x5F6)) {
                    var_a2 = M2C_FIELD(temp_a0_2, u8 *, 0x5F6) - 1;
                    var_v0 = var_a2 << 0x10;
                }
                var_v1 = var_a2 << 0x10;
                if (temp_a3 < (var_v0 >> 0x10)) {
                    var_a2 = temp_a3;
                    var_v1 = var_a2 << 0x10;
                }
                if ((var_s4 << 0x10) < var_v1) {
                    var_s4 = var_a2;
                    var_s6 = temp_s0_2;
                }
                var_s1 += 1;
                var_s0 = var_s1 & 0xFF;
            } while ((u32) (var_s1 & 0xFF) < (u32) (temp_v0 & 0xFF));
        }
        temp_s1 = var_s6 & 0xFF;
        temp_s0_3 = arg0 & 0xFF;
        if (temp_s1 != 0) {
            func_800D90C0(temp_s0_3);
            temp_a3_2 = (var_s6 & 0x7F) - 1;
            temp_t0 = temp_s1 >> 7;
            temp_v1 = (temp_a3_2 * 7) + (temp_t0 * 0x2A) + D_80118C18;
            M2C_FIELD(temp_v1, u8 *, 0x5C0) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x5C0) - var_s4);
            temp_a0_3 = (((arg0 & 0x7F) - 1) * 7) + ((temp_s0_3 >> 7) * 0x2A) + D_80118C18;
            M2C_FIELD(temp_a0_3, u8 *, 0x5C0) = (u8) (M2C_FIELD(temp_a0_3, u8 *, 0x5C0) + var_s4);
            temp_a1 = (temp_a3_2 * 0x7C) + (temp_t0 * 0x2E8) + D_80085428;
            M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(temp_a1, u8 *, 0x5FD);
            M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(temp_a1, u8 *, 0x5FE);
            return 1;
        }
        goto block_12;
    }
block_12:
    return 0;
}
