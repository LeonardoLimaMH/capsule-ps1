#include "common.h"

void func_8009CDE4(void) {
    extern M2C_UNK D_8008ED68[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x2000E, var_s0 + 0x2D), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 5);
    M2C_FIELD(D_8008ED68, s8 *, 0x28) = 5;
}
