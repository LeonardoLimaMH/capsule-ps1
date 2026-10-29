#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libapi_counter", SetRCnt);

#include "ghidra.h"
undefined2 GetRCnt(uint param_1)
{
  extern s32 D_80078B40[];
  s32 new_var2;
  int new_var;
  undefined2 uVar1;
  new_var = param_1 & 0xffff;
  if (new_var < 3)
  {
    uVar1 = (new_var2 = *((undefined2 *) ((new_var * 0x10) + (new_var2 = *D_80078B40))));
  }
  else
  {
    uVar1 = 0;
  }
  return uVar1;
}

#include "ghidra.h"
bool StartRCnt(long param_1)
{
  extern void *D_80078B3C[];
  int new_var;
  extern u8 D_80078B44[];
  new_var = (param_1 & 0xffff) * 4;
  *((uint *) ((*D_80078B3C) + 4)) = (*((uint *) ((*D_80078B3C) + 4))) | (*((uint *) (D_80078B44 + new_var)));
  return (param_1 & 0xffff) < 3;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libapi_counter", StopRCnt);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libapi_counter", ResetRCnt);
