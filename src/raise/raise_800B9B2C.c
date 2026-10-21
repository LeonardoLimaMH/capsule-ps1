#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9B2C", func_800B9B2C);

s32 func_800B9BF4(void) {
    extern s16 D_800EFA4E[];
    (*D_800EFA4E) = 0x3C;
    return 1;
}
