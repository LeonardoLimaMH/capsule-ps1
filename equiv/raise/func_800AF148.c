#include "common.h"

#include "ghidra.h"
undefined4 func_800AF148(undefined2 param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar4 = 0;
  puVar5 = D_80100F38;
  do {
    uVar3 = uVar4 & 0xffff;
    iVar2 = -1;
    if (*(short *)(uVar3 * 0x1a8 + -0x7ff6e9d8) != -1) {
      if (uVar3 == (*D_8006AF80)) {
        iVar2 = 1;
      }
      else {
        iVar2 = (uint)(uVar3 != *(ushort *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e)) << 1;
      }
    }
    if (((iVar2 != -1) && (iVar2 != 2)) &&
       (iVar2 = func_800E14C4(uVar4 & 0xffff), iVar2 != 1)) {
      sVar1 = func_800E6BD8(uVar4 & 0xffff,param_1);
      *(ushort *)(puVar5 + 0x378) = (ushort)(sVar1 == 0);
    }
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 0x79c;
  } while ((int)uVar4 < 6);
  return 0;
}
