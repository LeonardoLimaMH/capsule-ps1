#include "common.h"

s32 func_800D7CFC(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    u32 temp_s1;
    u32 temp_t0;
    void *temp_s0;

    temp_s1 = arg0 & 0xFF;
    temp_t0 = temp_s1 >> 7;
    temp_s0 = (((arg0 & 0x7F) - 1) * 0x7C) + (temp_t0 * 0x2E8) + D_80085428;
    if (((u32) M2C_FIELD((((((u32) M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4), u32 *, 0x10) >> 0x1D) != 6) {
        return func_800D7B80(temp_s1, func_800D23F0(temp_t0, M2C_FIELD(temp_s0, u8 *, 0x5F7), M2C_FIELD(((((arg1 & 0x7F) - 1) * 0x7C) + (((u32) (arg1 & 0xFF) >> 7) * 0x2E8) + D_80085428), u8 *, 0x5F8), D_8006B2A4) & 0xFF) & 0xFF;
    }
    return (M2C_FIELD((((((u32) M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4), s16 *, 0x14) * (func_800D2DA8(temp_s1, arg1 & 0xFF, arg1, D_8006B2A4) & 0xFF)) & 0xFF;
}
