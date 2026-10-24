#include "common.h"

#include "ghidra.h"
int func_800A76C0(uint param_1)

{
    extern M2C_UNK D_80091618[];
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1 & 0xffff) * 0x1a8;
  *(short *)(iVar1 + -0x7ff6e926) = *(short *)(iVar1 + -0x7ff6e914);
  if (*(short *)(iVar1 + -0x7ff6e914) < *(short *)(iVar1 + -0x7ff6e912)) {
    *(undefined2 *)(iVar1 + -0x7ff6e926) = *(undefined2 *)(iVar1 + -0x7ff6e912);
  }
  iVar2 = 0xff - (uint)*(ushort *)(iVar1 + -0x7ff6e926);
  *(short *)(iVar1 + -0x7ff6e926) = (short)iVar2;
  return iVar2 * 0x10000 >> 0x10;
}
