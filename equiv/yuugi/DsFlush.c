#include "common.h"

#include "ghidra.h"
void DsFlush(void)

{
    extern M2C_UNK D_80094AA8[];
    extern s32 D_80094B68[];
    extern s32 D_80094B6C[];
    extern s32 D_80094B70[];
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  func_800457C4();
  iVar4 = 0;
  puVar3 = (undefined4 *)D_80094AA8;
  (*D_80094B70) = 0;
  (*D_80094B6C) = 0;
  (*D_80094B68) = 0;
  do {
    iVar2 = 3;
    iVar1 = (int)puVar3 + 3;
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    do {
      *(undefined1 *)(iVar1 + 5) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar2);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 6;
  } while (iVar4 < 8);
  DsEndReadySystem();
  func_80045838();
  return;
}
