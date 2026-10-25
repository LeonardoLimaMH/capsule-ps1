#include "common.h"

#include "ghidra.h"
void func_800EDE7C(int param_1)

{
    extern s8 D_8008610C[];
    extern int func_800EEA30();
    extern int func_800F5894();
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(short *)(param_1 + 0x1c) + 1;
  *(ushort *)(param_1 + 0x1c) = uVar1;
  iVar3 = (uint)uVar1 << 0x10;
  iVar5 = iVar3 >> 0x10;
  iVar3 = (iVar5 + (iVar5 - (iVar3 >> 0x1f) >> 1) * -2) * 0x10000;
  if (iVar3 >> 0x10 == 1) {
    iVar4 = func_80015B3C(func_800EEA30,func_800F5894,1);
    iVar6 = ((int)*(short *)(param_1 + 0x1c) << 0xd) / 0x3c;
    iVar5 = rsin(iVar6);
    iVar5 = iVar5 * 0x28;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    *(short *)(iVar4 + 0x28) = *(short *)(param_1 + 0x2c) + (short)(iVar5 >> 0xc);
    sVar2 = func_800202A4(0x1e);
    *(short *)(iVar4 + 0x2a) = *(short *)(param_1 + 0x2e) - (sVar2 + 0x1e);
    iVar5 = rcos(iVar6);
    iVar5 = iVar5 * 0x28;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    *(short *)(iVar4 + 0x2c) = *(short *)(param_1 + 0x30) + (short)(iVar5 >> 0xc);
    *(byte *)(iVar4 + 0x24) = -((byte)*(undefined2 *)(param_1 + 0x1e) & 1);
    *(char *)(iVar4 + 0x25) = (char)((int)((*(ushort *)(param_1 + 0x1e) & 2) * 0xff) >> 1);
    *(char *)(iVar4 + 0x26) = (char)((int)((*(ushort *)(param_1 + 0x1e) & 4) * 0xff) >> 2);
    *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
    if (0x3c < *(short *)(param_1 + 0x1c)) {
      (*D_8008610C) = (undefined1)((uint)iVar3 >> 0x10);
      func_80013920(param_1);
    }
  }
  return;
}
