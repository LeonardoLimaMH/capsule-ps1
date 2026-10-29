#include "common.h"

#include "common.h"

void func_80116850(void) {
    extern int func_80115D34();
    slpm_DMACallback(2, &func_80115D34);
}

void func_80116878(s8 *arg0, s8 arg1, s32 arg2) {
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
