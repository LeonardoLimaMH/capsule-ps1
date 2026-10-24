#include "common.h"

#include "ghidra.h"
int func_800AECC8(uint param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
  int iVar1;
  
  param_1 = param_1 & 0xffff;
  if (*(short *)(param_1 * 0x1a8 + -0x7ff6e9d8) == -1) {
    iVar1 = -1;
  }
  else if (param_1 == (*D_8006AF80)) {
    iVar1 = 1;
  }
  else {
    iVar1 = (uint)(param_1 != *(ushort *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e)) << 1;
  }
  return iVar1;
}
