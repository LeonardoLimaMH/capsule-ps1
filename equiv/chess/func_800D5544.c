#include "common.h"

#include "ghidra.h"
void func_800D5544(uint param_1,undefined4 param_2)

{
    extern M2C_UNK D_80085428[];
  char cVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  
  uVar5 = param_1 & 0xff;
  iVar2 = ((param_1 & 0x7f) - 1) * 0x7c + (uVar5 >> 7) * 0x2e8;
  cVar1 = *(char *)(iVar2 + -0x7ff7a5db);
  cVar3 = *(char *)(iVar2 + -0x7ff7a5da);
  cVar6 = cVar1 + -1;
  func_800D4F74(uVar5,param_2,cVar6,cVar3);
  cVar7 = cVar1 + '\x01';
  func_800D4F74(uVar5,param_2,cVar7,cVar3);
  cVar4 = cVar3 + -1;
  func_800D4F74(uVar5,param_2,cVar1,cVar4);
  cVar3 = cVar3 + '\x01';
  func_800D4F74(uVar5,param_2,cVar1,cVar3);
  func_800D4F74(uVar5,param_2,cVar6,cVar4);
  func_800D4F74(uVar5,param_2,cVar6,cVar3);
  func_800D4F74(uVar5,param_2,cVar7,cVar4);
  func_800D4F74(uVar5,param_2,cVar7,cVar3);
  return;
}
