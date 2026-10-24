#include "common.h"

#include "ghidra.h"
int func_800DD2B8(uint param_1,short param_2,short param_3)

{
    extern M2C_UNK D_80091618[];
  short sVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = func_800B1260();
  bVar3 = (param_1 ^ 1) != 0;
  if (*(short *)((uVar2 & 0xffff) * 0x1a8 + -0x7ff6e958) != 0) {
    uVar2 = func_800B12D8(param_1,uVar2,bVar3);
    bVar3 = (param_1 ^ 1) == 0;
  }
  sVar1 = func_800DD64C(param_1,*(undefined2 *)((uVar2 & 0xffff) * 0x1a8 + -0x7ff6e9d8),bVar3,
                        (int)param_2,(int)param_3);
  return (int)sVar1;
}
