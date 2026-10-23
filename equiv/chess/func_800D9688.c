#include "common.h"

s32 func_800D9688(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    u8 *temp_s0_2;
    u8 temp_a1;
    u8 temp_a2;

    temp_s1 = arg0 & 0xFF;
    temp_a0 = func_800D7328(temp_s1, D_80119660) & 0xFF;
    var_v0 = 0;
    if (temp_a0 != 0) {
        temp_s0 = func_800202A4(temp_a0);
        func_800D90C0(temp_s1);
        temp_s0_2 = (temp_s0 & 0xFF) + D_80119660;
        func_800D943C(temp_s1, *temp_s0_2);
        temp_a1 = *temp_s0_2;
        M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(((((temp_a1 & 0x7F) - 1) * 0x7C) + ((temp_a1 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FD);
        temp_a2 = *temp_s0_2;
        var_v0 = 1;
        M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(((((temp_a2 & 0x7F) - 1) * 0x7C) + ((temp_a2 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FE);
    }
    return var_v0;
}
