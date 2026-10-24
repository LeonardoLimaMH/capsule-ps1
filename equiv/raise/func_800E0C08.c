#include "common.h"

#include "ghidra.h"
int func_800E0C08(int param_1,undefined4 param_2,int param_3,int param_4)

{
    extern M2C_UNK D_80069EC4[];
    extern u16 D_8006AF80[];
    extern u16 D_80078C20[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EF364[];
    extern s32 D_800EF350[];
  ushort uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = 4;
  if (param_1 == 1) {
    iVar5 = 1;
  }
  if (param_4 < 1) {
    iVar3 = 1;
  }
  else {
    iVar3 = 8;
    if (param_4 < 9) {
      iVar3 = param_4;
    }
  }
  iVar2 = func_800E36E4();
  uVar1 = (*D_8006AF80);
  sVar4 = (*D_80078C20);
  if (iVar2 != 1) {
    uVar1 = *(ushort *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e);
    sVar4 = 1 - (*D_80078C20);
  }
  return (int)((*(ushort *)
                 ((uint)(byte)D_800EF350
                              [param_3 * 8 +
                               (uint)*(ushort *)((uint)uVar1 * 0x1a8 + -0x7ff6e9d8) * 0x40 + iVar3 +
                               0xb] * 8 + *(int *)(iVar5 * 0x1c + sVar4 * 0x2d8 + -0x7ff9612c) + 4)
               - 4) * 0x10000) >> 0x10;
}
