#include "common.h"

#include "ghidra.h"
void func_8009BFD4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 1) {
    iVar3 = 0;
    do {
      uVar1 = func_80019F30(0x20014,iVar3 + 0x12);
      func_80012A20(uVar1,1,0,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  else if (param_2 < 2) {
    iVar3 = 0;
    if (param_2 == 0) {
      do {
        uVar1 = func_80019F30(0x20014,iVar3 + 0xd);
        func_80012A20(uVar1,1,0,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 5);
    }
  }
  else {
    if (param_2 == 2) {
      uVar1 = 0x50014;
      uVar2 = 4;
    }
    else {
      if (param_2 != 3) {
        return;
      }
      uVar1 = 0x20014;
      uVar2 = 0x17;
    }
    uVar1 = func_80019F30(uVar1,uVar2);
    func_80012A20(uVar1,1,0,0);
  }
  return;
}
