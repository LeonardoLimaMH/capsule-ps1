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

void func_800B8EF0(void) {
    typedef struct {
        u8 _p00[0x12];
        u16 unk12;
        u8 _p14[0x194];
    } S_91618;
    typedef struct {
        s32 a, b, c;
    } S3;
    extern u16 D_8006AF80[];
    extern u16 D_80100CD0[];
    extern u8 D_80100CFC[];
    extern u8 D_800EFFEC[];
    register s32 var_t2 asm("t2");
    register s32 *var_t0 asm("t0");
    register u16 *var_t1 asm("t1");
    register u32 var_v0 asm("v0");
    s32 *var_a2;
    register u16 *var_a3 asm("a3");
    u32 base;
    u16 temp;

    var_t2 = 0;
    var_t0 = (s32 *)D_80100CD0;
    var_t1 = (u16 *)var_t0;
    temp = *D_8006AF80;
    base = (u32)((S_91618 *)D_80091618);
    var_v0 = base + (temp * 0x1A8);
    var_a2 = (s32 *)var_v0;
    ((u16 *)var_a2)[9] = *D_80100CD0;
    var_a3 = (u16 *)var_a2;
    do {
        u16 temp_v0 = var_t1[1];
        var_t1++;
        var_t2++;
        var_a3[10] = temp_v0;
        *(S3 *)&var_a2[7] = *(S3 *)&var_t0[2];
        var_t0 += 3;
        var_a2 += 3;
        var_a3++;
    } while (var_t2 < 3);
    func_8001AA70(D_800EFFEC, D_80100CFC, 0x40);
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
