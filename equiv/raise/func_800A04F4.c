#include "common.h"

void func_800A04F4(void) {
    extern M2C_UNK D_800EFF58[];
    M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x31C), s32 *, 0x38) = (s32) ((M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x31C), s32 *, 0x38) & ~1) | (M2C_FIELD(D_800EFF58, s32 *, 0x32C) == 0));
    M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x320), s32 *, 0x38) = (s32) ((M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x320), s32 *, 0x38) & ~1) | (M2C_FIELD(D_800EFF58, s32 *, 0x330) == 0xD));
}
