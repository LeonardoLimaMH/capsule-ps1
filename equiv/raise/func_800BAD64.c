#include "common.h"

void func_800BAD64(s32 arg0) {
    extern M2C_UNK D_800EFF58[];
    M2C_FIELD(D_800EFF58, s32 *, 0) = arg0;
    M2C_FIELD(D_800EFF58, s32 *, 4) = 0x20;
    M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x7C), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x7C), s32 *, 0x38) | 1);
}
