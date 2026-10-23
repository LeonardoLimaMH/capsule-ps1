#include "common.h"

s16 func_8003CC00(s32 *arg0, s16 arg1) {
    extern s32 D_80078C84[];
    extern M2C_UNK D_800944B8[];
    M2C_UNK *var_a2;
    s16 var_v1;
    s32 temp_a2;

    (*D_80078C84) = 1;
    temp_a2 = *arg0;
    if ((temp_a2 != 0x53455170) && (temp_a2 != 0x6468544D) && (temp_a2 != 0x2054444B) && (temp_a2 != 0x3154444B)) {
        return -1;
    }
    var_v1 = 0;
    var_a2 = (*D_800944B8);
loop_7:
    if (M2C_FIELD(var_a2, s16 *, 0x288) != -1) {
        var_v1 += 1;
        var_a2 += 0x2AC;
        if (var_v1 > 0) {
            (*D_80078C84) = 0;
            return -1;
        }
        goto loop_7;
    }
    M2C_FIELD(var_a2, s32 **, 0x290) = arg0;
    M2C_FIELD(var_a2, s16 *, 0x288) = arg1;
    M2C_FIELD(var_a2, s16 *, 0x28A) = 2;
    (*D_80078C84) = 0;
    return var_v1;
}
