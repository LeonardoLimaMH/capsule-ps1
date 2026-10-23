#include "common.h"

#include "ghidra.h"
void func_800A790C(int param_1)

{
    extern s8 D_800B3C2A[];
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = func_80019F30(0x2000c,((param_1 << 0x10) >> 0xf) + iVar2 + 0x13);
    func_80012A20(uVar1,1,0,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  D_800B3C2A[0] = 1;
  return;
}
