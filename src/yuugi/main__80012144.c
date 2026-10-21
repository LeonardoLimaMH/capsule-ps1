#include "common.h"
#include "yuugi.h"

void func_80012144(s32 arg0) {
    extern s32 D_8008EE30[];
    (*D_8008EE30) = arg0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012144", func_80012150);

s32 func_800121B4(s32 arg0) {
    extern s32 D_8008EE34[];
    (*D_8008EE34) = arg0;
    return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012144", func_800121C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012144", func_80012200);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012144", func_80012264);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012144", func_800122A4);
