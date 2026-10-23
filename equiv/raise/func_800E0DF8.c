#include "common.h"

#include "ghidra.h"
ushort func_800E0DF8(void)

{
    extern M2C_UNK D_80091618[];
  uint uVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = 0;
  iVar2 = 1;
  do {
    uVar1 = func_800B1260(iVar2);
    if ((uVar1 & 0xffff) != 0xffff) {
      uVar3 = uVar3 | *(ushort *)((uVar1 & 0xffff) * 0x1a8 + -0x7ff6e8d8);
    }
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar3 & 1;
}
