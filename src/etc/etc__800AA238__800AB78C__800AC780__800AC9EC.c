#include "common.h"

#include "ghidra.h"
INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C__800AC780__800AC9EC", func_800AC9EC);

void func_800ACC04(void *arg0)
{
  extern u8 D_8008ED68[];
  extern u8 D_800B3D20[];
  u8 *d = D_8008ED68;
  s16 var_v1;
  s32 temp_v1;
  s32 var_v0;
  if (*((u16 *) (d + 0xDC)) == 6)
  {
    temp_v1 = (*((s32 *) (((s8 *) arg0) + 0x38))) & (~1);
    *((s32 *) (((s8 *) arg0) + 0x38)) = temp_v1;
    if (*((u16 *) (d + 0xE0)) == 0)
    {
      if ((*D_800B3D20) != 0)
      {
        return;
      }
      var_v1 = 2;
      if ((*((s32 *) (((s8 *) arg0) + 0x84))) != 0)
      {
        var_v1 = -2;
      }
      *((s16 *) (((s8 *) arg0) + 0x6A)) = var_v1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 8;
    }
    else
    {
      var_v0 = temp_v1 & (~8);
    }
  }
  else if (*((u16 *) (d + 0xDC)) == 8)
  {
    temp_v1 = ~1;
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & temp_v1;
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}
