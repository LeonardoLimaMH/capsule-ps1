#include "common.h"

#include "ghidra.h"
undefined4 func_801111D4(int param_1)

{
    extern u8 D_7FFFFF[];
    extern u8 D_80133490[];
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x800000;
  do {
    iVar1 = func_80111268(param_1);
    iVar3 = iVar3 + -1;
    if (iVar1 != 0) {
      uVar2 = (uint)(*(int *)(param_1 + 8) == 0);
      *(uint *)(param_1 + 8) = uVar2;
      DecDCTvlc(iVar1,*(undefined4 *)(uVar2 * 4 + param_1));
      StFreeRing(iVar1);
      return 0;
    }
  } while (iVar3 != 0);
  slpm_printf(D_80133490);
  return 0xffff;
}
