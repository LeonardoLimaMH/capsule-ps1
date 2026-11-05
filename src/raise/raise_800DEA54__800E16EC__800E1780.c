#include "common.h"

typedef struct {
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    u8 pad[0x108];
} S_80105320;

extern S_80105320 D_80105320[];

extern u8 D_800F07E4[];
extern u8 D_80100F38[];
void func_800E1780(void) {
    u16 i;
    s32 k;
    u8 *rec;

    for (i = 0; i < 6; i++) {
        rec = (u8 *)D_80105320 + i * 0x110;
        *(s16 *)(rec + 0) = 0;
        *(s16 *)(rec + 2) = 0;
        *(s16 *)(rec + 4) = 0;
        *(s16 *)(rec + 6) = 0;
        for (k = 0; k < 0x20; k++) {
            *(s16 *)(rec + k * 8 + 0x10) = 0;
            *(s16 *)(rec + k * 8 + 0x12) = 0;
            *(u8 **)(rec + 0xC) = D_800F07E4;
        }
    }
}

s32 func_800E17F8(s32 idx) {
    return D_80105320[idx & 0xFFFF].d == 0;
}

s32 func_800E1820(s32 idx) {
    return D_80105320[idx & 0xFFFF].a != 0;
}

void func_800E1848(s32 idx)
{
  s16 *new_var;
  u8 *new_var2;
  new_var2 = (u8 *) D_80105320;
  new_var = (s16 *) (new_var2 + (0x110 * (idx & 0xFFFF)));
  if (D_80105320)
  {
    *new_var = 0;
  }
  else
  {
    if (1)
    {
    }
    *new_var = 0;
  }
}

void func_800E186C(s32 unused, s32 idx) {
    u8 *rec = (u8 *)D_80105320 + (idx & 0xFFFF) * 0x110;
    u8 *slot = rec + *(s16 *)(rec + 2) * 8;
    s32 next;
    u8 *dst;
    s32 val;
    s32 val2;

    *(s16 *)(rec + 0) = 1;
    next = *(s16 *)(rec + 2) + 1;
    *(u16 *)(rec + 8) = *(u16 *)(slot + 0x10);
    *(u16 *)(rec + 0xA) = *(u16 *)(slot + 0x12);
    val = *(s32 *)(slot + 0x14);
    *(u16 *)(rec + 6) -= 1;
    *(s32 *)(rec + 0xC) = val;
    *(s16 *)(rec + 2) = next % 31;

    dst = D_80100F38 + (idx & 0xFFFF) * 0x79C;
    *(u16 *)(dst + 0x2C0) = *(u16 *)(dst + 0x2B8) = *(u16 *)(rec + 8);
    *(u16 *)(dst + 0x2C2) = *(u16 *)(dst + 0x2BA) = *(u16 *)(rec + 0xA);
    val2 = *(s32 *)(rec + 0xC);
    *(s16 *)(dst + 0x2C8) = 0;
    *(s16 *)(dst + 0x2CA) = 0;
    *(s32 *)(dst + 0x2BC) = val2;
}

void func_800E194C(s32 unused, s32 idx, s16 x, s16 y, s32 value) {
    u8 *rec = (u8 *)D_80105320 + (idx & 0xFFFF) * 0x110;
    u8 *slot = rec + *(s16 *)(rec + 4) * 8;
    s32 next;

    *(s16 *)(slot + 0x10) = x;
    *(s16 *)(slot + 0x12) = y;
    *(s32 *)(slot + 0x14) = value;
    next = *(s16 *)(rec + 4) + 1;
    *(u16 *)(rec + 6) += 1;
    *(s16 *)(rec + 4) = next % 31;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC__800E1780", func_800E19D0);
