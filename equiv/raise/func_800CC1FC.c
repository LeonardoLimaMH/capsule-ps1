#include "common.h"

#include "ghidra.h"
undefined4 func_800CC1FC(undefined4 param_1,uint param_2,short param_3)

{
    extern u8 D_80063940[];
    extern u8 D_8006B1D4[];
    extern u8 D_80100F38[];
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar1 = func_800B1260();
  uVar3 = 3;
  if (param_3 != 1) {
    if (*(short *)((uVar1 & 0xffff) * 0x79c + -0x7fefed4a) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((param_2 & 0xffff) * 0x3c + -0x7ff9c6a8) & 3;
  }
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 == 2) {
L800CC314:
    puVar2 = D_8006B1D4;
    uVar3 = uVar3 * 6;
  }
  else {
    if (uVar3 < 3) {
      if (uVar3 != 1) goto L800CC314;
    }
    else if (uVar3 != 3) goto L800CC314;
    puVar2 = D_8006B1D4 + uVar3 * 6;
    uVar3 = *(uint *)((param_2 & 0xffff) * 0x3c + -0x7ff9c6b4) >> 3 & 6;
  }
  func_80034AB0(*(undefined2 *)(puVar2 + uVar3));
  return 1;
}
