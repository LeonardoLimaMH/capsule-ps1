#include "common.h"

s16 func_800D82A0(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    s16 var_a3;
    u32 temp_t1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    temp_t1 = arg0 & 0xFF;
    temp_a1 = ((((u32) M2C_FIELD(((M2C_FIELD(((((arg0 & 0x7F) - 1) * 0x7C) + ((temp_t1 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4;
    if (((u32) M2C_FIELD(temp_a1, u32 *, 0x10) >> 0x1D) == 3) {
        temp_a0_2 = (((arg1 & 0x7F) - 1) * 0x7C) + (((u32) (arg1 & 0xFF) >> 7) * 0x2E8) + D_80085428;
        var_a3 = M2C_FIELD(temp_a0_2, u8 *, 0x5F6) + ((M2C_FIELD(temp_a0_2, u8 *, 0x5F1) * M2C_FIELD(temp_a1, s16 *, 0x14)) / 100);
    } else {
        var_a3 = func_800D7B80(temp_t1, M2C_FIELD(((((arg1 & 0x7F) - 1) * 0x7C) + (((u32) (arg1 & 0xFF) >> 7) * 0x2E8) + D_80085428), u8 *, 0x5F6), D_80063940, D_8006B2A4) & 0xFF;
    }
    temp_a0 = (((arg1 & 0x7F) - 1) * 0x7C) + (((u32) (arg1 & 0xFF) >> 7) * 0x2E8) + D_80085428;
    if ((s32) M2C_FIELD(temp_a0, u8 *, 0x5F1) < var_a3) {
        var_a3 = (s16) M2C_FIELD(temp_a0, u8 *, 0x5F1);
    }
    return (s16) (var_a3 - M2C_FIELD(temp_a0, u8 *, 0x5F6));
}
