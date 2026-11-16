#include "ghidra.h"
#include "matching.h"
#include "common.h"



void func_800A41C4(void *arg0) {
    extern u8 D_8008619F[];
    extern u8 D_8008ED68[];
    extern u8 D_80100C18[];
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a0;
    s32 value;
    u8 *temp_s0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (*D_8008619F == 3) {
        M2C_FIELD(arg0, s32 *, 0x50) &= ~1;
    } else if (*D_8008619F == 2) {
        M2C_FIELD(arg0, s32 *, 0x50) |= 1;
        return;
    } else if (*D_8008619F != 0) {
        func_800185F8(arg0, temp_a1);
        return;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x54);
    if (D_8008ED68[0x103] >= 2U) {
        var_a0 = temp_v1 + D_8008ED68[0x103];
    } else {
        var_a0 = temp_v1 + 1;
    }
    temp_s0 = D_80100C18 + temp_a1 * 4;
    M2C_FIELD(arg0, s32 *, 0x54) = var_a0;
    value = rsin(((u32)(var_a0 << 12) / 120) & 0x7FF);
    M2C_FIELD(arg0, s8 *, 0x38) = (value * (s32)temp_s0[0]) / 4096;
    M2C_FIELD(arg0, s8 *, 0x39) = (value * (s32)temp_s0[1]) / 4096;
    M2C_FIELD(arg0, s8 *, 0x3A) = (value * (s32)temp_s0[2]) / 4096;
}






