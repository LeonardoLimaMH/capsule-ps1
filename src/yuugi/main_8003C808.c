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

void func_8003CA90(s16 arg0) {
    extern SndSlot D_800947E8[];
    register SndSlot *p asm("v1") = D_800947E8;
    register s32 minus1 asm("a0") = -1;
    p += arg0;
    if (p->id != minus1) {
        p->id = minus1;
    }
}

typedef struct {
    u8 pad0[0x16];
    u16 unk16;
    u8 pad18[0x4E - 0x18];
} SndKeyEnt;

void func_8003CACC(s16 arg0) {
    extern s16 D_80078CC4;
    D_80078CC4 = arg0;
}

void func_8003CAD8(void) {
    extern s16 D_80078CC4;
    extern s32 D_80078C78[];
    extern u8 D_80093D68[];
    extern s32 D_8007142C[];
    s32 mask = 0;
    s32 i;
    u8 *s1;
    s32 *s2;
    s32 *s0;
    s32 st;
    u16 v;

    if (D_80078CC4 == 0) {
        s1 = D_80093D68;
        s2 = D_8007142C;
        for (i = 0; i < D_80078C78[0]; i++, s1 += 0x4E, s2++) {
            if (*(u16 *)(s1 + 0x16) != 0 && SpuGetKeyStatus(*s2) == 3) {
                v = *(u16 *)(s1 + 0x16);
                if (v >= 2) {
                    mask |= *s2;
                    s0 = s2;
                    do {
                        SpuSetKey(0, *s0);
                        st = SpuGetKeyStatus(*s0);
                    } while (st != 2 && st != 0);
                    *(u16 *)(s1 + 0x16) = 0;
                } else {
                    *(u16 *)(s1 + 0x16) = v + 1;
                }
            }
        }
    }
    if (mask != 0) {
        SpuSetKey(0, mask);
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CC00);

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
