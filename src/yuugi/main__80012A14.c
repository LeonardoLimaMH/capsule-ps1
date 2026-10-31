#include "common.h"
#include "yuugi.h"

void func_80012A14(void) {
    extern s16 D_8008ED50[];
    (*D_8008ED50) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14", func_80012A20);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14", func_80012A98);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14", func_80012C38);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14", func_80012C7C);
