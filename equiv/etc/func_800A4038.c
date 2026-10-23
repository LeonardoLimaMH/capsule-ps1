#include "common.h"

#include "ghidra.h"
void func_800A4038(int param_1)

{
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    extern s32 D_800859F8[];
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  if (((*D_8008EE44) == 0x18) &&
     (iVar2 = *(int *)(param_1 + 0x84), *(short *)((int)(*D_800B3B38) + iVar2 * 2) == 2)) {
    uVar3 = 0xffb0;
    if (D_800859F8 == '\x02') {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
      if (iVar2 != 0) {
        uVar3 = 0x38;
      }
      *(undefined2 *)(param_1 + 0x4a) = uVar3;
      return;
    }
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0x4a) = 0x38;
      uVar1 = *(uint *)(param_1 + 0x38) & 0xfffffffe;
      goto L800A40D0;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x38) | 1;
L800A40D0:
  *(uint *)(param_1 + 0x38) = uVar1;
  return;
}
