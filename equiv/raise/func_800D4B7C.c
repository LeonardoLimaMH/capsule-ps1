#include "common.h"

#include "ghidra.h"
void func_800D4B7C(undefined4 param_1,uint param_2)

{
    extern M2C_UNK D_80100F38[];
  int iVar1;
  
  iVar1 = (param_2 & 0xffff) * 0x79c;
  if (*(int *)(iVar1 + -0x7fefef48) != 0) {
    func_80013928();
    *(undefined4 *)(iVar1 + -0x7fefef48) = 0;
  }
  return;
}
