#include "common.h"

#include "ghidra.h"
void func_8009BEE0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  uVar6 = (uint)*(byte *)(param_1 + 0x5fa);
  iVar2 = func_800A8E34(param_1,uVar6,*(undefined1 *)(param_1 + uVar6 + 0x5fb));
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      iVar3 = func_800A8E34(param_1,uVar6,iVar2);
      if (iVar3 == 0) {
        *(char *)(param_1 + uVar6 + 0x5fb) = (char)iVar2;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
  }
  iVar2 = 0;
  puVar5 = (undefined1 *)(uVar6 * 2 + param_1 + 0x601);
  puVar4 = puVar5;
  do {
    iVar3 = param_1 + iVar2;
    uVar1 = *(undefined1 *)
             (param_1 + (uint)*(byte *)(param_1 + uVar6 + 0x5fb) * 0x7c + uVar6 * 0x2e8 + iVar2 +
             0x2d);
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar3 + 0x616) = uVar1;
    *puVar4 = uVar1;
    puVar4 = puVar5 + iVar2;
  } while (iVar2 < 2);
  return;
}
