#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044634", DsSystemStatus);

s32 DsQueueLen(void) {
    extern s32 D_80094B70[];
    return (*D_80094B70);
}

s32 DsStatus(void) {
    return func_80044B5C() & 0xFF;
}
