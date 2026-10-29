#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C2CE0", func_800C2CE0);


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C2D4C(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return P32(0x2BC) += 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C2CE0", func_800C2DA4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C2CE0", func_800C2E04);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C2CE0", func_800C3210);


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C3270(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return P32(0x2BC) += 1;
}


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C32C8(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    s16 v = P16(0x2CC) - 1;
    P16(0x2CC) = v;
    return P32(0x2BC) = *(s32 *)(p + 0x2F4 + v * 4);
}
