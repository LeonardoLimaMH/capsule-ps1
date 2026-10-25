#include "common.h"

void func_800BB284(s32 arg0) {
    extern u8 D_800EE5F0[];
    extern u8 D_800EFF58[];
    void *temp_s0;

    temp_s0 = (arg0 * 4) + D_800EFF58;
    M2C_FIELD(temp_s0, s32 *, 0x28) = func_800BBA38(0x1B, -0x170, 0x50, 5, 0, D_800EE5F0, M2C_FIELD(temp_s0, s32 *, 0x44), 1, 1, 0, 2, 0, 0);
    M2C_FIELD(D_800EFF58, s32 *, 0x60) = 0;
}
