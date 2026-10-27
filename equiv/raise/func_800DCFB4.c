#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 func_800DD110(s32, s32, s16 *, s16 *), func_800DD2B8(s32, s32, s32);

s32 func_800DCFB4(s32 a0, s32 a1, u8 *s) {
    struct { s16 x, y; } t;
    volatile s32 pad[2]; /* frame de 0x38 como o original */
    u8 *p = PL(a0);
    s32 n = (s16)a1 - 1;
    u8 b;
    t.x = P16(0x336);
    t.y = P16(0x338);
    b = *s;
    if (b == 0xFF) return 1;
    for (;;) {
        s32 r = 1;
        if (n > 0) {
            s16 j = 0;
            do {
                r = func_800DD110(a0, b, &t.x, &t.y);
                if ((s16)r == 0) break;
                r = func_800DD2B8(a0, t.x, t.y);
                if ((s16)r == 0) break;
                j++;
            } while (j < n);
        }
        if ((s16)r != 1) return 0;
        b = *++s;
        if (b == 0xFF) return 1;
    }
}
