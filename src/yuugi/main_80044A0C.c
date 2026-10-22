#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044A0C", func_80044A0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044A0C", func_80044A4C);

extern s32 D_80094C08;

void func_80044AC8(s32 arg0) {
    D_80094C08 = arg0;
}

extern s32 D_80094C0C;

void func_80044AD4(s32 arg0) {
    D_80094C0C = arg0;
}

extern s32 D_80094C10;

void func_80044AE0(s32 arg0) {
    D_80094C10 = arg0;
}

extern s32 D_80094C14;

void func_80044AEC(s32 arg0) {
    D_80094C14 = arg0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044A0C", func_80044AF8);

u8 func_80044B10(void) {
    extern u8 D_80072F50;
    return D_80072F50;
}

u8 func_80044B20(void) {
    extern u8 D_80072F51;
    return D_80072F51;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044A0C", func_80044B30);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044A0C", func_80044BC4);
