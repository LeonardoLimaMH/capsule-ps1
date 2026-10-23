#include "common.h"

#include "ghidra.h"
undefined4 func_800DE938(void)

{
    extern M2C_UNK D_800F1E94[];
    extern M2C_UNK D_80100F38[];
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = func_800B1260();
  iVar4 = (uVar2 & 0xffff) * 0x79c;
  uVar3 = 0;
  if (*(short *)(iVar4 + -0x7fefeb14) != 0) {
    iVar6 = (int)*(short *)(iVar4 + -0x7fefeb18);
    iVar5 = iVar6 * 4 + iVar4;
    uVar1 = *(ushort *)((*D_80100F38) + iVar5 + 0x5b8);
    iVar7 = iVar6 + 1;
    *(undefined2 *)(iVar4 + -0x7fefe992) = *(undefined2 *)((*D_80100F38) + iVar5 + 0x5b6)
    ;
    *(undefined4 *)(iVar4 + -0x7fefe990) =
         *(undefined4 *)((*D_800F1E94) + ((int)((uint)uVar1 << 0x10) >> 0xe));
    iVar5 = iVar7;
    if (iVar7 < 0) {
      iVar5 = iVar6 + 0x20;
    }
    uVar3 = 1;
    *(short *)(iVar4 + -0x7fefeb18) = (short)iVar7 + (short)(iVar5 >> 5) * -0x20;
    *(short *)(iVar4 + -0x7fefeb14) = *(short *)(iVar4 + -0x7fefeb14) + -1;
  }
  return uVar3;
}
