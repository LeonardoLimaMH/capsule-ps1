#include "common.h"

#include "ghidra.h"
undefined2 func_800CB2B4(undefined4 param_1,int param_2)

{
    extern u8 D_80091618[];
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = func_800B1260();
  iVar4 = (uVar3 & 0xffff) * 0x1a8;
  iVar1 = param_2 * 2 + iVar4;
  iVar5 = (int)*(short *)(iVar4 + -0x7ff6e8d6);
  *(short *)(D_80091618 + iVar1 + 0x114) = *(short *)(D_80091618 + iVar1 + 0x114) + 1;
  if (iVar5 != -1) {
    if (iVar5 == (short)param_2) {
      sVar2 = *(short *)(D_80091618 + iVar1 + 0x124) + 1;
      goto L800CB34C;
    }
    *(undefined2 *)(D_80091618 + iVar5 * 2 + iVar4 + 0x124) = 0;
  }
  sVar2 = 1;
  *(short *)(iVar4 + -0x7ff6e8d6) = (short)param_2;
L800CB34C:
  *(short *)(D_80091618 + iVar1 + 0x124) = sVar2;
  return *(undefined2 *)(D_80091618 + param_2 * 2 + iVar4 + 0x124);
}
