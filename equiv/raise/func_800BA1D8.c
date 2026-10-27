#include "common.h"

/* stub-ret: mixed */
/* rand-u16: 0x8009162A 1 0,1,2,3 */
/* rand-u16: 0x800917D2 1 0,1,2,3 */
/* rand-u16: 0x8009197A 1 0,1,2,3 */
/* rand-u16: 0x80091B22 1 0,1,2,3 */
extern u8 D_80100F38[], D_80091618[];
extern s32 func_800B1260(s32), func_800B12D8(s32), func_800E14C4(s32);
extern void func_800A88E4(s32, s32);

void func_800BA1D8(s32 a0) {
    s32 k = func_800B1260(a0);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u16 *px = (u16 *)(p + 0x332), *py = (u16 *)(p + 0x334);
    u16 i;
    if (func_800E14C4((u16)k) == 1) return;
    if (*(u16 *)(D_80091618 + (u16)k * 0x1A8 + 0x90) != 0) k = func_800B12D8(a0);
    for (i = 0; i < *(u16 *)(D_80091618 + (u16)k * 0x1A8 + 0x12); i++) {
        u8 *e = D_80091618 + (u16)k * 0x1A8;
        if ((u16)(*(u16 *)(e + 0x1C + i * 12) - *px + 1) < 3 && (u16)(*(u16 *)(e + 0x20 + i * 12) - *py + 1) < 3)
            func_800A88E4((u16)k, *(u16 *)(e + 0x14 + i * 2));
    }
}
