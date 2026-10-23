#include "common.h"

#include "ghidra.h"
void func_800AF380(void)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  func_800AFAC0();
  uVar3 = 0;
  func_800D533C();
  uVar1 = 0;
  do {
    if (*(short *)(uVar1 * 0x1a8 + -0x7ff6e9d8) == -1) {
      iVar2 = -1;
    }
    else if (uVar1 == (*D_8006AF80)) {
      iVar2 = 1;
    }
    else {
      iVar2 = (uint)(uVar1 != *(ushort *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e)) << 1;
    }
    func_800B1088(iVar2,uVar3,0);
    uVar3 = uVar3 + 1;
    uVar1 = uVar3 & 0xffff;
  } while ((int)uVar3 < 6);
  return;
}
