#include "common.h"

s32 func_800D9EB0(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_a0;
    s32 temp_s4;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_s1;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 temp_a0_2;
    u8 temp_a0_4;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_a2_2;
    u8 temp_v1;
    u8 var_a2;
    u8 var_a3;
    void *temp_a0_3;
    void *temp_a1;

    temp_s1 = arg0 & 0xFF;
    temp_a0 = func_800D7328(temp_s1, D_80119660) & 0xFF;
    var_v0 = 0;
    if (temp_a0 != 0) {
        temp_s4 = func_800202A4(temp_a0);
        func_800D90C0(temp_s1);
        temp_s0 = (temp_s4 & 0xFF) + D_80119660;
        func_800D943C(temp_s1, *temp_s0);
        temp_a0_2 = *temp_s0;
        temp_a1 = (((temp_a0_2 & 0x7F) - 1) * 0x7C) + ((temp_a0_2 >> 7) * 0x2E8) + D_80085428;
        temp_a0_3 = (((arg0 & 0x7F) - 1) * 0x7C) + ((temp_s1 >> 7) * 0x2E8) + D_80085428;
        var_a3 = M2C_FIELD(temp_a1, u8 *, 0x5FD);
        temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x5FE);
        temp_a1_2 = M2C_FIELD(temp_a0_3, u8 *, 0x5FD);
        temp_a0_4 = M2C_FIELD(temp_a0_3, u8 *, 0x5FE);
        var_a2 = temp_v1;
        if ((s32) temp_a1_2 < (s32) var_a3) {
            var_a3 -= 1;
            goto block_5;
        }
        var_v0_2 = (s32) temp_a0_4 < (s32) temp_v1;
        if ((s32) var_a3 < (s32) temp_a1_2) {
            var_a3 += 1;
block_5:
            var_v0_2 = (s32) temp_a0_4 < (s32) temp_v1;
        }
        if (var_v0_2 != 0) {
            var_a2 = temp_v1 - 1;
            goto block_10;
        }
        var_a0 = arg0 & 0xFF;
        if ((s32) temp_v1 < (s32) temp_a0_4) {
            var_a2 = temp_v1 + 1;
block_10:
            var_a0 = arg0 & 0xFF;
        }
        func_800CFFF8(var_a0, var_a3 & 0xFF, var_a2 & 0xFF, var_a3);
        temp_a2 = (temp_s4 & 0xFF) + D_80119660;
        temp_a1_3 = *temp_a2;
        M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(((((temp_a1_3 & 0x7F) - 1) * 0x7C) + ((temp_a1_3 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FD);
        temp_a2_2 = *temp_a2;
        var_v0 = 1;
        M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(((((temp_a2_2 & 0x7F) - 1) * 0x7C) + ((temp_a2_2 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FE);
    }
    return var_v0;
}
