#include "common.h"

void func_800C0440(s32 arg0) {
    extern u16 D_8008EE50[];
    M2C_UNK var_a0;
    M2C_UNK var_a0_2;
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v1;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = arg0 + 0x5D0;
    temp_s2 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    temp_s3 = M2C_FIELD((temp_s1 + temp_s2), u8 *, 0x5FB);
    temp_s0 = arg0 + 0xCE2;
    switch ((*D_8008EE50)) {                           /* irregular */
        do {
        case 0:
            M2C_FIELD(temp_s0, u8 *, 1) = (u8) (M2C_FIELD(temp_s0, u8 *, 1) + 1);
        } while (func_800C9338(temp_s1, temp_s0) == 0);
        var_a2 = 0;
        if ((u8) M2C_FIELD(temp_s0, u8 *, 1) < 5U) {
            func_800B3488(temp_s1, temp_s1 + ((M2C_FIELD(temp_s0, u8 *, 0) * 0x2E8) + 0x18) + (M2C_FIELD(temp_s0, u8 *, 1) * 0x7C), 0);
            var_a2 = 0;
            do {
                var_a1 = (temp_s2 * 2) + temp_s1 + 0x601 + var_a2;
                temp_v0 = M2C_FIELD((temp_s1 + ((M2C_FIELD(temp_s0, u8 *, 1) * 0x7C) + (M2C_FIELD(temp_s0, u8 *, 0) * 0x2E8)) + var_a2), u8 *, 0x2D);
                var_a2 += 1;
                *var_a1 = temp_v0;
                var_a0 = 1;
            } while (var_a2 < 2);
            M2C_FIELD(temp_s1, s8 *, 0x70D) = 0;
        } else {
            var_a1 = (temp_s2 * 2) + temp_s1 + 0x601;
            var_v1 = var_a1;
            do {
                temp_v0_2 = M2C_FIELD((temp_s1 + ((temp_s3 * 0x7C) + (temp_s2 * 0x2E8)) + var_a2), u8 *, 0x2D);
                var_a2 += 1;
                *var_v1 = temp_v0_2;
                var_v1 = var_a1 + var_a2;
            } while (var_a2 < 2);
            var_a0 = 2;
        }
        func_8001264C(var_a0, var_a1, var_a2);
        M2C_FIELD(temp_s1, s8 *, 0x615) = 0;
        return;
    case 1:
        if (func_800B3338(arg0, 0) != 0) {
            func_800125D8();
            return;
        }
        return;
    case 2:
        if (func_800B3338(arg0, 1) != 0) {
            var_a0_2 = 0xB;
            if (M2C_FIELD(temp_s1, u8 *, 0x61E) == 5) {
                var_a0_2 = 0xA;
            }
            func_80012604(var_a0_2);
        }
        break;
    }
}
