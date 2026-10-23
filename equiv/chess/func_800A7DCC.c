#include "common.h"

#include "ghidra.h"
void func_800A7DCC(int param_1,int param_2,uint param_3,uint param_4)

{
    extern M2C_UNK D_80063940[];
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1 + 0x5d0;
  iVar3 = param_4 * 0x7c + param_3 * 0x2e8;
  bVar2 = *(byte *)(iVar6 + iVar3 + 0x3a) & 0x7f;
  if (bVar2 == 7) {
    iVar6 = 0;
    uVar4 = *(uint *)((uint)*(byte *)(param_1 + iVar3 + 0x5e8) * 0x3c + -0x7ff9c6a0) >> 0xb & 0xf;
    if ((*(short *)(param_2 + 0x24) < 0) || (uVar4 < 2)) {
      iVar6 = 3;
    }
    else if (((*(short *)(param_2 + 0x24) == 0) && (*(int *)(param_2 + 0x20) == uVar4 - 2)) &&
            (iVar6 = 1, *(short *)(param_2 + 0x26) != 0)) {
      iVar6 = 2;
    }
    if (iVar6 != 3) {
      if (iVar6 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xbdd) = 1;
      return;
    }
L800A8100:
    *(undefined1 *)(param_1 + 0xbdd) = 2;
    return;
  }
  if (bVar2 < 8) {
    if (bVar2 != 6) {
      return;
    }
    iVar5 = 0;
    uVar4 = *(uint *)((uint)*(byte *)(param_1 + iVar3 + 0x5e8) * 0x3c + -0x7ff9c6a0) >> 7 & 0xf;
    if ((*(short *)(param_2 + 0x24) < 0) || (uVar4 < 2)) {
      iVar5 = 3;
    }
    else if (((*(short *)(param_2 + 0x24) == 0) && (*(int *)(param_2 + 0x20) == uVar4 - 2)) &&
            (iVar5 = 1, *(short *)(param_2 + 0x26) != 0)) {
      iVar5 = 2;
    }
    if (iVar5 == 3) goto L800A8100;
    if (iVar5 == 0) {
      return;
    }
    bVar1 = iVar5 != 2;
    if (!bVar1) {
      *(undefined1 *)(param_1 + 0xbdd) = 1;
    }
    if ((param_3 == *(byte *)(param_1 + 0xbca)) && (param_4 == *(byte *)(iVar6 + param_3 + 0x5fb)))
    {
      uVar4 = (uint)*(byte *)(param_1 + 0xcdc);
      if (*(short *)(param_1 + 0xce0) == 0) {
        iVar3 = (1 - param_3) * 0x2e8;
        if ((*(uint *)(iVar6 + uVar4 * 0x7c + iVar3 + 0x34) & 0x20000) != 0) {
          func_800B91F0(iVar6,iVar6 + iVar3 + 0x18 + uVar4 * 0x7c);
        }
      }
      else {
        iVar3 = iVar6 + uVar4 * 0x7c + (1 - param_3) * 0x2e8;
        *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
      }
      goto joined_r0x800a8174;
    }
  }
  else {
    if (bVar2 == 8) {
      return;
    }
    if (bVar2 != 9) {
      return;
    }
    iVar5 = 0;
    uVar4 = *(uint *)((uint)*(byte *)(param_1 + iVar3 + 0x5e8) * 0x3c + -0x7ff9c6a0) >> 0xb & 0xf;
    if ((*(short *)(param_2 + 0x24) < 0) || (uVar4 < 2)) {
      iVar5 = 3;
    }
    else if (((*(short *)(param_2 + 0x24) == 0) && (*(int *)(param_2 + 0x20) == uVar4 - 2)) &&
            (iVar5 = 1, *(short *)(param_2 + 0x26) != 0)) {
      iVar5 = 2;
    }
    if (iVar5 == 3) goto L800A8100;
    if (iVar5 == 0) {
      return;
    }
    if (iVar5 == 2) {
      *(undefined1 *)(param_1 + 0xbdd) = 1;
    }
  }
  uVar4 = (uint)*(byte *)((param_1 + 0xbcc) - param_3);
  if (*(short *)(param_1 + 0xce0) != 0) {
    iVar3 = iVar6 + uVar4 * 0x7c + (1 - param_3) * 0x2e8;
    *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
  }
  bVar1 = iVar5 != 2;
joined_r0x800a8174:
  if (bVar1) {
    return;
  }
  iVar6 = iVar6 + uVar4 * 0x7c + (1 - param_3) * 0x2e8;
  *(uint *)(iVar6 + 0x34) = *(uint *)(iVar6 + 0x34) | 8;
  return;
}
