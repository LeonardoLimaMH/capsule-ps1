#include "common.h"

s32 func_800DD230(void *arg0) {
    extern s16 D_80069BBE[];
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    var_v0_2 = (*D_80069BBE) + 0x100;
    if (var_v0_2 < 0) {
        var_v0_2 = (*D_80069BBE) + 0x2FF;
    }
    temp_a0 = M2C_FIELD(arg0, u8 *, 0x25) + (var_v0_2 >> 9);
    temp_v1 = temp_a0 + 8;
    var_v0 = temp_v1;
    if (temp_v1 < 0) {
        var_v0 = temp_a0 + 0xF;
    }
    return temp_v1 - ((var_v0 >> 3) * 8);
}
