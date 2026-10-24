#include "common.h"

#include "ghidra.h"
uint func_800A8830(int param_1,int param_2,int param_3)

{
    extern M2C_UNK D_80063940[];
  uint uVar1;
  
  param_1 = param_1 + param_3 * 0x7c + param_2 * 0x2e8;
  if (*(char *)(param_1 + 0x5e8) == 'c') {
    uVar1 = func_800CA664((int)*(short *)(*(int *)(param_1 + 0x658) + 100));
  }
  else {
    uVar1 = *(uint *)((uint)*(byte *)(param_1 + 0x5e8) * 0x3c + -0x7ff9c6b8) >> 0xc & 3;
  }
  return uVar1;
}
