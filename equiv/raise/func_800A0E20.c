#include "common.h"

s32 func_800A0E20(void) {
    extern M2C_UNK D_800EFF58[];
    if (M2C_FIELD(D_800EFF58, s32 *, 0x340) <= 0) {
        M2C_FIELD(D_800EFF58, s32 *, 0x33C) = 0;
        return -1;
    }
    M2C_FIELD(D_800EFF58, s32 *, 0x340) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x340) - 1);
    func_800BCFB0(M2C_FIELD(D_800EFF58, s32 *, 0x33C));
    return 0;
}
