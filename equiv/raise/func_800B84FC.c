/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* arg0: small */
/* arg1: small */
#include "common.h"

extern u8 D_800ED8F0[], D_800F1EE4[];
extern u16 D_8006AF80;
extern s16 D_80078C20;
extern s32 func_800A8CB4(s32), func_80019F30(s32, s32), func_80013920(u8 *);
extern void func_80012A20(s32, s32, s32, s32), func_80015EF8(u8 *), func_80015CD0(void *, s32, s32);
extern u8 *func_80015B3C(void *, void *, s32);
extern void D_80018600(void), func_800161C4(void);

#define O16(x) (*(s16 *)(o + (x)))
#define O32(x) (*(s32 *)(o + (x)))

u8 *func_800B84FC(s32 a0, s32 a1, s32 a2) {
    s32 g = func_800A8CB4((u16)a1);
    s32 s = a2;
    u8 *o;
    s32 r, b;
    if (a2 != 2) {
        u8 *t = (u8 *)func_80019F30(g | 0x10000, *(s32 *)(D_800ED8F0 + (u16)a1 * 32 + 4));
        s32 i;
        for (i = 0; i < 14; i++)
            func_80012A20(*(s32 *)(t + 0xC + i * 4), 3, *(s16 *)(D_800F1EE4 + a2 * 56 + i * 4), *(s16 *)(D_800F1EE4 + a2 * 56 + i * 4 + 2));
    } else if ((u16)a0 == D_8006AF80) {
        s = D_80078C20;
    } else {
        s = 1 - D_80078C20;
    }
    o = func_80015B3C(D_80018600, func_800161C4, 10);
    if (o == 0) return 0;
    func_80015EF8(o);
    r = func_80019F30(g | 0x70000, *(s32 *)(D_800ED8F0 + (u16)a1 * 32 + 0x18) + 9);
    if (r == 0) {
        func_80013920(o);
        return 0;
    }
    func_80015CD0(o + 0x14, r, 0);
    O16(0x2A) = s << 7;
    O32(0x7C) = 9;
    O16(0x28) = 0;
    b = s & 1;
    O32(0x30) = ((((O32(0x30) & ~0x1C0) | 0x40) & ~0x30) | 0x10);
    O32(0x34) = (((O32(0x34) & ~0x100) | (b << 8)) & ~0x80) | (b << 7);
    O32(0x38) = (O32(0x38) | 1) & ~8;
    return o;
}
