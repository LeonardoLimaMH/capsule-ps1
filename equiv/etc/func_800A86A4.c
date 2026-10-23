#include "common.h"

#include "ghidra.h"
void func_800A86A4(int param_1)

{
    extern u16 D_8008EE44[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800B3C20[];
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar1 | 1;
  if ((*D_8008EE44) == 7) {
    *(uint *)(param_1 + 0x38) = uVar1 & 0xfffffffe;
    if (*(short *)((*D_800B3C20) * 0x1a8 + -0x7ff6e9d8) == -1) {
      iVar3 = 0x2e;
    }
    else {
      iVar3 = *(ushort *)((*D_800B3C20) * 0x1a8 + -0x7ff6e9d8) + 0x2f;
    }
    uVar2 = func_80019F30(0x6000c,iVar3);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return;
}
