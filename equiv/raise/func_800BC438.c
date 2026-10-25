#include "common.h"

void func_800BC438(s32 arg0) {
    extern u8 D_8008ED68[];
    extern u8 D_800EE5F0[];
    extern u8 D_800EFF58[];
    void *temp_s0;

    temp_s0 = (arg0 * 4) + D_800EFF58;
    M2C_FIELD(temp_s0, s32 *, 0x290) = func_800BC8FC(0x1B, (s16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x118), u16 *, 0x46) + (((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2) + 0x30)), (s16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x118), u16 *, 0x4A) + (((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2) + 0x30) + (arg0 * 0x10)), 4, 0, D_800EE5F0, M2C_FIELD(temp_s0, s32 *, 0x298), 1, 1, 0, 2, 0, 0);
}
