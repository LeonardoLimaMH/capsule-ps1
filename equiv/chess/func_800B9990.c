#include "common.h"

#include "ghidra.h"
void func_800B9990(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar5 = param_1 + 0x5d0;
  uVar11 = (uint)*(byte *)(param_1 + 0xbca);
  uVar10 = (uint)*(byte *)(param_1 + 0xcdc);
  iVar8 = 1 - uVar11;
  bVar1 = *(byte *)(iVar5 + uVar11 + 0x5fb);
  iVar6 = iVar5 + iVar8 * 0x2e8 + 0x18 + uVar10 * 0x7c;
  *(undefined1 *)(param_1 + 0xd77) = 0;
  if (uVar10 == 5) {
    *(undefined2 *)(param_1 + 0xce0) = 1;
    goto L800B9B38;
  }
  uVar9 = (uVar11 << 7 | bVar1 + 1) & 0xff;
  uVar7 = (iVar8 * 0x80 | uVar10 + 1) & 0xff;
  uVar3 = func_800D24B4(uVar9,uVar7);
  *(undefined2 *)(param_1 + 0xce0) = uVar3;
  iVar8 = func_800A8EE8(iVar5,iVar8,uVar10);
  if ((*(uint *)(iVar8 + 0x10) & 3) == 2) {
    uVar4 = *(uint *)(iVar8 + 0x10) >> 2 & 0x1f;
    if (uVar4 == 1) {
      if ((*(char *)(iVar6 + 0x28) == '\0') && (cVar2 = func_800D8B6C(uVar7,uVar9), cVar2 != '\0'))
      {
        iVar8 = (uint)*(ushort *)(param_1 + 0xce0) << 0x10;
        *(short *)(param_1 + 0xce0) = (short)((iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1);
L800B9AEC:
        *(undefined1 *)(param_1 + 0xd77) = 1;
      }
    }
    else if (((uVar4 == 8) && (*(char *)(iVar6 + 0x28) == '\0')) &&
            (cVar2 = func_800D8D48(uVar7,uVar9), cVar2 != '\0')) {
      *(undefined2 *)(param_1 + 0xce0) = 0;
      goto L800B9AEC;
    }
  }
  if ((short)(ushort)*(byte *)(iVar6 + 0xe) < *(short *)(param_1 + 0xce0)) {
    *(ushort *)(param_1 + 0xce0) = (ushort)*(byte *)(iVar6 + 0xe);
  }
  func_800CAA44(param_1,iVar6);
  *(char *)(iVar6 + 0x6b) = *(char *)(iVar6 + 0xe) - *(char *)(param_1 + 0xce0);
L800B9B38:
  func_800CB9F4(iVar5,1 - uVar11,uVar10);
  func_800125D8();
  return;
}
