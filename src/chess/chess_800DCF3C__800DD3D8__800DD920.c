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

void func_800DD920(s32 arg0) {
    extern u8 D_8008ED68[];
    extern s32 func_800FF190();
    extern s32 func_800202A4();
    s32 s2 = *(s32*)(arg0 + 0x14);
    s32 s1 = *(s32*)(s2 + 0x70);
    s32 s5 = *(s32*)(s2 + 0x74);
    s32 s4 = 5;
    s16 v;
    s32 v2;
    s32 s0;
    s32 t;
    s32 base = *(s16*)(arg0 + 0x1e);
    u16 buf[3];

    if (D_8008ED68[0x103] >= 2) {
        v2 = base + D_8008ED68[0x103];
    } else {
        v2 = base + 1;
    }
    *(s16*)(arg0 + 0x1e) = v2;
    buf[0] = *(u16*)(arg0 + 0x2c);
    buf[1] = *(u16*)(arg0 + 0x2e);
    buf[2] = *(u16*)(arg0 + 0x30);
    s0 = (s16)v2;
    func_800FF190(s2, buf, 1);
    t = s0;
    if (t < 0) {
        t = s0 + 3;
    }
    *(u32*)(s1 + 0x34) = *(u32*)(s1 + 0x34) & 0xFFFFFF80 | (u32)(s0 + (t >> 2) * -4 < 2);
    if (s0 < 0x14) {
        v = *(s16*)(s1 + 0x46) + (func_800202A4(s4 * 2 + 1) - s4);
        *(s16*)(s1 + 0x46) = v;
        *(s16*)(s5 + 0x46) = v;
        v = *(s16*)(s1 + 0x4a) + (func_800202A4(s4 * 2 + 1) - s4);
        *(s16*)(s1 + 0x4a) = v;
        *(s16*)(s5 + 0x4a) = v;
    } else {
        *(u32*)(s2 + 0x18) ^= 0x80000000;
        *(u32*)(s1 + 0x34) &= 0xFFFFFF80;
        func_80013920(arg0);
    }
}



typedef struct { u8 pad0[0x28]; u16 x28; u16 x2a; u16 x2c; u8 b2e, b2f, b30, pad31; u8 b32, b33, b34, pad35; u16 x36; u16 x38; } ChessObjA;








