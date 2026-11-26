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

extern s32 rsin(s32);
extern s32 rcos(s32);
extern void func_80013920(void *);

typedef struct {
    u8 pad0[0x34];
    u32 bf0 : 7;
    u32 bf7 : 25;
} S_EECC0_Sub;

typedef struct {
    u8 pad0[0x10];
    u32 unk10;
    s16 unk14;
    u8 pad16[0x42];
} S_6B2A4_EF1FC;

extern s32 rsin(s32);
extern s32 rcos(s32);
extern void func_80013920(void *);

void func_800EFA28(u8 dir, s32 *px, s32 *py, s32 len) {
    register s32 v asm("v0");
    s32 t;
    switch (dir) {
    case 0:
        *px = 0;
        v = len * -0x4B0;
        break;
    case 1:
        v = len * -0x4B0;
both:
        t = v;
        if (v < 0) t = v + 0xFFF;
        t >>= 12;
        *px = t;
        *py = t;
        return;
    case 2:
        v = len * -0x4B0;
        goto xonly;
    case 3:
        t = len * 0x4B0;
        v = -t;
        *px = v / 4096;
        v = t;
        break;
    case 4:
        *px = 0;
        v = len * 0x4B0;
        break;
    case 5:
        v = len * 0x4B0;
        goto both;
    case 6:
        v = len * 0x4B0;
xonly:
        *px = v / 4096;
        *py = 0;
        return;
    case 7:
        t = len * 0x4B0;
        *px = t / 4096;
        v = -t;
        break;
    default:
        return;
    }
    *py = v / 4096;
}
