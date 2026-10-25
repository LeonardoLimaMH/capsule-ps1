#include "common.h"

s32 func_800DAB58(s32 arg0) {
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    extern u8 D_80118C18[];
    extern u8 D_80119660[];
    extern u8 D_8011970A[];
    s32 temp_a0;
    s32 temp_s2;
    s32 var_v0;
    u16 var_v0_2;
    u32 temp_s0;
    u8 *temp_a3;
    u8 *temp_v1;
    u8 temp_a1_2;
    u8 temp_a1_3;
    void *temp_a1;

    temp_a1 = (((arg0 & 0x7F) - 1) * 0x7C) + (((u32) (arg0 & 0xFF) >> 7) * 0x2E8) + D_80085428;
    if (M2C_FIELD(temp_a1, u8 *, 0x5E8) == 0x2E) {
        var_v0 = func_800202A4(0x64, temp_a1, D_80085428) < 0x1E;
    } else {
        var_v0 = func_800202A4(0x64, temp_a1, D_80085428) < 0xA;
    }
    temp_s0 = arg0 & 0xFF;
    if ((var_v0 == 0) || (temp_a0 = func_800D7328(temp_s0, D_80119660) & 0xFF, (temp_a0 == 0))) {
        return 0;
    }
    temp_s2 = func_800202A4(temp_a0);
    func_800D90C0(temp_s0);
    if (M2C_FIELD(((((arg0 & 0x7F) - 1) * 0x7C) + ((temp_s0 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5E8) == 0x2E) {
        var_v0_2 = M2C_FIELD(D_80118C18, u16 *, 0x5B4) + 0x12C;
    } else {
        var_v0_2 = M2C_FIELD(D_80118C18, u16 *, 0x5B4) + 0x64;
    }
    M2C_FIELD(D_80118C18, u16 *, 0x5B4) = var_v0_2;
    if ((((u32) M2C_FIELD(((M2C_FIELD(((((arg0 & 0x7F) - 1) * 0x7C) + (((u32) (arg0 & 0xFF) >> 7) * 0x2E8) + D_80085428), u8 *, 0x5E8) * 0x58) + D_8006B2A4), u32 *, 0x10) >> 0x15) & 7) == 1) {
        temp_a3 = (temp_s2 & 0xFF) + D_80119660;
        temp_a1_2 = *temp_a3;
        M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(((((temp_a1_2 & 0x7F) - 1) * 0x7C) + ((temp_a1_2 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FD);
        temp_a1_3 = *temp_a3;
        M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(((((temp_a1_3 & 0x7F) - 1) * 0x7C) + ((temp_a1_3 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FE);
    } else {
        temp_v1 = (temp_s2 & 0xFF) + D_80119660;
        M2C_FIELD(D_8011970A, u8 *, 0) = (u8) (*temp_v1 / 13);
        M2C_FIELD(D_8011970A, u8 *, 1) = (u8) (*temp_v1 % 13);
    }
    return 1;
}
