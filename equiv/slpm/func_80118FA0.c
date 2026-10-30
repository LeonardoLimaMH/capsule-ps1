#include "common.h"

s32 func_80118FA0(s32 arg0, M2C_UNK arg1) {
    extern M2C_UNK D_80135514[];
    extern M2C_UNK D_8013551C[];
    M2C_UNK *var_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    var_s2 = D_8013551C;
    var_s1 = 0;
loop_1:
    temp_v0 = *(s32 *)((u8 *)D_80135514 + var_s1);
    if (temp_v0 != 0) {
        if (temp_v0 == arg0) {
            var_s2 += 0x2C;
            if (slpm_strcmp(arg1, var_s2) == 0) {
                return var_s0 + 1;
            }
            goto block_6;
        }
        var_s2 += 0x2C;
block_6:
        var_s0 += 1;
        var_s1 += 0x2C;
        if (var_s0 >= 0x80) {
            goto block_7;
        }
        goto loop_1;
    }
block_7:
    return -1;
}
