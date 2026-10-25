#include "common.h"

void func_800B81E0(void *arg0) {
    extern u8 D_801010B0[];
    s32 *temp_a1;
    s32 *temp_a1_2;
    u32 temp_a3;
    u8 temp_v1;
    u8 var_a0;
    void *temp_a2;

    temp_a1 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x5FA);
    temp_a2 = temp_a1 + ((temp_v1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_a1 + temp_v1), u8 *, 0x5FB) * 0x7C);
    var_a0 = M2C_FIELD(temp_a1, u8 *, 0x716);
    temp_a3 = *(s8 *)((M2C_FIELD(temp_a1, u8 *, 9) * 0x34) + D_801010B0);
    if (var_a0 != 4) {
        if ((s32) var_a0 < 5) {
            var_a0 = 9;
            if (var_a0 != 3) {
                goto block_10;
            }
            goto block_8;
        }
        if ((var_a0 != 5) && (var_a0 != 6)) {
block_10:
            func_800125D8(var_a0, temp_a1, temp_a2, temp_a3);
            return;
        }
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        func_80012604(6U, temp_a1, temp_a2, temp_a3);
        return;
    }
    var_a0 = 8;
block_8:
    temp_a1_2 = (M2C_FIELD(temp_a2, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_a2, u8 *, 0x15) * 0x34) + temp_a3);
    *temp_a1_2 = (*temp_a1_2 & ~0x3F) | 2;
    func_80012604(var_a0, temp_a1_2, temp_a2, temp_a3);
}
