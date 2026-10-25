/* rand-mem: 0x8008EDF0 1 0xFF */
/* rand-mem: 0x8008EDF1 1 0xFF */
/* rand-mem: 0x8008EE48 1 4 */
/* rand-mem: 0x800B3B40 1 0xC */
/* rand-mem: 0x800B3C08 1 0x30 */
/* rand-mem: 0x800B3B64 1 2 */
#include "common.h"

extern u8 D_8008ED68[];
extern u16 D_8008EE48;
extern s16 D_800B3B38[];
extern s32 D_800B3C08;
extern s16 D_800B2B9C[];
extern char *D_800B2BE0[];
extern s32 D_800B2BB4[];
extern u8 D_800B2B94[];
extern char D_800B2988[], D_800B2970[], D_800B2978[], D_800B2980[];
extern void func_80020844(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);
extern s32 func_8001F35C(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern s32 func_800A2588(s32);
extern s32 func_80012508(void), func_80012578(void), func_80012544(s32), func_800125AC(s32);
extern void func_800220B8(u8 *);
extern s32 func_800220D4(u8 *, s32, s32, s32);
extern s32 func_8001F8B0(s32, s32);

#define B D_800B3B38
#define D32(o) (*(u32 *)(D_8008ED68 + (o)))

s32 func_8009F384(u8 *p) {
    u8 *s = p + 0x5D0;
    u8 f = s[6], g = p[6];
    u32 pad;
    s16 v;
    s32 c, r;
    if (p[0x5D0] == 2) {
        f |= s[7];
        g |= p[7];
    }
    if (p[0x5D0] != 0 || D_8008EE48 == 0) {
        func_80020844(-0xA0, 0x30, 0x140, 0x30, 0, 0, 0, 0, 3);
        func_8001F1A8(-0x98, 0x38, 0, 0, 0, D_800B2988, 1, 8, 2);
        func_8001F35C(-0x48, 0x38, 0, 0, 0, B[4] + 1, 2, 2);
        func_8001F1A8(D_800B2B9C[B[4]], 0x3C, 0, 0, 0, D_800B2BE0[B[4]], 1, D_800B2BB4[B[4]], 2);
    }
    if (s[0] == 0) {
        u16 e = D_8008EE48;
        if (e == 1) {
            func_800220B8(p);
            *(s32 *)(p + 0x14) = func_8001F8B0(p[0x5E5] + 8, 7);
            p[0x5DA] = D_800B2B94[p[0x5E5]];
            return func_80012578();
        }
        if (e == 0) {
            if (++D_800B3C08 < 0x2D) return 1;
            func_80034AB0(0x48);
            return func_80012578();
        }
        if (e != 2) return 2;
        if (func_800220D4(p, 1, 1, 1) == 0) return 0;
        p[0x5D9] = B[4];
        D_800B3C08 = 0;
        B[4] = 0;
        func_80012544(0x12);
        return func_800125AC(0);
    }
    func_8001F1A8(-0x60, 0x60, 0, 1, 0, D_800B2970, 1, 4, 2);
    func_8001F1A8(-0x10, 0x60, 0, 1, 0, D_800B2978, 1, 3, 2);
    func_8001F1A8(0x30, 0x60, 0, 1, 0, D_800B2980, 1, 3, 2);
    pad = D32(0x88);
    if (s[0] == 2) pad |= D32(0x98);
    if (pad & 0x2000) {
        func_80034AB0(0x84);
        v = B[4] + 1;
        B[4] = v;
        if (f & 0x80) B[4] = (g & 8) ? v % 11 : v % 10;
        else if (f & 0x40) B[4] = v % 9;
        else if (f & 0x20) B[4] = v % 8;
        else if (f & 0x10) B[4] = v % 7;
        else B[4] = v % 6;
        return func_800A2588(B[4]);
    }
    if (pad & 0x8000) {
        func_80034AB0(0x84);
        B[4] -= 1;
        if (B[4] < 0) {
            if (f & 0x80) B[4] = (g & 8) ? 10 : 9;
            else if (f & 0x40) B[4] = 8;
            else if (f & 0x20) B[4] = 7;
            else if (f & 0x10) B[4] = 6;
            else B[4] = 5;
        }
        return func_800A2588(B[4]);
    }
    if (pad & 0x20) {
        func_80034AB0(0x48);
        p[0x5D9] = B[4];
        B[4] = 0;
        c = s[0];
        if (c == 1) {
            r = func_80012508();
            if (B[22] != 0) return r;
            return func_800125AC(2);
        }
        if (c == 2) {
            B[2] = 0;
            return func_80012544(0x14);
        }
        return c;
    }
    if (!(pad & 0x40)) return 0;
    func_80034AB0(0x5D);
    B[4] = 0;
    func_800A2588(0);
    c = s[0];
    if (c == 1) return func_80012544(0xF);
    if (c == 2) return func_80012544(7);
    return c;
}
