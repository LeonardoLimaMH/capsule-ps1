#include "common.h"

s16 func_800E6DA8(s32 arg0) {
    return func_800E6DCC(arg0 & 0xFFFF);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6DA8", func_800E6DCC);
