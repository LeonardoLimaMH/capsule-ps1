#include "common.h"

void func_800D1558(void) {
    extern s32 D_800F1CC4[];
    (*D_800F1CC4) = ((*D_800F1CC4) + 1) % 7;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1558", func_800D1598);
