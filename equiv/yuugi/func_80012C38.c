#include "common.h"

s32 func_80012C38(void) {
    extern M2C_UNK D_8008ED68[];
    s32 var_a1;
    s32 var_v1;
    void *var_a0;

    var_a1 = 0;
    var_a0 = D_8008ED68 + 0x158;
    var_v1 = 0;
loop_1:
    if (M2C_FIELD(var_a0, u16 *, 6) != 0) {
        var_a1 = 1;
    } else {
        var_v1 += 1;
        var_a0 += 0xC;
        if (var_v1 < 0x50) {
            goto loop_1;
        }
    }
    return var_a1;
}
