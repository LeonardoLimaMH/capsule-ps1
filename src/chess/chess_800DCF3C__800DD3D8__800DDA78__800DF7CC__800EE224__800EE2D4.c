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




void func_800EE2D4(int param_1)
{
    extern int func_800EEBC0();
    extern int func_800F7DE4();
    extern u8 D_8008610C[];
    u8 b1, b2;
    undefined2 uVar4;
    int iVar5;
    short sVar3;
    register int lim asm("v0") = 0x3c;
    register int c7f asm("v1");

    b1 = *(u8 *)(param_1 + 0x2c);
    b2 = *(u8 *)(param_1 + 0x2d);
    if (lim < *(short *)(param_1 + 0x1c)) {
        *D_8008610C = 1;
        func_80013920(param_1);
    } else {
        if ((short)(*(short *)(param_1 + 0x1c) % 7) == 0) {
            iVar5 = func_80015B3C(func_800EEBC0, func_800F7DE4, 1);
            func_800FE0B4((u8)((b1 << 7) | (b2 + 1)), iVar5 + 0x28);
            c7f = 0x7f;
            *(u8 *)(iVar5 + 0x30) = 0xff;
            *(u8 *)(iVar5 + 0x31) = 0xff;
            *(u8 *)(iVar5 + 0x34) = 0xff;
            *(u8 *)(iVar5 + 0x35) = 0xff;
            *(u8 *)(iVar5 + 0x32) = c7f;
            *(u8 *)(iVar5 + 0x36) = c7f;
            *(u8 *)(iVar5 + 0x38) = 0xc;
            *(u8 *)(iVar5 + 0x40) = 1;
            sVar3 = *(short *)(iVar5 + 0x2a) - 0x14;
            *(short *)(iVar5 + 0x2a) = sVar3;
            *(int *)(iVar5 + 0x1c) = sVar3;
            uVar4 = GetTPage(0, 1, 0x280, 0x100);
            *(undefined2 *)(iVar5 + 0x42) = uVar4;
            uVar4 = GetClut(0x40, 0x1f0);
            *(undefined2 *)(iVar5 + 0x44) = uVar4;
            *(u8 *)(iVar5 + 0x46) = 0;
            *(u8 *)(iVar5 + 0x47) = 0;
        }
        *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
    }
}





