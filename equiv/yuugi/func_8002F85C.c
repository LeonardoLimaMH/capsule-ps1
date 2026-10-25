#include "common.h"

extern u8 D_8008ED68[], D_80085428[], D_8006D824[], D_8006D770[], D_8006D83C[], D_8006DA48[];
extern u8 D_8006D808[], D_8006DA00[], D_8006D7F8[];
extern s16 D_800922D0[], D_800922DC, D_800922D4;
extern u8 D_800859F8, D_800859F3;
extern s32 D_80078D30, D_80078D38, D_80078D2C, D_8008F78C, D_800922D8, D_8008F6C0, D_8008F6BC;
extern u16 D_80085430;
extern void func_8001F1A8(), func_8001F35C(), func_80031EF0(), func_800338DC(), func_8001CB88();
extern void func_8001A998(), func_8001B16C();
extern s32 func_80034AB0(), func_8001CB80(), func_8001D230(), func_8001CE2C(), func_80030DD4();
extern s32 func_80031E60();

#define ST (*(u16 *)D_800922D0)
#define DW(o) (*(s32 *)(D + (o)))

s32 func_8002F85C(void) {
    u8 *D = D_8008ED68;
    s32 k, r, t, v, a0, a1, a2, a3;
    u32 c;
    u8 s1;

    if (DW(0xA20) == 7) {
        D_80078D38 = DW(0x98);
    } else if (D_80085428[0] == 3) {
        D_80078D38 = DW(0x88) | DW(0x98);
    } else {
        D_80078D38 = DW(0x88);
    }
    if ((u32)(ST - 3) < 4) {
        s1 = D_800859F8;
        if (s1 != 2) {
            func_8001F1A8(-0x60, -8, 3, 1, 0, D_8006D824, 1, 0xB, 0);
            func_8001F1A8(-0x28, -8, 3, 1, 0, D_8006D770, 1, 3, 0);
            func_8001F1A8(-0x60, 8, 3, 1, 0, D_8006D83C, 1, 0xC, 0);
        } else {
            func_8001F1A8(-0x68, -8, 3, 1, 0, D_8006DA48, 1, 0xF, 0);
            func_8001F35C(-6, -8, 3, 1, 0, D_80078D30 != 0 ? s1 : 1, 1, 0);
            func_8001F1A8(-0x68, 8, 3, 1, 0, D_8006D83C, 1, 0xC, 0);
        }
    }
    switch (D_800922D0[0]) {
    case 0:
        func_80031EF0();
        k = D_80078D38;
        if (k & 0x20) {
            func_80034AB0(0x48);
            D_800922D0[3] = 1;
            ST = 1;
            return 1;
        }
        if (!(k & 0x40)) {
            return 0;
        }
        func_80034AB0(0x5D);
        if (D_800922DC != 2 && D_8008F78C != 1) {
            func_800338DC(D_80085430);
        }
        v = DW(0xA20);
        if (v != 0) {
            if ((u32)v < 6) {
                DW(0xA20) = 0;
            }
            D_800859F3 = 4;
            D_800922D8 = 4;
            return 4;
        }
        *(s16 *)(D + 0xF0) = 3;
        return func_8001CB80();
    case 1:
        if (D_80085428[D_800922D4 + 0x34] != 0) {
            func_8001F1A8(-0x60, -0x18, 0, 1, 0, D_8006D808, 1, 0xE, 0);
        } else {
            func_8001F1A8(-0x60, -0x18, 0, 1, 0, D_8006D770, 1, 3, 0);
            func_8001F1A8(-0x34, -0x18, 0, 1, 0, D_8006DA00, 1, 4, 0);
        }
        func_8001F1A8(-0x60, -8, 0, 1, 0, D_8006D7F8, 1, 8, 0);
        if (D_80078D38 & 0xA000) {
            func_80034AB0(0x84);
            D_800922D0[3] = *(u16 *)(D_800922D0 + 3) ^ 1;
        }
        k = D_80078D38;
        if (k & 0x20) {
            if (D_800922D0[3] == 0) {
                func_80034AB0(0x48);
                goto inc;
            }
            r = func_80034AB0(0x5D);
            ST = 0;
            return r;
        }
        if (!(k & 0x40)) {
            return 0;
        }
        func_80034AB0(0x5D);
        ST = 0;
        return 0x80090000; /* %hi(D_800922D0), sobra */
    case 2:
        DW(0x954) = 0;
        func_8001CB88();
        func_8001A998(0x801CC000, 0x4000);
        func_8001B16C();
        t = ST + 1;
        DW(0xF8) = 1;
        ST = t;
        return t;
    case 3:
        if (DW(0xA20) == 6) {
            a0 = 0;
            a1 = 0;
            a2 = 3;
            a3 = 0;
            D_80078D30 = 0;
        } else if (DW(0xA20) == 7) {
            a0 = 0x10;
            a1 = 0;
            a2 = 3;
            D_80078D30 = 0x10;
            a3 = 1;
        } else {
            a0 = 0;
            a1 = 0;
            a2 = 0;
            a3 = 0;
            D_80078D30 = 0;
        }
        DW(0x958) = func_8001D230(a0, a1, a2, a3);
        r = DW(0x958);
        if (r == 0) {
            return 2;
        }
        if (r == 2) {
            c = DW(0x954);
            if (c >= 5) {
                return c + 1;
            }
            c++;
            DW(0x954) = c;
            if (c < 5) {
                ST = r;
                return 0x80090000;
            }
            D_80078D2C = 0;
            goto inc;
        }
        goto inc;
    case 4:
        if (D_8008F6C0 == 1 || D_8008F6C0 == 6) {
            goto inc;
        }
        func_80034AB0(0x4C);
        D_80078D2C = 0;
        ST = 7;
        return 7;
    case 5:
        D_8008F6BC = 0;
        func_8001CB88();
        goto inc;
    case 6:
        if (DW(0xA20) == 6) {
            a0 = 0;
            a2 = 1;
            a1 = D_800922D4;
            a3 = 0;
            D_80078D30 = 0;
        } else if (DW(0xA20) == 7) {
            a0 = 0x10;
            a2 = 1;
            a1 = D_800922D4;
            D_80078D30 = 0x10;
            a3 = 1;
        } else {
            a0 = 0;
            a2 = 0;
            a1 = D_800922D4;
            a3 = 0;
            D_80078D30 = 0;
        }
        DW(0x958) = func_8001CE2C(a0, a1, a2, a3);
        r = DW(0x958);
        if (r == 0) {
            return 2;
        }
        if (r == 2) {
            c = DW(0x954);
            if (c >= 5) {
                return c + 1;
            }
            c++;
            DW(0x954) = c;
            if (c < 5) {
                ST = 5;
                return 5;
            }
            func_80034AB0(0x4C);
        } else {
            func_80034AB0(r == 1 ? 0x48 : 0x4C);
        }
        D_80078D2C = 0;
        goto inc;
    case 7:
        if (D_80078D38 & 0x20) {
            ST = ST + 1;
        }
        func_80030DD4(DW(0x958), 0);
        if (DW(0xF8) == 1) {
            DW(0xF8) = 0;
        }
        return 1;
    case 8:
        r = DW(0x958);
        if (r == 4) {
            ST = 0;
            D_800922D0[3] = 1;
            *(s16 *)(D + 0xF0) = 7;
            return 7;
        }
        if (r == 1 || r == 11 || r == 5) {
            return func_80031E60();
        }
        ST = 0;
        D_800922D0[3] = 1;
        *(s16 *)(D + 0xF0) = 4;
        return (s32)D_800922D0;
    }
    return 0x80010000; /* %hi(jtbl_80010610), sobra */
inc:
    t = ST + 1;
    ST = t;
    return t;
}
