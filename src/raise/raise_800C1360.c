#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C1360", func_800C1360);


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C147C(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return P32(0x2C4) += 1;
}
