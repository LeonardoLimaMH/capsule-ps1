#include "common.h"

#include "ghidra.h"
void func_800ACEDC(void *arg0)
{
  extern u8 D_8008ED68[];
  extern u8 D_800B3D20[];
  s16 var_v1;
  s32 temp_a1;
  s32 var_v0;
  s8 *new_var;
  new_var = (s8 *) D_8008ED68;
  if ((*((u16 *) (new_var + 0xDC))) == 5)
  {
    temp_a1 = (*((s32 *) (((s8 *) arg0) + 0x38))) & (~1);
    *((s32 *) (((s8 *) arg0) + 0x38)) = temp_a1;
    if ((*((u16 *) (((s8 *) D_8008ED68) + 0xE0))) == 1)
    {
      var_v0 = temp_a1 & (~8);
      goto block_10;
    }
    if (((*((u16 *) (((s8 *) D_8008ED68) + 0xE0))) == 4) && ((*D_800B3D20) == 0))
    {
      var_v1 = -2;
      if ((*((s32 *) (((s8 *) arg0) + 0x7C))) != 0)
      {
        var_v1 = 2;
      }
      *((s16 *) (((s8 *) arg0) + 0x6A)) = var_v1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 8;
      goto block_10;
    }
  }
  else
    if (((u16) (*((u16 *) (((s8 *) D_8008ED68) + 0xDC)))) < 7U)
  {
    var_v0 = ((*((s32 *) (((s8 *) arg0) + 0x38))) | 1) & (~8);
    block_10:
    *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;

  }
}
