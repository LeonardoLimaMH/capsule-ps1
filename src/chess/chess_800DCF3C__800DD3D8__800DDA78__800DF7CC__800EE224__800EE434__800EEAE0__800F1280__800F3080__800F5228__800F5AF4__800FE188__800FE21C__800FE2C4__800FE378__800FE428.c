#include "ghidra.h"
#include "common.h"

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

s32 func_800FE428(u8 *arg0, u8 *arg1) {
    extern s32 D_80118C18[];
    extern s32 SquareRoot0(s32);
    s16 v1[3];
    s16 v2[3];
    s16 *p = v1;
    s32 a1 = arg0[0x15];
    u8 b1 = arg0[0x16];
    s32 a2;
    u8 b2;
    s32 dx, dy, dz;

    v1[0] = (a1 * 100) - 0x226;
    p[2] = (b1 * 100) - 0x226;
    p[1] = -(((*(u32 *)((D_80118C18[0] + (a1 * 0x34)) + (b1 * 4))) >> 19) & 7) * 50;

    a2 = arg1[0x15];
    b2 = arg1[0x16];
    v2[0] = (a2 * 100) - 0x226;
    v2[2] = (b2 * 100) - 0x226;
    v2[1] = -(((*(u32 *)((D_80118C18[0] + (a2 * 0x34)) + (b2 * 4))) >> 19) & 7) * 50;

    dx = v1[0] - v2[0];
    dy = v1[1] - v2[1];
    dz = v1[2] - v2[2];
    return SquareRoot0(dx * dx + dy * dy + dz * dz);
}
