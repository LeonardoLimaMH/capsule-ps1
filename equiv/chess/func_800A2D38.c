#include "common.h"

#include "ghidra.h"
void func_800A2D38(int param_1)

{
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE4C[];
    extern s32 D_80085FF2[];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = D_80085FF2;
  uVar3 = (uint)D_80085FF2;
  if ((*D_8008EE4C) == 5) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    if ((*(uint *)(param_1 + 0x34) & 0x7f) == 0) {
      func_800A14EC();
    }
    else {
      *(ushort *)(param_1 + 0x46) = (ushort)bVar1 * 0x20 + (ushort)bVar1 * -4 + -0x48;
      if (*(char *)(uVar3 + 0x80085a08) == '\0') {
        iVar4 = uVar3 + 0x18;
      }
      else {
        iVar4 = 0x1a;
      }
      uVar2 = func_80019F30(0x60012,iVar4);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
  }
  else if ((*D_8008EE4C) < 0xc) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  }
  else {
    func_800185F8(param_1);
  }
  return;
}
