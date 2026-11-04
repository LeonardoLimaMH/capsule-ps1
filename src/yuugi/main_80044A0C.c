#include "common.h"
#include "yuugi.h"

#include "common.h"

void func_80044A0C(void) {
    extern s32 D_80072F24[];
    extern s32 D_80073084[];
    extern s32 D_80073088[];
    (*D_80072F24) = 0;
    CD_flush();
    (*D_80073084) = 0;
    (*D_80073088) = 0;
    VSyncCallbacks(0, 0);
}

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

#include "common.h"

extern s32 D_80072F44[];

s32 func_80044AF8(s32 i) {
    return D_80072F44[i];
}

u8 func_80044B10(void) {
    extern u8 D_80072F50;
    return D_80072F50;
}

u8 func_80044B20(void) {
    extern u8 D_80072F51;
    return D_80072F51;
}
