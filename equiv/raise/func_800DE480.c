#include "common.h"

#include "ghidra.h"
int func_800DE480(uint param_1,short param_2,short param_3,short param_4,short param_5)

{
    extern M2C_UNK D_80091618[];
  undefined2 uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = func_800B1260();
  bVar2 = (param_1 ^ 1) != 0;
  if (*(short *)((uVar5 & 0xffff) * 0x1a8 + -0x7ff6e958) != 0) {
    uVar5 = func_800B12D8(param_1);
    bVar2 = (param_1 ^ 1) == 0;
  }
  uVar1 = *(undefined2 *)((uVar5 & 0xffff) * 0x1a8 + -0x7ff6e9d8);
  if (((int)param_3 - 8U & 1) == 0) {
    sVar3 = (param_2 + -1) * 100;
  }
  else {
    sVar3 = (param_2 + -1) * 0x8d;
  }
  iVar8 = 0;
  iVar6 = 0;
  do {
    sVar4 = func_800D68D4(iVar6 >> 0x10);
    iVar7 = (int)sVar3 * (int)sVar4;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xfff;
    }
    sVar4 = func_800D6848(iVar6 >> 0x10);
    iVar6 = (int)sVar3 * (int)sVar4;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    sVar4 = func_800DD64C(param_1,uVar1,bVar2,
                          ((-0x32 - ((int)(((uint)(ushort)-((param_4 + -5) * 100 + 0x32) +
                                           (iVar6 >> 0xc)) * 0x10000) >> 0x10)) / 100 + 5) * 0x10000
                          >> 0x10,(((short)((param_5 + -5) * 100 + 0x32 + (short)(iVar7 >> 0xc)) +
                                   -0x32) / 100 + 5) * 0x10000 >> 0x10);
    iVar8 = iVar8 + 1;
  } while ((sVar4 != 0) && (iVar6 = iVar8 * 0x10000, iVar8 * 0x10000 >> 0x10 < 0x40));
  return (int)sVar4;
}
