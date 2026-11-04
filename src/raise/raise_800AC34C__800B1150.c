#include "common.h"

typedef struct {
    u16 f_0;
    u8 _p2[0x88];
    u16 f_8A;
    u8 _p8C[0x2A];
    s16 f_B6;
    s16 f_B8;
    s16 f_BA;
    s16 f_BC;
    u8 _pBE[0xEA];
} S_80091618;
extern s32 func_800202A4(s32);
extern S_80091618 D_80091618[];

void func_800B1150(void) {
    extern s32 D_800EEB64[];
    extern s32 D_800EEB68[];
    extern s32 D_800EEB6C[];
    extern s32 D_800EEB70[];
    extern s32 D_800EEB74[];
    extern s32 D_800EEB78[];
    extern s32 D_800EEB7C[];
    extern s32 D_800EEB80[];
    (*D_800EEB64) = 0;
    (*D_800EEB68) = 5;
    (*D_800EEB6C) = 0;
    (*D_800EEB70) = 0;
    (*D_800EEB74) = 0;
    (*D_800EEB78) = 0;
    (*D_800EEB7C) = 0;
    (*D_800EEB80) = 0;
}

s32 func_800B1198(void)
{
  extern u8 D_800EEB58[];
  extern struct { u8 pad[0x30]; u16 f_30[10]; } D_8006AFCC;
  s32 r;
  s32 i;

  r = 0;
  for (i = 0; i < 10; i++)
  {
    if (D_800EEB58[i] != 0 && D_8006AFCC.f_30[i] == 1)
    {
      r |= 1;
    }
  }
  return r;
}

extern u16 D_8006AF80[];
extern s32 D_800EEB70[];
extern u16 D_800EF2D8[];

void func_800B11F4(void) {
    register s32 value16 asm("t2") = 0xFFFF;
    register s32 value32 asm("t0") = -1;
    u8 *b = (u8 *)D_80091618;
    register s32 p asm("a2") = (s32)b;
    s32 off = 0;
    s32 end = p + 0x9F0;
    s32 j;
    s32 q;
    s32 o;
    do {
        *(s16 *)(p + 0x12) = 0;
        j = 0;
        o = off;
        q = p;
        do {
            u8 *x = (u8 *)(o + (s32)b);
            o += 0xC;
            *(u16 *)(q + 0x14) = value16;
            *(s32 *)(x + 0x1C) = value32;
            *(s32 *)(x + 0x20) = value32;
            *(s32 *)(x + 0x24) = value32;
            q += 2;
        } while (++j < 3);
        p += 0x1A8;
        off += 0x1A8;
    } while (p < end);
}

u16 func_800B1260(s32 which)
{
  if ((*D_800EEB70) == 0)
  {
    if (which == 1)
    {
      return *D_8006AF80;
    }
    return D_80091618[*D_8006AF80].f_8A;
  }
  if (which == 1)
  {
    if (which)
    {
      return *D_8006AF80;
    }
    else
    {
      return *D_8006AF80;
    }
  }
  return *D_800EF2D8;
}

u16 func_800B12D8(s32 which)
{
  if ((*D_800EEB70) == 0)
  {
    if (which == 1)
    {
      return D_80091618[*D_8006AF80].f_8A;
    }
    return *D_8006AF80;
  }
  if (which != 1)
  {
    return *D_8006AF80;
  }
  return *D_800EF2D8;
}

u16 func_800B1350(s32 which)
{
  if ((*D_800EEB70) == 0)
  {
    if (which == 1)
    {
      return *D_8006AF80;
    }
    return D_80091618[*D_8006AF80].f_8A;
  }
  return *D_800EF2D8;
}

u16 func_800B13C4(s32 which)
{
  if ((*D_800EEB70) == 0)
  {
    if (which == 1)
    {
      return *D_8006AF80;
    }
    return D_80091618[*D_8006AF80].f_8A;
  }
  if (which == 1)
  {
    if (which || D_8006AF80)
    {
      return *D_8006AF80;
    }
    else
    {
      return *D_8006AF80;
    }
  }
  return *D_800EF2D8;
}

void func_800B143C(s32 arg0, s32 arg1)
{
  int new_var2;
  extern u8 D_80063940[];
  u8 *new_var;
  u8 (*new_var3)[];
  extern u8 D_800EEB54[];
  new_var3 = &D_80063940;
  if (1)
  {
    new_var = (D_80091618[arg0 & 0xFFFF].f_0 * 0x3C) + (*new_var3);
    ((struct 
    {
      u8 _p[0];
      s16 v;
    } *) D_800EEB54)->v = (s16) ((((u32) (*((u32 *) (((s8 *) new_var) + 0x18)))) >> 0xE) & 7);
    ((struct 
    {
      u8 _p[2];
      s16 v;
    } *) D_800EEB54)->v = (s16) ((((u32) (*((u32 *) (((s8 *) ((D_80091618[new_var2 = arg1 & 0xFFFF].f_0 * 0x3C) + (*new_var3))) + 0x18)))) >> 0xE) & 7);
  }
}

s32 func_800B14EC(u32 a, u32 b)
{
  S_80091618 *t = D_80091618;
  S_80091618 *pa = &t[a & 0xFFFF];
  S_80091618 *pb = &t[b & 0xFFFF];
  if (pa->f_BC > pb->f_BC) return 0;
  if (pa->f_BC < pb->f_BC) return 1;
  if (pa->f_B6 > pb->f_B6)
  {
    return 0;
  }
  if (pa->f_B6 < pb->f_B6) return 1;
  if (pa->f_B8 > pb->f_B8) return 0;
  if (pa->f_B8 < pb->f_B8) return 1;
  return func_800202A4(2);
}
