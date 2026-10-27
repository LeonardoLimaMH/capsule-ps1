#include "common.h"

#include "ghidra.h"
#define bRam8008ee6b (*(u8 *)0x8008EE6B)
extern s32 func_800185F8();
void func_800C6330(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = 1;
  if (1 < bRam8008ee6b) {
    uVar3 = (uint)bRam8008ee6b;
  }
  iVar2 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0x84) + 1;
      *(int *)(param_1 + 0x84) = iVar1;
      iVar2 = iVar2 + 1;
      if (6 < iVar1) {
        func_800185F8();
        return;
      }
    } while (iVar2 < (int)uVar3);
  }
  return;
}
