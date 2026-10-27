#include "common.h"

#include "ghidra.h"
#define UNK_8011974d (*(s32 *)0x8011974D)
#define _D_8008EE50 (*(u16 *)0x8008EE50)
#define null_ARRAY_8011974f ((u8 *)0x8011974F)
#define uRam8008f708 (*(s32 *)0x8008F708)
extern s32 func_800125D8();
extern s32 func_80012604();
extern s32 func_8001264C();
extern s32 func_800B3338();
extern s32 func_800B3488();
void func_800C0658(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;

  iVar10 = param_1 + 0x5d0;
  uVar11 = (uint)*(byte *)(param_1 + 0xbca);
  bVar2 = *(byte *)(iVar10 + uVar11 + 0x5fb);
  pbVar9 = (byte *)(param_1 + 0xce2);
  if (_D_8008EE50 == 1) {
    iVar10 = func_800B3338(param_1,0);
    if (iVar10 != 0) {
      func_800125D8();
    }
  }
  else if (_D_8008EE50 < 2) {
    if (_D_8008EE50 == 0) {
      if (uRam8008f708 < (*(u8 *)((u8 *)&UNK_8011974d + 1))) {
        pbVar1 = null_ARRAY_8011974f + uRam8008f708;
        uRam8008f708 = uRam8008f708 + 1;
        bVar3 = *pbVar1 >> 7;
        iVar6 = (*pbVar1 & 0x7f) - 1;
      }
      else {
        bVar3 = 0xff;
        iVar6 = -1;
      }
      if (iVar6 == -1) {
        iVar6 = 0;
        puVar8 = (undefined1 *)(uVar11 * 2 + iVar10 + 0x601);
        puVar7 = puVar8;
        do {
          iVar4 = iVar10 + (uint)bVar2 * 0x7c + uVar11 * 0x2e8 + iVar6;
          iVar6 = iVar6 + 1;
          *puVar7 = *(undefined1 *)(iVar4 + 0x2d);
          puVar7 = puVar8 + iVar6;
        } while (iVar6 < 2);
        uVar5 = 2;
      }
      else {
        *pbVar9 = bVar3;
        *(char *)(param_1 + 0xce3) = (char)iVar6;
        func_800B3488(iVar10,iVar10 + (uint)*pbVar9 * 0x2e8 + 0x18 +
                             (uint)*(byte *)(param_1 + 0xce3) * 0x7c);
        iVar6 = 0;
        do {
          puVar7 = (undefined1 *)(uVar11 * 2 + iVar10 + 0x601 + iVar6);
          iVar4 = iVar10 + (uint)*(byte *)(param_1 + 0xce3) * 0x7c + (uint)*pbVar9 * 0x2e8 + iVar6;
          iVar6 = iVar6 + 1;
          *puVar7 = *(undefined1 *)(iVar4 + 0x2d);
          uVar5 = 1;
        } while (iVar6 < 2);
        *(undefined1 *)(param_1 + 0xcdd) = 0;
      }
      func_8001264C(uVar5);
      *(undefined1 *)(param_1 + 0xbe5) = 0;
    }
  }
  else if ((_D_8008EE50 == 2) && (iVar10 = func_800B3338(param_1,1), iVar10 != 0)) {
    func_80012604(10);
  }
  return;
}
