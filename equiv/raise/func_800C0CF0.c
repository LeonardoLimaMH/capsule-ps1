#include "common.h"

void func_800C0CF0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x5000F, var_s0), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 0xA);
}
