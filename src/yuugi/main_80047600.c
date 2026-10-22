#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80047600", func_80047600);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80047600", func_80047778);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80047600", func_8004784C);

s32 func_800478BC(s32 arg0) {
    extern s32 D_800733C0;
    s32 temp_v0;

    temp_v0 = D_800733C0;
    D_800733C0 = arg0;
    return temp_v0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80047600", func_800478D0);
