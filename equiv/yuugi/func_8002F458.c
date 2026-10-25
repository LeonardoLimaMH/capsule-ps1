#include "common.h"

extern u8 D_8008ED68[], D_8006D89C[], D_8006DA24[], D_8006DA38[];
extern s16 D_800922D0[];
extern u8 D_800859F8;
extern s32 D_8008F788, D_80078D30, D_80078D2C;
extern s16 D_8008EE58;
extern void func_8001F1A8(), func_8001F35C(), func_80030D64(), func_8001CB88(), func_8001A998();
extern void func_8001B16C(), func_80034AB0();
extern s32 func_80030DD4(), func_80031E60();
extern s32 func_80019654(), func_8001D230();

#define ST (*(u16 *)D_800922D0)

s32 func_8002F458(void) {
    u8 *D = D_8008ED68;
    s16 st = D_800922D0[0];
    s32 v, s2, r, a0, a1, a2, a3, t;
    u32 c;

    if (st < 2 || (st == 2 && *(s32 *)(D + 0x958) < 2)) {
        if (D_800859F8 != 2) {
            func_8001F1A8(-0x68, 0, 3, 1, 0, D_8006D89C, 1, 0xF, 0);
        } else {
            v = *(s32 *)(D + 0xA20);
            s2 = (v == 7 || v == 4) ? 2 : 1;
            func_8001F1A8(-0x64, -8, 3, 1, 0, D_8006DA24, 1, 9, 0);
            func_8001F35C(-2, -8, 3, 1, 0, s2, 1, 0);
            func_8001F1A8(-0x64, 8, 3, 1, 0, D_8006DA38, 1, 8, 0);
        }
    }
    switch (D_800922D0[0]) {
    case 0:
        t = func_80019654();
        if (t == 1) {
            func_80030D64();
            goto inc;
        }
        return t;
    case 1:
        *(s32 *)(D + 0x954) = 0;
        func_8001CB88();
        func_8001A998(0x801CC000, 0x4000);
        func_8001B16C();
        goto inc;
    case 2:
        if (D_8008F788 == 6) {
            a0 = 0;
            a1 = 0;
            a2 = 3;
            a3 = 0;
            D_80078D30 = 0;
        } else if (D_8008F788 == 7) {
            a0 = 0x10;
            a1 = 0;
            a2 = 3;
            D_80078D30 = 0x10;
            a3 = 1;
        } else if (D_8008F788 == 4) {
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
        *(s32 *)(D + 0x958) = func_8001D230(a0, a1, a2, a3);
        r = *(s32 *)(D + 0x958);
        if (r == 0) {
            return 2;
        }
        if (r == 2) {
            c = *(u32 *)(D + 0x954);
            if (c >= 5) {
                return c + 1;
            }
            c++;
            *(u32 *)(D + 0x954) = c;
            if (c < 5) {
                ST = 1;
                return 1;
            }
            func_80034AB0(0x4C);
            D_80078D2C = 0;
            goto inc;
        }
        r = *(s32 *)(D + 0x958);
        D_80078D2C = 0;
        if (r == 1) {
            goto inc;
        }
        if (D_800922D0[0xD] == 0 && r == 6) {
            goto inc;
        }
        func_80034AB0(0x4C);
        goto inc;
    case 3:
        c = ++D_80078D2C;
        r = *(s32 *)(D + 0x958);
        if (r == 1 || c >= 0x79) {
            goto inc;
        }
        if (D_800922D0[0xD] == 0 && r == 6) {
            goto inc;
        }
        return func_80030DD4(*(s32 *)(D + 0x958), 1);
    case 4:
        r = *(s32 *)(D + 0x958);
        if (r == 4) {
            if (D_800922D0[0xD] != 0) {
                goto other;
            }
            ST = 0;
            D_800922D0[3] = 1;
            D_8008EE58 = 7;
            return 7;
        }
        if (r == 6 || r == 1) {
            goto inc;
        }
        goto other;
    case 5:
        v = D_800922D0[0xD];
        ST = 0;
        if (v != 0) {
            if (*(s32 *)(D + 0x958) == 6) {
                goto other;
            }
            D_8008EE58 = 6;
            return *(s32 *)(D + 0x958);
        }
        D_8008EE58 = 5;
        return 5;
    }
    return 0x80010000; /* %hi(jtbl_800105F8), sobra do delay slot */
other:
    return func_80031E60();
inc:
    t = ST + 1;
    ST = t;
    return t;
}
