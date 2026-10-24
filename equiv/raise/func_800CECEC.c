#include "common.h"

#include "ghidra.h"
void func_800CECEC(undefined4 param_1,int param_2,int param_3)

{
    extern M2C_UNK D_80100F38[];
  uint uVar1;
  
  uVar1 = func_800B1260();
  func_800D0730((uVar1 & 0xffff) * 0x79c + -0x7fefeedc,(param_2 + -1) * 0x10000 >> 0x10,
                (param_3 + -1) * 0x10000 >> 0x10,0);
  return;
}
