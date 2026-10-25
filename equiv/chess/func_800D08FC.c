#include "common.h"

s32 func_800D08FC(s32 arg0, s32 arg1) {
    extern u8 D_80118C18[];
    s32 temp_a0;
    s32 temp_a1_2;
    s32 var_a0;
    s32 var_v0;
    u8 temp_a1;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 temp_v0_2;
    void *temp_a2;
    void *temp_v0;

    temp_a0 = M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E;
    temp_a2 = (((arg0 & 0x7F) - 1) * 7) + (((u32) (arg0 & 0xFF) >> 7) * 0x2A) + temp_a0 + D_80118C18;
    temp_v0 = (((arg1 & 0x7F) - 1) * 7) + (((u32) (arg1 & 0xFF) >> 7) * 0x2A) + temp_a0 + D_80118C18;
    temp_a3 = M2C_FIELD(temp_a2, u8 *, 0x3A2);
    temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x3A2);
    var_a0 = temp_a3 - temp_a1;
    if (var_a0 < 0) {
        var_a0 = temp_a1 - temp_a3;
    }
    temp_a2_2 = M2C_FIELD(temp_a2, u8 *, 0x3A3);
    temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x3A3);
    temp_a1_2 = temp_a2_2 - temp_v0_2;
    if (temp_a1_2 >= 0) {
        var_v0 = var_a0 + temp_a1_2;
    } else {
        var_v0 = var_a0 + (temp_v0_2 - temp_a2_2);
    }
    return var_v0 & 0xFF;
}
