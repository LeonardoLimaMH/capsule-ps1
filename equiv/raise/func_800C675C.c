#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C675C(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    if ((u16)(P16(0x376) -= 1) != 0)
        P32(0x2BC) = *(s32 *)(p + 0x2DC + PS16(0x2CC) * 4);
    else
        P32(0x2BC) = *(s32 *)(p + 0x2F0 + PS16(0x2CC) * 4);
    return P32(0x2BC);
}
