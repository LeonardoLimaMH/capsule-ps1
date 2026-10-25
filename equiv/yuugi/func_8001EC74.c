#include "common.h"

extern u8 D_8008ED68[];
extern u8 D_800637A0[];
extern u32 D_80078BDC;
extern void SetSprt(), SetSemiTrans(), func_80018610();
extern u16 GetClut(), GetTPage();

s32 func_8001EC74(s16 x, s16 y, s16 pal, u32 code, s32 abr, s32 ot) {
    u8 *base, *p, *nx, *e, *slot;
    u32 n, q, rem, col, row;
    s32 k;

    if ((u16)(y + 0xA) >= 0xFB) {
        return 0;
    }
    if ((u16)(x + 0xA) >= 0x14B) {
        return 0;
    }
    for (k = 0; k != 1; k++) {
        base = *(u8 **)D_8008ED68;
        p = *(u8 **)(base + 0x1090);
        nx = 0;
        if (p != 0 && !(base + 0x4594 < p + 0x14)) {
            nx = p + 0x14;
        }
        *(u8 **)(base + 0x1090) = nx;
        SetSprt(p);
        p[4] = 0x80;
        p[5] = 0x80;
        p[6] = 0x80;
        SetSemiTrans(p, abr);
        n = D_80078BDC;
        q = code / (n * n);
        rem = code % (n * n);
        col = code % n;
        row = rem / n;
        *(s16 *)(p + 8) = x;
        *(s16 *)(p + 0xA) = y;
        e = D_800637A0 + q * 4;
        *(s16 *)(p + 0x10) = 0xA;
        *(s16 *)(p + 0x12) = 0xA;
        p[0xC] = (col & 0xFFFF) * 10 + ((*(u16 *)e & 0x3F) << 2);
        p[0xD] = (row & 0xFFFF) * 10 + e[2];
        *(u16 *)(p + 0xE) = GetClut(0x3E0, pal + 0x178);
        *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(*(u8 **)D_8008ED68 + ot * 4 + 0x70) & 0xFFFFFF);
        slot = *(u8 **)D_8008ED68 + ot * 4;
        *(u32 *)(slot + 0x70) = (*(u32 *)(slot + 0x70) & 0xFF000000) | ((u32)p & 0xFFFFFF);
        func_80018610(GetTPage(0, 0, *(u16 *)e, *(u16 *)(e + 2)) & 0xFFFF, ot);
    }
    return 1;
}
