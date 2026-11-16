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

void func_800DF67C(u32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    if (arg1 == 0) {
        switch (arg0) {
        case 0: *arg2 = 7; *arg3 = -23; break;
        case 1: *arg2 = -3; *arg3 = -24; break;
        case 2: *arg2 = -10; *arg3 = -27; break;
        case 3: *arg2 = -7; *arg3 = -28; break;
        case 4: *arg2 = -11; *arg3 = -23; break;
        case 5: *arg2 = -8; *arg3 = -32; break;
        case 6: *arg2 = 10; *arg3 = -27; break;
        case 7: *arg2 = 13; *arg3 = -28; break;
        }
    } else {
        switch (arg0) {
        case 0: *arg2 = -7; *arg3 = -23; break;
        case 1: *arg2 = -13; *arg3 = -28; break;
        case 2: *arg2 = -10; *arg3 = -27; break;
        case 3: *arg2 = 8; *arg3 = -32; break;
        case 4: *arg2 = 11; *arg3 = -23; break;
        case 5: *arg2 = 7; *arg3 = -28; break;
        case 6: *arg2 = 10; *arg3 = -27; break;
        case 7: *arg2 = 3; *arg3 = -24; break;
        }
    }
}



typedef struct { u8 pad0[0x28]; u16 x28; u16 x2a; u16 x2c; u8 b2e, b2f, b30, pad31; u8 b32, b33, b34, pad35; u16 x36; u16 x38; } ChessObjA;








