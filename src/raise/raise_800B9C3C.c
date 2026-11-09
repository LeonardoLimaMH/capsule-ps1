#include "common.h"

typedef struct { u8 _0[0x10]; u16 f10; u8 _1[0x74]; u16 f86; u16 _2; u16 f8a; u8 _3[0xEC]; s32 f178; s32 f17c; u8 _4[0x28]; } RSlot;
#define RSLOT ((RSlot *)D_80091618)
typedef struct { u8 _0[0x10]; u32 w10; u32 w14; u8 _1[0x24]; } RTab;
typedef struct { u8 _0[0x4E]; s16 f4e; s16 f50; s16 f52; u8 _1[0x38]; s32 f8c; } RObj;
extern u8 D_80091618[];
extern u16 D_8006AF80[];
extern u16 D_8008EE44[];
extern s32 D_800ED890[];
#define D_8006AF80 (*D_8006AF80)
#define D_8008EE44 (*D_8008EE44)
#define D_800ED890 (*D_800ED890)
extern RTab D_80063940[];
extern s32 D_800FDE08[], D_800FAE10[];
extern s32 func_800E16AC(), func_800ACDE0(), func_800E0DF8(), func_800B1260(), func_800E2D7C(), func_800E355C(), func_800E3090(), func_800E4158();

s32 func_800B9C3C(void) {
    if (D_8006AF80 != 0xFFFF) {
        RSlot *s = &RSLOT[D_8006AF80];
        if (s->f10 == 0xFFFF) {
            return 0;
        }
        if (s->f8a != 0xFFFF) {
            return 0;
        }
        if (func_800E16AC() != 0) {
            return 0;
        }
        if (func_800ACDE0() != 1) {
            return func_800E0DF8() != 1;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9CEC);

s32 func_800B9E34(void) {
    if (D_8006AF80 != 0xFFFF) {
        RSlot *s = &RSLOT[D_8006AF80];
        if (s->f10 == 0xFFFF) {
            return 0;
        }
        if (s->f8a == 0xFFFF) {
            return 0;
        }
        if (s->f86 > 2) {
            return 0;
        }
        if (func_800ACDE0() != 1) {
            return func_800E0DF8() != 1;
        }
    }
    return 0;
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

void func_800BA3A8(s32 a0) {
    s32 i = a0 != 1;
    u16 id = func_800B1260(a0);
    s32 v;
    v = func_800E2D7C(a0);
    D_800FDE08[i] = v;
    if (v != 0) {
        func_800E355C(a0);
        RSLOT[id].f178 = D_800FDE08[i];
    }
    v = func_800E3090(a0);
    D_800FAE10[i] = v;
    if (v != 0) {
        func_800E4158(a0);
        RSLOT[id].f17c = D_800FAE10[i];
    }
}

void func_800BA4A0(RObj *a0) {
    if (D_8008EE44 == 0x26 && D_800ED890 < 2) {
        return;
    }
    if (((D_80063940[a0->f8c].w10 >> 30) | ((D_80063940[a0->f8c].w14 & 3) << 2)) == 0 && a0->f4e > 0) {
        a0->f52 = 0xCCC;
        a0->f50 = 0xCC0;
        a0->f52 = 0xCCC & 0xFFF0;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA534);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA744);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA9D8);
