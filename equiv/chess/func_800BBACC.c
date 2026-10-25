#include "common.h"

#include "ghidra.h"
undefined4 func_800BBACC(undefined4 param_1,undefined4 param_2,int param_3)

{
    extern u16 D_8008EE54[];
  undefined4 uVar1;
  
  if ((*D_8008EE54) == 0) {
    *(undefined1 *)(param_3 + 0x17) = 0x8a;
    *(undefined1 *)(param_3 + 0x24) = 0x45;
    *(undefined1 *)(param_3 + 0x23) = 1;
    func_80012668();
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (((*D_8008EE54) == 1) && (uVar1 = 0, *(short *)(*(int *)(param_3 + 0x70) + 0x24) < 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}
