/* compiler: 2.8.1-psx */
/* stub-ret: mixed */
#include "common.h"

typedef struct { s16 x, y, w, h; } Rect;
extern s32 D_8013348C;
extern u32 D_80133480, D_8013347C;
extern u8 *D_801334A0;
extern char D_80110094[], D_801100A4[], D_801100C0[];
extern s32 StGetNext(u32 **, u8 **);
extern void StFreeRing(u32 *);
extern s32 slpm_printf(const char *, ...);
extern void slpm_ClearImage(Rect *, s32, s32, s32);

u32 *func_80111268(u8 *env) {
    struct { u32 *addr; u8 *hdr; Rect r; } l; /* mesma disposição da pilha do original */
    s32 n = 0x800000;
    s32 got;
    u16 v;

    do {
        got = StGetNext(&l.addr, &l.hdr);
        n--;
        if (got == 0) goto ok;
    } while (n != 0);
    slpm_printf(D_80110094);
    return 0;
ok:
    if (!(*(u32 *)(l.hdr + 8) < D_80133480)) *(s32 *)(D_801334A0 + 0x34) = 1;
    if (l.addr[0] != *(u32 *)(l.hdr + 0x14) || l.addr[1] != *(u32 *)(l.hdr + 0x18)) {
        StFreeRing(l.addr);
        slpm_printf(D_801100A4);
        return 0;
    }
    D_8013347C = *(u32 *)(l.hdr + 8);
    if (*(u32 *)(D_801334A0 + 0x3C) != *(u16 *)(l.hdr + 0x10) || *(u32 *)(D_801334A0 + 0x40) != *(u16 *)(l.hdr + 0x12)) {
        l.r.x = 0;
        l.r.y = 0;
        l.r.w = 0x280;
        l.r.h = 0x1E0;
        slpm_ClearImage(&l.r, 0, 0, 0);
        *(u32 *)(D_801334A0 + 0x3C) = *(u16 *)(l.hdr + 0x10);
        *(u32 *)(D_801334A0 + 0x40) = *(u16 *)(l.hdr + 0x12);
        slpm_printf(D_801100C0, *(u16 *)(l.hdr + 0x10), *(u16 *)(l.hdr + 0x12));
    }
    if (D_8013348C & 1) v = (*(s32 *)(D_801334A0 + 0x3C) * 3) / 2;
    else v = *(u16 *)(D_801334A0 + 0x3C);
    *(u16 *)(env + 0x1C) = v;
    *(u16 *)(env + 0x14) = v;
    v = *(u16 *)(D_801334A0 + 0x40);
    *(u16 *)(env + 0x1E) = v;
    *(u16 *)(env + 0x16) = v;
    *(u16 *)(env + 0x2A) = *(u16 *)(D_801334A0 + 0x40);
    return l.addr;
}
