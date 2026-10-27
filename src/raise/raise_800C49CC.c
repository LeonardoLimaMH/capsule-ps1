#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C49CC", func_800C49CC);

s32 func_800C54FC(void) {
    return 0;
}

s32 func_800C5504(void) {
    return 0;
}

s32 func_800C550C(void) {
    return 0;
}

s32 func_800C5514(void) {
    return 0;
}

s32 func_800C551C(void) {
    return 0;
}

s32 func_800C5524(void) {
    return 0;
}


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

extern void func_800CD530(s32);

s32 func_800C552C(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    if (PS16(0x228) == 1 && PS16(0x2C0) != 4) func_800CD530(a1);
    return P32(0x2C4) += 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C49CC", func_800C55C4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C49CC", func_800C5670);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C49CC", func_800C57A8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C49CC", func_800C5850);
