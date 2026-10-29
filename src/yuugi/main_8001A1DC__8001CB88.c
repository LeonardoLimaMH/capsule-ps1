#include "common.h"
#include "yuugi.h"

void func_8001CB88(void) {
    extern s16 D_8008F6C6[];
    (*D_8008F6C6) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CB88", func_8001CB94);
