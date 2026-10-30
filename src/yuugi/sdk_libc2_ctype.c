#include "common.h"
#include "yuugi.h"

#include "common.h"

s8 toupper(s8 arg0) {
    extern u8 D_80078A7D[];
    u8 var_v1;

    var_v1 = arg0;
    if (*(D_80078A7D + (var_v1 & 0xFF)) & 2) {
        var_v1 = arg0 - 0x20;
    }
    return var_v1;
}

#include "common.h"

s8 tolower(s8 arg0) {
    extern u8 D_80078A7D[];
    u8 var_v1;

    var_v1 = arg0;
    if (*(D_80078A7D + (var_v1 & 0xFF)) & 1) {
        var_v1 = arg0 + 0x20;
    }
    return var_v1;
}
