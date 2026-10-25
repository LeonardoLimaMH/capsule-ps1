#include "common.h"

void func_800CFFF8(s8 arg0, u8 arg1, u8 arg2) {
    extern u8 D_80118C18[];
    void *temp_t0;
    void *temp_v1;

    temp_t0 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + (D_80118C18 + 0x392);
    temp_v1 = temp_t0 + ((((u32) (arg0 & 0xFF) >> 7) * 0x2A) + 0x10) + (((arg0 & 0x7F) * 7) - 7);
    M2C_FIELD(((M2C_FIELD(temp_v1, u8 *, 0) * 0xD) + temp_t0 + M2C_FIELD(temp_v1, u8 *, 1)), s8 *, 0x64) = 0;
    M2C_FIELD((((arg1 & 0xFF) * 0xD) + temp_t0 + (arg2 & 0xFF)), s8 *, 0x64) = arg0;
    M2C_FIELD(temp_v1, u8 *, 0) = arg1;
    M2C_FIELD(temp_v1, u8 *, 1) = arg2;
}
