#include "common.h"

void func_800E19D0(s32 arg0) {
    extern u8 D_80091618[];
    extern u8 D_800FAE10[];
    extern u8 D_800FDE08[];
    extern u8 D_80100F38[];
    s16 temp_v0_3;
    s32 *temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    u16 temp_a1;
    u16 temp_a2;
    void *temp_s1;
    void *temp_s2;

    temp_v0 = func_800B1260() & 0xFFFF;
    temp_s1 = (temp_v0 * 0x79C) + D_80100F38;
    temp_s2 = (temp_v0 * 0x1A8) + D_80091618;
    temp_v0_2 = func_800E2D7C(arg0, D_80100F38);
    temp_s3 = ((1 - arg0) & 0xFFFF) * 4;
    temp_s0 = temp_s3 + D_800FDE08;
    *temp_s0 = temp_v0_2;
    if (temp_v0_2 != 0) {
        M2C_FIELD(temp_s1, s16 *, 0x1D4) = 0;
        M2C_FIELD(temp_s1, s16 *, 0x1D6) = 0;
        M2C_FIELD(temp_s1, s16 *, 0x1D8) = 0;
        temp_a1 = M2C_FIELD(temp_s2, u16 *, 0xA4);
        temp_a2 = M2C_FIELD(temp_s2, u16 *, 0xA8);
        M2C_FIELD(temp_s1, s16 *, 0x326) = 0;
        M2C_FIELD(temp_s1, s16 *, 0x324) = 0;
        temp_v0_3 = temp_a2 + (((s32) (temp_a1 << 0x10) >> 0xD) - 9);
        M2C_FIELD(temp_s1, u16 *, 0x336) = temp_a1;
        M2C_FIELD(temp_s1, u16 *, 0x332) = temp_a1;
        M2C_FIELD(temp_s1, u16 *, 0x338) = temp_a2;
        M2C_FIELD(temp_s1, u16 *, 0x334) = temp_a2;
        M2C_FIELD(temp_s1, s16 *, 0x32C) = temp_v0_3;
        M2C_FIELD(temp_s1, s16 *, 0x32A) = temp_v0_3;
        func_800D0730(temp_s1 + 0x1CC, (s16) (temp_a1 - 1), (s16) (temp_a2 - 1), 0);
        M2C_FIELD(temp_s2, s32 *, 0x178) = (s32) *temp_s0;
    }
    temp_v0_4 = func_800E3090(arg0);
    *(s32 *)(temp_s3 + D_800FAE10) = temp_v0_4;
    if (temp_v0_4 != 0) {
        M2C_FIELD(temp_s2, s32 *, 0x17C) = temp_v0_4;
    }
}
