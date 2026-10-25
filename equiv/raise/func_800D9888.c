#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800F1DA4;
extern u8 *D_800F1DA8;
extern u8 *func_800D9030(void);

s32 func_800D9888(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    if (a1 == 1) {
        u8 *o;
        D_800F1DA4 = 0;
        o = func_800D9030();
        D_800F1DA8 = o;
        *(s32 *)(o + 0x38) &= ~1;
        *(s32 *)(o + 0x34) |= 0x200;
    }
    return P32(0x2BC) += 1;
}
