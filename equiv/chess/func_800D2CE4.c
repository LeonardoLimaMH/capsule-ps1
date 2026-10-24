#include "common.h"

#include "ghidra.h"
uint func_800D2CE4(uint param_1,uint param_2)

{
    extern M2C_UNK D_80085428[];
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = ((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8;
  iVar2 = ((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8;
  uVar5 = (uint)*(byte *)(iVar4 + -0x7ff7a5db);
  uVar3 = (uint)*(byte *)(iVar2 + -0x7ff7a5db);
  iVar1 = uVar5 - uVar3;
  if (iVar1 < 0) {
    iVar1 = uVar3 - uVar5;
  }
  uVar5 = (uint)*(byte *)(iVar4 + -0x7ff7a5da);
  uVar3 = (uint)*(byte *)(iVar2 + -0x7ff7a5da);
  iVar2 = uVar5 - uVar3;
  if (iVar2 < 0) {
    iVar2 = uVar3 - uVar5;
  }
  return iVar1 + iVar2 & 0xff;
}
