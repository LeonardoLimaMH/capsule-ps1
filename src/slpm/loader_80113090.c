#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80113090", func_80113090);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80113090", func_80113124);

s32 func_801131B8(void) {
    extern s32 * D_80120AA8[];
    return *(*D_80120AA8);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80113090", func_801131D0);
