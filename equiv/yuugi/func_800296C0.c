#include "common.h"

#include "ghidra.h"
bool func_800296C0(undefined4 param_1,int param_2)

{
    extern u8 D_80091618[];
    extern u8 D_800EF364[];
  uint uVar1;
  
  uVar1 = func_800B1260();
  if ((uVar1 & 0xffff) != 0xffff) {
    uVar1 = (uint)*(ushort *)((uVar1 & 0xffff) * 0x1a8 + -0x7ff6e9d8);
    if (uVar1 == 0xffff) {
      return false;
    }
    if (((uVar1 == 1) || (uVar1 == 5)) || (uVar1 == 3)) {
      return (D_800EF364)[param_2 + uVar1 * 0x40] == -1;
    }
  }
  return false;
}
