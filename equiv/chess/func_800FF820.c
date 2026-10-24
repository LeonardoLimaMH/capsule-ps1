#include "common.h"

#include "ghidra.h"
void func_800FF820(void)

{
    extern M2C_UNK D_80118C18[];
    extern s32 D_80119600[];
  int iVar1;
  uint uVar2;
  
  D_80119600[0] = 1;
  uVar2 = (uint)D_80119600[1];
  iVar1 = uVar2 * 4;
  while( true ) {
    if (D_80119600[uVar2 * 4 + 3] != '\x01') {
      D_80119600[0] = 0;
      return;
    }
    uVar2 = (int)(((uint)D_80119600[1] - (uint)D_80119600[0]) + 10) % 10;
    if (*(int *)(D_80119600 + (uVar2 & 0xff) * 4 + 0x2c) == *(int *)(D_80119600 + iVar1 + 0x2c))
    break;
    D_80119600[0] = D_80119600[0] + 1;
    uVar2 = uVar2 & 0xff;
    if (9 < D_80119600[0]) {
      D_80119600[0] = 0;
      return;
    }
  }
  return;
}
