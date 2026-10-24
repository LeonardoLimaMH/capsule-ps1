#include "common.h"

s32 func_800C22A0(void) {
    s32 var_a0;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(func_800A8E84(), u8 *, 0x16);
    var_a0 = 0;
    switch (temp_v0) {
    case 1:
        var_a0 = 1;
        break;
    case 2:
        var_a0 = 2;
        break;
    case 3:
        var_a0 = 4;
        break;
    case 4:
        var_a0 = 8;
        break;
    case 5:
        var_a0 = 0x10;
        break;
    case 6:
        var_a0 = 0x20;
        break;
    }
    return var_a0;
}
