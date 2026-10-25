#include "common.h"

void func_800BC394(s32 arg0, s32 arg1) {
    extern u8 D_800EE5F0[];
    extern u8 D_800EFF58[];
    extern u8 D_800F0604[];
    void *temp_s0;

    temp_s0 = (arg0 * 4) + D_800EFF58;
    M2C_FIELD(temp_s0, s32 *, 0x120) = func_800BC8FC(0x19, -0xF0, (s16) ((arg0 * 0x10) + 0x40), 4, M2C_FIELD(D_800EFF58, s32 *, 0x114) == arg0, D_800EE5F0, M2C_FIELD(temp_s0, s32 *, 0x158), 1, 1, arg1, 2, 1, D_800F0604);
}
