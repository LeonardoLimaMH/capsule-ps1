#include "common.h"

#include "ghidra.h"
void func_800A2588(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x2400000;
  do {
    uVar1 = func_80019F30(0x2001d,iVar2);
    func_80012A20(uVar1,2,iVar3 >> 0x10,0x100);
    uVar1 = func_80019F30((int)param_1 + 0x1eU | 0x20000,iVar2);
    func_80012A20(uVar1,2,iVar3 >> 0x10,0x100);
    iVar3 = iVar3 + 0x400000;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 0;
  do {
    uVar1 = func_80019F30((int)param_1 + 0x1eU | 0x20000,iVar2 + 3);
    func_80012A20(uVar1,1,0,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}
