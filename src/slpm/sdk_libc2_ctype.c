#include "common.h"

#include "common.h"

s8 slpm_toupper(s8 arg0) {
    extern u8 D_801208C5[];
    u8 var_v1;

    var_v1 = arg0;
    if (*(D_801208C5 + (var_v1 & 0xFF)) & 2) {
        var_v1 = arg0 - 0x20;
    }
    return var_v1;
}

#include "common.h"

s8 slpm_tolower(s8 arg0) {
    extern u8 D_801208C5[];
    u8 var_v1;

    var_v1 = arg0;
    if (*(D_801208C5 + (var_v1 & 0xFF)) & 1) {
        var_v1 = arg0 + 0x20;
    }
    return var_v1;
}
