#include "common.h"

#include "ghidra.h"
void func_800CDFDC(undefined4 param_1)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    extern s32 D_80101104[];
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar2 = func_800B1260();
  uVar2 = uVar2 & 0xffff;
  iVar3 = uVar2 * 0x79c;
  func_800BA1D8(param_1);
  iVar4 = func_800E14C4(uVar2);
  if (iVar4 == 0) {
    iVar4 = *(int *)((u8 *)D_80101104 + iVar3 + 0xec);
    uVar5 = (*(short *)(iVar3 + -0x7fefed4c) + 1) % 0x7fff;
    *(short *)(iVar3 + -0x7fefed4c) = (short)uVar5;
    if (iVar4 == 0x30005) {
      iVar3 = func_800D0CFC(param_1);
      uVar6 = 1;
      if (iVar3 == 1) {
        uVar6 = 2;
      }
      uVar1 = *(undefined2 *)((*D_80091618) + uVar2 * 0x1a8);
    }
    else {
      if ((uVar5 & 0xf) != 0xf) {
        return;
      }
      uVar1 = *(undefined2 *)((*D_80091618) + uVar2 * 0x1a8);
      uVar6 = 0;
    }
    func_80028200(uVar1,uVar6);
  }
  return;
}
