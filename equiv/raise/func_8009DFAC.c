#include "common.h"

s32 func_8009DFAC(void) {
    extern M2C_UNK D_800EFF58[];
    if (M2C_FIELD(D_800EFF58, s32 *, 4) <= 0) {
        M2C_FIELD(D_800EFF58, s32 *, 0) = 0;
        return -1;
    }
    M2C_FIELD(D_800EFF58, s32 *, 4) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 4) - 1);
    func_800BAD90(M2C_FIELD(D_800EFF58, s32 *, 0), D_800EFF58);
    return 0;
}
