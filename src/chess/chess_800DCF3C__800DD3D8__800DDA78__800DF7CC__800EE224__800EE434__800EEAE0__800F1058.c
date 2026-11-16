#include "ghidra.h"
#include "common.h"


typedef struct {
    s16 vx, vy, vz, pad;
    s16 dx, dx_pad;
    s16 dz, dz_pad;
    s16 sx, sy;
    s32 p;
    s32 flag;
} S_800EFCF4_Work;

typedef struct { u8 b[4]; } U4_800DD;

extern u8 D_8008ED68[];
extern s32 func_800FF190();
extern s32 func_800202A4();
extern void func_80013920();

typedef struct {
    u8 pad0[0x10];
    u32 a;
    u32 b;
    u8 pad18[0x24];
} S_800DD_Tab;

typedef struct {
    u8 pad0[0x13];
    u8 f13;
    u8 pad14[0x28];
} S_800DD_Tab8;



typedef struct { u8 pad0[0x28]; u16 x28; u16 x2a; u16 x2c; u8 b2e, b2f, b30, pad31; u8 b32, b33, b34, pad35; u16 x36; u16 x38; } ChessObjA;





s32 func_800F1058(s32 arg0, u8 *arg1, u8 *arg2) {
    extern u8 D_80018600[];
    extern s32 D_80119710[];
    extern s32 D_80119714[];
    extern int func_800F52C4();
    u8 *b = D_8008ED68;
    u8 *p;
    u8 *q;
    s32 r;

    switch (*(u16 *)(b + 0xEC)) {
    case 0:
        arg2[0x17] = 0x88;
        arg2[0x23] = 0;
        D_80119714[0] = 0;
        *(u16 *)(b + 0xEC) += 1;
        func_80034AB0(0x8009);
    case 1:
        p = func_80015B3C(D_80018600, func_800F52C4, 1);
        if (D_80119710[1] == 0) {
            p[0x2C] = 200;
            p[0x30] = 1;
            p[0x28] = 0;
            p[0x29] = 0;
            p[0x2A] = 0;
            p[0x2D] = 0;
            p[0x2E] = 0;
            *(s16 *)(p + 0x32) = 20;
        }
        if (D_80119710[1] == 20) {
            p[0x28] = 200;
            p[0x2C] = 100;
            p[0x2D] = 100;
            p[0x30] = 1;
            p[0x29] = 0;
            p[0x2A] = 0;
            p[0x2E] = 0;
            *(s16 *)(p + 0x32) = 30;
        }
        if (D_80119710[1] == 50) {
            p[0x28] = 100;
            p[0x29] = 100;
            p[0x2E] = 200;
            p[0x30] = 1;
            p[0x2A] = 0;
            p[0x2C] = 0;
            p[0x2D] = 0;
            *(s16 *)(p + 0x32) = 30;
        }
        if (D_80119710[1] == 80) {
            p[0x2A] = 200;
            p[0x2C] = 255;
            p[0x2D] = 255;
            p[0x2E] = 255;
            p[0x30] = 1;
            p[0x28] = 0;
            p[0x29] = 0;
            *(s16 *)(p + 0x32) = 10;
        }
        if (D_80119710[1] == 90) {
            p[0x28] = 255;
            p[0x29] = 255;
            p[0x2A] = 255;
            p[0x30] = 1;
            p[0x2C] = 0;
            p[0x2D] = 0;
            p[0x2E] = 0;
            *(s16 *)(p + 0x32) = 10;
        }
        if (D_80119710[1] >= 100) {
            q = D_8008ED68;
            D_80119710[1] = 0;
            *(u16 *)(q + 0xEC) += 1;
        }
        break;
    case 2:
        r = 1;
        if (D_80119714[0] < 10) {
            goto zero;
        }
        arg1[0x60D] = 2;
        return r;
    default:
    zero:
        return 0;
    }
    return 0;
}




