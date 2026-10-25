#include "common.h"

#include "ghidra.h"
void func_800DD3B0(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
    extern u8 D_80100F38[];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = func_800B1260();
  iVar2 = (uVar1 & 0xffff) * 0x79c;
  if (*(short *)(iVar2 + -0x7fefecd8) != 0x20) {
    iVar3 = (int)*(short *)(iVar2 + -0x7fefecda);
    *(short *)(iVar2 + -0x7fefecd8) = *(short *)(iVar2 + -0x7fefecd8) + 1;
    iVar4 = iVar3 + 1;
    iVar5 = iVar3 * 4 + iVar2;
    *(undefined2 *)(D_80100F38 + iVar5 + 0x3f2) = param_2;
    *(undefined2 *)(D_80100F38 + iVar5 + 0x3f4) = param_3;
    iVar5 = iVar4;
    if (iVar4 < 0) {
      iVar5 = iVar3 + 0x20;
    }
    *(short *)(iVar2 + -0x7fefecda) = (short)iVar4 + (short)(iVar5 >> 5) * -0x20;
  }
  return;
}
