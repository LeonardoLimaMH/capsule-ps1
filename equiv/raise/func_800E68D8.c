#include "common.h"

#include "ghidra.h"
void func_800E68D8(uint param_1)

{
    extern M2C_UNK D_80091618[];
  int iVar1;
  
  iVar1 = (param_1 & 0xffff) * 0x1a8;
  *(ushort *)(iVar1 + -0x7ff6e846) = *(ushort *)(iVar1 + -0x7ff6e846) / 0x18;
  func_800A752C();
  *(undefined2 *)(iVar1 + -0x7ff6e846) = 0;
  return;
}
