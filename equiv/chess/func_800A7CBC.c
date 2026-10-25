#include "common.h"

#include "ghidra.h"
undefined4 func_800A7CBC(int param_1,int param_2,int param_3,int param_4,int param_5)

{
    extern u8 D_80063940[];
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_5 == 6) {
    uVar1 = *(uint *)((uint)*(byte *)(param_1 + param_4 * 0x7c + param_3 * 0x2e8 + 0x5e8) * 0x3c +
                     -0x7ff9c6a0) >> 7;
  }
  else {
    uVar1 = *(uint *)((uint)*(byte *)(param_1 + param_4 * 0x7c + param_3 * 0x2e8 + 0x5e8) * 0x3c +
                     -0x7ff9c6a0) >> 0xb;
  }
  if ((*(short *)(param_2 + 0x24) < 0) || ((uVar1 & 0xf) < 2)) {
    uVar2 = 3;
  }
  else if ((*(short *)(param_2 + 0x24) == 0) &&
          ((*(int *)(param_2 + 0x20) == (uVar1 & 0xf) - 2 &&
           (uVar2 = 1, *(short *)(param_2 + 0x26) != 0)))) {
    uVar2 = 2;
  }
  return uVar2;
}
