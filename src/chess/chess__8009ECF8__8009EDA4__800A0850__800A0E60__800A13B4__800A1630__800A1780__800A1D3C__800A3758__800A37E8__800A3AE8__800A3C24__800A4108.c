#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_800A4108(s32 arg0, s32 arg1, s32 unused_arg2, M2C_UNK arg3) {
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_s5;
    void *temp_s1;
    void *temp_v0;

    temp_s2 = arg1 & 0xFF;
    temp_s1 = arg0 + (temp_s2 * 2);
    temp_s4 = M2C_FIELD(temp_s1, u8 *, 0xBD1);
    temp_s5 = M2C_FIELD(temp_s1, u8 *, 0xBD2);
    temp_v0 = func_800A4678(arg3);
    M2C_FIELD(temp_v0, s32 *, 0x5C) = temp_s2;
    M2C_FIELD(temp_v0, s32 *, 0x60) = temp_s4;
    M2C_FIELD(temp_v0, s32 *, 0x64) = temp_s5;
    M2C_FIELD(temp_v0, s32 *, 0x68) = (s32) M2C_FIELD(temp_s1, u8 *, 0xBD1);
    M2C_FIELD(temp_v0, s32 *, 0x6C) = (s32) M2C_FIELD(temp_s1, u8 *, 0xBD2);
    M2C_FIELD(temp_v0, s32 *, 0x50) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x50) & ~1) | 0x40) & ~0x30);
    func_800A4900(arg0, temp_v0 + 0x18, temp_s4, temp_s5);
    M2C_FIELD(temp_v0, s8 *, 0x58) = 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C__800A3758__800A37E8__800A3AE8__800A3C24__800A4108", func_800A41C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C__800A3758__800A37E8__800A3AE8__800A3C24__800A4108", func_800A431C);
