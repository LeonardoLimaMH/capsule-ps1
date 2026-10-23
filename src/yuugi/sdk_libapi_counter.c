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

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libapi_counter", StartRCnt);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libapi_counter", StopRCnt);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libapi_counter", ResetRCnt);
