#include "common.h"

extern u8 D_8008ED68[];
extern void SetPolyFT4(), SetSemiTrans();
extern u16 GetClut(), GetTPage();

void func_8001EEC4(u16 x, s32 y, s32 pal, u32 d, s16 sx, s16 sy, s32 abr, s32 ot) {
    u8 *base, *p, *nx, *slot;
    s32 k, u, v, du, dv, wx, wy;

    for (k = 0; k != 1; k++) {
        base = *(u8 **)D_8008ED68;
        p = *(u8 **)(base + 0x1090);
        nx = 0;
        if (p != 0 && !(base + 0x4594 < p + 0x28)) {
            nx = p + 0x28;
        }
        *(u8 **)(base + 0x1090) = nx;
        SetPolyFT4(p);
        p[4] = 0x80;
        p[5] = 0x80;
        p[6] = 0x80;
        SetSemiTrans(p, abr);
        if (d < 10) {
            u = (d % 5) * 13 + 0x80;
            v = (d / 5) * 16 + 0xE0;
        } else {
            d -= 10;
            u = 0xC1;
            v = d * 16 + 0xE0;
        }
        du = sx < 0x2000 ? 0xC : 0xB;
        dv = sy < 0x2000 ? 0xE : 0xD;
        p[0xC] = u;
        p[0xD] = v;
        p[0x14] = u + du;
        p[0x15] = v;
        p[0x1C] = u;
        p[0x1D] = v | dv;
        p[0x24] = u + du;
        p[0x25] = v | dv;
        wx = (sx * 12) / 4096;
        wy = (sy * 14) / 4096;
        *(s16 *)(p + 0x1A) = y + wy;
        *(s16 *)(p + 0x22) = y + wy;
        *(s16 *)(p + 0xA) = y;
        *(s16 *)(p + 0x12) = y;
        *(s16 *)(p + 0x10) = x + wx;
        *(s16 *)(p + 0x20) = x + wx;
        *(s16 *)(p + 0x8) = x;
        *(s16 *)(p + 0x18) = x;
        if ((s16)pal == 2) {
            pal = -2;
        }
        *(u16 *)(p + 0xE) = GetClut(0x130, (s16)pal + 0x1EC);
        *(u16 *)(p + 0x16) = GetTPage(0, 0, 0x2E0, 0x180);
        *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(*(u8 **)D_8008ED68 + ot * 4 + 0x70) & 0xFFFFFF);
        slot = *(u8 **)D_8008ED68 + ot * 4;
        *(u32 *)(slot + 0x70) = (*(u32 *)(slot + 0x70) & 0xFF000000) | ((u32)p & 0xFFFFFF);
    }
}
