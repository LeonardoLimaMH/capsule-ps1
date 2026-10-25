#include "common.h"

void func_800BC50C(s32 arg0, s32 arg1, s32 arg2) {
    extern u8 D_8008ED68[];
    extern u8 D_800EE5F0[];
    extern u8 D_800EFF58[];
    s32 temp_s1;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = (arg0 * 0xC) + D_800EFF58;
    temp_s1 = arg1 * 4;
    temp_v0 = M2C_FIELD(((arg0 * 4) + D_800EFF58), void **, 0x290);
    M2C_FIELD((temp_s0 + temp_s1), s32 *, 0x2A0) = func_800BC8FC(0x1C, (s16) (M2C_FIELD(temp_v0, u16 *, 0x46) + (((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2) + 8)), (s16) (M2C_FIELD(temp_v0, u16 *, 0x4A) + (((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2) + 8)), 3, 0, D_800EE5F0, M2C_FIELD((temp_s0 + temp_s1), s32 *, 0x2B8), 1, 1, arg2, 2, 0, 0);
}
