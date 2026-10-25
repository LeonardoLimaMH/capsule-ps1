#include "common.h"

#include "ghidra.h"
void _SsVmKeyOffNow(void)

{
    extern u16 D_80137C78[];
    extern u16 D_80137C7A[];
    extern u8 D_80137C88[];
    extern u8 D_80137C8C[];
    extern u8 D_80137CA5[];
    extern u16 D_80138380[];
    extern u16 D_80138382[];
    extern u16 D_8013849A[];
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar2 = (uint)(*D_8013849A);
  if (uVar2 < 0x10) {
    uVar4 = (ushort)(1 << (uVar2 & 0x1f));
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = (ushort)(1 << (uVar2 - 0x10 & 0x1f));
  }
  iVar1 = uVar2 * 0x36;
  (D_80137CA5)[iVar1] = 0;
  *(undefined2 *)(D_80137C8C + iVar1) = 0;
  *(undefined2 *)(D_80137C88 + iVar1) = 0;
  (*D_80138380) = (*D_80138380) | uVar4;
  (*D_80137C78) = (*D_80137C78) & ~(*D_80138380);
  (*D_80138382) = (*D_80138382) | uVar3;
  (*D_80137C7A) = (*D_80137C7A) & ~(*D_80138382);
  return;
}
