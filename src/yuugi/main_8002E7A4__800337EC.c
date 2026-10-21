#include "common.h"
#include "yuugi.h"

s16 func_800337EC(void) {
    extern s16 D_800922F0[];
    return (*D_800922F0);
}

void func_800337FC(void) {
    func_80036E5C();
    func_80034B80();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_80033824);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_80033878);

void func_800338DC(s32 arg0) {
    func_80033900(arg0 & 0xFFFF, 0x80);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_80033900);

void func_80033974(s32 arg0) {
    func_80033998(arg0 & 0xFFFF, -0x80);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_80033998);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_800339D8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_80033A50);
