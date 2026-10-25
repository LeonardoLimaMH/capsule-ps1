#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern u8 D_80091618[];

s32 func_800C662C(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    u8 *pc = *(u8 **)(p + 0x2BC);
    u8 c;
    *(u8 **)(p + 0x2BC) = pc + 1;
    c = pc[1];
    P16(0x376) = c;
    if (c == 0xFE) {
        P16(0x376) = 100;
    } else if (c == 0xFF) {
        s16 v = *(s16 *)(D_80091618 + (func_800B1260(a1) & 0xFFFF) * 0x1A8 + 0xE4);
        s32 n;
        if (v < 0x1A) n = 2;
        else if (v < 0x34) n = 3;
        else if (v < 0x67) n = 4;
        else if (v < 0x9A) n = 5;
        else if (v < 0xCD) n = 6;
        else n = 7;
        P16(0x376) = n;
    }
    return P32(0x2BC) += 1;
}
