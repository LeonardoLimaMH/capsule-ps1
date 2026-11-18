#include "common.h"

#include "ghidra.h"

void func_800AC570(void *arg0)
{
  extern u8 D_8008ED68[];
  extern u8 D_800B3D20[];
  u8 *d = D_8008ED68;
  s16 var_v1;
  s32 var_v0;
  if (*((u16 *) (d + 0xDC)) == 5)
  {
    *((s32 *) (((s8 *) arg0) + 0x38)) = (*((s32 *) (((s8 *) arg0) + 0x38))) & (~1);
    if (*((u16 *) (d + 0xE0)) == 1)
    {
      *((s16 *) (((s8 *) arg0) + 0x52)) = *((u16 *) (((s8 *) arg0) + 0x52)) + *((u16 *) (((s8 *) arg0) + 0x76));
      if ((*((s16 *) (((s8 *) arg0) + 0x52))) >= 0x1000)
      {
        *((s16 *) (((s8 *) arg0) + 0x76)) = 0;
        *((s16 *) (((s8 *) arg0) + 0x52)) = 0x1000;
        *D_800B3D20 = 1;
      }
      return;
    }
    if ((*((u16 *) (d + 0xE0)) == 4) && ((*D_800B3D20) == 0))
    {
      var_v1 = -2;
      if ((*((s32 *) (((s8 *) arg0) + 0x84))) != 0)
      {
        var_v1 = 2;
      }
      *((s16 *) (((s8 *) arg0) + 0x6A)) = var_v1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 8;
      goto store;
    }
  }
  else
  {
    s32 cond = *((u16 *) (d + 0xDC)) < 7U;
    s32 m = ~8;
    if (!cond)
    {
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & m;
    }
    else
    {
      var_v0 = ((*((s32 *) (((s8 *) arg0) + 0x38))) | 1) & m;
    }
    store:
    *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
  }
}

