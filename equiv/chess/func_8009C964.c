#include "common.h"

#include "ghidra.h"
void func_8009C964(int param_1)

{
    extern u8 D_80100CC8[];
    extern u8 D_80100CD4[];
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = func_800CA480();
  iVar4 = 0;
  bVar1 = (D_80100CD4)[*(byte *)(param_1 + 0x5d9)];
  if (bVar1 != 0) {
    do {
      uVar3 = func_80019F30(uVar2 | 0x20000,
                              (uint)(byte)D_80100CC8[*(byte *)(param_1 + 0x5d9)] + iVar4);
      func_80012A20(uVar3,1,0,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)bVar1);
  }
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    uVar3 = func_80019F30(uVar2 | 0x50000,iVar4);
    func_80012A20(uVar3,1,0,0);
  } while (iVar4 < 2);
  return;
}
