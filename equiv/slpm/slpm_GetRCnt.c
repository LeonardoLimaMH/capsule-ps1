#include "common.h"

#include "ghidra.h"
undefined2 slpm_GetRCnt(uint param_1)

{
    extern s32 D_80120898[];
  undefined2 uVar1;
  
  if ((param_1 & 0xffff) < 3) {
    uVar1 = *(undefined2 *)((param_1 & 0xffff) * 0x10 + (*D_80120898));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
