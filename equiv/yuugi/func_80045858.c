#include "common.h"

void func_80045858(u8 *arg0, u8 *arg1) {
    s32 var_v1;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    if (var_a1 != NULL) {
        var_v1 = 0;
        if (var_a0 != NULL) {
            do {
                temp_v0 = *var_a1;
                var_a1 += 1;
                var_v1 += 1;
                *var_a0 = temp_v0;
                var_a0 += 1;
            } while (var_v1 < 4);
        }
    } else if (var_a0 != NULL) {
        *var_a0 = 0;
    }
}
