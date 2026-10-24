#include "common.h"

#include "ghidra.h"
void func_8009B7EC(int param_1)

{
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3AEC[];
    extern s32 D_8008EE44[];
    extern s32 D_8008EE48[];
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = (*D_800B3AEC);
  if ((D_8008EE44 == 9) && (D_8008EE48 != 0)) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    uVar2 = 0x30;
    if (*(int *)(param_1 + 0x84) == iVar1) {
      uVar2 = 0x80;
    }
    *(undefined1 *)(param_1 + 0x5a) = uVar2;
    *(undefined1 *)(param_1 + 0x59) = uVar2;
    *(undefined1 *)(param_1 + 0x58) = uVar2;
  }
  else {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  }
  return;
}
