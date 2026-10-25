#include "common.h"

#include "ghidra.h"
void func_800A4108(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + (param_2 & 0xff) * 2;
  bVar1 = *(byte *)(iVar4 + 0xbd1);
  bVar2 = *(byte *)(iVar4 + 0xbd2);
  iVar3 = func_800A4678(param_4);
  *(uint *)(iVar3 + 0x5c) = param_2 & 0xff;
  *(uint *)(iVar3 + 0x60) = (uint)bVar1;
  *(uint *)(iVar3 + 100) = (uint)bVar2;
  *(uint *)(iVar3 + 0x68) = (uint)*(byte *)(iVar4 + 0xbd1);
  *(uint *)(iVar3 + 0x6c) = (uint)*(byte *)(iVar4 + 0xbd2);
  *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xffffffce | 0x40;
  func_800A4900(param_1,iVar3 + 0x18,(uint)bVar1,(uint)bVar2);
  *(undefined1 *)(iVar3 + 0x58) = 0;
  return;
}
