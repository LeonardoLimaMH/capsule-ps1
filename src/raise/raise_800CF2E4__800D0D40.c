#include "common.h"

void func_800D0D40(s16 arg0) {
    extern s16 D_80103D38[];
    (*D_80103D38) = arg0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4__800D0D40", func_800D0D4C);
