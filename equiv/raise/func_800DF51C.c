#include "common.h"

#include "ghidra.h"
bool func_800DF51C(uint param_1,undefined4 param_2,undefined4 param_3,ushort param_4,short param_5)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EF364[];
    extern M2C_UNK D_800EFF58[];
    extern s32 D_800EF350[];
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  uVar2 = func_800B1260();
  bVar1 = (param_1 ^ 1) != 0;
  if (*(short *)((uVar2 & 0xffff) * 0x1a8 + -0x7ff6e958) != 0) {
    uVar2 = func_800B12D8(param_1);
    bVar1 = (param_1 ^ 1) == 0;
  }
  if (((ushort)(param_4 - 1) < 8) && ((ushort)(param_5 - 1U) < 8)) {
    iVar4 = (int)((uint)param_4 << 0x10) >> 0xd;
    cVar3 = D_800EF350
            [iVar4 + (uint)*(ushort *)((uVar2 & 0xffff) * 0x1a8 + -0x7ff6e9d8) * 0x40 + (int)param_5
             + 0xb];
    if ((cVar3 != -1) &&
       (*(char *)((uint)bVar1 * 0x40 + iVar4 + (int)param_5 + -0x7ff1001d) == '\x01')) {
      cVar3 = -1;
    }
    bVar1 = cVar3 != -1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}
