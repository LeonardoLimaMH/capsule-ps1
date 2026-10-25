#include "common.h"

void func_800D9268(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    extern u8 D_80118C18[];
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a1;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_a2_2;
    u8 temp_a0_2;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_a0 = arg0 & 0xFF;
    temp_a2 = (((arg0 & 0x7F) - 1) * 0x7C) + ((temp_a0 >> 7) * 0x2E8) + D_80085428;
    temp_a1 = arg1 & 0xFF;
    temp_v1 = ((u32) M2C_FIELD((((((u32) M2C_FIELD(((M2C_FIELD(temp_a2, u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4), u32 *, 0x10) >> 2) & 0x1F;
    if (temp_v1 == 3) {
        var_a1 = func_800D7E94(temp_a0, temp_a1, temp_a2, D_80085428) & 0xFF;
    } else if (temp_v1 == 6) {
        var_a1 = func_800D80F8(temp_a0, temp_a1, temp_a2, D_80085428) & 0xFF;
    } else {
        var_a1 = func_800D7CFC(temp_a0, temp_a1, temp_a2, D_80085428) & 0xFF;
    }
    temp_a3 = (arg1 & 0x7F) - 1;
    temp_a2_2 = (u32) (arg1 & 0xFF) >> 7;
    temp_v1_2 = (temp_a3 * 7) + (temp_a2_2 * 0x2A) + D_80118C18;
    temp_a0_2 = M2C_FIELD(temp_v1_2, u8 *, 0x5C0);
    if (var_a1 < (s32) temp_a0_2) {
        M2C_FIELD(temp_v1_2, u8 *, 0x5C0) = (u8) (temp_a0_2 - var_a1);
        return;
    }
    M2C_FIELD(temp_v1_2, u8 *, 0x5C0) = 0U;
    temp_a0_3 = (temp_a3 * 0x7C) + (temp_a2_2 * 0x2E8) + D_80085428;
    temp_v1_3 = (temp_a1 >> 7) + D_80118C18;
    M2C_FIELD(((M2C_FIELD(temp_a0_3, u8 *, 0x5FD) * 0xD) + D_80118C18 + M2C_FIELD(temp_a0_3, u8 *, 0x5FE)), s8 *, 0x612) = 0;
    M2C_FIELD(temp_v1_3, u8 *, 0x5BC) = (u8) (M2C_FIELD(temp_v1_3, u8 *, 0x5BC) - 1);
}
