#include "common.h"

#include "ghidra.h"
undefined4 func_800A8484(uint param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = (param_1 & 0xffff) * 0x1a8;
  sVar2 = *(short *)(iVar4 + -0x7ff6e92c);
  iVar7 = ((int)(((uint)*(ushort *)(iVar4 + -0x7ff6e916) + (uint)*(ushort *)(iVar4 + -0x7ff6e90e) +
                  (uint)*(ushort *)(iVar4 + -0x7ff6e90c) + (uint)*(ushort *)(iVar4 + -0x7ff6e90a) +
                  (uint)*(ushort *)(iVar4 + -0x7ff6e908) + (uint)*(ushort *)(iVar4 + -0x7ff6e910)) *
                0x10000) >> 0x10) / 0x16f + 1;
  iVar3 = iVar7 * 0x10000 >> 0x10;
  uVar6 = (undefined2)iVar7;
  *(undefined2 *)(iVar4 + -0x7ff6e92c) = uVar6;
  if (iVar3 < 1) {
    uVar6 = 1;
  }
  else if (5 < iVar3) {
    uVar6 = 5;
  }
  *(undefined2 *)(iVar4 + -0x7ff6e92c) = uVar6;
  iVar3 = func_800D1548();
  if (iVar3 != 0) {
    return 0;
  }
  uVar9 = param_1 & 0xffff;
  iVar3 = func_800E16AC(uVar9);
  if (iVar3 != 1) {
    uVar8 = (uint)(*D_8006AF80);
    uVar5 = (uint)*(ushort *)(uVar8 * 0x1a8 + -0x7ff6e95e);
    if (uVar5 == 0xffff) {
      if (uVar9 != uVar8) {
        return 0;
      }
    }
    else if ((uVar9 != uVar8) && (uVar9 != uVar5)) {
      return 0;
    }
    param_1 = param_1 & 0xffff;
    sVar1 = *(short *)(param_1 * 0x1a8 + -0x7ff6e92c);
    if (sVar1 < sVar2) {
      func_800D1CC4(param_1,6,1,0);
      return 0xffffffff;
    }
    if (sVar2 < sVar1) {
      func_800D1CC4(param_1,5,1,0);
      return 1;
    }
  }
  return 0;
}
