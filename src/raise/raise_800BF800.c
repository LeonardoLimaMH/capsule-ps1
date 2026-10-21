#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800BF800", func_800BF800);

void func_800BFA30(void) {
    extern s16 D_800F0680[];
    (*D_800F0680) = 0;
}
