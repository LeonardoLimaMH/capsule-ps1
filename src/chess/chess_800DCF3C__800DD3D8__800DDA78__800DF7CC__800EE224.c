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

void func_800EE224(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
{
    extern u8 D_80018600[];
    extern u8 D_80085A10[];
    extern int func_800EE0C8();
    int iVar2;
    u8 *p;

    p = D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c;
    iVar2 = func_80015B3C(func_800EE0C8, D_80018600, 1);
    *(undefined4 *)(iVar2 + 0x14) = param_2;
    *(char *)(iVar2 + 0x2c) = (char)param_3;
    *(char *)(iVar2 + 0x2d) = (char)param_4;
    *(uint *)(p + 0x18) = *(uint *)(p + 0x18) | 0x80000;
    func_80034AB0(0x800d);
}
