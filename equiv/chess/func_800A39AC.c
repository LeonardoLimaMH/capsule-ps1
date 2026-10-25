#include "common.h"

#include "ghidra.h"
void func_800A39AC(int param_1)

{
    extern u8 D_801010B0[];
    extern int func_800A3C24();
    extern int func_800CBBB4();
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  
  uVar5 = 0;
  iVar3 = 0;
  uVar4 = (uint)(byte)D_801010B0[(uint)*(byte *)(param_1 + 0x5d9) * 0x34 + 9];
  do {
    iVar2 = 0;
    if (uVar4 != 0) {
      do {
        iVar1 = func_80015B3C(func_800A3C24,func_800CBBB4,2);
        func_8001602C(iVar1);
        *(undefined1 *)(iVar1 + 0x58) = uVar5;
        uVar5 = 1;
        *(int *)(iVar1 + 0x5c) = iVar3;
        *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 1;
        func_800A4A10(param_1,iVar3,iVar2,uVar4,iVar1 + 0x18);
        if (iVar3 == 0) {
          *(undefined1 *)(iVar1 + 0x38) = 0x20;
          *(undefined1 *)(iVar1 + 0x39) = 0x20;
          *(undefined1 *)(iVar1 + 0x3a) = 0xf0;
        }
        else {
          *(undefined1 *)(iVar1 + 0x38) = 0xf0;
          *(undefined1 *)(iVar1 + 0x39) = 0x20;
          *(undefined1 *)(iVar1 + 0x3a) = 0x20;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar4);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}
