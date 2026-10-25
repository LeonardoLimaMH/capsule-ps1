#include "common.h"

s8 slpm_toupper(s8 arg0) {
    extern u8 D_801208C5[];
    s8 var_v1;

    var_v1 = arg0;
    if (*(D_801208C5 + (var_v1 & 0xFF)) & 2) {
        var_v1 = arg0 - 0x20;
    }
    return var_v1;
}
