#include "common.h"

s32 func_80019654(void) {
    extern s32 D_80092400[];
    s32 var_v0;

    if ((func_800337EC() & 0xF) || (var_v0 = 1, (((*D_80092400) & 0xFFFFFF) != 0))) {
        var_v0 = 0;
    }
    return var_v0;
}
