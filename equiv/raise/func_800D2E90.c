#include "common.h"

#include "ghidra.h"
int func_800D2E90(undefined4 param_1)

{
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_80091618[];
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = func_800B1260();
  if (((uVar2 & 0xffff) == 0xffff) ||
     (*(ushort *)((u8 *)D_80091618 + (uVar2 & 0xffff) * 0x1a8) == 0xffff)) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)((uint)*(ushort *)((u8 *)D_80091618 + (uVar2 & 0xffff) * 0x1a8) * 0x3c +
                      -0x7ff9c6a8) & 3) == 0;
  }
  iVar3 = 1;
  if (!bVar1) {
    uVar2 = func_800B1260(param_1);
    if (((uVar2 & 0xffff) == 0xffff) ||
       (*(ushort *)((u8 *)D_80091618 + (uVar2 & 0xffff) * 0x1a8) == 0xffff)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)((*(uint *)((uint)*(ushort *)((u8 *)D_80091618 + (uVar2 & 0xffff) * 0x1a8) * 0x3c +
                               -0x7ff9c6a8) & 3) == 1);
    }
    iVar3 = uVar2 << 1;
  }
  return iVar3;
}
