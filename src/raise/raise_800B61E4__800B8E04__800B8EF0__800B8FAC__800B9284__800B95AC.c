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
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800EF2D8 1 0,1,2,3 */
extern u16 D_800EF2D8;
extern s32 func_800D1548(void);
extern void func_800D1CC4(s32, s32, s32, s32);

s32 func_800B95AC(void) {
    extern u8 D_800900C0[];
    u8 *p;
    register u8 *v1 asm("v1");
    s32 i;

    p = D_800900C0;
    i = 3;
    if (*(s32 *)(p + 0x268) == -0x320) {
        func_800AEDC4(i, p);
        return 1;
    }
    v1 = p + 0x234;
    do {
        *(s32 *)(v1 + 0x34) += 0x14;
        i++;
        v1 += 0xBC;
    } while (i < 6);
    return 0;
}

extern u8 D_800900C0[];

