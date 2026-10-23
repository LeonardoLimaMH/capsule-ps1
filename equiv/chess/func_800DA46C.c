#include "common.h"

s32 func_800DA46C(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80118C18[];
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_a0_3;
    s32 temp_s1;
    s32 var_a2;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_a2;
    u32 temp_s0;
    u32 temp_v1;
    u8 temp_a3;
    u8 var_s2;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_a1;

    temp_a0 = arg0 & 0xFF;
    var_s2 = 0;
    temp_v1 = func_800D7328(temp_a0, D_80119660) & 0xFF;
    if (temp_v1 == 0) {
        return 0;
    }
    var_a2 = 0;
    if (temp_v1 != 0) {
        var_v0 = 0 & 0xFF;
loop_5:
        temp_a3 = *(var_v0 + D_80119660);
        temp_a0_2 = (((temp_a3 & 0x7F) - 1) * 0x7C) + ((temp_a3 >> 7) * 0x2E8) + D_80085428;
        if (((u8) M2C_FIELD(temp_a0_2, u8 *, 0x5F6) < 0x65U) || ((u8) M2C_FIELD(temp_a0_2, u8 *, 0x5F8) < 0x1FU)) {
            var_a2 += 1;
            var_v0 = var_a2 & 0xFF;
            if ((u32) (var_a2 & 0xFF) < temp_v1) {
                goto loop_5;
            }
        } else {
            var_s2 = temp_a3;
        }
    }
    temp_s0 = var_s2 & 0xFF;
    temp_s1 = arg0 & 0xFF;
    if (temp_s0 != 0) {
        if ((func_800D80F8(temp_s1, temp_s0, var_a2) & 0xFF) != 1) {
            func_800D90C0(temp_s1);
            temp_a0_3 = (var_s2 & 0x7F) - 1;
            temp_a2 = temp_s0 >> 7;
            M2C_FIELD(((temp_a0_3 * 7) + (temp_a2 * 0x2A) + D_80118C18), s8 *, 0x5C0) = 0;
            temp_a1 = (temp_a0_3 * 0x7C) + (temp_a2 * 0x2E8) + D_80085428;
            temp_a0_4 = ((1 - (temp_a0 >> 7)) & 0xFF) + D_80118C18;
            M2C_FIELD(((M2C_FIELD(temp_a1, u8 *, 0x5FD) * 0xD) + D_80118C18 + M2C_FIELD(temp_a1, u8 *, 0x5FE)), s8 *, 0x612) = 0;
            M2C_FIELD(temp_a0_4, u8 *, 0x5BC) = (u8) (M2C_FIELD(temp_a0_4, u8 *, 0x5BC) - 1);
            M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(temp_a1, u8 *, 0x5FD);
            M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(temp_a1, u8 *, 0x5FE);
            return 1;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
