#include "common.h"
#include "yuugi.h"

#include "common.h"

extern void func_8004BC7C();

s32 func_8004C798(void) {
    return DMACallback(2, func_8004BC7C);
}

void func_8004C7C0(s8 *arg0, s8 arg1, s32 arg2) {
    s32 var_v0;
    s8 *var_a0;

    var_a0 = arg0;
    var_v0 = arg2 - 1;
    if (arg2 != 0) {
        do {
            *var_a0 = arg1;
            var_v0 -= 1;
            var_a0 += 1;
        } while (var_v0 != -1);
    }
}
