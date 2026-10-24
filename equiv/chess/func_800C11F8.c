#include "common.h"

#include "ghidra.h"
void func_800C11F8(int param_1)

{
    extern M2C_UNK D_80069AD4[];
    extern s32 D_80069BB4[];
    extern u16 D_8008EE50[];
  undefined4 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  iVar9 = param_1 + 0x5d0;
  bVar2 = *(byte *)(param_1 + 0xbca);
  uVar11 = (uint)*(byte *)(param_1 + 0xce2);
  uVar10 = (uint)*(byte *)(param_1 + 0xce3);
  iVar12 = iVar9 + uVar11 * 0x2e8 + 0x18 + uVar10 * 0x7c;
  uVar3 = *(undefined1 *)(iVar9 + (uint)bVar2 + 0x5fb);
  switch((*D_8008EE50)) {
  case 0:
    func_800CB9F4(iVar9,uVar11,uVar10);
    iVar5 = func_800C20E8(param_1,iVar9,(uint)bVar2,uVar3,uVar11,uVar10);
    iVar8 = 0;
    puVar7 = D_80069AD4;
    *(char *)(param_1 + 0xce5) = (char)iVar5;
    bVar2 = *(byte *)(iVar12 + iVar5 + 0x6b);
    bVar4 = *(byte *)(iVar12 + iVar5 + 0xe);
    *(undefined1 *)(param_1 + 0xd74) = 0;
    *(ushort *)(param_1 + 0xce0) = (ushort)bVar2 - (ushort)bVar4;
    iVar5 = iVar9;
    do {
      puVar1 = (undefined4 *)(puVar7 + 0x44);
      puVar7 = puVar7 + 4;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(iVar5 + 0x78c) = *puVar1;
      iVar5 = iVar5 + 4;
    } while (iVar8 < 3);
    func_800B3488(iVar9,iVar12);
    if ((*D_80069BB4) == 0x460) {
      func_80012628();
    }
    goto L800C1370;
  case 1:
    iVar9 = func_800B2F48(param_1,0);
    break;
  case 2:
    iVar9 = func_800C5FA0(param_1,iVar9,iVar12,1,1);
    break;
  case 3:
    func_80012628(iVar9);
    func_800B3878();
  case 4:
    iVar9 = func_80012628(param_1,1);
    if (iVar9 != 0) {
      uVar6 = 10;
      if ((*(byte *)(param_1 + 0xbe1) & 1) == 0) {
        uVar6 = 7;
      }
      func_800B2F48(uVar6);
    }
  default:
    goto L800C13C4;
  }
  if (iVar9 != 0) {
L800C1370:
    func_80012604();
  }
L800C13C4:
  return;
}
