#include "common.h"

#include "ghidra.h"
bool func_800D2A10(void)

{
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_80091618[];
  bool bVar1;
  uint uVar2;
  
  uVar2 = func_800B1260();
  if (((uVar2 & 0xffff) == 0xffff) ||
     (*(ushort *)(D_80091618 + (uVar2 & 0xffff) * 0x1a8) == 0xffff)) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)((uint)*(ushort *)(D_80091618 + (uVar2 & 0xffff) * 0x1a8) * 0x3c +
                      -0x7ff9c6a8) & 3) == 1;
  }
  return bVar1;
}
