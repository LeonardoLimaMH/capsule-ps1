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

void func_800FE74C(short *param_1,short *param_2)

{
  SquareRoot0(((int)*param_1 - (int)*param_2) * ((int)*param_1 - (int)*param_2) +
                  ((int)param_1[1] - (int)param_2[1]) * ((int)param_1[1] - (int)param_2[1]) +
                  ((int)param_1[2] - (int)param_2[2]) * ((int)param_1[2] - (int)param_2[2]));
  return;
}

void func_800FE7B8(void) {
    typedef struct {
        s16 vx, vy, vz, pad;
    } SVec;
    typedef struct {
        s32 vx, vy, vz, pad;
    } Vec;
    struct Cam {
        u8 pad0[0x44];
        s32 x, y, z;
        u8 pad50[0x90];
        s32 r;
        s32 unkE4;
        s16 rx, ry;
    };
    struct Work {
        u8 pad0[0x0C];
        Vec v0;
        Vec v1;
        SVec s0;
        SVec s1;
    };
    extern struct Cam D_80069AD4;
    extern struct Work D_80119710;

    D_80119710.s0.vx = D_80069AD4.rx;
    D_80119710.s0.vy = D_80069AD4.ry;
    D_80119710.s0.vz = D_80069AD4.r;
    D_80119710.s1 = D_80119710.s0;
    D_80119710.v0.vx = D_80069AD4.x;
    D_80119710.v0.vy = D_80069AD4.y;
    D_80119710.v0.vz = D_80069AD4.z;
    D_80119710.v1 = D_80119710.v0;
}

void func_800FE840(void) {
    struct Cam {
        u8 pad0[0xE0];
        s32 r;
        s32 unkE4;
        s16 rx, ry;
    };
    struct D8ED68 {
        u8 pad0[0x80];
        struct {
            s32 btn;
            u8 pad[0xC];
        } pad[2];
    };
    extern struct Cam D_80069AD4;
    extern u8 D_80085FF2[];
    extern struct D8ED68 D_8008ED68;
    s32 c = 1 - D_80085FF2[0];

    if (D_8008ED68.pad[c].btn & 0x1000) {
        D_80069AD4.rx += 0x10;
    }
    if (D_8008ED68.pad[c].btn & 0x4000) {
        D_80069AD4.rx -= 0x10;
    }
    if (D_8008ED68.pad[c].btn & 0x2000) {
        D_80069AD4.ry += 0x10;
    }
    if (D_8008ED68.pad[c].btn & 0x8000) {
        D_80069AD4.ry -= 0x10;
    }
    if (D_8008ED68.pad[c].btn & 8) {
        D_80069AD4.r += 0x10;
    }
    if (D_8008ED68.pad[c].btn & 2) {
        D_80069AD4.r -= 0x10;
    }
}
