/* rand-mem: 0x8008EE48 1 5 */
/* rand-mem: 0x8008EDF0 2 0xFF */
/* rand-mem: 0x8008EE00 2 0xFF */
/* rand-mem: 0x8008EE0C 1 0x20 */
/* rand-mem: 0x8008EE1C 1 0x20 */
/* rand-mem: 0x8008EE14 1 0x20 */
/* rand-mem: 0x8008EE24 1 0x20 */
/* rand-mem: 0x8008542A 1 0x34 */
/* rand-mem: 0x800B3C20 1 6 */
/* rand-mem: 0x800B3C28 3 2 */
/* rand-mem: 0x800B3C1C 1 2 */
/* rand-mem: 0x800B3C24 1 2 */
#include "common.h"

extern u8 D_8008ED68[], D_80091618[], D_80063940[], D_800B3C38[];
extern u32 D_8008EE0C, D_8008EE1C;
extern u8 D_8008542A;
extern s32 D_800B3C20, D_800B3C1C, D_800B3C24;
extern u8 D_800B3C28, D_800B3C29, D_800B3C2A;
extern char D_8006D670[];
extern char *D_800B2DDC[];
extern char D_800B2D10[], D_800B2D20[], D_800B2D30[], D_800B2D9C[], D_800B2DA0[], D_800B2D54[];
extern char D_800B2D68[], D_800B2D84[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern s32 func_8001F35C(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001F7A4(s32, s32, s32, s32, s32, s32);
extern s32 func_80018EF4(s32, s32, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern void func_800A790C(s32), func_800A7984(s16), func_800A7EB0(void);
extern s32 func_80012578(void), func_80012544(s32), func_800125AC(s32);

#define ENT(k) (D_80091618 + (k) * 0x1A8)
#define MON(k) (D_80063940 + *(u16 *)ENT(k) * 60)
#define D32(o) (*(u32 *)(D_8008ED68 + (o)))
#define PADS(m) ((D32(0x88) & (m)) || (D32(0x98) & (m)))
#define REP15(x) ((x) >= 15 && (x) % 15 == 0)
#define S5 (&D_8008EE0C)
#define S6 (&D_8008EE1C)

static s32 cancel(void) {
    func_80034AB0(0x5D);
    D_800B3C29 = 0;
    return func_800125AC(0);
}

s32 func_800A6198(void) {
    u16 e;
    u32 a;
    s32 t, v;
    u8 *e0 = ENT(D_800B3C20);
    if (*(u16 *)(e0 + 0x10) != 0xFFFF) {
        func_8001F1A8(-0x72, 0xA, 2, 1, 0, e0 + 8, 0, 8, 5);
        func_8001F1A8(-0x72, 0x1C, 2, 0, 0, MON(D_800B3C20), 0, 9, 5);
        func_8001F35C(0xE, 0x1D, 2, 0, 0, *(s16 *)(ENT(D_800B3C20) + 0xBC), 1, 5);
        func_8001F7A4(-0x72, 0x2C, 2, 0, (*(u32 *)(MON(D_800B3C20) + 8) >> 8) & 0xF, 5);
        t = (*(u32 *)(MON(D_800B3C20) + 8) >> 12) & 3;
        func_80018EF4(-0x1F, 0x2A, t, 1, 5);
        func_8001F1A8(-0x11, 0x2C, 2, 0, 0, D_8006D670 + t * 8, 0, t == 1 ? 4 : 3, 5);
        func_8001F35C(-0x70, 0x3B, 2, 0, 0, *(s16 *)(D_800B3C38 + 0xC), 2, 5);
        func_8001F1A8(-0x20, 0x3B, 2, 0, 0, D_800B2DDC[*(s16 *)(D_800B3C38 + 0xE)], 0, 4, 5);
    }
    e = *(u16 *)(D_8008ED68 + 0xE0);
    if (e == 0) {
        if (!D_800B3C29) return 0;
        if (D_800B3C28) {
            D_800B3C28 = 0;
            func_800A790C(*(s16 *)ENT(D_800B3C20));
        }
        if (PADS(0xA000)) {
            func_80034AB0(0x84);
            D_800B3C1C ^= 1;
        }
        if (PADS(0x1000) || REP15(S5[0]) || REP15(S6[0])) {
            func_80034AB0(0x84);
            v = D_800B3C20 - 1;
            D_800B3C20 = v;
            if (v < 0) D_800B3C20 = 5;
            func_800A790C(*(s16 *)ENT(D_800B3C20));
        } else if (PADS(0x4000) || REP15(S5[2]) || REP15(S6[2])) {
            s16 m;
            func_80034AB0(0x84);
            v = (D_800B3C20 + 1) % 6;
            m = *(s16 *)ENT(v);
            D_800B3C20 = v;
            func_800A790C(m);
        }
        if (D_800B3C2A && *(u16 *)(ENT(D_800B3C20) + 0x10) != 0xFFFF) func_800A7984(D_800B3C20);
        a = D32(0x88);
        if ((a & 0x20) || (D32(0x98) & 0x20)) {
            if (D_800B3C1C == 0) {
                if (*(u16 *)(ENT(D_800B3C20) + 0x10) == 0xFFFF) return func_80034AB0(0x4C);
                func_80034AB0(0x48);
                D_800B3C29 = 0;
                D_800B3C24 = 1;
                return func_80012578();
            }
            func_80034AB0(0x48);
            D_800B3C1C = 0;
            D_800B3C29 = 0;
            return func_80012544(5);
        }
        if (!(a & 0x40) && !(D32(0x98) & 0x40)) return 0;
        func_80034AB0(0x5D);
        D_800B3C1C = 1;
        return func_80012544(5);
    }
    if (e == 1) {
        if (!D_800B3C29) return 0;
        func_8001F1A8(-0x40, -0x18, 0, 1, 0, D_800B2D10, 1, 8, 2);
        func_8001F1A8(-0x40, -8, 0, 1, 0, D_800B2D20, 1, 7, 2);
        func_8001F1A8(-0x40, 8, 0, 1, 0, D_800B2D30, 1, 8, 2);
        func_8001F1A8(-0x30, 0x18, D_800B3C24 == 0 ? 3 : 0, 1, 0, D_800B2D9C, 1, 2, 2);
        func_8001F1A8(8, 0x18, D_800B3C24 ? 3 : 0, 1, 0, D_800B2DA0, 1, 3, 2);
        if (PADS(0xA000)) {
            func_80034AB0(0x84);
            D_800B3C24 ^= 1;
        }
        a = D32(0x88);
        if ((a & 0x20) || (D32(0x98) & 0x20)) {
            if (D_800B3C24 != 0) return cancel();
            func_80034AB0(0x48);
            if (D_8008542A == 0x32) return func_800125AC(3);
            func_800A7EB0();
            return func_800125AC(2);
        }
        if ((a & 0x40) || (D32(0x98) & 0x40)) return cancel();
        return 0;
    }
    if (e == 2) {
        s16 m;
        func_8001F1A8(-0x38, -8, 0, 1, 0, D_800B2D54, 1, 9, 2);
        if (!PADS(0x8F0)) return 0;
        func_80034AB0(0x48);
        m = *(s16 *)ENT(D_800B3C20);
        D_800B3C29 = 0;
        func_800A790C(m);
        return func_800125AC(0);
    }
    if (e == 3) {
        func_8001F1A8(-0x58, -0x18, 1, 1, 0, D_800B2D68, 1, 0xE, 2);
        func_8001F1A8(-0x50, -8, 1, 1, 0, D_800B2D84, 1, 0xC, 2);
        func_8001F1A8(-0x30, 0x18, D_800B3C24 == 0 ? 3 : 0, 1, 0, D_800B2D9C, 1, 2, 2);
        func_8001F1A8(8, 0x18, D_800B3C24 ? 3 : 0, 1, 0, D_800B2DA0, 1, 3, 2);
        if (PADS(0xA000)) {
            func_80034AB0(0x84);
            D_800B3C24 ^= 1;
        }
        a = D32(0x88);
        if ((a & 0x20) || (D32(0x98) & 0x20)) {
            func_80034AB0(0x48);
            if (D_800B3C24 != 0) {
                D_800B3C29 = 0;
                return func_800125AC(0);
            }
            D_800B3C28 = 1;
            func_80012544(6);
            D_800B3C20 = 0;
            D_800B3C1C = 0;
            D_800B3C24 = 0;
            D_800B3C29 = 1;
            return 0x800B0000; /* lixo do %hi */
        }
        if ((a & 0x40) || (D32(0x98) & 0x40)) return cancel();
        return 0;
    }
    return 3;
}
