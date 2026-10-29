#include "common.h"
#include "yuugi.h"

u8 func_80044B3C(void) {
    extern u8 D_80072F56;
    return D_80072F56;
}

u8 func_80044B4C(void) {
    extern u8 D_80072F57;
    return D_80072F57;
}

u8 func_80044B5C(void) {
    extern u8 D_80072F3C;
    return D_80072F3C;
}

void func_80044B6C(s32 arg0) {
    CD_sync(1, arg0);
}

void func_80044B90(s32 arg0) {
    CD_ready(1, arg0);
}

s32 func_80044BB4(void) {
    extern s32 D_80072F60;
    return D_80072F60;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044A0C__80044B3C", func_80044BC4);
