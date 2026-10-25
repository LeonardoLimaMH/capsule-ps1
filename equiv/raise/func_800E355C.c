#include "common.h"

void func_800E355C(s32 arg0) {
    extern u8 D_80091618[];
    extern u8 D_800FDE08[];
    extern u8 D_80100F38[];
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_s1_3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    void **temp_s3;
    void *temp_a1;
    void *temp_s0;
    void *temp_s4;
    void *temp_v1;

    temp_v0 = func_800B1260() & 0xFFFF;
    temp_a1 = (temp_v0 * 0x79C) + D_80100F38;
    temp_v1 = (temp_v0 * 0x1A8) + D_80091618;
    M2C_FIELD(temp_a1, s16 *, 0x1D4) = 0;
    M2C_FIELD(temp_a1, s16 *, 0x1D6) = 0;
    M2C_FIELD(temp_a1, s16 *, 0x1D8) = 0;
    temp_v0_2 = M2C_FIELD(temp_v1, s32 *, 0xA4);
    temp_s2 = M2C_FIELD(temp_v1, s32 *, 0xA8);
    M2C_FIELD(temp_a1, s16 *, 0x338) = (s16) temp_s2;
    M2C_FIELD(temp_a1, s16 *, 0x334) = (s16) temp_s2;
    M2C_FIELD(temp_a1, s16 *, 0x332) = (s16) temp_v0_2;
    temp_s1 = M2C_FIELD(temp_a1, s16 *, 0x332);
    M2C_FIELD(temp_a1, s16 *, 0x336) = (s16) temp_v0_2;
    temp_s0 = ((func_800B1260(arg0, temp_a1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_s4 = temp_s0 + 0x1CC;
    M2C_FIELD(temp_s0, s16 *, 0x326) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x324) = 0;
    temp_s1_2 = temp_s1 - 1;
    temp_s1_3 = (temp_s1_2 * 8) - 1 + (s16) temp_s2;
    M2C_FIELD(temp_s0, s16 *, 0x32C) = temp_s1_3;
    M2C_FIELD(temp_s0, s16 *, 0x32A) = temp_s1_3;
    func_800D0730(temp_s4, temp_s1_2, (s16) ((s16) temp_s2 - 1), 0);
    func_800CED80(arg0, M2C_FIELD(temp_s0, s16 *, 0x32A), M2C_FIELD(temp_s0, s16 *, 0x32C));
    temp_s3 = ((arg0 != 1) * 4) + D_800FDE08;
    M2C_FIELD(*temp_s3, s16 *, 0x4E) = func_800E3A04(arg0, temp_s4, temp_s3);
}
