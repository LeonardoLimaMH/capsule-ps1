#include "common.h"

extern u16 D_8006AF80[];
extern u8 D_80091618[];
s32 func_800E16AC();
s32 func_800ACDE0();
s32 func_800E0DF8();
s32 func_800B9C3C(void) {
    typedef struct { u8 _p0[0x10]; u16 f10; u8 _p12[0x8A - 0x12]; u16 f8a; u8 _p8c[0x1A8 - 0x8C]; } RSlot;
    if (D_8006AF80[0] != 0xFFFF) {
        RSlot *s = &((RSlot *)D_80091618)[D_8006AF80[0]];
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9E34);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA3A8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA4A0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA534);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA744);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA9D8);
