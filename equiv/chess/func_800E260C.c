#include "common.h"

#include "ghidra.h"
#define bRam8008ee6b (*(u8 *)0x8008EE6B)
extern s32 func_80013920();
void func_800E260C(int param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  byte bVar5;

  bVar5 = *(byte *)(param_1 + 0x15);
  if (bRam8008ee6b < 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = (ushort)bRam8008ee6b;
  }
  sVar3 = *(short *)(param_1 + 0x16) + uVar1;
  iVar4 = (int)sVar3;
  *(short *)(param_1 + 0x16) = sVar3;
  *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 0x14;
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 2;
  if (bVar5 == 1) {
L800E2704:
    uVar2 = (undefined1)(((0x28 - iVar4) * 0x7f) / 0x28);
    *(undefined1 *)(param_1 + 0x32) = uVar2;
    *(undefined1 *)(param_1 + 0x31) = uVar2;
    *(undefined1 *)(param_1 + 0x30) = uVar2;
    *(short *)(param_1 + 0x42) = (short)(((0x28 - iVar4) * 200) / 0x28);
    if (0x27 < iVar4) {
L800E2750:
      func_80013920(param_1);
      return;
    }
  }
  else {
    if (1 < bVar5) {
      if (bVar5 != 2) {
        *(byte *)(param_1 + 0x15) = bVar5;
        goto L800E2764;
      }
      goto L800E2750;
    }
    if (bVar5 != 0) {
      *(byte *)(param_1 + 0x15) = bVar5;
      goto L800E2764;
    }
    *(short *)(param_1 + 0x42) = (short)((iVar4 * 200) / 0x14);
    *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x44) + (short)((iVar4 * 100) / 0x14);
    if (0x13 < iVar4) {
      bVar5 = 1;
      iVar4 = 0;
      goto L800E2704;
    }
  }
  sVar3 = (short)iVar4;
  *(byte *)(param_1 + 0x15) = bVar5;
L800E2764:
  *(short *)(param_1 + 0x16) = sVar3;
  return;
}
