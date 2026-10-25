#include "common.h"

#include "ghidra.h"
void func_800A5FEC(void)

{
    extern int func_800161C4();
    extern int func_800A70EC();
    extern int func_800A71DC();
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar4 = 2;
  do {
    if (uVar4 == 5) {
      pcVar3 = func_800A70EC;
    }
    else {
      pcVar3 = func_800A71DC;
    }
    iVar1 = func_80015B3C(pcVar3,&func_800161C4,4);
    func_80015EF8(iVar1);
    *(undefined2 *)(iVar1 + 0x4a) = 0xffb0;
    *(undefined2 *)(iVar1 + 0x46) = 0;
    *(undefined2 *)(iVar1 + 0x4e) = 4;
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xffffff80 | uVar4 & 0x7f;
    if (uVar4 == 3) {
      uVar5 = 0x37;
    }
    else if (uVar4 == 4) {
      uVar5 = 0x38;
    }
    else if (uVar4 == 5) {
      *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xffffffcf | 0x40;
    }
    uVar2 = func_80019F30(0x60012,uVar5);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 6);
  return;
}
