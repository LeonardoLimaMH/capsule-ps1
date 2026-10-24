#include "common.h"

void func_80019CB8(void *arg0) {
    s32 var_s0;

    VSync(3);
    do {

    } while (DsControlB(9, 0, 0) == 0);
    do {
        var_s0 = 0;
    } while (DsReset() == 0);
    do {
        VSync(0);
        var_s0 += 1;
    } while (var_s0 < 0xC8);
    M2C_FIELD(arg0, s8 *, 3) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x408) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 0;
}
