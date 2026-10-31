#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libapi_counter", slpm_SetRCnt);

#include "common.h"
#include "ghidra.h"



undefined2 slpm_GetRCnt(uint param_1)
{
  extern s32 D_80120898[];
  s32 new_var2;
  int new_var;
  undefined2 uVar1;
  new_var = param_1 & 0xffff;
  if (new_var < 3)
  {
    uVar1 = (new_var2 = *((undefined2 *) ((new_var * 0x10) + (new_var2 = *D_80120898))));
  }
  else
  {
    uVar1 = 0;
  }
  return uVar1;
}

#include "common.h"
#include "ghidra.h"



bool slpm_StartRCnt(long param_1)
{
  extern void *D_80120894[];
  int new_var;
  extern u8 D_8012089C[];
  new_var = (param_1 & 0xffff) * 4;
  *((uint *) ((*D_80120894) + 4)) = (*((uint *) ((*D_80120894) + 4))) | (*((uint *) (D_8012089C + new_var)));
  return (param_1 & 0xffff) < 3;
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libapi_counter", slpm_StopRCnt);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libapi_counter", slpm_ResetRCnt);
