#include "common.h"

s32 func_800DAE28(s32 arg0) {
    extern u8 D_80085994[];
    extern u8 D_80118C18[];
    s32 temp_s0;
    s32 var_v0;
    u32 temp_s1;
    u32 temp_s2;
    void *temp_a0;
    void *temp_v1;

    temp_s2 = arg0 & 0xFF;
    temp_s1 = temp_s2 >> 7;
    temp_s0 = arg0 & 0x7F;
    temp_v1 = (temp_s1 * 0x2E8) + D_80085994 + (temp_s0 * 0x7C);
    var_v0 = 0;
    if ((u32) ((u8) M2C_FIELD(temp_v1, u8 *, 9) / (u8) M2C_FIELD(temp_v1, u8 *, 0xE)) >= 3U) {
        func_800D90C0(temp_s2);
        temp_a0 = ((temp_s0 - 1) * 7) + (temp_s1 * 0x2A) + D_80118C18;
        var_v0 = 1;
        M2C_FIELD(temp_a0, u8 *, 0x5C0) = (u8) (M2C_FIELD(temp_a0, u8 *, 0x5C0) + func_800D82A0(temp_s2, temp_s2));
    }
    return var_v0;
}
