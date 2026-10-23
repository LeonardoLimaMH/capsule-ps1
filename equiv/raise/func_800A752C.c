#include "common.h"

#include "ghidra.h"
int func_800A752C(uint param_1)

{
    extern M2C_UNK D_80091618[];
  int iVar1;
  ushort uVar2;
  
  iVar1 = (param_1 & 0xffff) * 0x1a8;
  uVar2 = *(ushort *)(iVar1 + -0x7ff6e846);
  if (uVar2 < 0x32) {
    *(ushort *)(iVar1 + -0x7ff6e92a) = *(short *)(iVar1 + -0x7ff6e92a) + (uVar2 - 0x32);
    uVar2 = *(ushort *)(iVar1 + -0x7ff6e846);
  }
  if (100 < uVar2) {
    *(ushort *)(iVar1 + -0x7ff6e92a) = *(short *)(iVar1 + -0x7ff6e92a) + (uVar2 - 100);
  }
  if (*(short *)(iVar1 + -0x7ff6e92a) < 0) {
    *(undefined2 *)(iVar1 + -0x7ff6e92a) = 0;
  }
  else if (500 < *(short *)(iVar1 + -0x7ff6e92a)) {
    *(undefined2 *)(iVar1 + -0x7ff6e92a) = 500;
  }
  return (int)*(short *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e92a);
}
