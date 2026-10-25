#include "common.h"

void func_800B6FA0(void) {
    extern u8 D_80091618[];
    extern u8 D_800EEB9C[];
    s16 temp_v0;
    s16 var_a1;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    s32 var_s0;
    u8 temp_v1_2;
    void *var_a1_2;

    var_s0 = 1;
    do {
        temp_v1 = func_800B1260(var_s0) & 0xFFFF;
        var_a2 = 0;
        if (temp_v1 != 0xFFFF) {
            var_a1 = 0;
            do {
                temp_v1_2 = M2C_FIELD(((temp_v1 * 0x1A8) + D_80091618 + var_a1), u8 *, 8);
                temp_v0 = var_a1 + 1;
                var_a1 = temp_v0;
                temp_a0 = var_a2 + temp_v1_2;
                var_a2 = temp_a0;
            } while (temp_v0 < 8);
            if (var_s0 == 1) {
                var_a0 = (temp_a0 << 0x10) != 0;
                var_a1_2 = M2C_FIELD(D_800EEB9C, void **, 0x770);
                M2C_FIELD(D_800EEB9C, s32 *, 0x76C) = var_a0;
            } else {
                var_a0 = (temp_a0 << 0x10) != 0;
                var_a1_2 = M2C_FIELD(D_800EEB9C, void **, 0x778);
                M2C_FIELD(D_800EEB9C, s32 *, 0x774) = var_a0;
            }
            M2C_FIELD(var_a1_2, s32 *, 0x38) = (s32) ((M2C_FIELD(var_a1_2, s32 *, 0x38) & ~1) | (var_a0 ^ 1));
        }
        var_s0 -= 1;
    } while (var_s0 >= 0);
}
