#include "common.h"

s32 func_800E7934(s32 arg0) {
    extern u8 D_80091618[];
    s32 temp_s0;
    void *temp_v0;

    temp_v0 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
    temp_s0 = (s16) (M2C_FIELD(temp_v0, u16 *, 0xEE) / 3) + 0xC;
    return (func_800202A4(0x64, 0x55555556, M2C_FIELD(temp_v0, u16 *, 0xEE) / 3) < temp_s0) * 2;
}
