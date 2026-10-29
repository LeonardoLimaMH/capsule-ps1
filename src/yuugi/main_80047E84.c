#include "common.h"
#include "yuugi.h"

#include "common.h"

extern void func_80047A78();

s32 func_80047E84(s32 mode) {
    if ((mode & 0xFF) == 2) {
        return DsReadyCallback(func_80047A78);
    }
    return 2;
}

s32 ER_active(void) {
    extern s32 D_800733EC[];
    return (*D_800733EC);
}
