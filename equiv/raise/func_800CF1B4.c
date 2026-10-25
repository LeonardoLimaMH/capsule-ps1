#include "common.h"

void func_800CF1B4(void) {
    extern u8 D_80100F38[];
    s32 temp_a0;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s0;

    temp_s0 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    M2C_FIELD(temp_s0, u16 *, 0x1EC) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x1EC) + M2C_FIELD(temp_s0, u16 *, 0x204));
    temp_v0 = (s16) M2C_FIELD(temp_s0, u16 *, 0x1EC) - M2C_FIELD(temp_s0, s16 *, 0x1FC);
    temp_lo = temp_v0 * temp_v0;
    M2C_FIELD(temp_s0, u16 *, 0x1F0) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x1F0) + M2C_FIELD(temp_s0, u16 *, 0x208));
    temp_v0_2 = (s16) M2C_FIELD(temp_s0, u16 *, 0x1F0) - M2C_FIELD(temp_s0, s16 *, 0x200);
    temp_lo_2 = temp_v0_2 * temp_v0_2;
    M2C_FIELD(temp_s0, s32 *, 0x210) = temp_lo;
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x20C) - (temp_lo + temp_lo_2);
    M2C_FIELD(temp_s0, s32 *, 0x218) = temp_lo_2;
    M2C_FIELD(temp_s0, s32 *, 0x214) = temp_a0;
    M2C_FIELD(temp_s0, s16 *, 0x1EE) = (s16) (M2C_FIELD(temp_s0, u16 *, 0x1FE) - ((s32) (func_8001AB74(temp_a0) << 0x10) >> 0xF));
}
