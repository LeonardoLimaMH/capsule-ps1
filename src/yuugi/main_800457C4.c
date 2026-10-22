#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800457C4", func_800457C4);

extern s32 D_80072F24;

void func_80045838(void) {
    D_80072F24 = 1;
}

s32 func_80045848(void) {
    extern s32 D_80072F24[];
    return (*D_80072F24);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800457C4", func_80045858);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800457C4", func_800458A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800457C4", func_800458E8);
