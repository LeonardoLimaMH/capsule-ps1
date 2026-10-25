#include "common.h"

#include "ghidra.h"
void func_800A9A78(int param_1,int param_2,int param_3,int param_4,int param_5)

{
    extern s32 D_80100EFC[];
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = param_5 + 7;
  iVar5 = param_1 + param_2 * 0x2e8 + 0x5e8 + param_3 * 0x7c;
  func_800188F0((param_4 + 8) * 0x10000 >> 0x10,(param_5 + 0x15) * 0x10000 >> 0x10,3,0,
                  (*D_80100EFC));
  func_8001F1A8((param_4 + 5) * 0x10000 >> 0x10,iVar6 * 0x10000 >> 0x10,0,0,0,iVar5 + 1,0,8,
                  (*D_80100EFC));
  uVar1 = (*D_80100EFC);
  sVar2 = func_800CAA6C(iVar5,4);
  if ((sVar2 != 0) && (uVar4 = 1, sVar2 < 0)) {
    uVar4 = 3;
  }
  func_8001F35C((param_4 + 0x67) * 0x10000 >> 0x10,(int)(short)iVar6,uVar4,0,0,
                  *(undefined1 *)(iVar5 + 0x12),1,uVar1);
  iVar3 = (param_5 + 0x15) * 0x10000 >> 0x10;
  func_800188F0((param_4 + 8) * 0x10000 >> 0x10,iVar3,3,0,(*D_80100EFC));
  uVar1 = (*D_80100EFC);
  func_800CAA6C(iVar5,0);
  func_8001F35C((param_4 + 0x14) * 0x10000 >> 0x10,iVar3,0,0,0,*(undefined1 *)(iVar5 + 0xe),3,
                  uVar1);
  func_800A95F8(param_1,param_2,((uint)*(byte *)(iVar5 + 0xe) << 0x10) / (uint)*(byte *)(iVar5 + 9),
                param_4 + 5,iVar6,0);
  return;
}
