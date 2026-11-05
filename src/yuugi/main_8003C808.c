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
        if (arg0 != 0) {
            D_80078C78[0] = arg0;
        }
        return arg0;
    }
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
    s32 ret;
    D_80078CD0 = 0;
    if (arg1 == -1) {
        do {
            arg1 = i;
            i++;
            if (D_800947E8[arg1].id == -1) {
                goto found;
            }
        } while (i < 16);
        ret = -1;
    } else {
        ret = -1;
        if (arg1 < 16) {
found:
            ret = arg1;
            p = &D_800947E8[arg1];
            p->id = arg1;
            p->src = arg0;
            p->unk10 = arg2;
            p->unk8 = *(u16 *)(arg0 + 0x12) * 0x200 + 0xA20;
            p->unk14 = *(s32 *)(arg0 + 0xC) - p->unk8;
            p->unk18 = arg0[0x18];
            p->unk1B = arg0[0x19];
        }
    }
    return ret;
}

void func_8003CA90(s16 arg0) {
    extern SndSlot D_800947E8[];
    SndSlot *base = D_800947E8;
    SndSlot *p = base + arg0;
    if (p->id != -1) {
        p->id = -1;
    }
}

void func_8003CACC(s16 arg0) {
    extern s16 D_80078CC4;
    D_80078CC4 = arg0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003C808", func_8003CAD8);

s32 func_8003CC00(s32 *arg0, s16 arg1) {
    extern s32 D_80078C84;
    extern SndVoice D_800944B8[];
    SndVoice *p;
    s16 i;

    D_80078C84 = 1;
    if (*arg0 == 0x53455170 || *arg0 == 0x6468544D || *arg0 == 0x2054444B || *arg0 == 0x3154444B) {
        i = 0;
        p = D_800944B8;
        do {
            if (p->id == -1) {
                p->src = (s32)arg0;
                p->id = arg1;
                p->state = 2;
                D_80078C84 = 0;
                return i;
            }
            i++;
            p++;
        } while (i < 1);
        D_80078C84 = 0;
    }
    return -1;
}

void func_8003CCAC(s16 arg0, u8 arg1, s16 arg2) {
    extern s32 D_80078C84;
    extern s32 D_80078C8C;
    extern s16 D_80078D60;
    extern SndVoice D_800944B8[];
    SndVoice *p;

    if (arg0 != -1) {
        p = &D_800944B8[arg0];
        D_80078C84 = 1;
        if (p->id != -1) {
            p->unk284 = p->src;
            D_80078D60 = arg2;
            p->unk294 = 0x10000;
            func_8003C29C(arg0);
            if (arg1 == 0) {
                p->state = 4;
            } else {
                D_80078C8C = 1;
                p->state = 1;
            }
        }
        D_80078C84 = 0;
    }
}

void func_8003CD70(s16 arg0) {
    extern s32 D_80078C84;
    extern SndVoice D_800944B8[];
    SndVoice *p;

    if (arg0 != -1) {
        p = &D_800944B8[arg0];
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

void func_8003CE14(s16 arg0) {
    extern s32 D_80078C84;
    extern SndChan D_800944B8[];
    SndChan *c;
    if (arg0 != -1) {
        c = &D_800944B8[arg0];
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
    extern u16 D_80078D54[];
    extern u16 D_80078D56[];
    extern SndChan D_800944B8[];
    SndChan *base = D_800944B8;
    D_80078D54[0] = arg1;
    if (base[arg0].state != 2) {
        D_80078D56[0] = arg2;
        func_80037E40();
    } else {
        D_80078D56[0] = arg2;
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
    extern SndChan D_800944B8[];
    if (D_800944B8[arg0].state == 1) {
        if (func_8003C5BC() == 3) {
            D_800944B8[arg0].state = 3;
        }
    }
    return D_800944B8[arg0].state;
}
