#include "common.h"
#include "yuugi.h"

s32 DsLastCom(void) {
    return func_80044B10() & 0xFF;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800446D0", func_800446F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800446D0", func_80044794);
