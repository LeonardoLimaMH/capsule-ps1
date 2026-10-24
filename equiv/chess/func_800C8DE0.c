#include "common.h"

#include "ghidra.h"
char func_800C8DE0(undefined4 param_1,int param_2,int param_3)

{
    extern s32 D_80069C4C[];
    extern M2C_UNK D_8008ED68[];
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  cVar2 = func_800201D8(param_3);
  uVar4 = *(uint *)(param_3 * 0x10 + -0x7ff71210);
  if (((uVar4 & 0x20) != 0) || ((uVar4 & 0x40) != 0)) {
    *(undefined1 *)(param_2 + 0x72d) = 0;
  }
  if (cVar2 == '\0') {
    if ((*D_80069C4C) == 5) {
      return '\0';
    }
    iVar5 = 1;
    if (*(byte *)(param_2 + 0x72d) == 0) {
      return '\0';
    }
    cVar2 = *(char *)(param_2 + 0x722);
    iVar3 = param_2 + 1;
    if (1 < *(byte *)(param_2 + 0x72d)) {
      do {
        *(undefined1 *)(iVar3 + 0x721) = *(undefined1 *)(iVar3 + 0x722);
        iVar5 = iVar5 + 1;
        iVar3 = param_2 + iVar5;
      } while (iVar5 < (int)(uint)*(byte *)(param_2 + 0x72d));
    }
    *(char *)(param_2 + 0x72d) = *(char *)(param_2 + 0x72d) + -1;
  }
  if ((*D_80069C4C) == 5) {
    bVar1 = *(byte *)(param_2 + 0x72d);
    if (bVar1 < 10) {
      *(byte *)(param_2 + 0x72d) = bVar1 + 1;
      *(char *)(param_2 + (uint)bVar1 + 0x722) = cVar2;
    }
    return '\0';
  }
  return cVar2;
}
