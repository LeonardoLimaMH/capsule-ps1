#include "common.h"

#include "ghidra.h"
void func_8009B774(int param_1)

{
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008EE44[];
    extern s32 D_8008EE48[];
  int iVar1;
  uint uVar2;
  
  if ((D_8008EE44 == 9) && (D_8008EE48 == 0)) {
    iVar1 = *(int *)(param_1 + 0x84) + -1;
    *(int *)(param_1 + 0x84) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x84) = 100;
    }
    if (0xe < *(int *)(param_1 + 0x84)) {
      uVar2 = *(uint *)(param_1 + 0x38) & 0xfffffffe;
      goto L8009B7E4;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x38) | 1;
L8009B7E4:
  *(uint *)(param_1 + 0x38) = uVar2;
  return;
}
