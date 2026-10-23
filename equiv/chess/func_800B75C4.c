#include "common.h"

#include "ghidra.h"
undefined4 func_800B75C4(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + (uint)*(byte *)(param_1 + 0x26) * 2 + 8) = (char)param_3;
  *(char *)(param_1 + (uint)*(byte *)(param_1 + 0x26) * 2 + 9) = (char)param_2;
  *(char *)(param_1 + 0x26) = *(char *)(param_1 + 0x26) + '\x01';
  if ((*(byte *)(param_1 + 2) != param_3) ||
     ((uVar1 = 0, *(byte *)(param_1 + 3) == param_2 &&
      (uVar1 = 1, (uint)*(byte *)(param_1 + 0x27) != param_4 + param_5)))) {
    uVar1 = 0;
  }
  return uVar1;
}
