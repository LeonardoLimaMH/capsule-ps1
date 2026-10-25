#include "common.h"

#include "ghidra.h"
int _SsReadDeltaValue(int param_1,short param_2)

{
    extern u8 D_801373F0[];
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(*(int *)(D_801373F0 + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0);
  bVar1 = *(byte *)*puVar4;
  uVar3 = (uint)bVar1;
  *puVar4 = (byte *)*puVar4 + 1;
  iVar2 = 0;
  if (uVar3 != 0) {
    iVar2 = uVar3 << 2;
    if ((bVar1 & 0x80) != 0) {
      uVar3 = uVar3 & 0x7f;
      do {
        bVar1 = *(byte *)*puVar4;
        *puVar4 = (byte *)*puVar4 + 1;
        uVar3 = uVar3 * 0x80 + (bVar1 & 0x7f);
      } while ((bVar1 & 0x80) != 0);
      iVar2 = uVar3 * 4;
    }
    iVar2 = (iVar2 + uVar3) * 2;
    puVar4[0x22] = puVar4[0x22] + iVar2;
  }
  return iVar2;
}
