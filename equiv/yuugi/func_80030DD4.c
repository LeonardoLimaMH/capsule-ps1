#include "common.h"

extern u8 D_800859F8;
extern s32 D_80078D30;
extern u8 D_8006D770[], D_8006D778[], D_8006D870[], D_8006D880[], D_8006D8D0[], D_8006DAB4[];
extern u8 D_8006D934[], D_8006D968[], D_8006DAA0[], D_8006DA68[], D_8006D94C[], D_8006DB04[];
extern u8 D_8006D8BC[], D_8006D8E0[], D_8006DAC8[], D_8006D97C[], D_8006DADC[], D_8006D914[];
extern u8 D_8006DAF0[], D_8006D958[], D_8006DA08[], D_8006D990[];
extern s32 func_8001F1A8();
extern void func_8001F35C();

#define T(x, y, a2, s, n) func_8001F1A8(x, y, a2, 1, 0, s, 1, n, 0)
#define NUM(x, y, a2) func_8001F35C(x, y, a2, 1, 0, D_80078D30 != 0 ? 2 : 1, 1, 0)

s32 func_80030DD4(s32 code, s32 flag) {
    switch (code) {
    case 1:
        T(-0x64, -8, 0, flag != 0 ? D_8006D778 : D_8006D770, 3);
        T(-0x38, -8, 0, D_8006D870, 8);
        return T(-0x64, 8, 0, D_8006D880, 0xD);
    case 10:
        if (D_800859F8 != 2) {
            T(-0x60, -8, 0, D_8006D8D0, 8);
        } else {
            T(-0x60, -8, 0, D_8006DAB4, 9);
            NUM(2, -8, 0);
        }
        return T(-0x60, 8, 0, D_8006D934, 0xB);
    case 2:
        if (D_800859F8 != 2) {
            T(-0x60, 0, 1, flag != 0 ? D_8006D778 : D_8006D770, 3);
            return T(-0x34, 0, 1, D_8006D968, 9);
        }
        if (flag == 0) {
            T(-0x60, -8, 1, D_8006DAA0, 9);
        } else {
            T(-0x60, -8, 1, D_8006DA68, 0xA);
        }
        NUM(2, -8, 1);
        T(-0x60, 8, 1, flag != 0 ? D_8006D778 : D_8006D770, 3);
        return T(-0x34, 8, 1, D_8006D968, 9);
    case 3:
        if (D_800859F8 != 2) {
            T(-0x60, 0, 0, D_8006D8D0, 8);
            return T(0x10, 0, 0, D_8006D94C, 6);
        }
        T(-0x60, -8, 0, D_8006DB04, 6);
        NUM(-0x28, -8, 0);
        T(-0x60, 8, 0, D_8006D8D0, 8);
        return T(0x10, 8, 0, D_8006D94C, 6);
    case 4:
        if (D_800859F8 != 2) {
            T(-0x60, -8, 0, D_8006D8BC, 0xA);
        } else {
            T(-0x60, -8, 0, D_8006DAC8, 9);
            NUM(2, -8, 0);
        }
        return T(-0x60, 8, 0, D_8006D8E0, 0xE);
    case 6:
        if (D_800859F8 != 2) {
            return T(-0x60, 0, 0, D_8006D97C, 0xA);
        }
        T(-0x60, -8, 0, D_8006DADC, 0xA);
        NUM(2, -8, 0);
        return T(-0x60, 8, 0, D_8006D97C, 0xA);
    case 7:
        if (D_800859F8 != 2) {
            return T(-0x68, 0, 1, D_8006D914, 0xF);
        }
        T(-0x68, -8, 1, D_8006DAF0, 9);
        NUM(-6, -8, 1);
        return T(-0x68, 8, 1, D_8006D914, 0xF);
    case 5:
        if (D_800859F8 != 2) {
            T(-0x60, -8, 1, D_8006D8D0, 8);
        } else {
            T(-0x60, -8, 1, D_8006DAB4, 9);
            NUM(2, -8, 1);
        }
        return T(-0x60, 8, 1, D_8006D958, 7);
    case 11:
        if (D_800859F8 != 2) {
            return T(-0x60, 0, 1, D_8006DA08, 0xD);
        }
        T(-0x60, -8, 1, D_8006DAC8, 9);
        NUM(2, -8, 1);
        return T(-0x60, 8, 1, D_8006DA08, 0xD);
    }
    return T(-0x60, 0, 1, D_8006D990, 0xB);
}
