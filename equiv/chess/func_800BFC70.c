#include "common.h"

void func_800BFC70(s32 arg0) {
    s16 temp_v0;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x712);
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 0x713);
    temp_a1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_s1 = temp_s0 + ((temp_v1 * 0x2E8) + 0x18) + (temp_a0 * 0x7C);
    temp_v0 = func_800C202C(temp_s0, ((temp_a1 << 7) | (M2C_FIELD((temp_s0 + temp_a1), u8 *, 0x5FB) + 1)) & 0xFF, ((temp_v1 << 7) | (temp_a0 + 1)) & 0xFF) & 0xFF;
    M2C_FIELD(temp_s0, s16 *, 0x710) = temp_v0;
    if ((s32) M2C_FIELD(temp_s1, u8 *, 0xE) < temp_v0) {
        M2C_FIELD(temp_s0, s16 *, 0x710) = (s16) M2C_FIELD(temp_s1, u8 *, 0xE);
    }
    func_800125D8();
}
