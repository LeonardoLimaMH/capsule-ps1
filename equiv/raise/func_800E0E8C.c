#include "common.h"

void func_800E0E8C(s32 arg0) {
    extern u8 D_80091618[];
    extern u8 D_80100F38[];
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s0;

    temp_a0 = arg0 & 0xFFFF;
    temp_s0 = (temp_a0 * 0x79C) + D_80100F38;
    M2C_FIELD(temp_s0, s16 *, 0x228) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x37E) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x38A) = 0;
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x798) & ~0x20;
    M2C_FIELD(temp_s0, s32 *, 0x798) = temp_v0;
    temp_v0_2 = temp_v0 & ~8 & ~0x10 & ~4 & ~3;
    M2C_FIELD(temp_s0, s32 *, 0x798) = temp_v0_2;
    M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) (((temp_v0_2 & ~0xC0 & ~0x300 & ~0xC00 & ~0x3000 & 0xFFF03FFF & 0xFC0FFFFF) | 0x200000) & 0x83FFFFFF);
    if (func_800E16AC(temp_a0, 0xFC0FFFFF, 0xFFF03FFF, 0x83FFFFFF) == 1) {
        M2C_FIELD(temp_s0, s16 *, 0x388) = 2;
    } else {
        M2C_FIELD(temp_s0, s16 *, 0x388) = 0;
    }
    M2C_FIELD(((temp_a0 * 0x1A8) + D_80091618), s16 *, 0x110) = 0;
}
