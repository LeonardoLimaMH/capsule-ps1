#include "common.h"

#include "ghidra.h"
void func_800B0A94(uint param_1,undefined2 param_2)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
  int iVar1;
  
  *(undefined2 *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e84c) = param_2;
  iVar1 = (param_1 & 0xffff) * 0x79c;
  *(undefined2 *)(iVar1 + -0x7fefed5a) = param_2;
  *(uint *)(iVar1 + -0x7fefe930) = *(uint *)(iVar1 + -0x7fefe930) & 0xffffffe7;
  return;
}
