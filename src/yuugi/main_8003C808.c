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

u8 func_8003C894(u8 arg0) {
    extern u32 D_80078C78[];
    if (arg0 < 0x19) {
        if (arg0 == 0) {
            goto err;
        }
        D_80078C78[0] = arg0;
        return arg0;
    }
err:
    return 0xFF;
}

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

void SsInitHot(void) {
    func_80038890();
    func_8003C73C();
    SpuQuit();
}

#include "common.h"

typedef struct {
    s32 mask;
    s16 mvol_left;
    s16 mvol_right;
    s16 mvolmode_left;
    s16 mvolmode_right;
    u8 rest[0x1C];
} SpuCommonAttrLocal;

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

s32 func_8003C990(u8 *arg0, s16 arg1, s32 arg2) {
    extern s32 D_80078CD0;
    extern SndSlot D_800947E8[];
    s16 i = 0;
    SndSlot *p;
    D_80078CD0 = 0;
    if (arg1 == -1) {
        while (1) {
            if (D_800947E8[i].id == -1) {
                arg1 = i;
                break;
            }
            i++;
            if (i >= 16) {
                return -1;
            }
        }
    } else if (arg1 >= 16) {
        return -1;
    }
    p = &D_800947E8[arg1];
    p->id = arg1;
    p->src = arg0;
    p->unk10 = arg2;
    p->unk8 = *(u16 *)(arg0 + 0x12) * 0x200 + 0xA20;
    p->unkC = 0;
    p->unk14 = *(s32 *)(arg0 + 0xC) - p->unk8;
    p->unk18 = arg0[0x18];
    p->unk1B = arg0[0x19];
    return arg1;
}

void func_8003CA90(s16 arg0) {
    extern SndSlot D_800947E8[];
    register SndSlot *p asm("v1") = D_800947E8;
    register s32 minus1 asm("a0") = -1;
    p += arg0;
    if (p->id != minus1) {
        p->id = minus1;
    }
}

void func_8003CACC(s16 arg0) {
    extern s16 D_80078CC4;
    D_80078CC4 = arg0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CAD8);

s32 func_8003CC00(s32 *arg0, s16 arg1) {
    extern s32 D_80078C84[4];
    extern SndVoice D_800944B8[16];
    SndVoice *p;
    s32 i;

    D_80078C84[0] = 1;
    if (*arg0 == 0x53455170 || *arg0 == 0x6468544D || *arg0 == 0x2054444B || *arg0 == 0x3154444B) {
        i = 0;
        p = D_800944B8;
        do {
            if (p->id == -1) {
                p->src = (s32)arg0;
                p->id = arg1;
                p->state = 2;
                D_80078C84[0] = 0;
                return (s16)i;
            }
            i++;
            p++;
        } while (i < 1);
        D_80078C84[0] = 0;
    }
    return -1;
}

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

void func_8003CD70(s16 arg0) {
    extern s32 D_80078C84;
    extern SndVoice D_800944B8[];
    SndVoice *p;
    SndVoice *base;
    s16 id;

    if (arg0 != -1) {
        base = D_800944B8;
        p = &base[arg0];
        id = p->id;
        if (id != -1) {
            s16 a = arg0;
            D_80078C84 = 1;
            func_8003C530(a);
            func_8003860C(a);
            p->volR = 0x7F;
            p->volL = 0x7F;
            p->state = 2;
            D_80078C84 = 0;
        }
    }
}

void func_8003CE14(s16 arg0) {
    extern s32 D_80078C84[4];
    extern SndChan D_800944B8[16];
    s32 k = arg0;
    if (k != -1) {
        SndChan *base = D_800944B8;
        SndChan *c = &base[k];
        if (c->prog != -1) {
            D_80078C84[0] = 1;
            c->prog = k;
            c->state = 0;
            c->vol2 = 0x7F;
            c->vol1 = 0x7F;
            D_80078C84[0] = 0;
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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CFBC);

s32 func_8003D518(s16 arg0) {
    extern SndVoice D_800944B8[];
    SndVoice *base = D_800944B8;
    SndVoice *c = &base[arg0];
    s16 r;

    if (c->state == 1) {
        r = func_8003C5BC();
        if (r == 3) {
            c->state = r;
        }
    }
    base = D_800944B8;
    return base[arg0].state;
}
