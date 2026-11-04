#include "common.h"

typedef struct {
    u8 _p0[0xA4];
    u16 f_A4;
    u8 _pA6[0x2];
    u16 f_A8;
    u8 _pAA[0xE2];
    s32 f_18C;
    u8 _p190[0x18];
} S_80091618;
extern S_80091618 D_80091618[];

s32 func_800B91C8(void) {
    extern s16 D_800EFF54[];

    switch (*D_800EFF54) {
    case 0:
        if (func_800AA60C() == -1) {
            (*D_800EFF54)++;
        }
        break;
    case 1:
        func_8009E568();
        (*D_800EFF54)++;
        break;
    case 2:
        if (func_8009E598() == -1) {
            (*D_800EFF54)++;
        }
        break;
    case 3:
        *D_800EFF54 = 0;
        return 1;
    }
    return 0;
}

typedef struct {
    u8 _p0[0x332];
    u16 f_332;
    u16 f_334;
    u16 f_336;
    u16 f_338;
    u8 _p33A[0x8];
    s16 f_342;
    s16 f_344;
    u8 _p346[0x456];
} S_80100F38;

extern u8 D_800900C0[];
