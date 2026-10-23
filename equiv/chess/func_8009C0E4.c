#include "common.h"

#include "ghidra.h"
void func_8009C0E4(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = func_800CA480();
  uVar2 = func_80019F30(uVar1 | 0x50000,0);
  func_80012A20(uVar2,1,0,0);
  iVar3 = 0;
  do {
    uVar2 = func_80019F30(uVar1 | 0x20000,iVar3);
    func_80012A20(uVar2,1,0,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}
