#include "common.h"

#include "ghidra.h"
void func_800A5F2C(void)

{
    extern int func_800161C4();
    extern int func_800A6DA8();
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    do {
      iVar1 = func_80015B3C(func_800A6DA8,&func_800161C4,5);
      func_80015EF8(iVar1);
      *(undefined2 *)(iVar1 + 0x4e) = 5;
      *(int *)(iVar1 + 0x7c) = iVar3;
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xffffff80 | uVar2 & 0x7f;
      if (uVar2 == 1) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xffffffcf | 0x40;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 2);
    iVar3 = iVar3 + 1;
    uVar2 = 0;
  } while (iVar3 < 2);
  return;
}
