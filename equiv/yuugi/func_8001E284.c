#include "common.h"

s32 *func_8001E284(void) {
    extern s32 D_800861B0[];
    s32 *var_v0;
    s32 *var_v1;
    s32 var_a0;

    var_v1 = D_800861B0;
    var_a0 = 0;
loop_1:
    var_v0 = var_v1;
    if (*var_v1 != 0) {
        var_a0 += 1;
        var_v1 += 0x18;
        if (var_a0 >= 5) {
            var_v0 = NULL;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
