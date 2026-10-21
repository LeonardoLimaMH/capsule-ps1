#include "common.h"
#include "yuugi.h"

void func_8001B0E0(void *arg0) {
    extern s32 D_8008F7D0[];
    (*D_8008F7D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x10;
    M2C_FIELD(arg0, u16 *, 0x40) = (u16) (M2C_FIELD(arg0, u16 *, 0x40) + 1);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B100);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B16C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B1A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B484);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B964);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001BAA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001BAD8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001BB18);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001BCE4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001BFF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001C36C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001C5D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001C864);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001C9D8);
