#include "common.h"

s32 CdReadSync(s32 arg0, M2C_UNK arg1) {
    extern M2C_UNK D_80132074[];
    s32 var_s0;

loop_1:
    var_s0 = -1;
    if ((M2C_FIELD(D_80132074, s32 *, 0) + 0x4B0) >= slpm_VSync(-1)) {
        if ((M2C_FIELD(D_80132074, s32 *, -8) < 0) || ((M2C_FIELD(D_80132074, s32 *, -4) + 0x3C) < slpm_VSync(-1))) {
            func_80119770(1);
            var_s0 = M2C_FIELD(D_80132074, s32 *, -0x1C);
        } else {
            var_s0 = M2C_FIELD(D_80132074, s32 *, -8);
        }
    }
    if ((arg0 == 0) && (var_s0 > 0)) {
        goto loop_1;
    }
    CdReady(1, arg1);
    return var_s0;
}
