#include "common.h"

s32 SpuGetKeyStatus(s32 arg0) {
    extern s32 D_80071524[];
    extern s32 D_80071598[];
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_a0;

    var_a1 = -1;
    var_v1 = 0;
    var_v0_2 = 1 << 0;
loop_1:
    if (!(arg0 & var_v0_2)) {
        var_v1 += 1;
        var_v0_2 = 1 << var_v1;
        if (var_v1 < 0x18) {
            goto loop_1;
        }
    } else {
        var_a1 = var_v1;
    }
    if (var_a1 == -1) {
        return -1;
    }
    temp_a0 = M2C_FIELD(((var_a1 * 0x10) + (*D_80071598)), u16 *, 0xC);
    if (!((*D_80071524) & (1 << var_a1))) {
        return (temp_a0 != 0) * 2;
    }
    var_v0 = 1;
    if (temp_a0 == 0) {
        var_v0 = 3;
    }
    return var_v0;
}
