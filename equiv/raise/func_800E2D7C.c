/* arg0: small */
#include "common.h"

extern u8 D_80091618[], D_800F2D30[], D_800F2D98[], D_800ED8F0[], D_800F1EE4[];
extern s32 D_800EBFF0;
extern u16 D_80078C20;
extern s32 func_800B1260(s32), func_800A8CB4(s32), func_80019F30(s32, s32), func_80013920(u8 *);
extern void func_8001611C(s32), func_800A0E6C(s32), func_80012A20(s32, s32, s32, s32);
extern void func_80015EF8(u8 *), func_80015CD0(void *, s32, s32);
extern u8 *func_80015B3C(void *, void *, s32);
extern void func_800BA190(void), func_800B9F08(void), func_800161C4(void);

#define O32(x) (*(s32 *)(o + (x)))

u8 *func_800E2D7C(s32 a0) {
    u16 k, c;
    s32 s5, g, i, r;
    u8 *t, *o;
    s16 b;
    __asm__("" :: "r"(&a0)); /* o original guarda a0 no slot de argumento */
    func_8001611C(0x1000);
    D_800EBFF0 = 9;
    k = func_800B1260(a0);
    c = *(u16 *)(D_80091618 + k * 0x1A8);
    s5 = a0 == 1 ? D_80078C20 : 1 - D_80078C20;
    func_800A0E6C(c);
    g = func_800A8CB4(c);
    if (D_800F2D30[c] == 0xFF) {
        for (i = 0; i < 6; i++) {
            if (D_800F2D98[i] == (u8)c) {
                D_800F2D30[c] = i;
                break;
            }
        }
    }
    t = (u8 *)func_80019F30(g | 0x10000, *(s32 *)(D_800ED8F0 + c * 32 + 4));
    for (i = 0; i < 14; i++)
        func_80012A20(*(s32 *)(t + 0xC + i * 4), 3, *(s16 *)(D_800F1EE4 + (s16)s5 * 56 + i * 4),
                      *(s16 *)(D_800F1EE4 + (s16)s5 * 56 + i * 4 + 2));
    o = func_80015B3C(a0 == 1 ? (void *)func_800BA190 : (void *)func_800B9F08, func_800161C4, 10);
    if (o == 0) return 0;
    func_80015EF8(o);
    r = func_80019F30(g | 0x70000, *(s32 *)(D_800ED8F0 + c * 32 + 0x18) + D_800EBFF0);
    if (r == 0) {
        func_80013920(o);
        return 0;
    }
    func_80015CD0(o + 0x14, r, 0);
    b = s5;
    *(s16 *)(o + 0x2A) = b << 7;
    *(s16 *)(o + 0x28) = 0;
    O32(0x8C) = c;
    O32(0x30) = ((((O32(0x30) & ~0x1C0) | 0x40) & ~0x30) | 0x10);
    O32(0x34) = ((((((O32(0x34) & ~0x100) | ((b & 1) << 8)) & ~0x200) | ((a0 & 1) << 9)) & ~0xC00) | ((k & 3) << 10));
    O32(0x38) = (O32(0x38) | 1) & ~8;
    O32(0x7C) = D_800EBFF0;
    O32(0x34) = (O32(0x34) & ~0x80) | ((b & 1) << 7);
    O32(0x38) |= 0x80;
    return o;
}
