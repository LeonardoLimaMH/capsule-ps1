#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C07B8", func_800C07B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C07B8", func_800C07E4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C07B8", func_800C0810);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C07B8", func_800C083C);

s32 func_800C0888(void) {
    extern s16 D_80100E66[];
    return (*D_80100E66) < 1;
}
