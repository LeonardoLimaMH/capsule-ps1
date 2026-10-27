#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_80078C20;
extern u8 *func_800C5CA0(s32, s32);

#define W34(o) (*(s32 *)((o) + 0x34))

void func_800C62A4(s32 a0, s32 a1) {
    u8 *p;
    u16 i;
    if (a0 == 2) return;
    p = PL(a0);
    if (a1 == 0) {
        s32 m = ((1 - D_80078C20) & 1) << 8;
        for (i = 0; i < 7; i++) {
            u8 *o = *(u8 **)(p + 0x278 + i * 4);
            W34(o) = (W34(o) & ~0x100) | m;
        }
    } else if (a1 == 1) {
        s32 m = (a0 & 1) << 9;
        for (i = 0; i < 7; i++) {
            u8 **q = (u8 **)(p + 0x278 + i * 4);
            u8 *o = func_800C5CA0(a0, i);
            *q = o;
            W34(o) = (W34(o) & ~0x200) | m;
            W34(*q) = (W34(*q) & ~0xC00) | 0x400;
            W34(*q) = (W34(*q) & 0xFFFF0FFF) | (((i + 8) & 0xF) << 12);
        }
    }
}
