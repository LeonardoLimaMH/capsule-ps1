#include "common.h"
#include "yuugi.h"

#include "common.h"

extern void func_80047600();

s32 func_800475CC(s32 mode) {
    if ((mode & 0xFF) == 2) {
        return DsStartReadySystem(func_80047600, -1);
    }
    return 2;
}
