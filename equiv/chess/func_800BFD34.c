#include "common.h"

void func_800BFD34(s32 arg0) {
    s8 temp_v0;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_s4;
    u8 temp_s5;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = arg0 + 0x5D0;
    temp_s3 = M2C_FIELD(temp_s1, u8 *, 0x712);
    temp_s2 = M2C_FIELD(temp_s1, u8 *, 0x713);
    temp_s5 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    temp_s4 = M2C_FIELD((temp_s1 + temp_s5), u8 *, 0x5FB);
    func_800CB9F4(temp_s1, temp_s3, temp_s2);
    temp_v0 = func_800C20E8(arg0, temp_s1, temp_s5, temp_s4, (s32) temp_s3, (s32) temp_s2);
    temp_s0 = temp_s1 + ((temp_s3 * 0x2E8) + 0x18) + (temp_s2 * 0x7C) + temp_v0;
    M2C_FIELD(temp_s1, s8 *, 0x715) = temp_v0;
    M2C_FIELD(temp_s1, s16 *, 0x710) = (s16) (M2C_FIELD(temp_s0, u8 *, 0x6B) - M2C_FIELD(temp_s0, u8 *, 0xE));
    func_800125D8();
}
