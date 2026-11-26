#include "common.h"
#include "yuugi.h"

typedef struct {
    u32 mode;
    void *crect;
    u32 *caddr;
    void *prect;
    u32 *paddr;
} Tim;
extern s32 ReadTIM();
extern s32 func_80019F30();
extern u8 D_80069AD4[];
extern s32 D_80069C08[];

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0__8002C214", func_8002C214);

#include "ghidra.h"
uint func_8002C438(undefined2 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((param_4 & 0xffff) * 8 + param_2);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  func_8002C4E8(param_1,param_3);
  return param_4 & 0xffff;
}

#include "ghidra.h"
uint func_8002C490(undefined2 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((param_4 & 0xffff) * 8 + param_2);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  func_8002C4E8(param_1,param_3);
  return param_4 & 0xffff;
}

void func_8002C4E8(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) + M2C_FIELD(arg1, u16 *, 0));
        M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) + M2C_FIELD(arg1, u16 *, 2));
        M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) + M2C_FIELD(arg1, u16 *, 4));
    }
}

void func_8002C534(u8 *dst, u8 *src, s32 mode) {
    u8 r = src[0], g = src[1], b = src[2];
    s32 h;
    switch (mode) {
    case 4:
        if ((b | (r | g)) == 0) r = g = b = 0x80;
        dst[0] = r;
        dst[1] = g;
        dst[2] = b;
        dst[3] = 0x24;
        break;
    case 5:
        if ((r | g | b) == 0) r = g = b = 0x80;
        dst[0] = r;
        dst[1] = g;
        dst[2] = b;
        dst[3] = 0x30;
        break;
    default:
        if ((mode == 1 || mode == 3) && (r | g | b) == 0)
            r = g = b = 0x80;
        h = mode / 2;
        dst[0] = r;
        dst[1] = g;
        dst[2] = b;
        dst[3] = h * 16 + 0x28 + (mode - h * 2) * 4;
        break;
    }
}

void func_8002C610(void)
{
    u8 *base = D_80069AD4;

    switch (*(s32 *)(base + 0x130)) {
    case 0:
        return;
    case 1:
        *(s16 *)(base + 0x168) = (*(s16 *)(base + 0x148) - *(s16 *)(base + 0xE8)) >> 5;
        *(s16 *)(base + 0x16A) = (*(s16 *)(base + 0x14A) - *(s16 *)(base + 0xEA)) >> 5;
        *(s16 *)(base + 0x16C) = (*(s16 *)(base + 0x14C) - *(s16 *)(base + 0xEC)) >> 5;
        break;
    case 2:
        *(s32 *)(base + 0x158) = (*(s32 *)(base + 0x138) - *(s32 *)(base + 0xD8)) >> 5;
        *(s32 *)(base + 0x15C) = (*(s32 *)(base + 0x13C) - *(s32 *)(base + 0xDC)) >> 5;
        *(s32 *)(base + 0x160) = (*(s32 *)(base + 0x140) - *(s32 *)(base + 0xE0)) >> 5;
        break;
    case 3:
        *(s16 *)(base + 0x170) = (*(s16 *)(base + 0x150) - *(s16 *)(base + 0xB0)) >> 5;
        *(s16 *)(base + 0x172) = (*(s16 *)(base + 0x152) - *(s16 *)(base + 0xB2)) >> 5;
        *(s16 *)(base + 0x174) = (*(s16 *)(base + 0x154) - *(s16 *)(base + 0xB4)) >> 5;
        break;
    }
    D_80069C08[0] = 0x20;
}

extern u8 D_80069AD4[];
void func_8002C728(void)
{
    s16 *a;
    s32 *w;
    s16 *c;
    u8 *base = D_80069AD4;
    *(s32 *)(base + 0x130) = 0;
    a = (s16 *)(base + 0x168);
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    w = (s32 *)(base + 0x158);
    w[0] = 0;
    w[1] = 0;
    w[2] = 0;
    c = (s16 *)(base + 0x170);
    c[0] = 0;
    c[1] = 0;
    c[2] = 0;
}

void func_8002C768(void) {
    u8 *base = D_80069AD4;
    u8 *q;
    s16 *a;
    s32 *w;
    s16 *b;
    s32 x, y, z, pos;
    switch (*(s32 *)(base + 0x130)) {
    case 0:
        return;
    case 1:
        *(s16 *)(base + 0xE8) = (*(s16 *)(base + 0xE8) + *(s16 *)(base + 0x168)) % 4096;
        *(s16 *)(base + 0xEA) = (*(s16 *)(base + 0xEA) + *(s16 *)(base + 0x16A)) % 4096;
        *(s16 *)(base + 0xEC) = (*(s16 *)(base + 0xEC) + *(s16 *)(base + 0x16C)) % 4096;
        break;
    case 2:
        pos = *(s32 *)(base + 0xD8);
        x = *(s32 *)(base + 0x158);
        y = *(s32 *)(base + 0x15C);
        z = *(s32 *)(base + 0x160);
        *(s32 *)(base + 0xD8) = pos + x;
        *(s32 *)(base + 0xDC) += y;
        *(s32 *)(base + 0xE0) += z;
        break;
    case 3:
        *(s16 *)(base + 0xB0) = (*(s16 *)(base + 0xB0) + *(s16 *)(base + 0x170)) % 4096;
        *(s16 *)(base + 0xB2) = (*(s16 *)(base + 0xB2) + *(s16 *)(base + 0x172)) % 4096;
        *(s16 *)(base + 0xB4) = (*(s16 *)(base + 0xB4) + *(s16 *)(base + 0x174)) % 4096;
        break;
    }
    q = D_80069AD4;
    if (--*(s32 *)(q + 0x134) == 0) {
        *(s32 *)(q + 0x130) = 0;
        a = (s16 *)(q + 0x168);
        a[0] = 0;
        a[1] = 0;
        a[2] = 0;
        w = (s32 *)(q + 0x158);
        w[0] = 0;
        w[1] = 0;
        w[2] = 0;
        b = (s16 *)(q + 0x170);
        b[0] = 0;
        b[1] = 0;
        b[2] = 0;
    }
}
