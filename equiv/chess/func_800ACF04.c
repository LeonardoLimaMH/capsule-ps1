#include "common.h"

#include "ghidra.h"
void func_800ACF04(int param_1)

{
    extern int func_800161C4();
    extern int func_800ACD58();
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(param_1 + 0xbca);
  iVar1 = func_80015B3C(func_800ACD58,&func_800161C4,5);
  func_80015EF8(iVar1);
  if (*(char *)(param_1 + uVar4 + 0x5e0) == '\0') {
    iVar3 = uVar4 + 6;
  }
  else {
    iVar3 = 0xb;
  }
  uVar2 = func_80019F30(0x60013,iVar3);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  *(undefined2 *)(iVar1 + 0x50) = 0x1000;
  *(undefined2 *)(iVar1 + 0x4e) = 2;
  *(uint *)(iVar1 + 0x7c) = uVar4;
  return;
}
