#include "common.h"
#include "yuugi.h"


#include "ghidra.h"

typedef struct {
    u8 data[0x18];
} Unk_800861B0;

void func_8001EA24(s32 x, s32 y, s32 pal, u32 code, s32 abr, s32 ot) {
    extern u8 D_8008ED68[], D_80063770[];
    extern u32 D_80078BD8;
    extern void SetSprt(), SetSemiTrans(), func_80018610();
    extern u16 GetClut(), GetTPage();
    register u32 _code asm("s5") = code;
    u8 *d = D_8008ED68;
    u8 *base, *b_ptr, *p, *nx, *e, *slot;
    u32 n, q, rem, col, row;
    s32 k;
    s16 sx = x;
    s16 sy = y;
    s32 rgb;
    s32 tx;
    u32 ty;
    s32 ot4;
    u32 mask;

    if ((u16)(y + 0xE) >= 0xFF) {
        return;
    }
    if ((u16)(x + 0xE) >= 0x14F) {
        return;
    }
    for (k = 0; k < 2; k++) {
        if (k == 1) {
            break;
        }
        e = D_80063770;
        nx = 0;
        base = *(u8 **)d;
        rgb = 0x80;
        p = *(u8 **)(base + 0x1090);
        b_ptr = base;
        if (p != 0 && p + 0x14 <= b_ptr + 0x4594) {
            nx = p + 0x14;
        }
        *(u8 **)(b_ptr + 0x1090) = nx;
        SetSprt(p);
        p[4] = rgb;
        p[5] = rgb;
        p[6] = rgb;
        SetSemiTrans(p, abr);
        n = D_80078BD8;
        q = _code / (n * n);
        rem = _code % (n * n);
        col = _code % n;
        row = rem / n;
        *(s16 *)(p + 8) = sx;
        *(s16 *)(p + 0xA) = sy;
        e += q * 4;
        tx = *(u16 *)e;
        ty = e[2];
        *(s16 *)(p + 0x10) = 0xE;
        *(s16 *)(p + 0x12) = 0xE;
        p[0xC] = (col & 0xFFFF) * 14 + ((tx & 0x3F) << 2);
        p[0xD] = (row & 0xFFFF) * 14 + ty;
        *(u16 *)(p + 0xE) = GetClut(0x3E0, (s16)pal + 0x178);
        ot4 = ot * 4;
        mask = 0xFFFFFF;
        *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)((u8 *)ot4 + (u32)*(u8 **)d + 0x70) & mask);
        slot = (u8 *)ot4 + (u32)*(u8 **)d;
        *(u32 *)(slot + 0x70) = (*(u32 *)(slot + 0x70) & 0xFF000000) | ((u32)p & mask);
        func_80018610(GetTPage(0, 0, *(u16 *)e, *(u16 *)(e + 2)) & 0xFFFF, ot);
    }
}

