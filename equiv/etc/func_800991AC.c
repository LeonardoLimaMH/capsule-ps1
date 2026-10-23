#include "common.h"

#include "ghidra.h"
void func_800991AC(int param_1)

{
    extern u8 D_80085A0D[];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)(*D_80085A0D);
  func_800A4964();
  if ((*(uint *)(param_1 + 0x38) & 1) == 1) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined2 *)(param_1 + 0x24) = 0xffff;
  }
  *(undefined4 *)(param_1 + 0x3c) = 1;
  if ((*(uint *)(param_1 + 0x34) & 0x7f) == 0) {
    iVar1 = func_800372B4();
    uVar2 = 4;
    if (((iVar1 < 0x17d) && (uVar2 = 3, iVar1 < 0xbf)) && (uVar2 = 1, 0 < iVar1)) {
      uVar2 = 2;
    }
  }
  else {
    if (-1 < *(short *)(param_1 + 0x24)) {
      return;
    }
    iVar1 = func_80020304(500);
    if (iVar1 < 5) {
      uVar2 = func_80019F30(uVar3 + 0x15 | 0x70000,0);
      func_80015CD0(param_1 + 0x14,uVar2,1);
      return;
    }
    uVar2 = 5;
  }
  uVar2 = func_80019F30(uVar3 + 0x15 | 0x60000,uVar2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}
