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

void func_800EE434(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
{
    extern u8 D_80018600[];
    extern u8 D_80085A10[];
    extern int func_800EE2D4();
    int iVar2;
    u8 *p;

    p = D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c;
    iVar2 = func_80015B3C(func_800EE2D4, D_80018600, 1);
    *(undefined4 *)(iVar2 + 0x14) = param_2;
    *(char *)(iVar2 + 0x2c) = (char)param_3;
    *(char *)(iVar2 + 0x2d) = (char)param_4;
    p[0x20] = 3;
    p[0x21] = 4;
    *(uint *)(p + 0x18) = *(uint *)(p + 0x18) | 0x200000;
    func_80034AB0(0x800e);
}

static inline int mul_800EE4F4(int a, int b)
{
    return a * b;
}
INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434", func_800EE4F4);

void func_800EE690(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80085A10[];
    extern int func_800EE4F4();
    extern int func_800F8B48();
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;

  iVar3 = 0;
  puVar4 = D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c;
  puVar4[0x20] = 3;
  puVar4[0x21] = 4;
  *(uint *)(puVar4 + 0x18) = *(uint *)(puVar4 + 0x18) | 0x200000;
  do {
    iVar2 = func_80015B3C(func_800EE4F4,func_800F8B48,1);
    func_800FE188(puVar4,iVar2 + 0x28);
    *(undefined1 *)(iVar2 + 0x30) = 0x7f;
    *(undefined1 *)(iVar2 + 0x31) = 0x7f;
    *(undefined1 *)(iVar2 + 0x32) = 0x7f;
    *(undefined1 *)(iVar2 + 0x34) = 0x7f;
    *(undefined1 *)(iVar2 + 0x35) = 0x7f;
    *(undefined1 *)(iVar2 + 0x36) = 0x7f;
    *(undefined1 *)(iVar2 + 0x38) = 5;
    uVar1 = GetTPage(0,1,0x280,0x100);
    *(undefined2 *)(iVar2 + 0x3a) = uVar1;
    uVar1 = GetClut(0x20,0x1f0);
    *(char *)(iVar2 + 0x14) = (char)iVar3;
    iVar3 = iVar3 + 1;
    *(undefined2 *)(iVar2 + 0x3c) = uVar1;
    *(undefined1 *)(iVar2 + 0x40) = 1;
    *(undefined2 *)(iVar2 + 0x42) = 0x14;
    *(undefined1 *)(iVar2 + 0x3e) = 0;
    *(undefined1 *)(iVar2 + 0x3f) = 0;
    *(undefined2 *)(iVar2 + 0x46) = 0x32;
    *(undefined2 *)(iVar2 + 0x44) = 0x32;
    *(int *)(iVar2 + 0x18) = (int)*(short *)(iVar2 + 0x2a);
  } while (iVar3 < 5);
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78__800DF7CC__800EE224__800EE434", func_800EE7D4);

static inline s32 mul_800EE8CC(s32 a, s32 b) {
    return a * b;
}

void func_800EE8CC(u8 *arg0) {
    extern u8 D_8008610C[];
    s32 ten = 10;
    s32 seventy = 0x46;
    s32 one = 1;
    s32 cnt;
    s32 st;
    s32 t;

    cnt = *(s16 *)(arg0 + 0x16);
    st = arg0[0x15];
    cnt += 1;
    switch (st) {
    case 0:
        *(s16 *)(arg0 + 0x3A) = mul_800EE8CC(cnt, 0x96) / ten;
        if (cnt >= 10) {
            st = one;
            cnt = 0;
            func_80034AB0(0x800F);
        }
        break;
    case 1:
        *(s16 *)(arg0 + 0x3C) = mul_800EE8CC(cnt, 0x640) / ten;
        if (cnt >= 10) {
            st = 2;
            cnt = 0;
            D_8008610C[0] = one;
        }
        break;
    case 2:
        t = ((seventy - cnt) * 0x7F) / seventy;
        arg0[0x32] = t;
        arg0[0x31] = t;
        arg0[0x30] = t;
        if (cnt >= 0x46) {
            st = 3;
            cnt = 0;
        }
        break;
    case 3:
        func_80013920(arg0);
        return;
    }
    arg0[0x15] = st;
    *(s16 *)(arg0 + 0x16) = cnt;
}
