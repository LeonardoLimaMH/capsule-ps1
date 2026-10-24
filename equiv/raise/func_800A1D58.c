#include "common.h"

void func_800A1D58(s32 arg0, s32 arg1) {
    extern M2C_UNK D_800EEB9C[];
    s32 temp_a0;
    s32 temp_a1;

    temp_a0 = arg0 & 1;
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), s32 *, 0x38) = (s32) ((M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), s32 *, 0x38) & ~1) | temp_a0);
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x768), s32 *, 0x38) = (s32) ((M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x768), s32 *, 0x38) & ~1) | temp_a0);
    temp_a1 = (arg1 & 1) << 6;
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), s32 *, 0x38) = (s32) ((M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), s32 *, 0x38) & ~0x40) | temp_a1);
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x768), s32 *, 0x38) = (s32) ((M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x768), s32 *, 0x38) & ~0x40) | temp_a1);
}
