#include "common.h"

s32 func_800D09D8(s32 arg0, s32 arg1) {
    extern u8 D_80118C18[];
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u8 temp_a1;
    u8 temp_a1_3;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_a2 = M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E;
    temp_a1 = M2C_FIELD(((((arg0 & 0x7F) - 1) * 7) + (((u32) (arg0 & 0xFF) >> 7) * 0x2A) + temp_a2 + D_80118C18), u8 *, 0x3A2);
    temp_v1 = M2C_FIELD(((((arg1 & 0x7F) - 1) * 7) + (((u32) (arg1 & 0xFF) >> 7) * 0x2A) + temp_a2 + D_80118C18), u8 *, 0x3A2);
    temp_v0 = temp_a1 - temp_v1;
    var_v0 = temp_v0 & 0xFF;
    if (temp_v0 < 0) {
        var_v0 = (temp_v1 - temp_a1) & 0xFF;
    }
    if (var_v0 == 0) {
        temp_a1_2 = M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E;
        temp_a1_3 = M2C_FIELD(((((arg0 & 0x7F) - 1) * 7) + (((u32) (arg0 & 0xFF) >> 7) * 0x2A) + temp_a1_2 + D_80118C18), u8 *, 0x3A3);
        temp_v1_2 = M2C_FIELD(((((arg1 & 0x7F) - 1) * 7) + (((u32) (arg1 & 0xFF) >> 7) * 0x2A) + temp_a1_2 + D_80118C18), u8 *, 0x3A3);
        temp_v0_2 = temp_a1_3 - temp_v1_2;
        var_v0 = temp_v0_2 & 0xFF;
        if (temp_v0_2 < 0) {
            var_v0 = (temp_v1_2 - temp_a1_3) & 0xFF;
        }
    }
    return var_v0;
}
