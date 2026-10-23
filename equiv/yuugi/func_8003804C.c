#include "common.h"

s16 func_8003804C(void *arg0, u32 arg1) {
    s16 var_v0;

    if (arg1 < 0x40U) {
        if (M2C_FIELD(arg0, u8 *, 0x1D) != 0) {
            var_v0 = -(M2C_FIELD(arg0, u8 *, 0x1D) * 2 * (0x40 - arg1));
            goto block_7;
        }
        goto block_4;
    }
    if (arg1 == 0x40) {
        goto block_4;
    }
    if (M2C_FIELD(arg0, u8 *, 0x1C) != 0) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x1C) * 2 * (arg1 - 0x3F);
block_7:
        return var_v0;
    }
block_4:
    return 0;
}
