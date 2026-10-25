#include "common.h"

extern u8 D_8008ED68[];
extern void func_8001EA24(), func_8001EC74();

void func_8001F1A8(s32 x, s32 y, s32 a2, s32 a3, s32 a4, u8 *str, s32 wide, u32 n, s32 a8) {
    volatile s32 w;
    s32 xa = 0, xb = 0;
    u32 i, c;

    __asm__("" : : "r"(&a3));
    if (n == 0) {
        return;
    }
    w = (s16)wide;
    for (i = 0; i < n; i++, xa += 10, xb += 14) {
        if (w != 0) {
            c = ((u16 *)str)[i];
        } else {
            c = str[i];
        }
        if (c == 0 || c == 0xFFFF) {
            continue;
        }
        if (a3 != 0) {
            func_8001EA24((s16)(x + *(s32 *)(D_8008ED68 + 0x108) / 2 + xb),
                          (s16)(y + *(s32 *)(D_8008ED68 + 0x10C) / 2), (s16)a2, c, a4, a8);
        } else {
            func_8001EC74((s16)(x + *(s32 *)(D_8008ED68 + 0x108) / 2 + xa),
                          (s16)(y + *(s32 *)(D_8008ED68 + 0x10C) / 2), (s16)a2, c, a4, a8);
        }
    }
}
