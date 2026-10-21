#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0124", func_800C0124);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0124", func_800C0560);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0124", func_800C0590);

void func_800C062C(void) {
    extern s16 D_800F0710[];
    (*D_800F0710) = 1;
}

void func_800C063C(void) {
    extern s16 D_800F0710[];
    (*D_800F0710) = 0;
}
