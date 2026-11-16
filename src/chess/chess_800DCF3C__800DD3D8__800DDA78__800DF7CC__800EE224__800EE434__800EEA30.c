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





void func_800EEA30(u8 *arg0) {
    extern u8 D_8011974D[];
    register s32 d asm("a1") = 30;
    s32 n;
    s32 w, h;
    u8 r, g, b;

    n = (s16)(*(u16 *)(arg0 + 0x16) += 1);
    D_8011974D[0] = 0;
    if (n > d) {
        func_80013920(arg0);
    } else {
        w = n * 40 / d;
        h = (d - n) * 10 / d;
        *(u16 *)(arg0 + 0x2A) -= 4;
        r = arg0[0x24];
        g = arg0[0x25];
        b = arg0[0x26];
        arg0[0x30] = r;
        arg0[0x31] = g;
        arg0[0x32] = b;
        *(s16 *)(arg0 + 0x34) = w;
        *(s16 *)(arg0 + 0x36) = h;
    }
}




