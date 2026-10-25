/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 func_800DE10C(s32, s32, s32, s16 *, s16 *);
extern s32 func_800DE480(s32, s32, s32, s32, s32);

s32 func_800DDFE8(s32 a0, s32 a1, u8 *s) {
    struct { s16 x, y; } t;
    volatile s32 pad[2]; /* frame de 0x40 como o original */
    u8 *p = PL(a0);
    s32 r = 1;
    u8 b = *s;
    while (b != 0xFF) {
        t.x = P16(0x336);
        t.y = P16(0x338);
        r = func_800DE10C(a0, (s16)a1, b, &t.x, &t.y);
        if ((s16)r == 0) break;
        r = func_800DE480(a0, (s16)a1, b, t.x, t.y);
        if ((s16)r == 0) break;
        b = *++s;
    }
    return (s16)r;
}
