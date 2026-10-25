#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800EF2D8 1 0,1,2,3 */
extern u8 D_80091618[];
extern u16 D_8006AF80, D_800EF2D8;
extern s32 func_800D1548(void);
extern void func_800D1CC4(s32, s32, s32, s32);

s32 func_800B94D4(void) {
    u16 a = D_8006AF80, b = D_800EF2D8;
    u8 *e = D_80091618 + a * 0x1A8;
    u8 *f;
    *(u16 *)(e + 0x8A) = b;
    *(u16 *)(e + 0x8C) = 1;
    f = D_80091618 + b * 0x1A8;
    *(u16 *)(f + 0x8A) = a;
    *(u16 *)(f + 0x8C) = 0;
    *(u16 *)(e + 0x84) += 1;
    *(u16 *)(f + 0x84) += 1;
    if (func_800D1548() == 0) func_800D1CC4(D_8006AF80, 10, 0, 0);
    return 1;
}
