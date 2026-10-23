#include "common.h"

#include "ghidra.h"
undefined4 func_800B5F44(int param_1,int param_2)

{
    extern M2C_UNK D_800EE5D0[];
    extern M2C_UNK D_800EEB9C[];
  undefined4 uVar1;
  
  if (param_1 < 2) {
    uVar1 = func_800B6D98
                      (1,((param_1 % 2) * 0x24 + 0x38) * 0x10000 >> 0x10,
                       ((param_1 / 2) * 0xe + 0x24) * 0x10000 >> 0x10,6,0,(*D_800EE5D0),
                       *(undefined4 *)(param_1 * 0x24 + param_2 * 4 + -0x7ff10ea4),1,1,0,2,1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
