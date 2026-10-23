#include "common.h"

#include "ghidra.h"
undefined4 func_800C77A4(undefined4 param_1,undefined4 param_2,int param_3)

{
    extern u16 D_8008EE54[];
  undefined4 uVar1;
  
  if ((*D_8008EE54) == 0) {
    uVar1 = 0;
    if (*(char *)(param_3 + 0x22) == *(char *)(param_3 + 0x17)) {
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 1;
      func_80034AB0(4);
      func_80012668();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
    if (((*D_8008EE54) == 1) && (uVar1 = 0, *(short *)(*(int *)(param_3 + 0x70) + 0x24) < 0)) {
      *(undefined1 *)(param_3 + 0x17) = 1;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x1040040;
      uVar1 = 1;
    }
  }
  return uVar1;
}
