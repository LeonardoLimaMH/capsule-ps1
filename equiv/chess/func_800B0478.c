#include "common.h"

void func_800B0478(void *arg0) {
    extern u8 D_80069AD4[];
    extern u8 D_801010B0[];
    s32 var_a1;
    s32 var_v1;
    void *temp_v0;

    var_a1 = 0;
    temp_v0 = (M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0;
    if (M2C_FIELD(temp_v0, u8 *, 0xA) & 1) {
        var_a1 = -0x32;
    }
    M2C_FIELD(D_80069AD4, s32 *, 0x44) = var_a1;
    M2C_FIELD(D_80069AD4, s32 *, 0x48) = (s32) ((((u32) M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), u32 *, 0x150) >> 0x13) & 7) * 0x32);
    var_v1 = 0;
    if (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + D_801010B0), u8 *, 0xB) & 1) {
        var_v1 = -0x32;
    }
    M2C_FIELD(D_80069AD4, s32 *, 0x4C) = var_v1;
}
