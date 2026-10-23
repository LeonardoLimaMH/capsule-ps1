#include "common.h"

#include "ghidra.h"
undefined4 func_800DCC84(undefined1 param_1)

{
    extern M2C_UNK D_80119660[];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  
  bVar1 = func_800D7328(param_1,D_80119660);
  uVar2 = 0;
  if (bVar1 != 0) {
    func_800D90C0(param_1);
    bVar4 = 0;
    if (bVar1 != 0) {
      do {
        uVar3 = (uint)bVar4;
        bVar4 = bVar4 + 1;
        func_800D943C(param_1,(D_80119660)[uVar3]);
      } while (bVar4 < bVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}
