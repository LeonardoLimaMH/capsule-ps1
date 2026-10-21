#include "common.h"
#include "yuugi.h"

void func_8002E708(void) {
    extern s16 D_8008EE58[];
    (*D_8008EE58) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__8002E708", func_8002E714);
