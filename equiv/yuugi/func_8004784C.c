#include "common.h"

s32 func_8004784C(s32 arg0) {
    extern M2C_UNK D_800733B4[];
    s32 var_s0;

    if ((M2C_FIELD(D_800733B4, s32 *, 0) + 0x4B0) < VSync(-1)) {
        var_s0 = -1;
        func_800478D0(D_800733B4);
    } else {
        var_s0 = M2C_FIELD(D_800733B4, s32 *, -0x10);
    }
    DsReady(arg0);
    return var_s0;
}
