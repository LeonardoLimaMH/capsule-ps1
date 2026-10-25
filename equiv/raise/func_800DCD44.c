#include "common.h"

#include "ghidra.h"
void func_800DCD44(void)

{
    extern u8 D_80100F38[];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = func_800B1260();
  iVar6 = 0;
  iVar3 = (uVar1 & 0xffff) * 0x79c;
  *(undefined2 *)(iVar3 + -0x7fefec56) = 1;
  *(undefined2 *)(iVar3 + -0x7fefecdc) = 0;
  *(undefined2 *)(iVar3 + -0x7fefecda) = 0;
  *(undefined2 *)(iVar3 + -0x7fefecd8) = 0;
  *(undefined2 *)(iVar3 + -0x7fefec54) = 2;
  *(undefined4 *)(iVar3 + -0x7fefec50) = 0;
  do {
    iVar4 = iVar6 << 0x10;
    iVar6 = iVar6 + 1;
    iVar4 = (iVar4 >> 0xe) + iVar3;
    *(undefined2 *)(D_80100F38 + iVar4 + 0x3f2) = 0xffff;
    *(undefined2 *)(D_80100F38 + iVar4 + 0x3f4) = 0xffff;
  } while (iVar6 * 0x10000 >> 0x10 < 0x20);
  iVar6 = 2;
  iVar4 = 0x20000;
  do {
    *(undefined2 *)(D_80100F38 + (iVar4 >> 0x10) * 2 + iVar3 + 0x47c) = 0;
    iVar5 = 0;
    iVar2 = 0;
    do {
      *(undefined2 *)
       (D_80100F38 + (iVar2 >> 0xf) + (iVar4 >> 0x10) * 0x20 + iVar3 + 0x48e) = 0;
      iVar5 = iVar5 + 1;
      iVar2 = iVar5 * 0x10000;
    } while (iVar5 * 0x10000 >> 0x10 < 0xf);
    iVar6 = iVar6 + 1;
    iVar4 = iVar6 * 0x10000;
  } while (iVar6 * 0x10000 >> 0x10 < 8);
  return;
}
