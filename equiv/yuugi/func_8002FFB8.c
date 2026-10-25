#include "common.h"

extern u8 D_8008ED68[], D_80085428[], D_8006D824[], D_8006D778[], D_8006D83C[], D_8006DA68[];
extern u8 D_8006DA7C[], D_8006D7D0[], D_8006D7F0[], D_8006D7F8[], D_8006DA00[];
extern s16 D_800922D0[];
extern u8 D_800859F8, D_800859F3, D_800859F0, D_80078D35;
extern s32 D_80078D30, D_80078D38, D_80078D2C, D_8008F788, D_8008F6C0, D_8008F6BC;
extern u16 D_80085430;
extern void func_8001F1A8(), func_8001F35C(), func_80031EF0(), func_800338DC(), func_8001CB88();
extern void func_8001A998(), func_8001B16C(), func_800322F4(), func_80032398(), func_80032570();
extern s32 func_80034AB0(), func_8001CB80(), func_8001D230(), func_80030DD4(), func_80031E60();

#define M D_800922D0
#define ST (*(u16 *)M)
#define DW(o) (*(s32 *)(D + (o)))

s32 func_8002FFB8(void) {
    u8 *D = D_8008ED68;
    s32 k, r, t, v, a0, a1, a2, a3;
    u32 c;
    u8 s1;

    if (DW(0xA20) == 4) {
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
            func_8001F1A8(-0x28, -8, 3, 1, 0, D_8006D778, 1, 3, 0);
            func_8001F1A8(-0x60, 8, 3, 1, 0, D_8006D83C, 1, 0xC, 0);
        } else {
            func_8001F1A8(-0x60, -0x10, 3, 1, 0, D_8006DA68, 1, 0xA, 0);
            func_8001F35C(2, -0x10, 3, 1, 0, D_80078D30 != 0 ? s1 : 1, 1, 0);
            func_8001F1A8(-0x60, 0, 3, 1, 0, D_8006DA7C, 1, 7, 0);
            func_8001F1A8(-0x60, 0x10, 3, 1, 0, D_8006D83C, 1, 0xC, 0);
        }
    }
    switch (M[0]) {
    case 0:
        func_80031EF0();
        k = D_80078D38;
        if (k & 0x20) {
            if (D_80085428[M[2] + 0x34] == 0) {
                return func_80034AB0(0x4C);
            }
            func_80034AB0(0x48);
            M[3] = 1;
            ST = 1;
            return 1;
        }
        if (!(k & 0x40)) {
            return 0;
        }
        func_80034AB0(0x5D);
        if (M[6] != 2) {
            func_800338DC(D_80085430);
        }
        v = DW(0xA20);
        if (v != 0) {
            if ((u32)v < 3) {
                DW(0xA20) = 0;
            }
            D_800859F3 = 4;
            *(s32 *)(M + 4) = 4;
            return 4;
        }
        *(s16 *)(D + 0xF0) = 3;
        return func_8001CB80();
    case 1:
        if (D_8008F788 != 1) {
            func_8001F1A8(-0x68, -0x18, 0, 1, 0, D_8006D7D0, 1, 0xF, 0);
            func_8001F1A8(-0x68, -8, 0, 1, 0, D_8006D7F0, 1, 4, 0);
            func_8001F1A8(-0x30, -8, 0, 1, 0, D_8006D7F8, 1, 8, 0);
        } else {
            func_8001F1A8(-0x60, -0x18, 0, 1, 0, D_8006D778, 1, 3, 0);
            func_8001F1A8(-0x34, -0x18, 0, 1, 0, D_8006DA00, 1, 4, 0);
            func_8001F1A8(-0x60, -8, 0, 1, 0, D_8006D7F8, 1, 8, 0);
        }
        if (D_80078D38 & 0xA000) {
            func_80034AB0(0x84);
            M[3] = *(u16 *)(M + 3) ^ 1;
        }
        k = D_80078D38;
        if (k & 0x20) {
            if (M[3] == 0) {
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
        D_8008F6BC = 0;
        func_8001CB88();
        func_8001A998(0x801CC000, 0x4000);
        func_8001B16C();
        goto inc;
    case 3:
        if (DW(0xA20) == 4) {
            a0 = 0x10;
            a1 = 0;
            a2 = 0;
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
        if ((u32)D_8008F788 < 3) {
            if (D_800859F0 & 4) {
                D_80078D35 = 1;
            } else {
                D_80078D35 = 0;
            }
        }
        DW(0x954) = 0;
        func_8001CB88();
        if (D_80085428[M[2] + 0x34] == 0) {
            DW(0x958) = 6;
            ST = 6;
        }
        goto inc;
    case 6:
        if (DW(0xA20) == 3) {
            a0 = 0;
            a2 = 2;
            a1 = M[2];
            a3 = 0;
            D_80078D30 = 0;
        } else if (DW(0xA20) == 4) {
            a0 = 0x10;
            a2 = 2;
            a1 = M[2];
            D_80078D30 = 0x10;
            a3 = 1;
        } else {
            a0 = 0;
            a2 = 1;
            a1 = M[2];
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
        return func_80030DD4(D_8008F6C0, 1);
    case 8:
        r = DW(0x958);
        if (r == 4) {
            return func_80031E60();
        }
        if (r == 1) {
            if ((u32)DW(0xA20) < 3) {
                func_800322F4();
                func_80032398();
                func_80032570();
            }
            return func_80031E60();
        }
        ST = 0;
        M[3] = 1;
        *(s16 *)(D + 0xF0) = 4;
        return (s32)D_800922D0;
    }
    return 0x80010000; /* %hi(jtbl_80010638), sobra */
inc:
    t = ST + 1;
    ST = t;
    return t;
}
