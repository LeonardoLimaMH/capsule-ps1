#include "common.h"

extern u8 D_800859F8;
extern s32 D_80078D30;
extern u8 D_8006D9A8[], D_8006DAF0[], D_8006D8BC[], D_8006D9C4[], D_8006DAC8[], D_8006D9E0[];
extern u8 D_8006D9F8[], D_8006D8D0[], D_8006D94C[], D_8006DB04[], D_8006D914[], D_8006D990[];
extern void func_8001F1A8(), func_8001F35C();

#define T(x, y, a2, s, n) func_8001F1A8(x, y, a2, 1, 0, s, 1, n, 0)
#define NUM(x, y, a2) func_8001F35C(x, y, a2, 1, 0, D_80078D30 != 0 ? s1 : 1, 1, 0)

void func_8003177C(s32 code) {
    u8 s1;

    switch (code) {
    case 60:
        s1 = D_800859F8;
        if (s1 != 2) {
            T(-0x60, 0, 0, D_8006D9A8, 0xE);
        } else {
            T(-0x60, -8, 0, D_8006DAF0, 9);
            NUM(2, -8, 0);
            T(-0x60, 8, 0, D_8006D9A8, 0xE);
        }
        return;
    case 1:
        s1 = D_800859F8;
        if (s1 != 2) {
            T(-0x60, -8, 0, D_8006D8BC, 0xA);
        } else {
            T(-0x60, -8, 0, D_8006DAC8, 9);
            NUM(2, -8, 0);
        }
        T(-0x60, 8, 0, D_8006D9C4, 0xD);
        return;
    case 2:
    case 4:
        s1 = D_800859F8;
        if (s1 != 2) {
            T(-0x68, 0, 1, D_8006D9E0, 0xB);
            T(0x30, 0, 1, D_8006D9F8, 4);
        } else {
            T(-0x68, -8, 1, D_8006DAC8, 9);
            NUM(-6, -8, 1);
            T(-0x68, 8, 1, D_8006D9E0, 0xB);
            T(0x30, 8, 1, D_8006D9F8, 4);
        }
        return;
    case 3:
        s1 = D_800859F8;
        if (s1 != 2) {
            T(-0x60, 0, 0, D_8006D8D0, 8);
            T(0x10, 0, 0, D_8006D94C, 6);
        } else {
            T(-0x60, -8, 0, D_8006DB04, 6);
            NUM(-0x28, -8, 0);
            T(-0x60, 8, 0, D_8006D8D0, 8);
            T(0x10, 8, 0, D_8006D94C, 6);
        }
        return;
    case 8:
        s1 = D_800859F8;
        if (s1 != 2) {
            T(-0x60, -8, 1, D_8006D8BC, 0xA);
        } else {
            T(-0x60, -8, 1, D_8006DAC8, 9);
            NUM(2, -8, 1);
        }
        T(-0x60, 8, 1, D_8006D9E0, 0xC);
        return;
    case 7:
        s1 = D_800859F8;
        if (s1 != 2) {
            T(-0x68, 0, 1, D_8006D914, 0xF);
        } else {
            T(-0x68, -8, 1, D_8006DAF0, 9);
            NUM(-6, -8, 1);
            T(-0x68, 8, 1, D_8006D914, 0xF);
        }
        return;
    }
    T(-0x60, 0, 1, D_8006D990, 0xB);
}
