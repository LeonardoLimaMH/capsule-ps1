#include "common.h"

s32 StGetNext(s32 *arg0, u16 **arg1) {
    extern s32 D_80134EBC;
    extern s32 D_80134EC4;
    extern s32 D_80134ED0;
    extern s32 D_80134ED4;
    s32 var_v0;
    u16 *var_a2;

    var_a2 = D_80134ED0 + (D_80134EBC << 5);
    if (*var_a2 == 1) {
        D_80134EBC = 0;
        if (D_80134EC4 != 0) {
            *var_a2 = 0;
        }
        var_a2 = D_80134ED0 + (D_80134EBC << 5);
    }
    var_v0 = 1;
    if (*var_a2 == 2) {
        *var_a2 = 4;
        var_v0 = 0;
        *arg0 = D_80134ED0 + (D_80134ED4 << 5) + (D_80134EBC * 0x7E0);
        *arg1 = var_a2;
    }
    return var_v0;
}
