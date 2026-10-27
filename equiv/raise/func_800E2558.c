#include "common.h"

/* rand-u16: 0x800F1ED2 1 0,1,2,3 */
extern u8 D_80091618[], D_800F2D30[];
extern u16 D_800F1ED2;
extern void func_800A7730(s32), func_800A79D8(s32), func_800A7C7C(s32), func_800A7F20(s32), func_800A8484(s32);
extern s32 func_800A8CB4(s32), func_800A0E6C(s32);
extern void func_8001A464(s32, s32), func_80019F30(s32, void *);
extern s32 func_80012508(void);

s32 func_800E2558(void) {
    u16 k = D_800F1ED2;
    u8 *e = D_80091618 + k * 0x1A8;
    u16 c = *(u16 *)(e + 4);
    u16 d, i;
    s32 g, a;
    *(u16 *)e = c;
    func_800A7730(k);
    func_800A79D8(k);
    func_800A7C7C(k);
    func_800A7F20(k);
    func_800A8484(k);
    if (D_800F2D30[c] != 0xFF) return 1;
    g = func_800A8CB4(c);
    d = *(u16 *)(e + 2);
    for (i = 0; i < 6; i++) {
        u8 *f;
        if (i == k) continue;
        f = D_80091618 + i * 0x1A8;
        if (*(u16 *)(f + 0x10) == 0xFFFF) continue;
        if (*(u16 *)f == d) break;
    }
    if (i == 6) a = D_800F2D30[d] * 0x15800 + 0x80146A18;
    else a = func_800A0E6C(c);
    func_8001A464(g, a);
    func_80019F30(g, func_80012508);
    return 0;
}
