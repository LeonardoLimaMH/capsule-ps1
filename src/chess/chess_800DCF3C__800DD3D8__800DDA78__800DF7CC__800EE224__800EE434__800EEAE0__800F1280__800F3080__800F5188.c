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





void func_800F5188(u8 *arg0) {
    u8 *b = D_8008ED68;
    s32 v;

    *(volatile u32 *)(b + 0xA58) += 1;
    *(u16 *)(arg0 + 0x3A) += 14;
    *(u16 *)(arg0 + 0x3C) += 14;
    v = 0x7F - (*(volatile u32 *)(b + 0xA58) * 127U) / 30U;
    arg0[0x32] = v;
    arg0[0x31] = v;
    arg0[0x30] = v;
    if (*(volatile u32 *)(b + 0xA58) >= 30U) {
        func_80013920(arg0);
    }
}




