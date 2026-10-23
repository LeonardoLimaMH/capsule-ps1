#include "common.h"

s32 func_800DB3FC(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80085994[];
    extern u8 D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_s0;
    u8 *var_a3;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_v1_2;
    u8 var_s1;
    void *temp_a1;
    void *temp_v1;

    var_s1 = 0;
    var_s0 = 0;
    temp_t0 = func_800D7328(arg0 & 0xFF, D_80119660) & 0xFF;
    if (temp_t0 != 0) {
        var_a2 = 0;
        if (temp_t0 > 0) {
            var_a3 = D_80119660;
            do {
                temp_a0 = *var_a3;
                temp_v1 = ((temp_a0 >> 7) * 0x2E8) + D_80085994 + ((temp_a0 & 0x7F) * 0x7C);
                temp_a0_2 = M2C_FIELD(temp_v1, u8 *, 0xE);
                temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 9);
                temp_v1_3 = temp_v1_2 - temp_a0_2;
                if (((s32) temp_v1_2 >= (temp_a0_2 * 2)) && (temp_v1_3 >= var_s0)) {
                    var_s0 = temp_v1_3;
                    var_s1 = *var_a3;
                }
                var_a2 += 1;
                var_a3 = &(D_80119660)[var_a2];
            } while (var_a2 < temp_t0);
        }
        temp_s0 = arg0 & 0xFF;
        if (var_s1 != 0) {
            func_800D90C0(temp_s0);
            func_800D943C(temp_s0, (s32) var_s1);
            temp_a1 = (((var_s1 & 0x7F) - 1) * 0x7C) + (((s32) var_s1 >> 7) * 0x2E8) + D_80085428;
            M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(temp_a1, u8 *, 0x5FD);
            M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(temp_a1, u8 *, 0x5FE);
            return 1;
        }
        goto block_9;
    }
block_9:
    return 0;
}
