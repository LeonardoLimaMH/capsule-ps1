#include "common.h"
#include "yuugi.h"

s32 DsQueueLen(void) {
    extern s32 D_80094B70[];
    return (*D_80094B70);
}

s32 DsStatus(void) {
    return func_80044B5C() & 0xFF;
}
