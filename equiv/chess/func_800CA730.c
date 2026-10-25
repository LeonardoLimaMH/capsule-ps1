#include "common.h"

void func_800CA730(void *arg0, s32 arg1, u32 *arg2, s32 *arg3) {
    extern u8 D_801010B0[];
    void *temp_a0;
    void *temp_a1;

    temp_a0 = arg0 + (arg1 * 2);
    temp_a1 = (M2C_FIELD(temp_a0, u8 *, 0xBD2) * 4) + ((M2C_FIELD(temp_a0, u8 *, 0xBD1) * 0x34) + *(s32 *)((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0));
    *arg2 = (u8) M2C_FIELD(temp_a1, u8 *, 3) >> 7;
    *arg3 = (M2C_FIELD(temp_a1, u8 *, 3) & 0x7F) - 1;
}
