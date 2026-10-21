#include "common.h"
#include "yuugi.h"

void func_8004C168(void) {
    extern s32 D_80078A58[];
    extern s32 D_80078A5C[];
    (*D_80078A58) = VSync(-1) + 0xF0;
    (*D_80078A5C) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004C168", func_8004C19C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004C168", func_8004C2E0);
