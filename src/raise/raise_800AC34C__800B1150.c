#include "common.h"

typedef struct {
    u16 f_0;
    u8 _p2[0x88];
    u16 f_8A;
    u8 _p8C[0x11C];
} S_80091618;
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B1150", func_800B1198);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B1150", func_800B11F4);

#include "common.h"
extern u16 D_8006AF80[];
extern s32 D_800EEB70[];
extern u16 D_800EF2D8[];
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B1150", func_800B12D8);

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

#include "common.h"
extern u16 D_8006AF80[];
extern s32 D_800EEB70[];
extern u16 D_800EF2D8[];
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

#include "common.h"
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B1150", func_800B14EC);
