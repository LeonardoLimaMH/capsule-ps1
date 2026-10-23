#include "common.h"

#include "ghidra.h"
void func_800ACC04(int param_1)

{
    extern M2C_UNK D_8008ED68[];
    extern u8 D_800B3D20[];
    extern s32 D_8008EE44[];
    extern s32 D_8008EE48[];
  uint uVar1;
  undefined2 uVar2;
  
  if (D_8008EE44 == 6) {
    uVar1 = *(uint *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = uVar1 & 0xfffffffe;
    if (D_8008EE48 == 0) {
      if ((*D_800B3D20) != '\0') {
        return;
      }
      uVar2 = 2;
      if (*(int *)(param_1 + 0x84) != 0) {
        uVar2 = 0xfffe;
      }
      *(undefined2 *)(param_1 + 0x6a) = uVar2;
      uVar1 = *(uint *)(param_1 + 0x38) | 8;
    }
    else {
      uVar1 = uVar1 & 0xfffffff6;
    }
  }
  else if (D_8008EE44 == 8) {
    uVar1 = *(uint *)(param_1 + 0x38) & 0xfffffffe;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38) | 1;
  }
  *(uint *)(param_1 + 0x38) = uVar1;
  return;
}
