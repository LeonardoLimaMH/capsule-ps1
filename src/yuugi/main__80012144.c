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

#include "common.h"

void func_800122A4(void) {
    extern u16 D_8008EE4C[];
    extern int func_80012578();
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_800125D8();
        return;
    case 1:
        if (func_80019654() != 0) {
            func_8001A480(4, 0x80097800);
            func_80019F30(0x110004, func_80012578);
            func_80012578();
        }
        return;
    }
}
