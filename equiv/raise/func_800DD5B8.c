#include "common.h"

#include "ghidra.h"
int func_800DD5B8(undefined4 param_1,int param_2)

{
    extern M2C_UNK D_80100F38[];
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  
  uVar4 = 0;
  uVar1 = func_800B1260();
  iVar2 = 0;
  puVar3 = (ushort *)(((param_2 << 0x10) >> 0xb) + (uVar1 & 0xffff) * 0x79c + -0x7fefec3a);
  do {
    iVar2 = iVar2 + 1;
    uVar4 = uVar4 | *puVar3;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0xf);
  return (int)(short)uVar4;
}
