#include "common.h"

#include "ghidra.h"
void func_800A88DC(int param_1)

{
    extern s16 D_8006AF90[];
    extern u16 D_8008EE44[];
  undefined4 uVar1;
  int iVar2;
  
  if ((((*D_8008EE44) == 8) &&
      (iVar2 = *(int *)(param_1 + 0x84), -1 < *(short *)(iVar2 * 2 + -0x7ff9506e))) &&
     (iVar2 < (*D_8006AF90))) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    uVar1 = func_80019F30(0x6000c,*(short *)(iVar2 * 2 + -0x7ff9506e) + 0x59);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  else {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  }
  return;
}
