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

void func_8003CCAC(s16 arg0, s32 arg1, s16 arg2) {
    extern s32 D_80078C84[4];
    extern s32 D_80078C8C[];
    extern s16 D_80078D60;
    extern SndVoice D_800944B8[16];
    register s32 one asm("s1");
    s32 k = (s16)arg0;

    if (k != -1) {
        SndVoice *base = D_800944B8;
        SndVoice *p = &base[k];
        s32 id = p->id;
        one = 1;
        D_80078C84[0] = one;
        if (id != -1) {
            p->unk284 = p->src;
            D_80078D60 = arg2;
            p->unk294 = 0x10000;
            func_8003C29C(k);
            if ((arg1 & 0xFF) == 0) {
                p->state = 4;
            } else {
                D_80078C8C[0] = one;
                p->state = one;
            }
        }
        D_80078C84[0] = 0;
    }
}
