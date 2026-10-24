#include "common.h"

s32 func_8009ED54(void) {
    extern M2C_UNK D_800EFF58[];
    if (M2C_FIELD(D_800EFF58, s32 *, 0x88) <= 0) {
        M2C_FIELD(D_800EFF58, s32 *, 0x84) = 0;
        return -1;
    }
    M2C_FIELD(D_800EFF58, s32 *, 0x88) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x88) - 1);
    func_800BBC40(M2C_FIELD(D_800EFF58, s32 *, 0x84));
    return 0;
}
