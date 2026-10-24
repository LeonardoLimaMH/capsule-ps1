#include "common.h"

#include "ghidra.h"
int func_800FF644(void)

{
    extern M2C_UNK D_80085428[];
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = 0;
  bVar4 = 0;
  do {
    bVar3 = 0;
    do {
      uVar2 = (uint)bVar3;
      iVar1 = uVar2 * 0x7c + (uint)bVar4 * 0x2e8;
      bVar3 = bVar3 + 1;
      iVar5 = iVar5 + (((uint)bVar4 * 6 + uVar2) * 0xa9 + 1) *
                      ((uint)*(byte *)(iVar1 + -0x7ff7a5db) * 0xd +
                      (uint)*(byte *)(iVar1 + -0x7ff7a5da));
    } while (bVar3 < 6);
    bVar4 = bVar4 + 1;
  } while (bVar4 < 2);
  return iVar5;
}
