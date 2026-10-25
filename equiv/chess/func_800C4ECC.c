#include "common.h"

#include "ghidra.h"
void func_800C4ECC(undefined4 param_1,int param_2)

{
    extern int func_800161C4();
    extern int func_800C63AC();
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    iVar3 = func_80015B3C(func_800C63AC,&func_800161C4,5);
    func_80015EF8(iVar3);
    sVar2 = func_800202A4(0x1e);
    if ((uVar4 & 1) == 0) {
      sVar2 = -sVar2;
    }
    *(short *)(iVar3 + 0x46) = *(short *)(param_2 + 0x46) + sVar2;
    sVar2 = func_800202A4(10);
    if (5 < (int)uVar4) {
      sVar2 = -sVar2;
    }
    *(short *)(iVar3 + 0x4a) = *(short *)(param_2 + 0x4a) + -10 + sVar2;
    sVar2 = *(short *)(param_2 + 0x4e);
    *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff80 | uVar4 & 0x7f;
    *(short *)(iVar3 + 0x4e) = sVar2 + -1;
    uVar4 = uVar4 + 1;
    *(undefined2 *)(iVar3 + 0x50) = *(undefined2 *)(param_2 + 0x50);
    uVar1 = *(undefined2 *)(param_2 + 0x52);
    *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
    *(undefined2 *)(iVar3 + 0x52) = uVar1;
  } while ((int)uVar4 < 0x18);
  return;
}
