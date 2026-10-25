#include "common.h"

extern u8 D_8008ED68[], D_80085428[], D_8006D8FC[], D_8006DA24[], D_8006D854[], D_8006D83C[];
extern u8 D_8006DA8C[];
extern s16 D_800922D0[];
extern u8 D_800859F8, D_800859F3;
extern s32 D_80078D30, D_80078D38, D_80078D2C, D_8008F6C0;
extern u16 D_80085430;
extern s16 D_8008EE58;
extern void func_8001F1A8(), func_8001F35C(), func_80034AB0(), func_8001CB88(), func_8001A998();
extern void func_8001B16C(), func_800338DC();
extern s32 func_8001D4FC(), func_8003177C(), func_8001CB80();

#define ST (*(u16 *)D_800922D0)

s32 func_800307F0(void) {
    u8 *D = D_8008ED68;
    s32 k, r, t;
    u32 c, v;
    u8 s1;

    if (D_80078D30 == 0) {
        D_80078D38 = *(s32 *)(D + 0x88);
        if (D_80085428[0] == 3) {
            D_80078D38 = *(s32 *)(D + 0x88) | *(s32 *)(D + 0x98);
        }
    } else {
        D_80078D38 = *(s32 *)(D + 0x98);
    }
    switch (D_800922D0[0]) {
    case 0:
        s1 = D_800859F8;
        if (s1 != 2) {
            func_8001F1A8(-0x60, -0x18, 0, 1, 0, D_8006D8FC, 1, 0xB, 0);
        } else {
            func_8001F1A8(-0x60, -0x18, 0, 1, 0, D_8006DA24, 1, 9, 0);
            func_8001F35C(2, -0x18, 0, 1, 0, D_80078D30 != 0 ? s1 : 1, 1, 0);
            func_8001F1A8(-0x60, -8, 0, 1, 0, D_8006D8FC, 1, 0xB, 0);
        }
        k = D_80078D38;
        if (k & 0xA000) {
            func_80034AB0(0x84);
            t = *(u16 *)(D_800922D0 + 3) ^ 1;
            D_800922D0[3] = t;
            return t;
        }
        if (k & 0x20) {
            func_80034AB0(0x48);
            if (D_800922D0[3] == 0) {
                goto inc;
            }
            goto finish;
        }
        if (k & 0x40) {
            func_80034AB0(0x5D);
            goto finish;
        }
        return 0;
    case 1:
        *(s32 *)(D + 0x954) = 0;
        func_8001CB88();
        func_8001A998(0x801CC000, 0x4000);
        func_8001B16C();
        goto inc;
    case 2:
        s1 = D_800859F8;
        if (s1 != 2) {
            func_8001F1A8(-0x60, -8, 3, 1, 0, D_8006D854, 1, 0xE, 0);
            func_8001F1A8(-0x60, 8, 3, 1, 0, D_8006D83C, 1, 0xC, 0);
        } else {
            func_8001F1A8(-0x60, -0x10, 3, 1, 0, D_8006DA24, 1, 9, 0);
            func_8001F35C(2, -0x10, 3, 1, 0, D_80078D30 != 0 ? s1 : 1, 1, 0);
            func_8001F1A8(-0x60, 0, 3, 1, 0, D_8006DA8C, 1, 0xA, 0);
            func_8001F1A8(-0x60, 0x10, 3, 1, 0, D_8006D83C, 1, 0xC, 0);
        }
        r = func_8001D4FC(D_80078D30);
        *(s32 *)(D + 0x958) = r;
        if (r == 0) {
            return 0;
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
        func_80034AB0(D_8008F6C0 == 0x3C ? 0x48 : 0x4C);
        D_80078D2C = 0;
        goto inc;
    case 3:
        if (D_80078D38 & 0x20) {
            ST = ST + 1;
        }
        return func_8003177C(*(s32 *)(D + 0x958));
    case 4:
        if (*(s32 *)(D + 0x958) != 0x3C) {
            ST = 0;
            D_800922D0[3] = 1;
            D_8008EE58 = 4;
            return 4;
        }
        goto inc;
    case 5:
        ST = 0;
        if (D_800922D0[0xD] == 0) {
            D_800922D0[2] = 0;
            D_8008EE58 = 5;
            return 5;
        }
        goto finish;
    }
    return 0x80010000; /* %hi(jtbl_80010660), sobra do delay slot */
inc:
    t = ST + 1;
    ST = t;
    return t;
finish:
    if (D_800922D0[6] != 2) {
        func_800338DC(D_80085430);
    }
    v = *(u32 *)(D_8008ED68 + 0xA20);
    if (v != 0) {
        if (v < 3) {
            *(u32 *)(D_8008ED68 + 0xA20) = 0;
        }
        D_800859F3 = 4;
        *(s32 *)(D_800922D0 + 4) = 4;
        return 4;
    }
    *(s16 *)(D_8008ED68 + 0xF0) = 3;
    return func_8001CB80();
}
