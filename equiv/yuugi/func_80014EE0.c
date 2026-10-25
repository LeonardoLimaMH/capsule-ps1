#include "common.h"

extern u8 D_8008ED68[], D_8008FC80[];
extern void func_80014C4C(), SetSprt(), SetShadeTex(), SetSemiTrans(), func_80018610();
extern u8 func_800202A4();

void func_80014EE0(void) {
    u8 *D = D_8008ED68;
    u8 *base, *p, *nx, *e;
    s32 scroll, b, a, q, half, r, c, sz, on, x;
    u32 rem;

    scroll = (*(u32 *)(D + 0x20) / 5) & 0x1FF;
    a = *(s32 *)(D_8008ED68 + 0xA6C);
    if (a == 0x1000) {
        b = 0x80;
    } else if (a < 0x1000) {
        b = (a << 7) / 4096;
    } else {
        b = ((a - 0x1000) * 0x7F) / 4096 + 0x80;
    }
    q = scroll / 128;
    if ((q << 7) == scroll - 0x20) {
        func_80014C4C((q + 3) % 4);
    }
    for (half = 0; half < 2; half++) {
        for (r = 0; r < 4; r++) {
            for (c = 0; c < 8; c++) {
                e = D_8008FC80 + r * 64 + c * 8;
                base = *(u8 **)D_8008ED68;
                p = *(u8 **)(base + 0x1090);
                nx = 0;
                if (p != 0 && !(base + 0x4594 < p + 0x14)) {
                    nx = p + 0x14;
                }
                *(u8 **)(base + 0x1090) = nx;
                SetSprt(p);
                SetShadeTex(p, 0);
                SetSemiTrans(p, 0);
                p[6] = b;
                p[5] = b;
                p[4] = b;
                p[0xC] = e[4] < 6 ? e[4] * 8 - 0x80 : 0xB8;
                p[0xD] = (e[4] < 5 ? e[5] * 8 : e[5] * 16) - 0x80;
                sz = e[4] < 5 ? 8 : 16;
                *(s16 *)(p + 0x10) = sz;
                *(s16 *)(p + 0x12) = sz;
                *(u16 *)(p + 8) = *(u16 *)e - scroll;
                *(u16 *)(p + 0xA) = *(u16 *)(e + 2);
                if (half != 0) {
                    *(u16 *)(p + 8) += 0x200;
                }
                rem = (u32)(*(s32 *)(D_8008ED68 + 0x20) + *(s16 *)e) % (u32)(e[7] + 0xC8);
                if (rem == 0) {
                    e[7] = func_800202A4(0x96);
                }
                if (e[6] != 0 && (s32)rem >= 0x1E && (s32)rem < 0x28) {
                    on = 1;
                } else if (e[6] >= 2 && (s32)rem >= 0x32 && (s32)rem < 0x3C) {
                    on = 1;
                } else if (e[6] >= 3 && (s32)rem >= 0x46 && (s32)rem < 0x50) {
                    on = 1;
                } else {
                    on = 0;
                }
                *(u16 *)(p + 0xE) = 0x7BD3 - (on << 6);
                x = *(s16 *)(p + 8);
                if (x < 0x140 && x + *(s16 *)(p + 0x10) > 0) {
                    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(*(u8 **)D_8008ED68 + 0x1078) & 0xFFFFFF);
                    base = *(u8 **)D_8008ED68;
                    *(u32 *)(base + 0x1078) = (*(u32 *)(base + 0x1078) & 0xFF000000) | ((u32)p & 0xFFFFFF);
                }
            }
        }
    }
    func_80018610(0x1B, 0x402);
}
