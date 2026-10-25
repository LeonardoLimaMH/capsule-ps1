#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800CF290(s32 a0) {
    u8 *p = PL(a0);
    P16(0x1D4) = 0;
    P16(0x1D6) = 0;
    P16(0x1D8) = 0;
    return (s32)D_80100F38;
}
