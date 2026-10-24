#include "common.h"

s32 func_800BEB68(void)
{
  extern u16 D_8006AF80[];
  extern M2C_UNK D_80091618[];
  s8 *new_var;
  new_var = D_80091618;
  *((s32 *) (((s8 *) (((*D_8006AF80) * 0x1A8) + new_var)) + 0xC4)) = 0;
  new_var = ((s8 *) (((*D_8006AF80) * 0x1A8) + new_var)) + 0xCC;
  *((s32 *) new_var) = 0;
  return 0;
}
