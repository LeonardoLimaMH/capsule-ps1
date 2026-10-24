#include "common.h"

s32 func_800A9A74(void) {
    extern M2C_UNK D_800EEB9C[];
    if (M2C_FIELD(D_800EEB9C, s32 *, 4) <= 0) {
        M2C_FIELD(D_800EEB9C, s32 *, 0) = 0;
        return -1;
    }
    M2C_FIELD(D_800EEB9C, s32 *, 4) = (s32) (M2C_FIELD(D_800EEB9C, s32 *, 4) - 1);
    func_800B7298(M2C_FIELD(D_800EEB9C, s32 *, 0), D_800EEB9C);
    return 0;
}
