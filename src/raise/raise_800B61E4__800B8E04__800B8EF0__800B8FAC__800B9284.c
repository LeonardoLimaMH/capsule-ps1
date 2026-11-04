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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04__800B8EF0__800B8FAC__800B9284", func_800B9284);

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

