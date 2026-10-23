#include "common.h"

#include "ghidra.h"
undefined4 func_800B9B2C(void)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (uint)(*D_8006AF80) * 0x1a8;
  uVar1 = *(ushort *)(iVar3 + -0x7ff6e95e);
  *(undefined2 *)(iVar3 + -0x7ff6e95e) = 0xffff;
  *(undefined2 *)(iVar3 + -0x7ff6e95c) = 0;
  iVar2 = (uint)uVar1 * 0x1a8;
  *(undefined2 *)(iVar2 + -0x7ff6e95e) = 0xffff;
  *(undefined2 *)(iVar2 + -0x7ff6e95c) = 0;
  *(short *)(iVar3 + -0x7ff6e962) = *(short *)(iVar3 + -0x7ff6e962) + 1;
  (*D_800EFA4A) = 0;
  *(short *)(iVar2 + -0x7ff6e962) = *(short *)(iVar2 + -0x7ff6e962) + 1;
  (*D_800EFA4C) = 0;
  func_800B4C40((*D_8006AF80));
  func_800B6FA0();
  func_800ABF7C(1);
  return 1;
}
