#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800F1E94[];
extern s16 func_800DDFE8(s32, s32, s32), func_800DEA54(s32, s32);
extern void func_800DE770(s32, s32, s32);

s32 func_800DDE88(s32 a0) {
    u8 *p = PL(a0);
    s16 i, j;
    for (i = 2; i < 4; i++) {
        for (j = 0; j < 7; j++) {
            s16 v = func_800DDFE8(a0, i, D_800F1E94[j]);
            *(s16 *)(p + 0x746 + i * 16 + j * 2) = v;
            if (v == 1) func_800DE770(a0, i, j);
        }
        *(s16 *)(p + 0x73C + i * 2) = func_800DEA54(a0, i);
    }
    return PS16(0x5B4) != 0;
}
