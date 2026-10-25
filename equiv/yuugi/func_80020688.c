#include "common.h"

extern u8 D_8008ED68[];
extern void SetSprt(), SetShadeTex(), SetSemiTrans(), AddPrim(), func_80018610();
extern u16 GetClut();
extern u16 GetTPage();

void func_80020688(u16 x, u16 y, u16 u, u16 v, u16 tpx, u16 tpy, u16 cx, u16 cy, u8 r, u8 g,
                   u8 b, u8 abr, u8 tp, s32 ot) {
    u8 *base = *(u8 **)D_8008ED68;
    u8 *p = *(u8 **)(base + 0x1090);
    u8 *nx = 0;

    if (p != 0 && !(base + 0x4594 < p + 0x14)) {
        nx = p + 0x14;
    }
    *(u8 **)(base + 0x1090) = nx;
    SetSprt(p);
    SetShadeTex(p, 0);
    SetSemiTrans(p, abr);
    p[4] = r;
    p[0xC] = (tpx & 0x3F) << 2;
    p[5] = g;
    p[6] = b;
    p[0xD] = tpy & 0x7F;
    *(u16 *)(p + 8) = x + *(s32 *)(D_8008ED68 + 0x108) / 2;
    *(u16 *)(p + 0x10) = u;
    *(u16 *)(p + 0x12) = v;
    *(u16 *)(p + 0xA) = y + *(s32 *)(D_8008ED68 + 0x10C) / 2;
    *(u16 *)(p + 0xE) = GetClut(cx, cy);
    AddPrim(*(u8 **)D_8008ED68 + 0x70 + ot * 4, p);
    func_80018610(GetTPage(0, tp, tpx, tpy) & 0xFFFF, ot);
}
