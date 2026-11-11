#include "common.h"

extern volatile u16 D_8006AF80[];
extern u8 D_80091618[];
s32 func_800E16AC();
s32 func_800ACDE0();
s32 func_800E0DF8();
s32 func_800B9C3C(void) {
    typedef struct { u8 _p0[0x10]; u16 f10; u8 _p12[0x8A - 0x12]; u16 f8a; u8 _p8c[0x1A8 - 0x8C]; } RSlot;
    RSlot *s;
    if (D_8006AF80[0] == 0xFFFF) {
        return 0;
    }
    s = &((RSlot *)D_80091618)[D_8006AF80[0]];
    if (s->f10 == 0xFFFF) {
        return 0;
    }
    if (s->f8a != 0xFFFF) {
        return 0;
    }
    if (func_800E16AC() != 0) {
        return 0;
    }
    if (func_800ACDE0() == 1) {
        return 0;
    }
    return func_800E0DF8() != 1;
}

s32 func_800B9CEC(void) {
    typedef struct {
        u8 _p0[0x10];
        u16 f10;
        u8 _p12[0x84 - 0x12];
        u16 f84;
        u8 _p86[0x8A - 0x86];
        u16 f8a;
        u8 _p8c[0x1A8 - 0x8C];
    } RSlot;
    RSlot *s;
    RSlot *cur;
    u16 i;
    u16 val;

    if (D_8006AF80[0] != 0xFFFF) {
        s = (RSlot *)D_80091618;
        cur = &s[D_8006AF80[0]];
        if (cur->f10 != 0xFFFF && cur->f8a == 0xFFFF && cur->f84 < 3) {
            if (func_800ACDE0() != 1) {
                if (func_800E0DF8() != 1) {
                    val = D_8006AF80[0];
                    for (i = 0; i < 6; i++) {
                        if (i != val) {
                            RSlot *t = &s[i];
                            if (t->f10 != 0xFFFF && t->f8a == 0xFFFF && t->f84 < 3) {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

s32 func_800B9E34(void) {
    typedef struct { u8 _p0[0x10]; u16 f10; u8 _p12[0x86 - 0x12]; u16 f86; u16 _p88; u16 f8a; u8 _p8c[0x1A8 - 0x8C]; } RSlot;
    RSlot *s;
    if (D_8006AF80[0] == 0xFFFF) {
        return 0;
    }
    s = (RSlot *)D_80091618;
    s = &s[D_8006AF80[0]];
    if (s->f10 == 0xFFFF || s->f8a == 0xFFFF || s->f86 > 2) {
        return 0;
    }
    if (func_800ACDE0() == 1) {
        return 0;
    }
    return func_800E0DF8() != 1;
}

void raise_SpuInit(void) {
    func_800BA3A8(0);
}

void func_800B9F08(s32 arg0) {
    func_800BA534(0, arg0);
}

void func_800B9F2C(s32 arg0) {
    func_800BA744(0, arg0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9F50);

void SpuInitHot(void) {
    func_800BA3A8(1);
}

void func_800BA190(s32 arg0) {
    func_800BA534(1, arg0);
}

void func_800BA1B4(s32 arg0) {
    func_800BA744(1, arg0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA1D8);

extern s32 D_800FDE08[];
extern s32 D_800FAE10[];
s32 func_800B1260();
s32 func_800E2D7C();
void func_800E355C();
s32 func_800E3090();
void func_800E4158();
void func_800BA3A8(s32 a0) {
    typedef struct { u8 _p0[0x178]; s32 f178; s32 f17c; u8 _p180[0x1A8 - 0x180]; } RSlot;
    s32 i = a0 != 1;
    u32 id = (u16)func_800B1260(a0);
    if ((D_800FDE08[i] = func_800E2D7C(a0)) != 0) {
        func_800E355C(a0);
        {
            RSlot *s = (RSlot *)D_80091618;
            register RSlot *p asm("v1") = &s[id];
            p->f178 = D_800FDE08[i];
        }
    }
    if ((D_800FAE10[i] = func_800E3090(a0)) != 0) {
        func_800E4158(a0);
        {
            RSlot *s = (RSlot *)D_80091618;
            register RSlot *p asm("v1") = &s[id];
            p->f17c = D_800FAE10[i];
        }
    }
}

extern u16 D_8008EE44[];
extern s32 D_800ED890[];
extern u8 D_80063940[];
void func_800BA4A0(void *arg0) {
    typedef struct { u8 _p0[0x4E]; s16 f4e; s16 f50; s16 f52; u8 _p54[0x8C - 0x54]; s32 f8c; } RObj;
    typedef struct { u8 _p0[0x10]; u32 w10; u32 w14; u8 _p18[0x3C - 0x18]; } RTab;
    RObj *o = arg0;
    RTab *t;
    s16 c;
    if (D_8008EE44[0] == 0x26 && D_800ED890[0] < 2) {
        return;
    }
    t = (RTab *)D_80063940;
    t = &t[o->f8c];
    if (((t->w10 >> 30) | ((t->w14 & 3) << 2)) == 0 && o->f4e > 0) {
        c = o->f52 = 0xCCC;
        o->f50 = 0xCC0;
        o->f52 = c & 0xFFF0;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA534);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA744);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA9D8);
