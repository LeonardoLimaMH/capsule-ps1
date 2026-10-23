#include "common.h"

s32 func_800437FC(void) {
    extern s32 D_80094B6C[];
    s32 var_v0;
    void *temp_v1;

    var_v0 = 0;
    if (func_80044AF8(0) == 1) {
        temp_v1 = ((*D_80094B6C) * 0x18) + ((*D_80094B6C) - 0xC4);
        var_v0 = 0;
        if (M2C_FIELD(temp_v1, s32 *, 0) != 0) {
            var_v0 = func_80044A4C(M2C_FIELD(temp_v1, u8 *, 4), M2C_FIELD(temp_v1, s32 *, 0xC)) != 0;
        }
    }
    return var_v0;
}
