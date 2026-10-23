#include "common.h"

void func_800BA108(s32 arg0) {
    M2C_UNK var_a0;
    s16 temp_v0_2;
    s32 temp_a2;
    s32 temp_s2;
    u8 temp_a3;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;

    temp_s0 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_a3 = M2C_FIELD(temp_s0, u8 *, 0x70C);
    temp_a2 = 1 - temp_v1;
    temp_s2 = (temp_v1 << 7) | (M2C_FIELD((temp_s0 + temp_v1), u8 *, 0x5FB) + 1);
    temp_s1 = temp_s0 + ((temp_a2 * 0x2E8) + 0x18) + (temp_a3 * 0x7C);
    if (M2C_FIELD(temp_s0, u8 *, 0x720) != 0) {
        M2C_FIELD(temp_s0, s8 *, 0x70D) = 1;
        if (M2C_FIELD(temp_s1, u8 *, 0xE) != 0) {
            temp_v0 = func_800A8EE8(temp_s0, temp_a2, temp_a3, temp_a3);
            if (((M2C_FIELD(temp_v0, s32 *, 0x10) & 0x7F) == 0x2A) && (M2C_FIELD(temp_s1, u8 *, 0x28) == 0)) {
                temp_v0_2 = func_800D8894(((temp_a2 << 7) | (temp_a3 + 1)) & 0xFF, temp_s2 & 0xFF) & 0xFF;
                M2C_FIELD(temp_s0, s16 *, 0x710) = temp_v0_2;
                if (temp_v0_2 == 0) {
                    var_a0 = 0xE;
                    goto block_11;
                }
                M2C_FIELD(temp_s0, s8 *, 0x614) = 2;
                func_800125AC(8);
                return;
            }
            var_a0 = 0xE;
            if (((M2C_FIELD(temp_v0, s32 *, 0x10) & 0x7F) == 0xE) && (M2C_FIELD(temp_s1, u8 *, 0x28) == 0)) {
                M2C_FIELD(temp_s0, s8 *, 0x614) = 2;
                var_a0 = 0xD;
            }
            goto block_11;
        }
        func_800A903C(arg0, temp_s0, temp_a2, temp_a3);
        var_a0 = 0xC;
block_11:
        func_80012604(var_a0);
    }
}
