#include "common.h"
#include "ghidra.h"

void func_800FE958(s32 arg0, s32 arg1, s32 arg2)
{
  extern M2C_UNK D_80119710[];
  s8 *new_var;
  new_var = (s8 *) D_80119710;
  *((u16 *) (((s8 *) D_80119710) + 0x34)) = (u16) ((*((u16 *) (new_var + 0x34))) + arg0);
  *((u16 *) (((s8 *) D_80119710) + 0x36)) = (u16) ((*((u16 *) (((s8 *) D_80119710) + 0x36))) + arg1);
  *((u16 *) (((s8 *) D_80119710) + 0x38)) = (u16) ((*((u16 *) (((s8 *) D_80119710) + 0x38))) + arg2);
}
