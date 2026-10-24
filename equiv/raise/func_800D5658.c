#include "common.h"

#include "ghidra.h"
void func_800D5658(ushort param_1)

{
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80100F38[];
    extern s32 D_8008F702[];
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  
  iVar1 = (uint)param_1 * 0x79c;
  if (*(short *)(iVar1 + -0x7fefed2c) == 0) {
    return;
  }
  if (D_8008F702 == '\0') {
    sVar2 = -2;
    if (*(short *)(iVar1 + -0x7fefed2a) == 1) {
      sVar2 = 2;
    }
    sVar2 = *(short *)(iVar1 + -0x7fefed28) + sVar2;
    *(short *)(iVar1 + -0x7fefed28) = sVar2;
    if (sVar2 < 0x32) {
      uVar3 = 0x32;
    }
    else {
      if (sVar2 < 0x51) goto L800D5708;
      uVar3 = 0x50;
    }
    *(undefined2 *)(iVar1 + -0x7fefed28) = uVar3;
  }
L800D5708:
  func_800D5C80(param_1,(int)*(short *)(iVar1 + -0x7fefed24),(int)*(short *)(iVar1 + -0x7fefed22),3)
  ;
  if (D_8008F702 == '\0') {
    if (*(short *)(iVar1 + -0x7fefed2a) == 1) {
      if (*(short *)(iVar1 + -0x7fefed28) == 0x50) {
        *(undefined2 *)(iVar1 + -0x7fefed2a) = 0;
      }
    }
    else if (*(short *)(iVar1 + -0x7fefed28) == 0x32) {
      *(undefined2 *)(iVar1 + -0x7fefed2a) = 1;
    }
  }
  return;
}
