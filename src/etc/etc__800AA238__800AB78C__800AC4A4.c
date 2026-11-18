#include "common.h"

#include "ghidra.h"

void func_800AC4A4(void *arg0)
{
  extern u8 D_8008ED68[];
  extern u8 D_800B3D20[];
  extern u16 D_800B39C0[];
  register s8 *p asm("a1") = (s8 *) arg0;
  u8 *d = D_8008ED68;
  register s16 var_v1 asm("v1");
  s32 var_v0;

  if (*((u16 *) (d + 0xDC)) == 5)
  {
    *((volatile s32 *) (p + 0x38)) = (*((s32 *) (p + 0x38))) & (~1);
    if (*((u16 *) (d + 0xE0)) == 1)
    {
      register u16 *tbl asm("v0") = D_800B39C0;
      register s32 m asm("a0") = ~8;
      var_v1 = tbl[*((s32 *) (p + 0x80))];
      *((s32 *) (p + 0x38)) = (*((s32 *) (p + 0x38))) & m;
      *((s16 *) (p + 0x46)) = var_v1;
      return;
    }
    if ((*((u16 *) (d + 0xE0)) == 4) && ((*D_800B3D20) == 0))
    {
      var_v1 = -2;
      if ((*((s32 *) (p + 0x84))) != 0)
      {
        var_v1 = 2;
      }
      *((s16 *) (p + 0x6A)) = var_v1;
      var_v0 = (*((s32 *) (p + 0x38))) | 8;
      goto store;
    }
  }
  else if (*((u16 *) (d + 0xDC)) < 7U)
  {
    var_v0 = ((*((s32 *) (p + 0x38))) | 1) & (~8);
  store:
    *((s32 *) (p + 0x38)) = var_v0;
  }
}

