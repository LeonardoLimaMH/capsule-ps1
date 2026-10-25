#include "common.h"

void func_800BA3A8(s32 arg0) {
    extern u8 D_80091618[];
    extern u8 D_800FAE10[];
    extern u8 D_800FDE08[];
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_s1 = func_800B1260() & 0xFFFF;
    temp_v0 = func_800E2D7C(arg0);
    temp_s3 = (arg0 != 1) * 4;
    temp_s0 = temp_s3 + D_800FDE08;
    *temp_s0 = temp_v0;
    if (temp_v0 != 0) {
        func_800E355C(arg0);
        M2C_FIELD(((temp_s1 * 0x1A8) + D_80091618), s32 *, 0x178) = (s32) *temp_s0;
    }
    temp_v0_2 = func_800E3090(arg0);
    temp_s0_2 = temp_s3 + D_800FAE10;
    *temp_s0_2 = temp_v0_2;
    if (temp_v0_2 != 0) {
        func_800E4158(arg0);
        M2C_FIELD(((temp_s1 * 0x1A8) + D_80091618), s32 *, 0x17C) = (s32) *temp_s0_2;
    }
}
