#include "common.h"

extern u8 D_8008ED68[];
extern void SetSprt(), SetShadeTex(), SetSemiTrans(), AddPrim(), SetDrawMode();
extern u16 GetClut(), GetTPage();

static s32 bright(s32 a) {
    if (a == 0x1000) {
        return 0x80;
    }
    if (a < 0x1000) {
        return (a << 7) / 4096;
    }
    return ((a - 0x1000) * 0x7F) / 4096 + 0x80;
}

void func_800188F0(s32 x, s32 y, s32 dig, s32 pal, s32 ot) {
    u8 *base, *p, *q, *nx, *slot;
    u16 tp;

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
    p[4] = bright(*(s32 *)(D_8008ED68 + 0xA6C));
    p[5] = bright(*(s32 *)(D_8008ED68 + 0xA70));
    p[6] = bright(*(s32 *)(D_8008ED68 + 0xA74));
    p[0xC] = (dig + 1) * 10 - 0x80;
    p[0xD] = 0xEE;
    *(s16 *)(p + 8) = x + *(s32 *)(D_8008ED68 + 0x108) / 2;
    *(s16 *)(p + 0x10) = 0xA;
    *(s16 *)(p + 0x12) = 0xA;
    *(s16 *)(p + 0xA) = y + *(s32 *)(D_8008ED68 + 0x10C) / 2;
    *(u16 *)(p + 0xE) = GetClut(0x3E0, pal + 0x178);
    AddPrim(*(u8 **)D_8008ED68 + 0x70 + ot * 4, p);
    tp = GetTPage(0, 0, 0x2A0, 0x180);
    base = *(u8 **)D_8008ED68;
    q = *(u8 **)(base + 0x1090);
    nx = 0;
    if (q != 0 && !(base + 0x4594 < q + 0xC)) {
        nx = q + 0xC;
    }
    *(u8 **)(base + 0x1090) = nx;
    SetDrawMode(q, 0, 0, tp, 0);
    *(u32 *)q = (*(u32 *)q & 0xFF000000) | (*(u32 *)(*(u8 **)D_8008ED68 + ot * 4 + 0x70) & 0xFFFFFF);
    slot = *(u8 **)D_8008ED68 + ot * 4;
    *(u32 *)(slot + 0x70) = (*(u32 *)(slot + 0x70) & 0xFF000000) | ((u32)q & 0xFFFFFF);
}
