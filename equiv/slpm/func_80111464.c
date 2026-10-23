#include "common.h"

#include "ghidra.h"
void func_80111464(int param_1)

{
    extern s32 D_801100D0[];
  int iVar1;
  uint uVar2;
  int iStack_18;
  
  iStack_18 = 0x800000;
  iVar1 = *(int *)(param_1 + 0x2c);
  while (iVar1 == 0) {
    iStack_18 = iStack_18 + -1;
    if (iStack_18 == 0) {
      slpm_printf(D_801100D0);
      *(undefined4 *)(param_1 + 0x2c) = 1;
      uVar2 = (uint)(*(int *)(param_1 + 0x20) == 0);
      *(uint *)(param_1 + 0x20) = uVar2;
      *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_1 + uVar2 * 8 + 0x10);
      *(undefined2 *)(param_1 + 0x26) =
           *(undefined2 *)(param_1 + *(int *)(param_1 + 0x20) * 8 + 0x12);
    }
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}
