#include "common.h"

void func_800C0D48(void) {
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x2000F, var_s0), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 0x1C);
    var_s0_2 = 0;
    do {
        func_80012A20(func_80019F30(0x2000E, var_s0_2 + 0x1A), 1, 0, 0);
        var_s0_2 += 1;
    } while (var_s0_2 < 5);
}
