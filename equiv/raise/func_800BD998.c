#include "common.h"

void func_800BD998(s32 arg0) {
    extern u8 D_800EE5F0[];
    extern u8 D_800EFF58[];
    void *temp_s0;

    temp_s0 = (arg0 * 4) + D_800EFF58;
    M2C_FIELD(temp_s0, s32 *, 0x5E0) = func_800BDE30(0x19, 0, 0, 4, 0, D_800EE5F0, M2C_FIELD(temp_s0, s32 *, 0x5E8), 0, 1, 0, 2, 0, 0);
}
