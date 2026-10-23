#include "common.h"

void func_80019C58(void) {
    s32 var_s0;

    do {

    } while (DsControlB(9, 0, 0) == 0);
    do {
        var_s0 = 0;
    } while (DsReset() == 0);
    do {
        VSync(0);
        var_s0 += 1;
    } while (var_s0 < 0xC8);
}
