#include "common.h"
#include "yuugi.h"

void func_8003C808(void) {
    extern s32 D_80078CC0;
    extern s32 D_80078D64;
    if (D_80078D64 > 0) {
        if (D_80078D64 < 4) {
            func_8003A690();
        }
    }
    D_80078CC0 = 1;
}

void func_8003C844(s32 arg0) {
    extern s32 D_80078D64;
    D_80078D64 = arg0;
}

void func_8003C850(void) {
    extern s32 D_80078CC0;
    if (D_80078CC0 != 0) {
        func_8003A7B4();
    }
}

void func_8003C878(void) {
    extern s32 D_80078CC8;
    D_80078CC8 = 0;
}

void func_8003C884(void) {
    extern s32 D_80078CC8;
    D_80078CC8 = 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003C894);

typedef struct {
    s16 id;
    u8 pad2[2];
    u8 *src;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 unk18;
    u8 pad19[2];
    u8 unk1B;
} SndSlot;

typedef struct {
    u8 pad0[0x284];
    s32 unk284;
    s16 id;
    s16 state;
    s16 volL;
    s16 volR;
    s32 src;
    s32 unk294;
    u8 pad298[0x2AC - 0x298];
} SndVoice;

typedef struct {
    u8 pad0[0x288];
    s16 prog;
    s16 state;
    s16 vol1;
    s16 vol2;
    u8 pad290[0x2AC - 0x290];
} SndChan;

void func_8003C8C8(void) {
    extern s32 D_80078D64;
    s32 i;
    func_80038890();
    if (D_80078D64 > 0) {
        if (D_80078D64 < 4) {
            func_8003A71C();
        }
    }
    for (i = 7; i >= 0; i--) {
    }
    func_8003C73C();
}

typedef struct {
    s32 mask;
    s16 mvol_left;
    s16 mvol_right;
    s16 mvolmode_left;
    s16 mvolmode_right;
    u8 rest[0x1C];
} SpuCommonAttrLocal;

void SsInitHot(void) {
    func_80038890();
    func_8003C73C();
    SpuQuit();
}

void func_8003C950(s32 left, s32 right)
{
  SpuCommonAttrLocal attr;
  attr.mask = 0xF;
  attr.mvol_left = left << 7;
  attr.mvol_right = right << 7;
  attr.mvolmode_left = 0;
  attr.mvolmode_right = 0;
  SpuSetCommonAttr(&attr);
}

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
