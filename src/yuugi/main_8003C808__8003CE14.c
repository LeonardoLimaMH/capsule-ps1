#include "common.h"
#include "yuugi.h"

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
typedef struct {
    s32 mask;
    s16 mvol_left;
    s16 mvol_right;
    s16 mvolmode_left;
    s16 mvolmode_right;
    u8 rest[0x1C];
} SpuCommonAttrLocal;

void func_8003CE14(s16 arg0) {
    extern SndChan D_800944B8[];
    extern s32 D_80078C84;
    SndChan *base;
    SndChan *c;
    if (arg0 != -1) {
        base = D_800944B8;
        c = &base[arg0];
        if (c->prog != -1) {
            D_80078C84 = 1;
            c->prog = -1;
            c->state = 0;
            c->vol2 = 0x7F;
            c->vol1 = 0x7F;
            D_80078C84 = 0;
        }
    }
}

void func_8003CE88(s16 arg0, u16 arg1, u16 arg2) {
    extern SndVoice D_800944B8[];
    SndVoice *base = D_800944B8;
    SndVoice *p = &base[arg0];
    p->volL = arg1 & 0x7F;
    p->volR = arg2 & 0x7F;
    if (p->state != 2) {
        func_80037E40();
    }
}

void func_8003CEF8(s16 arg0, u16 arg1, u16 arg2) {
    extern u16 D_80078D54;
    extern u16 D_80078D56;
    extern SndChan D_800944B8[];
    D_80078D54 = arg1;
    D_80078D56 = arg2;
    if (D_800944B8[arg0].state != 2) {
        func_80037E40();
    }
}

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808__8003CE14", func_8003CFBC);
