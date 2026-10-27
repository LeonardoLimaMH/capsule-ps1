#include "common.h"

#include "ghidra.h"
extern s32 func_80012A20();
extern s32 func_80019F30();
extern s32 func_800CA48C();
extern s32 func_800CA4AC();
void func_8009C1B4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;

  if (param_3 == 0) {
    uVar5 = 0x13;
    if (*(byte *)(param_1 + param_2 + 0x5e4) < 3) {
      iVar3 = func_800CA48C(param_1,param_2);
    }
    else {
      uVar5 = 0x14;
      iVar3 = func_800CA4AC(param_1,param_2);
    }
    if (iVar3 == -1) {
      return;
    }
    uVar1 = func_80019F30(uVar5 | 0x20000);
    uVar2 = 3;
    iVar3 = (param_2 * 0x40 + 0x200) * 0x10000 >> 0x10;
    uVar4 = 0x100;
  }
  else {
    uVar1 = func_80019F30(0x50014,5);
    uVar2 = 1;
    iVar3 = 0;
    uVar4 = 0;
  }
  func_80012A20(uVar1,uVar2,iVar3,uVar4);
  return;
}
