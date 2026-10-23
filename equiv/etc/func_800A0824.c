#include "common.h"

#include "ghidra.h"
void func_800A0824(int param_1)

{
    extern M2C_UNK D_8006B1FC[];
    extern s16 D_800B3B3C[];
    extern M2C_UNK D_800B3B70[];
  short sVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffc8;
  if (*(char *)(param_1 + 0x5d0) == '\x02') {
    uVar3 = 0xffffffa8;
  }
  func_80020844(0xffffff70,uVar3,0x120,0x38,0,0,0,0,5);
  func_800A225C(param_1,0);
  if (*(char *)(param_1 + 0x5d0) == '\x02') {
    func_80020844(0xffffff70,0x28,0x120,0x38,0,0,0,0,5);
    func_800A225C(param_1,1);
  }
  else {
    puVar2 = (undefined1 *)(param_1 + 0x50);
    if (*(char *)(param_1 + 0x5dc) == '\0') {
      puVar2 = (*D_8006B1FC);
      sVar1 = (short)(*D_800B3B3C);
    }
    else {
      sVar1 = *(short *)((*D_800B3B70) + (short)(*D_800B3B3C) * 2);
    }
    func_800A150C(puVar2,0,(int)sVar1,0xffffffc0,0x20);
  }
  return;
}
