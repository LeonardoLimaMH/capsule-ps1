#include "common.h"

#include "ghidra.h"
undefined4 func_800DD45C(void)

{
    extern M2C_UNK D_800F1E34[];
    extern M2C_UNK D_80100F38[];
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = func_800B1260();
  iVar5 = (uVar3 & 0xffff) * 0x79c;
  uVar4 = 0;
  if (*(short *)(iVar5 + -0x7fefecd8) != 0) {
    iVar8 = (int)*(short *)(iVar5 + -0x7fefecdc);
    iVar6 = iVar8 * 4 + iVar5;
    uVar1 = *(undefined2 *)((*D_80100F38) + iVar6 + 0x3f2);
    uVar2 = *(ushort *)((*D_80100F38) + iVar6 + 0x3f4);
    *(undefined2 *)(iVar5 + -0x7fefec56) = 1;
    iVar7 = iVar8 + 1;
    *(undefined2 *)(iVar5 + -0x7fefec54) = uVar1;
    *(undefined4 *)(iVar5 + -0x7fefec50) =
         *(undefined4 *)((*D_800F1E34) + ((int)((uint)uVar2 << 0x10) >> 0xe));
    iVar6 = iVar7;
    if (iVar7 < 0) {
      iVar6 = iVar8 + 0x20;
    }
    uVar4 = 1;
    *(short *)(iVar5 + -0x7fefecdc) = (short)iVar7 + (short)(iVar6 >> 5) * -0x20;
    *(short *)(iVar5 + -0x7fefecd8) = *(short *)(iVar5 + -0x7fefecd8) + -1;
  }
  return uVar4;
}
