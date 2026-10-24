#include "common.h"

s32 func_80015E60(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s16 temp_a1;
    s32 var_v0;

    if (M2C_FIELD(D_8008ED68, u8 *, 0x103) == 0) {
        temp_a1 = M2C_FIELD(arg0, s16 *, 0x24);
        var_v0 = 0;
        if (temp_a1 <= 0) {
            var_v0 = 1;
            if ((M2C_FIELD(arg0, s32 *, 0x20) + 1) != *M2C_FIELD(arg0, s32 **, 0x1C)) {
                var_v0 = 0;
                if (temp_a1 < 0) {
                    return 1;
                }
            }
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    if ((M2C_FIELD(D_8008ED68, u8 *, 0x103) - 1) >= M2C_FIELD(arg0, s16 *, 0x24)) {
        var_v0 = 1;
        if ((M2C_FIELD(arg0, s32 *, 0x20) + 1) != *M2C_FIELD(arg0, s32 **, 0x1C)) {
            goto block_8;
        }
    } else {
block_8:
        var_v0 = 1;
        if (M2C_FIELD(arg0, s16 *, 0x24) >= 0) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
