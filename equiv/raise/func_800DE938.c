#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800F1E94[];

s32 func_800DE938(s32 a0) {
    u8 *p = PL(a0);
    s16 i;
    if (PS16(0x5B4) == 0) return 0;
    i = PS16(0x5B0);
    P16(0x736) = *(u16 *)(p + 0x5B6 + i * 4);
    P32(0x738) = D_800F1E94[*(s16 *)(p + 0x5B8 + i * 4)];
    P16(0x5B0) = (i + 1) % 32;
    P16(0x5B4) -= 1;
    return 1;
}
