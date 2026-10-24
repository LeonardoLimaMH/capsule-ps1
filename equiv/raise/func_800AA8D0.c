#include "common.h"

#include "ghidra.h"
void func_800AA8D0(uint param_1)

{
    extern M2C_UNK D_80100F38[];
  int iVar1;
  
  iVar1 = (param_1 & 0xffff) * 0x79c;
  *(undefined1 *)(iVar1 + (*(uint *)(iVar1 + -0x7fefe930) >> 0x1a & 0x1f) + -0x7fefed19) = 0;
  *(uint *)(*(int *)(iVar1 + -0x7fefef3c) + 0x38) =
       *(uint *)(*(int *)(iVar1 + -0x7fefef3c) + 0x38) | 1;
  return;
}
