#include "common.h"

void func_800B9F9C(s32 arg0) {
    M2C_UNK var_a0;
    M2C_UNK var_a0_2;
    s32 temp_a1_2;
    s32 temp_v1;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v1_2;
    void *temp_a3;
    void *temp_s0;

    temp_a3 = arg0 + 0x5D0;
    temp_a1 = M2C_FIELD(temp_a3, u8 *, 0x5FA);
    temp_a2 = M2C_FIELD(temp_a3, u8 *, 0x70C);
    temp_a1_2 = 1 - temp_a1;
    temp_s0 = temp_a3 + ((temp_a1_2 * 0x2E8) + 0x18) + (temp_a2 * 0x7C);
    if (M2C_FIELD(temp_a3, u8 *, 0x60D) == 2) {
        M2C_FIELD((temp_a3 + ((temp_a1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_a3 + temp_a1), u8 *, 0x5FB) * 0x7C)), s8 *, 0x17) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x17) = 1;
        if (temp_a2 == 5) {
            func_800CAC50(arg0, temp_s0, 0x1000, temp_a3);
            var_a0 = 0xB;
            goto block_11;
        }
        func_800A8EE8(temp_a3, temp_a1_2, temp_a2, temp_a3);
        func_800CABDC(arg0, temp_s0, 0x10000);
        func_80012604(0xA);
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x1C);
        if (temp_v1 & 0x10000) {
            M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) (temp_v1 ^ 0x10000);
            return;
        }
        if ((temp_v1 & 0x20000) && ((temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0), M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) (temp_v1 ^ 0x20000), (temp_v1_2 == 3)) || (temp_v1_2 == 0x59))) {
            var_a0_2 = 0x4B;
            if (temp_v1_2 == 3) {
                var_a0_2 = 0x3A;
            }
            func_80034AB0(var_a0_2, 3);
            var_a0 = 9;
            M2C_FIELD(temp_s0, s8 *, 0x17) = 0x8A;
            M2C_FIELD(temp_s0, s8 *, 0x24) = 0x45;
block_11:
            func_80012604(var_a0);
        }
    }
}
