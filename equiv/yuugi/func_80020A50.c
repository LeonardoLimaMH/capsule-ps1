#include "common.h"

extern u8 D_8008ED68[];
extern void SetPolyG4(), SetSemiTrans(), AddPrim(), func_80018610();
extern u16 GetTPage();

#define HX (*(s32 *)(D_8008ED68 + 0x108) / 2)
#define HY (*(s32 *)(D_8008ED68 + 0x10C) / 2)

void func_80020A50(s32 x, s32 y, s32 w, s32 h, u8 *c0, u8 *c1, u8 *c2, u8 *c3, u8 tp, s32 ot) {
    u8 *base = *(u8 **)D_8008ED68;
    u8 *p = *(u8 **)(base + 0x1090);
    u8 *nx = 0;

    if (p != 0 && !(base + 0x4594 < p + 0x24)) {
        nx = p + 0x24;
    }
    *(u8 **)(base + 0x1090) = nx;
    SetPolyG4(p);
    SetSemiTrans(p, 1);
    p[4] = c0[0];
    p[5] = c0[1];
    p[6] = c0[2];
    p[0xC] = c1[0];
    p[0xD] = c1[1];
    p[0xE] = c1[2];
    p[0x14] = c2[0];
    p[0x15] = c2[1];
    p[0x16] = c2[2];
    p[0x1C] = c3[0];
    p[0x1D] = c3[1];
    p[0x1E] = c3[2];
    *(s16 *)(p + 0x8) = x + HX;
    *(s16 *)(p + 0xA) = y + HY;
    *(s16 *)(p + 0x10) = w + (x + HX);
    *(s16 *)(p + 0x12) = y + HY;
    *(s16 *)(p + 0x18) = x + HX;
    *(s16 *)(p + 0x1A) = h + (y + HY);
    *(s16 *)(p + 0x20) = w + (x + HX);
    *(s16 *)(p + 0x22) = h + (y + HY);
    AddPrim(*(u8 **)D_8008ED68 + 0x70 + ot * 4, p);
    func_80018610(GetTPage(0, tp, 0, 0) & 0xFFFF, ot);
}
