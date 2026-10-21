#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003C808);

void func_8003C844(s32 arg0) {
    extern s32 D_80078D64;
    D_80078D64 = arg0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003C850);

void func_8003C878(void) {
    extern s32 D_80078CC8;
    D_80078CC8 = 0;
}

void func_8003C884(void) {
    extern s32 D_80078CC8;
    D_80078CC8 = 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003C894);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003C8C8);

void SsInitHot(void) {
    func_80038890();
    func_8003C73C();
    SpuQuit();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003C950);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003C990);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CA90);

void func_8003CACC(s16 arg0) {
    extern s16 D_80078CC4;
    D_80078CC4 = arg0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CAD8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CC00);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CCAC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CD70);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CE14);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CE88);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CEF8);

void func_8003CF68(void) {
    SpuReserveReverbWorkArea(1);
    SpuSetReverb(1);
}

void func_8003CF90(void) {
    extern s32 D_80078CCC;
    D_80078CCC = 0;
    SpuSetReverb(0);
    SpuReserveReverbWorkArea(0);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CFBC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003D518);
