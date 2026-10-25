#include "common.h"

#include "ghidra.h"
void func_800A5DCC(int param_1,undefined4 param_2)

{
    extern int func_800161C4();
    extern int func_800A6578();
    extern int func_800A6938();
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = 0;
  do {
    iVar7 = 0;
    iVar8 = 0;
    do {
      iVar4 = 0;
      iVar5 = iVar8;
      do {
        if (iVar6 == 0) {
          pcVar3 = func_800A6578;
        }
        else {
          pcVar3 = func_800A6938;
        }
        iVar1 = func_80015B3C(pcVar3,&func_800161C4,param_2);
        func_80015EF8(iVar1);
        if (iVar6 == 0) {
          *(int *)(param_1 + iVar5 + 0x65c) = iVar1;
        }
        *(int *)(iVar1 + 0x7c) = iVar7;
        *(int *)(iVar1 + 0x80) = iVar4;
        uVar2 = func_80020364(*(undefined1 *)(param_1 + iVar5 + 0x5e8));
        *(undefined4 *)(iVar1 + 0x84) = uVar2;
        *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xffffff80 | iVar6 + 1U & 0x7f;
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
        if (iVar6 != 0) {
          uVar2 = 0xd;
          if (iVar4 != 5) {
            uVar2 = 0;
            *(ushort *)(iVar1 + 0x66) = (ushort)*(byte *)(param_1 + iVar7 + 0x5e2);
          }
          uVar2 = func_80019F30(0x60012,uVar2);
          *(undefined4 *)(iVar1 + 0x18) = uVar2;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x7c;
      } while (iVar4 < 6);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x2e8;
    } while (iVar7 < 2);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  return;
}
