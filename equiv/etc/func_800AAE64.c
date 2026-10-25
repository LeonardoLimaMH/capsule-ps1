/* rand-mem: 0x8008EE48 1 8 */
/* rand-mem: 0x800B3D20 1 3 */
/* rand-mem: 0x800B3D30 1 3 */
/* rand-mem: 0x800B3D24 1 2 */
/* rand-mem: 0x800B3D34 2 0xFF */
/* rand-mem: 0x800B3D4C 1 2 */
/* rand-mem: 0x800B3D50 1 5 */
/* rand-mem: 0x800B3D54 1 5 */
#include "common.h"

extern u16 D_8008EE48;
extern u8 D_800B3D20, D_800B3D24;
extern s32 D_800B3D30, D_800B3D4C, D_800B3D50, D_800B3D54;
extern u16 D_800B3D26, D_800B3D28, D_800B3D2A, D_800B3D2C;
extern u32 D_800B3D34;
extern u8 D_80063940[];
extern char D_800B3A08[], D_800B39D8[], D_800B39FC[], D_800B3A00[], D_800B3A14[], D_800B3A20[];
extern void func_800AB78C(void);
extern s32 func_800AB8E8(s32, s32);
extern s32 func_800ABBF8(s32, s32, s32, s32);
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern s32 func_80012578(void), func_80012544(s32), func_800125AC(s32);

#define M14(i) (*(u32 *)(D_80063940 + (i) * 60 + 0x14))

static void toggle(void) {
    if (D_800B3D34 & 0xA000) D_800B3D4C ^= 1;
}

s32 func_800AAE64(u8 *p) {
    s32 r, v, k;
    u8 t;
    func_800AB78C();
    switch (D_8008EE48) {
    case 0:
        if (D_800B3D20 == 0) {
            D_800B3D20 = 1;
            return 1;
        }
        v = --D_800B3D30;
        if (v >= 0) return v;
        D_800B3D2C = 0;
        D_800B3D2A = 0;
        D_800B3D28 = 0;
        t = D_800B3D24;
        D_800B3D20 = 0;
        D_800B3D26 = 0;
        if (t) return func_800125AC(2);
        return func_80012578();
    case 1:
        r = func_800AB8E8(0, D_800B3D50);
        D_800B3D50 = r;
        if (p[r * 124 + 0x613] == 1) return 1;
        func_800ABBF8(0, r, -0x90, 0x10);
        if (!D_800B3D24) return 0;
        return func_800ABBF8(1, D_800B3D54, 0x10, 0x10);
    case 2:
        r = func_800AB8E8(1, D_800B3D54);
        D_800B3D54 = r;
        if (p[r * 124 + 0x8FB] == 1) return 1;
        func_800ABBF8(1, r, 0x10, 0x10);
        if (D_800B3D24) return D_800B3D24;
        return func_800ABBF8(0, D_800B3D50, -0x90, 0x10);
    case 3:
        if (!D_800B3D20) return 0;
        func_8001F1A8(-0x3C, 0x18, 0, 1, 0, D_800B3A08, 1, 5, 2);
        func_8001F1A8(-0x3C, 0x28, 0, 1, 0, D_800B39D8, 1, 9, 2);
        func_8001F1A8(-0x2C, 0x40, D_800B3D4C == 0 ? 3 : 0, 1, 0, D_800B39FC, 1, 2, 2);
        func_8001F1A8(4, 0x40, D_800B3D4C ? 3 : 0, 1, 0, D_800B3A00, 1, 3, 2);
        toggle();
        if (D_800B3D34 & 0x20) {
            if (D_800B3D4C == 0) {
                func_80034AB0(0x48);
                D_800B3D30 = 0x40;
                D_800B3D20 = 0;
                return func_80012578();
            }
        } else if (!(D_800B3D34 & 0x40)) {
            return 0;
        }
        func_80034AB0(0x5D);
        t = D_800B3D24;
        D_800B3D20 = 0;
        return func_800125AC(t ? 1 : 2);
    case 4:
        v = --D_800B3D30;
        if (v > 0) return v;
        t = D_800B3D20;
        if (t == 0) {
            D_800B3D30 = 0;
            D_800B3D20 = 1;
            return 1;
        }
        if (t != 1) return func_80012578();
        D_800B3D30 = 0x40;
        D_800B3D20 = 2;
        return 2;
    case 5: {
        u8 *ea = p + D_800B3D50 * 124;
        s8 t2 = ea[0x614];
        u8 *A, *Bp;
        if (p[0x5D0] != 0) {
            s8 t1;
            u8 x;
            A = p + t2 * 14;
            x = A[0x50];
            t1 = (p + D_800B3D54 * 124)[0x8FC];
            Bp = p + t1 * 14;
            A[0x50] = Bp[0x30C];
            Bp[0x30C] = x;
            for (k = 0; k < 8; k++) {
                x = A[0x51 + k];
                A[0x51 + k] = Bp[0x30D + k];
                Bp[0x30D + k] = x;
            }
            for (k = 0; k < 5; k++) {
                x = A[0x59 + k];
                A[0x59 + k] = Bp[0x315 + k];
                Bp[0x315 + k] = x;
            }
            if (((M14(Bp[0x30C]) >> 6) & 1) != 1) p[5] += 1;
            M14(Bp[0x30C]) |= 0x40;
        } else {
            A = p + t2 * 14;
            A[0x50] = (p + D_800B3D54 * 124)[0x8D0];
            for (k = 0; k < 8; k++) A[0x51 + k] = (p + D_800B3D54 * 124)[0x8D1 + k];
            for (k = 0; k < 5; k++) A[0x59 + k] = (p + D_800B3D54 * 124)[0x8D9 + k];
        }
        A = p + t2 * 14;
        if (((M14(A[0x50]) >> 5) & 1) != 1) p[4] += 1;
        M14(A[0x50]) |= 0x20;
        return func_80012544(8);
    }
    case 6:
        if (!D_800B3D20) return 0;
        func_8001F1A8(-0x4B, 0x18, 1, 1, 0, D_800B3A14, 1, 5, 2);
        func_8001F1A8(-0x4B, 0x27, 1, 1, 0, D_800B3A20, 1, 0xA, 2);
        func_8001F1A8(-0x30, 0x40, D_800B3D4C == 0 ? 3 : 0, 1, 0, D_800B39FC, 1, 2, 2);
        func_8001F1A8(4, 0x40, D_800B3D4C ? 3 : 0, 1, 0, D_800B3A00, 1, 3, 2);
        toggle();
        if (D_800B3D34 & 0x20) {
            if (D_800B3D4C == 0) {
                func_80034AB0(0x48);
                return func_80012544(8);
            }
        } else if (!(D_800B3D34 & 0x40)) {
            return 0;
        }
        func_80034AB0(0x5D);
        t = D_800B3D24;
        D_800B3D20 = 0;
        return func_800125AC(t ? 2 : 1);
    }
    return 0x80090000; /* lixo do %hi da tabela de salto */
}
