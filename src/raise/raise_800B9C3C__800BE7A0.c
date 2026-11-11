#include "common.h"

s32 func_800BE7A0(void) {
    extern s16 D_80100D4E[];
    (*D_80100D4E) = 0x20;
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BE7A0", func_800BE7B4);

s32 func_800BEA6C(void) {
    extern u16 D_800F0620[];
    extern u16 D_80100D44[];
    extern s16 D_80100D46[];
    (*D_80100D46) = 2;
    (*D_80100D44) = (*D_800F0620);
    return 0;
}
