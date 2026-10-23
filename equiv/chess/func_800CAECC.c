#include "common.h"

s32 func_800CAECC(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;
    s32 var_v1;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0xBF4);
    switch (temp_v0) {
    case 5:
        var_v1 = 3;
        break;
    case 6:
        var_v1 = 4;
        break;
    case 7:
        var_v1 = 2;
        break;
    case 3:
    case 4:
        var_v1 = 1;
        break;
    default:
        var_v1 = 0;
        break;
    }
    if (var_v1 >= 3) {
        var_v0 = 0;
        if (arg1 == (var_v1 - 3)) {
            if (arg2 != M2C_FIELD(arg0, s8 *, 0xBF8)) {
                return 0;
            }
            goto block_12;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 0;
    if ((u32) (M2C_FIELD(arg0, u8 *, 0x5CB) - 1) >= 2U) {
block_12:
        var_v0 = 1;
    }
    return var_v0;
}
