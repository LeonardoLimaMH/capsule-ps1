#include "common.h"

s32 func_8001E160(u32 arg0) {
    s32 var_a0;

    if (arg0 < 0xAU) {
        var_a0 = arg0 + 0x30;
    } else {
        var_a0 = arg0 + 0x37;
    }
    return var_a0;
}
