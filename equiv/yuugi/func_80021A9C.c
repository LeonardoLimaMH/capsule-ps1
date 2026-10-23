#include "common.h"

s32 func_80021A9C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_t0;

    var_a2 = arg2;
    temp_t0 = arg0 + 0x5D0;
    if (((arg3 < 2) || (arg3 == 5)) && (M2C_FIELD(temp_t0, u8 *, 0x10) != 0) && (M2C_FIELD(temp_t0, u8 *, 0x11) != 0)) {
        var_v0_2 = (u16) M2C_FIELD(arg0, u16 *, 0x1E) < 0x1FU;
        goto block_20;
    }
    if (M2C_FIELD(arg0, u8 *, 1) != 0) {
        var_v0_2 = (u16) M2C_FIELD(arg0, u16 *, 0x1E) < 0x1FU;
        goto block_20;
    }
    if (arg1 != 0) {
        if (arg3 == 4) {
            var_v0 = 1;
            if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x60)) {
                var_v0 = 1;
                if (!(M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x60)) {
                    return 0;
                }
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return var_v0;
        }
        if (M2C_FIELD(temp_t0, u8 *, 0x11) != 0) {
            goto block_13;
        }
        if (M2C_FIELD(temp_t0, u8 *, 0x10) != 0) {
            var_a2 = 1;
        }
        goto block_17;
    }
block_13:
    var_a2 = 0;
block_17:
    temp_v1 = M2C_FIELD(((var_a2 * 0x10) + (*D_8008ED68)), s32 *, 0x88);
    var_v0 = 1;
    if (!(temp_v1 & 0x20)) {
        var_v0 = 1;
        if (!(temp_v1 & 0x40)) {
            var_v0_2 = (u16) M2C_FIELD(arg0, u16 *, 0x1E) < 0xB5U;
block_20:
            var_v0 = var_v0_2 ^ 1;
        }
    }
    return var_v0;
}
