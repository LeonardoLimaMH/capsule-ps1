#include "common.h"

void func_800D2EEC(s8 arg0, u8 arg1, u8 arg2) {
    extern u8 D_80085428[];
    extern s32 D_80118C18[];
    u8 temp_t0;
    u8 temp_v1;
    void *temp_a3;

    temp_a3 = (((arg0 & 0x7F) - 1) * 0x7C) + (((u32) (arg0 & 0xFF) >> 7) * 0x2E8) + D_80085428;
    temp_v1 = M2C_FIELD(temp_a3, u8 *, 0x5FD);
    temp_t0 = M2C_FIELD(temp_a3, u8 *, 0x5FE);
    M2C_FIELD(temp_a3, u8 *, 0x5FD) = arg1;
    M2C_FIELD(temp_a3, u8 *, 0x5FE) = arg2;
    M2C_FIELD(((temp_t0 * 4) + (((temp_v1 & 0xFF) * 0x34) + (*D_80118C18))), s8 *, 3) = 0;
    M2C_FIELD((((arg2 & 0xFF) * 4) + (((arg1 & 0xFF) * 0x34) + (*D_80118C18))), s8 *, 3) = arg0;
}
