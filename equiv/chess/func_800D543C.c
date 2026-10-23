#include "common.h"

#include "ghidra.h"
void func_800D543C(uint param_1,undefined4 param_2)

{
    extern M2C_UNK D_80085428[];
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  
  uVar6 = param_1 & 0xff;
  iVar1 = ((param_1 & 0x7f) - 1) * 0x7c + (uVar6 >> 7) * 0x2e8;
  cVar4 = *(char *)(iVar1 + -0x7ff7a5db);
  cVar2 = *(char *)(iVar1 + -0x7ff7a5da);
  cVar3 = cVar4 + -1;
  cVar5 = cVar2 + -1;
  func_800D4F74(uVar6,param_2,cVar3,cVar5);
  cVar2 = cVar2 + '\x01';
  func_800D4F74(uVar6,param_2,cVar3,cVar2);
  cVar4 = cVar4 + '\x01';
  func_800D4F74(uVar6,param_2,cVar4,cVar5);
  func_800D4F74(uVar6,param_2,cVar4,cVar2);
  return;
}
