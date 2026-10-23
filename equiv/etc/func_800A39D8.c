#include "common.h"

#include "ghidra.h"
void func_800A39D8(int param_1)

{
    extern u8 D_80085A01[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B2C9C[];
    extern M2C_UNK D_800B2CB4[];
    extern M2C_UNK D_800B2CCC[];
    extern M2C_UNK D_800B2CE4[];
    extern s16 D_800B3B40[];
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(*D_80085A01);
  if ((*D_8008EE44) == 0x12) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    if ((*D_800B3B40) == 0) {
      iVar3 = uVar2 * 2;
      *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)((*D_800B2C9C) + iVar3);
      uVar1 = *(undefined2 *)((*D_800B2CCC) + iVar3);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffe3f;
      *(undefined2 *)(param_1 + 0x4a) = uVar1;
    }
    else {
      iVar3 = uVar2 * 2;
      *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)((*D_800B2CB4) + iVar3);
      uVar1 = *(undefined2 *)((*D_800B2CE4) + iVar3);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffe3f | 0x40;
      *(undefined2 *)(param_1 + 0x4a) = uVar1;
    }
  }
  else {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  }
  return;
}
