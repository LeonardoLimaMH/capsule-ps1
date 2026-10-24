#include "common.h"

#include "ghidra.h"
uint func_800DF1D8(int param_1,uint param_2,short param_3)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
  short sVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(short *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e) == -1) {
    return 2;
  }
  sVar1 = *(short *)((param_2 & 0xffff) * 0x1a8 + -0x7ff6e958);
  if (sVar1 == 0) {
    if (param_1 == 0) {
      uVar2 = 0;
      if (param_3 != 1) goto L800DF2F4;
      iVar3 = 2;
    }
    else {
      uVar2 = 0;
      if (param_1 != 1) goto L800DF2F4;
      if (param_3 != 1) {
        uVar2 = 0;
        if (param_3 != 8) goto L800DF2F4;
        iVar3 = 2;
      }
    }
  }
  else {
    if (sVar1 != 1) {
      return 0;
    }
    if (param_1 == 0) {
      if (param_3 != 1) {
        uVar2 = 0;
        if (param_3 != 8) goto L800DF2F4;
        iVar3 = 2;
      }
    }
    else {
      uVar2 = 0;
      if ((param_1 != 1) || (uVar2 = 0, param_3 != 1)) goto L800DF2F4;
      iVar3 = 2;
    }
  }
  uVar2 = iVar3 << 0x10;
L800DF2F4:
  return uVar2 >> 0x10;
}
