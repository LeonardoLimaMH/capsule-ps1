#include "common.h"

#include "ghidra.h"
undefined4 func_800AF018(undefined2 param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar3 = 0;
  puVar4 = D_80100F38;
  do {
    uVar2 = uVar3 & 0xffff;
    iVar1 = -1;
    if (*(short *)(uVar2 * 0x1a8 + -0x7ff6e9d8) != -1) {
      if (uVar2 == (*D_8006AF80)) {
        iVar1 = 1;
      }
      else {
        iVar1 = (uint)(uVar2 != *(ushort *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e)) << 1;
      }
    }
    if (((iVar1 != -1) && (iVar1 != 2)) &&
       (iVar1 = func_800E14C4(uVar3 & 0xffff), iVar1 != 1)) {
      iVar1 = func_800E680C(uVar3 & 0xffff,param_1);
      *(ushort *)(puVar4 + 0x378) = (ushort)(iVar1 != 2);
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 0x79c;
  } while ((int)uVar3 < 6);
  return 0;
}
