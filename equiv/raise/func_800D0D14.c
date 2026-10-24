#include "common.h"

s32 func_800D0D14(void) {
    extern M2C_UNK D_80103D38[];
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(D_80103D38, s16 *, 6) == 0) {
        M2C_FIELD(D_80103D38, s16 *, 0x188) = 1;
        var_v0 = 1;
    }
    return var_v0;
}
