#include "common.h"

s16 func_800C0648(void) {
    extern s16 D_800F0710[];
    return (*D_800F0710);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0124__800C0648", func_800C0658);
