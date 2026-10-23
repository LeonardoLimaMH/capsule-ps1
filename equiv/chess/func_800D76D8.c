#include "common.h"

u8 func_800D76D8(s32 arg0, M2C_UNK arg1) {
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_8006B2A4[];
    extern M2C_UNK D_80085428[];
    extern s8 D_80119658[];
    extern u8 D_80119659[];
    u32 temp_s3;
    u32 temp_v0;
    void *temp_s0;

    temp_s3 = arg0 & 0xFF;
    temp_s0 = ((((u32) M2C_FIELD(((M2C_FIELD(((((arg0 & 0x7F) - 1) * 0x7C) + ((temp_s3 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4;
    temp_v0 = M2C_FIELD(temp_s0, u32 *, 0x10);
    M2C_FIELD(temp_s0, u32 *, 0x10) = (u32) ((temp_v0 & 0xFFFE7FFF & 0xFFE1FFFF) | 0x40000);
    func_8001A998(arg1, 0xA9, D_80063940);
    (*D_80119658) = 0;
    (*D_80119659) = 0;
    func_800D6DA4(temp_s3, arg1);
    M2C_FIELD(temp_s0, u32 *, 0x10) = (u32) ((((M2C_FIELD(temp_s0, u32 *, 0x10) & 0xFFFE7FFF) | (((temp_v0 >> 0xF) & 3) << 0xF)) & 0xFFE1FFFF) | (((temp_v0 >> 0x11) & 0xF) << 0x11));
    return (*D_80119659);
}
