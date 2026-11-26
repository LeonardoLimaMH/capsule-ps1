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

s32 func_8003D518(s16 arg0) {
    extern SndChan D_800944B8[];
    SndChan *base = D_800944B8;
    SndChan *c = &base[arg0];
    s32 r;
    if (c->state == 1) {
        r = (s16)func_8003C5BC(arg0);
        if (r == 3) {
            c->state = r;
        }
    }
    return D_800944B8[arg0].state;
}
