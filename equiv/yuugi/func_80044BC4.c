#include "common.h"

s32 func_80044BC4(s32 arg0) {
    extern M2C_UNK D_80072F68[];
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(D_80072F68, s32 *, 0) <= 0) {
        M2C_FIELD(D_80072F68, s32 *, -0x28) = 0x20;
        var_v0 = func_80044C04(arg0 & 0xFF);
    }
    return var_v0;
}
