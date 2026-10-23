#include "common.h"

#include "ghidra.h"
undefined4 func_800B077C(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 0xbca);
  uVar4 = 0;
  if (*(char *)(param_1 + 0xbe5) != '\0') {
    iVar1 = func_800C9414();
    iVar2 = uVar3 * 2;
    if ((iVar1 != 0) ||
       ((iVar1 = param_1 + 0x5d0 + iVar2, *(char *)(param_1 + 0xbe6) == *(char *)(iVar1 + 0x601) &&
        (iVar2 = uVar3 << 1, *(char *)(param_1 + 0xbe7) == *(char *)(iVar1 + 0x602)))))
    goto L800B0804;
    func_800B06A0(param_1,param_2);
    uVar4 = 1;
  }
  iVar2 = uVar3 << 1;
L800B0804:
  iVar2 = param_1 + 0x5d0 + iVar2;
  *(undefined1 *)(param_1 + 0xbe6) = *(undefined1 *)(iVar2 + 0x601);
  *(undefined1 *)(param_1 + 0xbe7) = *(undefined1 *)(iVar2 + 0x602);
  return uVar4;
}
