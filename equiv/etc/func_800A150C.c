#include "common.h"

#include "ghidra.h"
void func_800A150C(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
    extern M2C_UNK D_80063940[];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = (byte *)(param_1 + param_3 * 0xe);
  iVar6 = (param_5 + 7) * 0x10000 >> 0x10;
  func_8001F1A8((param_4 + 5) * 0x10000 >> 0x10,iVar6,0,0,0,pbVar5 + 1,0,8,3);
  iVar4 = (param_5 + 0x13) * 0x10000 >> 0x10;
  func_80018EF4((param_4 + 0x25) * 0x10000 >> 0x10,iVar4,
                  *(uint *)((uint)*pbVar5 * 0x3c + -0x7ff9c6b8) >> 0xc & 3,0,3);
  iVar2 = (param_4 + 0x3b) * 0x10000 >> 0x10;
  func_800188F0(iVar2,iVar4,0,0,3);
  iVar1 = (param_4 + 8) * 0x10000 >> 0x10;
  iVar3 = (param_5 + 0x20) * 0x10000 >> 0x10;
  func_800188F0(iVar1,iVar3,1,0,3);
  func_800188F0(iVar2,iVar3,2,0,3);
  iVar2 = (param_5 + 0x2d) * 0x10000 >> 0x10;
  func_800188F0(iVar1,iVar2,3,0,3);
  func_8001F35C((param_4 + 0x67) * 0x10000 >> 0x10,iVar6,2,0,0,pbVar5[0xd],1,3);
  func_8001F35C((param_4 + 0x49) * 0x10000 >> 0x10,iVar4,2,0,0,pbVar5[10],3,3);
  iVar1 = (param_4 + 0x14) * 0x10000 >> 0x10;
  func_8001F35C(iVar1,iVar3,2,0,0,pbVar5[0xb],3,3);
  func_8001F35C((param_4 + 0x53) * 0x10000 >> 0x10,iVar3,2,0,0,pbVar5[0xc],1,3);
  func_8001F35C(iVar1,iVar2,2,0,0,pbVar5[9],3,3);
  return;
}
