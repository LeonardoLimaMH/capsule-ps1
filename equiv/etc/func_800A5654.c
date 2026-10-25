/* rand-mem: 0x8008EE48 1 4 */
/* rand-mem: 0x8008EDF0 2 0xFF */
/* rand-mem: 0x8008EE00 2 0xFF */
/* rand-mem: 0x8008EE0C 1 0x20 */
/* rand-mem: 0x8008EE1C 1 0x20 */
/* rand-mem: 0x8008EE14 1 0x20 */
/* rand-mem: 0x8008EE24 1 0x20 */
/* rand-mem: 0x8008542A 1 7 */
/* rand-mem: 0x800B3C20 1 7 */
/* rand-mem: 0x800B3C28 2 2 */
/* rand-mem: 0x800B3C1C 1 2 */
/* rand-mem: 0x800B3C24 1 2 */
#include "common.h"

extern u8 D_8008ED68[], D_80085428[], D_80063940[];
extern u32 D_8008EE0C, D_8008EE1C;
#define D_8008EE14 (&D_8008EE0C)[2]
#define D_8008EE24 (&D_8008EE1C)[2]
extern s32 D_800B3C20, D_800B3C1C, D_800B3C24;
extern u8 D_800B3C28, D_800B3C29;
extern char D_8006D670[], D_8006B2A4[];
extern char D_800B2CFC[], D_800B2D30[], D_800B2D9C[], D_800B2DA0[], D_800B2D40[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern s32 func_8001F35C(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001F7A4(s32, s32, s32, s32, s32, s32);
extern s32 func_80018EF4(s32, s32, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern void func_800A790C(s32), func_800A7D2C(void);
extern s32 func_80012578(void), func_80012544(s32), func_800125AC(s32);

static s32 udiv_rem(s32 a, s32 b) {
    s32 r;
    __asm__ volatile("div $0,%1,%2\n\tmfhi %0" : "=r"(r) : "r"(a), "r"(b));
    return r;
}

#define L D_80085428
#define E(k) (D_80085428 + 0x50 + (k) * 14)
#define M(k) (D_80063940 + E(k)[0] * 60)
#define D32(o) (*(u32 *)(D_8008ED68 + (o)))
#define PADS(m) ((D32(0x88) & (m)) || (D32(0x98) & (m)))
#define REP15(x) ((x) >= 15 && (x) % 15 == 0)

s32 func_800A5654(void) {
    s32 i, s2, t, u;
    u16 e;
    if (*(u16 *)(D_8008ED68 + 0xE0) < 2) {
        if (L[2] < 4) {
            if (L[2] != 0) {
                for (i = 0; i < L[2]; i++) {
                    func_8001F35C(-0x78, (s16)(i * 16 - 0x44), i == D_800B3C20, 0, 0, i + 1, 2, 5);
                    func_8001F1A8(-0x60, (s16)(i * 16 - 0x47), i == D_800B3C20, 1, 0, E(i) + 1, 0, 8, 5);
                }
            }
        } else {
            s32 y1 = -0x44, y2 = -0x47;
            s2 = D_800B3C20 - 1;
            for (i = 0; i < 4; i++, y1 += 16, y2 += 16) {
                s32 hl;
                if (s2 < 0) s2 = L[2] - 1;
                else if (s2 >= L[2]) s2 = 0;
                hl = i == 1;
                func_8001F35C(-0x78, (s16)y1, hl, 0, 0, s2 + 1, 2, 5);
                func_8001F1A8(-0x60, (s16)y2, hl, 1, 0, E(s2) + 1, 0, 8, 5);
                s2++;
            }
        }
        func_8001F1A8(-0x60, 0xA, 2, 1, 0, E(D_800B3C20) + 1, 0, 8, 5);
        func_8001F1A8(-0x60, 0x1D, 2, 0, 0, M(D_800B3C20), 0, 9, 5);
        func_8001F7A4(-0x60, 0x2C, 2, 0, (*(u32 *)(M(D_800B3C20) + 8) >> 8) & 0xF, 5);
        t = (*(u32 *)(M(D_800B3C20) + 8) >> 12) & 3;
        func_80018EF4(-0xF, 0x29, t, 1, 5);
        func_8001F1A8(4, 0x2C, 2, 0, 0, D_8006D670 + t * 8, 0, t == 1 ? 4 : 3, 5);
        u = (*(u32 *)(M(D_800B3C20) + 8) >> 17) & 0x7F;
        func_8001F1A8(-0x60, 0x39, 2, 1, 0, D_8006B2A4 + u * 88, 1, 8, 5);
        func_8001F35C(0x20, 0x1D, 2, 0, 0, E(D_800B3C20)[0xD], 1, 5);
        func_8001F35C(0x62, 0xC, 2, 0, 0, E(D_800B3C20)[9], 3, 5);
        func_8001F35C(0x62, 0x1C, 2, 0, 0, E(D_800B3C20)[0xA], 3, 5);
        func_8001F35C(0x62, 0x2C, 2, 0, 0, E(D_800B3C20)[0xB], 3, 5);
        func_8001F35C(0x76, 0x3B, 2, 0, 0, E(D_800B3C20)[0xC], 1, 5);
    }
    e = *(u16 *)(D_8008ED68 + 0xE0);
    if (e == 0) {
        s32 v;
        u32 a;
        if (!D_800B3C29) return 0;
        if (D_800B3C28) {
            D_800B3C28 = 0;
            func_800A790C(E(D_800B3C20)[0]);
        }
        if (PADS(0xA000)) {
            func_80034AB0(0x84);
            D_800B3C1C ^= 1;
        }
        if (PADS(0x1000) || REP15(D_8008EE0C) || REP15(D_8008EE1C)) {
            func_80034AB0(0x84);
            v = D_800B3C20 - 1;
            D_800B3C20 = v;
            if (v < 0) {
                v = L[2] - 1;
                D_800B3C20 = v;
                if (v < 0) D_800B3C20 = 0;
            }
            func_800A790C(E(D_800B3C20)[0]);
        } else if (PADS(0x4000) || REP15(D_8008EE14) || REP15(D_8008EE24)) {
            func_80034AB0(0x84);
            v = D_800B3C20 + 1;
            D_800B3C20 = v;
            D_800B3C20 = udiv_rem(v, L[2]);
            func_800A790C(E(D_800B3C20)[0]);
        }
        a = D32(0x88);
        if ((a & 0x20) || (D32(0x98) & 0x20)) {
            s32 c;
            func_80034AB0(0x48);
            c = D_800B3C1C;
            D_800B3C29 = 0;
            if (c == 0) {
                D_800B3C24 = 1;
                return func_80012578();
            }
            D_800B3C1C = 0;
            return func_80012544(5);
        }
        if (!(a & 0x40) && !(D32(0x98) & 0x40)) return 0;
        func_80034AB0(0x5D);
        D_800B3C1C = 0;
        return func_80012544(5);
    }
    if (e == 1) {
        u32 a;
        if (!D_800B3C29) return 0;
        func_8001F1A8(-0x40, -0x18, 0, 1, 0, D_800B2CFC, 1, 0xA, 2);
        func_8001F1A8(-0x40, -8, 0, 1, 0, D_800B2D30, 1, 8, 2);
        func_8001F1A8(-0x30, 0x18, D_800B3C24 == 0 ? 3 : 0, 1, 0, D_800B2D9C, 1, 2, 2);
        func_8001F1A8(8, 0x18, D_800B3C24 ? 3 : 0, 1, 0, D_800B2DA0, 1, 3, 2);
        if (PADS(0xA000)) {
            func_80034AB0(0x84);
            D_800B3C24 ^= 1;
        }
        a = D32(0x88);
        if ((a & 0x20) || (D32(0x98) & 0x20)) {
            if (D_800B3C24 == 0) {
                func_80034AB0(0x48);
                func_800A7D2C();
                return func_80012578();
            }
        } else if (!(a & 0x40) && !(D32(0x98) & 0x40)) {
            return 0;
        }
        func_80034AB0(0x5D);
        D_800B3C29 = 0;
        return func_800125AC(0);
    }
    if (e == 2) {
        s32 v;
        func_8001F1A8(-0x38, -8, 0, 1, 0, D_800B2D40, 1, 9, 2);
        if (!PADS(0x8F0)) return 0;
        func_80034AB0(0x48);
        if (L[2] == 0) return func_80012544(5);
        v = D_800B3C20;
        D_800B3C29 = 0;
        func_800A790C(E(v)[0]);
        return func_800125AC(0);
    }
    return 2;
}
