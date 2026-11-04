#include "common.h"

typedef struct {
    u8 _p0[0x8A];
    u16 f_8A;
    u8 _p8C[0x18];
    u16 f_A4;
    u8 _pA6[0x2];
    u16 f_A8;
    u8 _pAA[0x66];
    s16 f_110;
    u8 _p112[0x7A];
    s32 f_18C;
    u8 _p190[0x18];
} S_80091618;
extern S_80091618 D_80091618[];

typedef struct {
    u8 _p0[0x332];
    u16 f_332;
    u16 f_334;
    u16 f_336;
    u16 f_338;
    u8 _p33A[0x8];
    s16 f_342;
    s16 f_344;
    u8 _p346[0x38];
    s16 f_37E;
    u8 _p380[0x2B];
    u8 f_3AB[0x3ED];
    u32 f_798;
} S_80100F38;
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800EF2D8 1 0,1,2,3 */
extern u16 D_800EF2D8;
extern s32 func_800D1548(void);
extern void func_800D1CC4(s32, s32, s32, s32);

extern u8 D_800900C0[];

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04__800B8EF0__800B8FAC__800B9284__800B9610__800B9914", func_800B9914);
