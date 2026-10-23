#include "common.h"

s32 func_800DB95C(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80118C18[];
    extern M2C_UNK D_80119660[];
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a0;
    u32 temp_s0;
    u32 temp_v0_2;
    u8 *temp_s1_2;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a1_2;
    void *temp_a0_4;
    void *temp_a1;
    void *temp_v1_2;
    void *temp_v1_4;

    temp_a0 = arg0 & 0xFF;
    var_s1 = 0;
    temp_v0 = func_800D7328(temp_a0, D_80119660);
    temp_v0_2 = temp_v0 & 0xFF;
    if (temp_v0_2 != 0) {
        var_s0 = 0;
        if (temp_v0_2 != 0) {
            var_v0 = 0 & 0xFF;
            do {
                if (((u8) *(var_v0 + D_80119660) >> 7) == ((1 - (temp_a0 >> 7)) & 0xFF)) {
                    var_s1 += 1;
                }
                var_s0 += 1;
                var_v0 = var_s0 & 0xFF;
            } while ((u32) (var_s0 & 0xFF) < temp_v0_2);
        }
        temp_v1 = var_s1 & 0xFF;
        temp_s1 = temp_v0 & 0xFF;
        temp_s0 = arg0 & 0xFF;
        if (temp_v1 < ((temp_s1 - temp_v1) + 2)) {
            goto block_7;
        }
        func_800D90C0(temp_s0);
        temp_v1_2 = (((arg0 & 0x7F) - 1) * 7) + ((temp_s0 >> 7) * 0x2A) + D_80118C18;
        var_s0_2 = 0;
        M2C_FIELD(temp_v1_2, u8 *, 0x5C0) = (u8) ((u8) M2C_FIELD(temp_v1_2, u8 *, 0x5C0) >> 1);
        if (temp_s1 != 0) {
            var_v0_2 = 0 & 0xFF;
            do {
                temp_s1_2 = var_v0_2 + D_80119660;
                temp_a0_2 = *temp_s1_2;
                temp_a1 = (((temp_a0_2 & 0x7F) - 1) * 7) + ((temp_a0_2 >> 7) * 0x2A) + D_80118C18;
                temp_a0_3 = M2C_FIELD(temp_a1, u8 *, 0x5C0);
                temp_v1_3 = func_800D7CFC(arg0 & 0xFF, *temp_s1_2) & 0xFF;
                if (temp_v1_3 >= (s32) temp_a0_3) {
                    M2C_FIELD(temp_a1, u8 *, 0x5C0) = 0U;
                    temp_a1_2 = *temp_s1_2;
                    temp_a0_4 = (((temp_a1_2 & 0x7F) - 1) * 0x7C) + ((temp_a1_2 >> 7) * 0x2E8) + D_80085428;
                    M2C_FIELD(((M2C_FIELD(temp_a0_4, u8 *, 0x5FD) * 0xD) + D_80118C18 + M2C_FIELD(temp_a0_4, u8 *, 0x5FE)), s8 *, 0x612) = 0;
                    temp_v1_4 = ((u8) *temp_s1_2 >> 7) + D_80118C18;
                    M2C_FIELD(temp_v1_4, u8 *, 0x5BC) = (u8) (M2C_FIELD(temp_v1_4, u8 *, 0x5BC) - 1);
                } else {
                    M2C_FIELD(temp_a1, u8 *, 0x5C0) = (u8) (temp_a0_3 - temp_v1_3);
                }
                var_s0_2 += 1;
                var_v0_2 = var_s0_2 & 0xFF;
            } while ((u32) (var_s0_2 & 0xFF) < (u32) (temp_v0 & 0xFF));
        }
        return 1;
    }
block_7:
    return 0;
}
