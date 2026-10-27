#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_80078C20;
extern s32 D_800EE5D0[];
extern u8 D_800EEB9C[];
extern u8 *func_800B6D98(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);

#define W34(o) (*(s32 *)((o) + 0x34))

void func_800C60E0(s32 a0, s32 a1) {
    u8 *p = PL(a0);
    u16 i;
    if (a1 == 0) {
        s32 m = ((1 - D_80078C20) & 1) << 8;
        for (i = 0; i < 9; i++) {
            u8 *o = *(u8 **)(p + 0x230 + i * 4);
            W34(o) = (W34(o) & ~0x100) | m;
        }
    } else if (a1 == 1) {
        s32 m = (a0 & 1) << 9;
        for (i = 0; i < 9; i++) {
            u8 **q = (u8 **)(p + 0x230 + i * 4);
            u8 *o = func_800B6D98(4, 0, 0, 4, 0, D_800EE5D0, *(s32 *)(D_800EEB9C + 0x6E0 + i * 4), 1, 1, 0, 2, 0);
            *q = o;
            W34(o) = (W34(o) & ~0x200) | m;
            W34(*q) &= ~0xC00;
            W34(*q) = (W34(*q) & 0xFFFF0FFF) | ((i & 0xF) << 12);
        }
    }
}
