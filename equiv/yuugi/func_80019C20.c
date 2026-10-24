#include "common.h"

u8 func_80019C20(void) {
    extern u8 D_8008F7E0[];
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = (*D_8008F7E0) + 0x1F;
    var_a0 = temp_v1;
    if (temp_v1 < 0) {
        var_a0 = (*D_8008F7E0) + 0x3E;
    }
    return M2C_FIELD((((temp_v1 - (var_a0 & 0x1E0)) << 5) + D_8008F7E0), u8 *, 4);
}
