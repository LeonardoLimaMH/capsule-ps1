#include "common.h"

s32 func_800DC28C(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80118C18[];
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s16 temp_a1;
    s32 temp_a0;
    s32 temp_a2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a3;
    u32 temp_s0;
    u8 temp_s2;
    u8 temp_v0;
    void *temp_a0_2;
    void *temp_a1_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_s0 = arg0 & 0xFF;
    temp_a0 = func_800D7328(temp_s0, D_80119660) & 0xFF;
    var_v0 = 0;
    if (temp_a0 != 0) {
        temp_s2 = *((func_800202A4(temp_a0) & 0xFF) + D_80119660);
        func_800D90C0(temp_s0);
        if (M2C_FIELD(((((arg0 & 0x7F) - 1) * 0x7C) + ((temp_s0 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5E8) == 0x4C) {
            var_v0_2 = func_800202A4(5, D_80085428) + 3;
        } else {
            var_v0_2 = func_800202A4(7, D_80085428) + 4;
        }
        temp_a1 = var_v0_2 * 0xA;
        temp_a2 = (temp_s2 & 0x7F) - 1;
        temp_a3 = temp_s2 >> 7;
        temp_v1 = (temp_a2 * 7) + (temp_a3 * 0x2A) + D_80118C18;
        temp_v0 = M2C_FIELD(temp_v1, u8 *, 0x5C0);
        if (temp_a1 < (s32) temp_v0) {
            M2C_FIELD(temp_v1, u8 *, 0x5C0) = (u8) (temp_v0 - temp_a1);
        } else {
            M2C_FIELD(temp_v1, u8 *, 0x5C0) = 0U;
            temp_a0_2 = (temp_a2 * 0x7C) + (temp_a3 * 0x2E8) + D_80085428;
            temp_v1_2 = temp_a3 + D_80118C18;
            M2C_FIELD(((M2C_FIELD(temp_a0_2, u8 *, 0x5FD) * 0xD) + D_80118C18 + M2C_FIELD(temp_a0_2, u8 *, 0x5FE)), s8 *, 0x612) = 0;
            M2C_FIELD(temp_v1_2, u8 *, 0x5BC) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 0x5BC) - 1);
        }
        var_v0 = 1;
        temp_a1_2 = (((temp_s2 & 0x7F) - 1) * 0x7C) + ((temp_s2 >> 7) * 0x2E8) + D_80085428;
        M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(temp_a1_2, u8 *, 0x5FD);
        M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(temp_a1_2, u8 *, 0x5FE);
    }
    return var_v0;
}
