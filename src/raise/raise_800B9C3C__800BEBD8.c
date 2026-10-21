#include "common.h"

s32 func_800BEBD8(void) {
    extern s16 D_800F062A[];
    (*D_800F062A) = 0x10;
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BEBD8", func_800BEBEC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BEBD8", func_800BED10);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BEBD8", func_800BEDA8);
