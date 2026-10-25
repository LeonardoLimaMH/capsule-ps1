#include "common.h"

void func_800D8E90(s32 arg0) {
    extern u8 D_80091618[];
    extern u8 D_800EE9B8[];
    extern u8 D_80100F38[];
    s16 temp_a1;
    s32 temp_v0;
    u16 temp_a2;
    u16 temp_v1;
    void *temp_s0;
    void *temp_v1_2;

    temp_v0 = func_800B1260() & 0xFFFF;
    temp_s0 = (temp_v0 * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x336);
    temp_a2 = M2C_FIELD(temp_s0, u16 *, 0x338);
    M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
    M2C_FIELD(temp_s0, u16 *, 0x332) = temp_v1;
    M2C_FIELD(temp_s0, u16 *, 0x32E) = temp_v1;
    temp_v1_2 = (temp_v0 * 0x1A8) + D_80091618;
    M2C_FIELD(temp_s0, u16 *, 0x334) = temp_a2;
    M2C_FIELD(temp_s0, u16 *, 0x330) = temp_a2;
    M2C_FIELD(temp_v1_2, s32 *, 0xA4) = (s32) (s16) M2C_FIELD(temp_s0, u16 *, 0x336);
    temp_a1 = (s16) M2C_FIELD(temp_s0, u16 *, 0x338);
    M2C_FIELD(temp_v1_2, s32 *, 0xAC) = 5;
    M2C_FIELD(temp_v1_2, s32 *, 0xA8) = (s32) temp_a1;
    func_800DCC94(arg0, temp_a1, temp_a2);
    M2C_FIELD(temp_s0, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32C);
    func_800D0730(temp_s0 + 0x1CC, (s16) (M2C_FIELD(temp_s0, u16 *, 0x336) - 1), (s16) (M2C_FIELD(temp_s0, u16 *, 0x338) - 1), 0);
    M2C_FIELD(temp_s0, s16 *, 0x1D4) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x1D6) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x1D8) = 0;
    *(s32 *)(((1 - arg0) * 4) + D_800EE9B8) = 0;
}
