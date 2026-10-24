#include "common.h"

#include "ghidra.h"
void func_800E10BC(uint param_1)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1 & 0xffff) * 0x79c;
  iVar2 = *(int *)(iVar1 + -0x7fefef44);
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
  *(undefined4 *)(iVar1 + -0x7fefef40) = 4;
  iVar1 = (param_1 & 0xffff) * 0x1a8;
  *(undefined2 *)(iVar1 + -0x7ff6e84e) = 0xffff;
  *(undefined2 *)(iVar1 + -0x7ff6e850) = 0xffff;
  return;
}
