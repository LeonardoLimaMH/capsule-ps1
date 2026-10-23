#include "common.h"

#include "ghidra.h"
void func_800DF7CC(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  sVar3 = *(short *)(param_1 + 0x16) + 1;
  iVar6 = (int)sVar3;
  iVar1 = iVar6 * 0x14;
  bVar5 = *(byte *)(param_1 + 0x15);
  iVar4 = (int)*(short *)(param_1 + 0x20);
  *(short *)(param_1 + 0x16) = sVar3;
  iVar7 = iVar4 + iVar6 * -0x14;
  if (bVar5 == 1) {
    if (0x3b < iVar6) {
      bVar5 = 2;
      sVar3 = 0;
    }
  }
  else if (bVar5 < 2) {
    if (bVar5 != 0) {
      *(short *)(param_1 + 0x16) = sVar3;
      goto L800DF948;
    }
    if (iVar1 < iVar4) {
      *(short *)(param_1 + 0x2c) =
           (short)((*(short *)(param_1 + 0x28) * iVar7 + *(short *)(param_1 + 0x1c) * iVar1) / iVar4
                  );
      *(short *)(param_1 + 0x2e) =
           (short)((*(short *)(param_1 + 0x2a) * iVar7 + *(short *)(param_1 + 0x1e) * iVar1) / iVar4
                  );
    }
    else {
      bVar5 = 1;
      sVar3 = 0;
      *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x1e);
    }
  }
  else {
    if (bVar5 != 2) {
      if (bVar5 == 3) {
        func_80013920(param_1);
        return;
      }
      *(short *)(param_1 + 0x16) = sVar3;
      goto L800DF948;
    }
    uVar2 = (undefined1)(((0x1e - iVar6) * 0xff) / 0x1e);
    *(undefined1 *)(param_1 + 0x34) = uVar2;
    *(undefined1 *)(param_1 + 0x35) = uVar2;
    *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x34) >> 1;
    if (0x1d < iVar6) {
      bVar5 = 3;
      sVar3 = 0;
    }
  }
  *(short *)(param_1 + 0x16) = sVar3;
L800DF948:
  *(byte *)(param_1 + 0x15) = bVar5;
  return;
}
