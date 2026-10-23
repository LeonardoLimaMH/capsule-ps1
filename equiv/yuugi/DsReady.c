#include "common.h"

u8 DsReady(s32 arg0) {
    extern s32 D_80094A88[];
    extern s32 D_80094A98[];
    s32 *var_s0;
    s32 var_v1;
    u8 var_v0;
    void *var_a1;

    func_80044B90(0);
    var_v1 = 4;
    if ((*D_80094A98) != 1) {
        var_v1 = (*D_80094A88) == 1;
    }
    if (var_v1 == 4) {
        var_s0 = (*D_80094A98);
        var_a1 = (*D_80094A98) + 5;
        goto block_6;
    }
    var_v0 = 0;
    if (var_v1 == 1) {
        var_s0 = (*D_80094A88);
        var_a1 = (*D_80094A88) + 5;
block_6:
        M2C_FIELD(var_s0, s32 *, 0) = 0;
        func_800458A0(arg0, var_a1);
        var_v0 = M2C_FIELD(var_s0, u8 *, 4);
    }
    return var_v0;
}
