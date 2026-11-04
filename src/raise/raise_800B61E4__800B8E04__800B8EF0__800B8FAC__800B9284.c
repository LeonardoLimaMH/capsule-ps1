#include "common.h"

typedef struct {
    u8 _p0[0x88];
    u16 f_88;
    u8 _p8A[0x1A];
    u16 f_A4;
    u8 _pA6[0x2];
    u16 f_A8;
    u8 _pAA[0xE2];
    s32 f_18C;
    u8 _p190[0x18];
} S_80091618;
extern S_80091618 D_80091618[];

s32 func_800B9284(void) {
    extern u16 D_8006AF80[];
    extern s16 D_800ED88C[];
    s32 r;

    r = func_8009E72C();
    if (r == -1) {
        D_80091618[*D_8006AF80].f_88++;
        func_800D1CC4(*D_8006AF80, 0xC, 0, 0);
        return 1;
    } else if (r == -2) {
        *D_800ED88C = 1;
        func_800B8EF0();
        func_800CD288(1, 1);
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

