#include "common.h"

typedef struct { u8 _0[0x10]; u16 f10; u8 _1[0x76]; u16 f86; u16 _2; u16 f8a; u8 _3[0xEC]; s32 f178; s32 f17c; u8 _4[0x20]; } RSlot;
#define RSLOT ((RSlot *)D_80091618)
typedef struct { u8 _0[0x10]; u32 w10; u32 w14; u8 _1[0x30]; } RTab;
typedef struct { u8 _0[0x4E]; s16 f4e; s16 f50; s16 f52; u8 _1[0x3A]; s32 f8c; } RObj;
extern u8 D_80091618[];
extern u16 D_8006AF80;
extern u16 D_8008EE44;
extern s32 D_800ED890;
extern RTab D_80063940[];
extern s32 D_800FDE08[], D_800FAE10[];
extern s32 func_800E16AC(), func_800ACDE0(), func_800E0DF8(), func_800B1260(), func_800E2D7C(), func_800E355C(), func_800E3090(), func_800E4158();

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9C3C);

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
