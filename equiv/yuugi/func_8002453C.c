#include "common.h"

#include "ghidra.h"
void func_8002453C(int param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
    extern M2C_UNK D_80069EC4[];
    extern u16 D_80078C20[];
  int iVar1;
  int iVar2;
  short sVar3;
  undefined2 *puVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  sVar3 = (*D_80078C20);
  if (iVar2 != 1) {
    if ((iVar2 != 4) && (iVar2 != 8)) {
      return;
    }
    if (iVar2 != 8) {
      sVar3 = 1 - (*D_80078C20);
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) * 0x1c + sVar3 * 0x2d8 + -0x7ff9612c);
  if (param_4 == 1) {
    puVar4 = (undefined2 *)(param_3 * 8 + iVar2);
    *puVar4 = (short)((int)*(short *)(param_2 + 0x10) + (int)*(short *)(param_2 + 0x18) >> 1);
    iVar1 = (int)*(short *)(param_2 + 0x12) + (int)*(short *)(param_2 + 0x1a);
  }
  else if (param_4 < 2) {
    if (param_4 != 0) goto L800246D0;
    puVar4 = (undefined2 *)(param_3 * 8 + iVar2);
    *puVar4 = (short)((int)*(short *)(param_2 + 0xc) + (int)*(short *)(param_2 + 0x10) >> 1);
    iVar1 = (int)*(short *)(param_2 + 0xe) + (int)*(short *)(param_2 + 0x12);
  }
  else if (param_4 == 2) {
    puVar4 = (undefined2 *)(param_3 * 8 + iVar2);
    *puVar4 = (short)((int)*(short *)(param_2 + 0x10) + (int)*(short *)(param_2 + 0x18) >> 1);
    iVar1 = (int)*(short *)(param_2 + 0x12) + (int)*(short *)(param_2 + 0x1a);
  }
  else {
    if (param_4 != 3) goto L800246D0;
    puVar4 = (undefined2 *)(param_3 * 8 + iVar2);
    *puVar4 = (short)((int)*(short *)(param_2 + 0x14) + (int)*(short *)(param_2 + 0x20) >> 1);
    iVar1 = (int)*(short *)(param_2 + 0x16) + (int)*(short *)(param_2 + 0x22);
  }
  puVar4[1] = (short)(iVar1 >> 1);
L800246D0:
  *(undefined2 *)(param_3 * 8 + iVar2 + 4) = param_5;
  return;
}
