#include "common.h"

s32 func_800DB568(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80118C18[];
    extern M2C_UNK D_80119660[];
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_s1;
    u32 temp_t0;
    u32 var_s0;
    u8 *temp_s0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a1_2;
    void *temp_a0_4;
    void *temp_a1;
    void *temp_s2;

    temp_a0 = arg0 & 0xFF;
    temp_s1 = temp_a0 >> 7;
    temp_v0 = func_800D7328(temp_a0, D_80119660);
    temp_t0 = temp_v0 & 0xFF;
    if (temp_t0 != 0) {
        temp_a2 = (arg0 & 0x7F) - 1;
        temp_a3 = temp_s1 & 0xFF;
        if ((u32) ((M2C_FIELD(((temp_a2 * 0x7C) + (temp_a3 * 0x2E8) + D_80085428), u8 *, 0x5F1) / 3) & 0xFF) < (u8) M2C_FIELD(((temp_a2 * 7) + (temp_a3 * 0x2A) + D_80118C18), u8 *, 0x3A4)) {
            var_s0 = arg0 & 0xFF;
            if (temp_t0 < 3U) {
                goto block_3;
            }
            goto block_5;
        }
        var_s0 = arg0 & 0xFF;
block_5:
        func_800D90C0(var_s0, D_80085428, temp_a2, temp_a3);
        M2C_FIELD(((((arg0 & 0x7F) - 1) * 7) + ((var_s0 >> 7) * 0x2A) + D_80118C18), s8 *, 0x5C0) = 1;
        var_s1 = 0;
        if (temp_v0 & 0xFF) {
            temp_s2 = ((1 - temp_s1) & 0xFF) + D_80118C18;
            var_v0 = 0 & 0xFF;
            do {
                temp_s0 = var_v0 + D_80119660;
                temp_a0_2 = *temp_s0;
                temp_a1 = (((temp_a0_2 & 0x7F) - 1) * 7) + ((temp_a0_2 >> 7) * 0x2A) + D_80118C18;
                temp_a0_3 = M2C_FIELD(temp_a1, u8 *, 0x5C0);
                temp_v1 = func_800D7CFC(arg0 & 0xFF, *temp_s0) & 0xFF;
                if (temp_v1 >= (s32) temp_a0_3) {
                    M2C_FIELD(temp_a1, u8 *, 0x5C0) = 0U;
                    temp_a1_2 = *temp_s0;
                    temp_a0_4 = (((temp_a1_2 & 0x7F) - 1) * 0x7C) + ((temp_a1_2 >> 7) * 0x2E8) + D_80085428;
                    M2C_FIELD(((M2C_FIELD(temp_a0_4, u8 *, 0x5FD) * 0xD) + D_80118C18 + M2C_FIELD(temp_a0_4, u8 *, 0x5FE)), s8 *, 0x612) = 0;
                    M2C_FIELD(temp_s2, u8 *, 0x5BC) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x5BC) - 1);
                } else {
                    M2C_FIELD(temp_a1, u8 *, 0x5C0) = (u8) (temp_a0_3 - temp_v1);
                }
                var_s1 += 1;
                var_v0 = var_s1 & 0xFF;
            } while ((u32) (var_s1 & 0xFF) < (u32) (temp_v0 & 0xFF));
        }
        return 1;
    }
block_3:
    return 0;
}
