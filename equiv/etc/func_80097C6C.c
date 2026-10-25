#include "common.h"

extern s32 func_80019F30(s32);
extern void func_80012A20(s32, s32, s32, s32);

void func_80097C6C(u8 *base, s32 side, s32 slot) {
    u8 *e = base + side * 0x2E8 + 0x5E8 + slot * 124;
    s32 c = base[slot * 124 + side * 0x2E8 + 0x5E8];
    s32 k = e[0x26] * 2 + 2;
    u8 *h = (u8 *)func_80019F30((c + 0x10D) | 0x10000);
    s32 i, x;
    if (e[0x26] == 3) {
        func_80012A20(*(s32 *)(h + k * 4 + 0xC), 3, (s16)(slot * 32 + 0x2C0), (s32)(side << 23) >> 16);
        return;
    }
    for (i = 0, x = 0x2800000; i < 2; i++, x += 0x200000)
        func_80012A20(*(s32 *)(h + (k + i) * 4 + 0xC), 3, x >> 16, (s32)(side << 23) >> 16);
}
