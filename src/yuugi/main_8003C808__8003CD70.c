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

typedef struct {
    u8 pad0[0x16];
    u16 unk16;
    u8 pad18[0x4E - 0x18];
} SndKeyEnt;

void func_8003CD70(s16 arg0) {
    extern s32 D_80078C84;
    extern SndVoice D_800944B8[];
    register SndVoice *base asm("a0");
    register SndVoice *p asm("s0");
    register s32 off asm("v0");

    if (arg0 != -1) {
        base = D_800944B8;
        off = arg0 * sizeof(SndVoice);
        p = (SndVoice *)(off + (u32)base);
        if (p->id != -1) {
            D_80078C84 = 1;
            func_8003C530(arg0);
            func_8003860C(arg0);
            p->volR = 0x7F;
            p->volL = 0x7F;
            p->state = 2;
            D_80078C84 = 0;
        }
    }
}
