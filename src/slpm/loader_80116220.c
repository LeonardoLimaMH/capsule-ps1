#include "common.h"

void func_80116220(void) {
    extern s32 D_80131C70[];
    extern s32 D_80131C74[];
    (*D_80131C70) = slpm_VSync(-1) + 0xF0;
    (*D_80131C74) = 0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116220", func_80116254);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116220", func_80116398);
