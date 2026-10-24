#include "common.h"

#include "ghidra.h"
undefined4 func_800B21F0(uint param_1,uint param_2)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = (param_1 & 0xffff) * 0x79c;
  param_2 = param_2 & 0xffff;
  uVar8 = (uint)*(ushort *)(iVar6 + -0x7fefed92);
  sVar1 = *(short *)(iVar6 + -0x7fefed90);
  uVar7 = (uint)*(ushort *)(param_2 * 0x79c + -0x7fefed92);
  sVar2 = *(short *)(param_2 * 0x79c + -0x7fefed90);
  if (*(short *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e958) == 0) {
    if (*(short *)(param_2 * 0x1a8 + -0x7ff6e958) == 0) {
      if (sVar1 != 1) {
        return 0xffffffff;
      }
      if (sVar2 != 8) {
        return 0xffffffff;
      }
      iVar6 = (int)((uVar7 - uVar8) * 0x10000) >> 0x10;
      if (iVar6 == 0) {
        return 2;
      }
      iVar5 = 1;
      if (0 < iVar6) goto L800B23E8;
      if (iVar6 != -1) {
        return 0xffffffff;
      }
    }
    else {
L800B2394:
      sVar3 = sVar2 - sVar1;
      iVar6 = uVar7 - uVar8;
      if (sVar2 == sVar1) {
        iVar6 = iVar6 * 0x10000 >> 0x10;
        if (iVar6 == 0) {
          return 8;
        }
        if (0 < iVar6) {
          if (iVar6 == 1) {
            return 0;
          }
          return 0xffffffff;
        }
        if (iVar6 == -1) {
          return 4;
        }
        return 0xffffffff;
      }
      if (0 < sVar3) {
        if (sVar3 != 1) {
          return 0xffffffff;
        }
        iVar6 = iVar6 * 0x10000 >> 0x10;
        if (iVar6 == 0) {
          return 6;
        }
        if (0 < iVar6) {
          if (iVar6 == 1) {
            return 7;
          }
          return 0xffffffff;
        }
        if (iVar6 != -1) {
          return 0xffffffff;
        }
        goto L800B24A4;
      }
      if (sVar3 != -1) {
        return 0xffffffff;
      }
      iVar6 = iVar6 * 0x10000 >> 0x10;
      if (iVar6 == 0) {
        return 2;
      }
      iVar5 = -1;
      if (iVar6 < 1) {
L800B23E8:
        if (iVar6 == iVar5) {
          return 3;
        }
        return 0xffffffff;
      }
      if (iVar6 != 1) {
        return 0xffffffff;
      }
    }
    uVar4 = 1;
  }
  else {
    if (*(short *)(param_2 * 0x1a8 + -0x7ff6e958) == 0) goto L800B2394;
    if (sVar1 != 8) {
      return 0xffffffff;
    }
    if (sVar2 != 1) {
      return 0xffffffff;
    }
    iVar6 = (int)((uVar7 - uVar8) * 0x10000) >> 0x10;
    if (iVar6 == 0) {
      return 6;
    }
    if (iVar6 < 1) {
      if (iVar6 == -1) {
        return 7;
      }
      return 0xffffffff;
    }
    if (iVar6 != 1) {
      return 0xffffffff;
    }
L800B24A4:
    uVar4 = 5;
  }
  return uVar4;
}
