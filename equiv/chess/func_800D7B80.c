#include "common.h"

s32 func_800D7B80(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    s32 temp_v0_2;
    s32 var_v0;
    u16 temp_a0;
    u16 var_v1;
    u32 temp_a2;
    void *temp_v0;

    temp_v0 = ((((u32) M2C_FIELD(((M2C_FIELD(((((arg0 & 0x7F) - 1) * 0x7C) + (((u32) (arg0 & 0xFF) >> 7) * 0x2E8) + D_80085428), u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4;
    temp_a0 = M2C_FIELD(temp_v0, u16 *, 0x14);
    temp_a2 = (u32) M2C_FIELD(temp_v0, u32 *, 0x10) >> 0x1D;
    if (temp_a2 != 2) {
        if ((s32) temp_a2 < 3) {
            var_v1 = arg1 & 0xFF;
            if (temp_a2 != 1) {
                var_v0 = var_v1 << 0x10;
            } else {
                var_v1 = temp_a0;
                goto block_9;
            }
        } else {
            if (temp_a2 != 3) {
                var_v1 = arg1 & 0xFF;
            } else {
                var_v1 = (arg1 & 0xFF) + (((arg1 & 0xFF) * (s16) temp_a0) / 100);
            }
            goto block_9;
        }
    } else {
        var_v1 = (arg1 & 0xFF) + temp_a0;
block_9:
        var_v0 = var_v1 << 0x10;
    }
    temp_v0_2 = var_v0 >> 0x10;
    if (temp_v0_2 >= 0) {
        if (temp_v0_2 >= 0x100) {
            var_v1 = 0xFF;
        }
    } else {
        var_v1 = 0;
    }
    return var_v1 & 0xFF;
}
