#include "common.h"

#include "ghidra.h"
void func_800BCEEC(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  if (*(int *)(param_1 + 0x20) == 5) {
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  uVar1 = (undefined1)((int)((0x4b - (uint)*(ushort *)(param_1 + 0x7a)) * 0xff) / 0x4b);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  *(undefined1 *)(param_1 + 0x5a) = uVar1;
  *(undefined1 *)(param_1 + 0x59) = uVar1;
  uVar2 = (undefined2)((int)((100 - (uint)*(ushort *)(param_1 + 0x7a)) * 0x1000) / 100);
  *(undefined2 *)(param_1 + 0x52) = uVar2;
  *(undefined2 *)(param_1 + 0x50) = uVar2;
  if (*(byte *)(param_1 + 0x58) < 10) {
    func_80013920(param_1);
  }
  *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  return;
}
