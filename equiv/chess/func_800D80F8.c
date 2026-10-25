#include "common.h"

u8 func_800D80F8(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    s16 var_s0;
    s32 var_v0;
    void *temp_a2;
    void *temp_a3;

    temp_a3 = (((arg0 & 0x7F) - 1) * 0x7C) + (((u32) (arg0 & 0xFF) >> 7) * 0x2E8) + D_80085428;
    temp_a2 = (((arg1 & 0x7F) - 1) * 0x7C) + (((u32) (arg1 & 0xFF) >> 7) * 0x2E8) + D_80085428;
    var_s0 = M2C_FIELD((((((u32) M2C_FIELD(((M2C_FIELD(temp_a3, u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4), u16 *, 0x14) + ((M2C_FIELD(temp_a3, u8 *, 0x5FA) - M2C_FIELD(temp_a2, u8 *, 0x5FA)) * 5);
    if (var_s0 > 0) {
        if (var_s0 >= 0x65) {
            var_s0 = 0x64;
        }
    } else {
        var_s0 = 1;
    }
    var_v0 = 1;
    if (func_800202A4(0x64, D_8006B2A4, temp_a2, temp_a3) >= var_s0) {
        var_v0 = 0;
    }
    if (!(var_v0 & 0xFF)) {
        return 1U;
    }
    M2C_FIELD(D_80085428, s8 *, 0xCDE) = 1;
    return M2C_FIELD(((((arg1 & 0x7F) - 1) * 0x7C) + (((u32) (arg1 & 0xFF) >> 7) * 0x2E8) + D_80085428), u8 *, 0x5F6);
}
