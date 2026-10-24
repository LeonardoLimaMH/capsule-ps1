#include "common.h"

#include "ghidra.h"
void func_800B40F0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1 + 0x5d0;
  uVar4 = (uint)*(byte *)(param_1 + 0xbca);
  switch((int)((*(byte *)(param_1 + 0xbf5) + 2) * 0x1000000) >> 0x18) {
  case 0:
    func_800A8E84();
    func_800B3C4C(0);
    return;
  default:
    uVar2 = 2;
    *(undefined1 *)(param_1 + 0xbe0) = 1;
    *(undefined1 *)(param_1 + 0xbe9) = 1;
    break;
  case 2:
    if (*(char *)(iVar3 + uVar4 + 0x10) == '\0') {
      *(undefined1 *)(iVar3 + uVar4 * 6 + 0x5ed) = 1;
    }
    *(undefined1 *)(param_1 + 0xbe9) = 0;
    uVar2 = 4;
    break;
  case 3:
    uVar2 = 6;
    if (*(char *)(iVar3 + uVar4 + 0x10) == '\0') {
      *(undefined1 *)(iVar3 + uVar4 * 6 + 0x5ed) = 2;
    }
    *(undefined1 *)(param_1 + 0xbe9) = 0;
    *(undefined1 *)(param_1 + 0xbe0) = 2;
    break;
  case 4:
    if (*(char *)(iVar3 + uVar4 + 0x10) == '\0') {
      *(undefined1 *)(iVar3 + uVar4 * 6 + 0x5ed) = 3;
    }
    *(undefined1 *)(param_1 + 0xbe9) = 0;
    uVar2 = func_800B3AE4(iVar3);
    uVar1 = func_80012604
                      (uVar2,*(undefined1 *)
                              (iVar3 + (uint)*(byte *)(iVar3 + uVar4 + 0x5fb) * 0x7c + uVar4 * 0x2e8
                              + 0x18));
    uVar2 = 9;
    *(undefined1 *)(param_1 + 0xbee) = uVar1;
    break;
  case 5:
    *(undefined1 *)(param_1 + 0xbe9) = 0;
    uVar2 = 10;
  }
  func_800125AC(uVar2);
  return;
}
