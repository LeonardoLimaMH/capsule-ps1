#include "common.h"

#include "ghidra.h"
void func_800A2308(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = param_1 + 0x5d0;
  uVar8 = (uint)*(byte *)(param_1 + 0xbca);
  uVar7 = (uint)*(byte *)(iVar6 + uVar8 + 0x6db);
  if ((*(char *)(param_1 + 0xbea) == '\0') || (*(char *)(param_1 + 0xbea) == '\x05')) {
    if (*(char *)(iVar6 + uVar8 + 0x10) != '\0') {
      func_800AE03C(iVar6,uVar8);
    }
    func_800C8EF0(param_1,uVar8,iVar6 + uVar8 * 2 + 0x601);
    iVar5 = 0;
    iVar3 = iVar6 + uVar7 * 0x7c + uVar8 * 0x2e8;
    iVar2 = iVar3;
    do {
      puVar1 = (undefined1 *)(uVar8 * 2 + iVar6 + 0x601 + iVar5);
      iVar5 = iVar5 + 1;
      *(undefined1 *)(iVar2 + 0x2d) = *puVar1;
      iVar2 = iVar3 + iVar5;
    } while (iVar5 < 2);
    iVar2 = func_800A1924(param_1,uVar8,iVar6 + uVar8 * 2 + 0x601);
    uVar4 = 6;
    if (iVar2 < 1) {
      iVar3 = 1;
      if (-1 < iVar2) {
        return;
      }
      iVar2 = iVar6 + uVar7 * 0x7c + uVar8 * 0x2e8 + 1;
      do {
        *(undefined1 *)(iVar2 + 0x2d) = 0;
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar3);
      *(undefined1 *)(iVar6 + uVar7 * 0x7c + uVar8 * 0x2e8 + 0x2f) = 0;
      uVar4 = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0xbe9) = 0;
      *(undefined1 *)(param_1 + 0xbe5) = 0;
    }
    func_80012604(uVar4);
  }
  return;
}
