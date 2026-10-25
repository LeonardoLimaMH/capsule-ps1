#include "common.h"

void func_8001A6B8(s32 arg0, s32 **arg1, s32 arg2) {
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v0;

    var_a1 = *arg1;
    if (*var_a1 != -1) {
        temp_a0 = arg0 - arg2;
        var_v0 = *var_a1 + temp_a0;
        do {
            *var_a1 = var_v0;
            var_a1 += 4;
            temp_v0 = *var_a1;
            var_v0 = temp_v0 + temp_a0;
        } while (temp_v0 != -1);
    }
}
