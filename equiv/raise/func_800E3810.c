#include "common.h"

#include "ghidra.h"
undefined4 func_800E3810(int param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EE9B8[];
  short sVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = func_800B1260();
  sVar1 = func_800B12D8(param_1);
  if ((param_1 != 0) && (param_1 == 1)) {
    if (sVar1 == -1) {
      return 1;
    }
    if ((*D_800EE9B8) != 0) {
      if ((*D_800EE9B8) < 1) {
        if ((*D_800EE9B8) == -1) {
          return 1;
        }
      }
      else if ((*D_800EE9B8) == 1) {
        sVar1 = *(short *)((uVar2 & 0xffff) * 0x1a8 + -0x7ff6e958);
        goto L800E39D8;
      }
    }
    uVar2 = uVar2 & 0xffff;
code_r0x800e396c:
    if (*(short *)(uVar2 * 0x1a8 + -0x7ff6e958) != 0) {
      return 4;
    }
    return 1;
  }
  iVar3 = *(int *)((*D_800EE9B8) + (uint)(param_1 != 1) * 4);
  if (iVar3 != 0) {
    if (iVar3 < 1) {
      if (iVar3 == -1) {
        uVar2 = (uint)*(ushort *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e);
        goto code_r0x800e396c;
      }
    }
    else if (iVar3 == 1) {
      return 4;
    }
  }
  sVar1 = *(short *)((uVar2 & 0xffff) * 0x1a8 + -0x7ff6e958);
L800E39D8:
  if (sVar1 != 0) {
    return 1;
  }
  return 4;
}
