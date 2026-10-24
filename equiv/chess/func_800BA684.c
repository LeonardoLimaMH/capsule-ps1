#include "common.h"

#include "ghidra.h"
void func_800BA684(int param_1)

{
    extern u16 D_8008EE50[];
  int iVar1;
  
  if ((*D_8008EE50) < 0xb) {
    if ((*D_8008EE50) == 0) {
      iVar1 = func_800C7F74(param_1 + 0x5d0);
      if (iVar1 == 0) goto L800BA72C;
    }
    else {
      iVar1 = func_800C7FDC();
      if (iVar1 == 0) {
        return;
      }
    }
    func_80012628();
  }
  else {
    if ((*D_8008EE50) != 0xb) {
      return;
    }
L800BA72C:
    func_800125D8();
  }
  return;
}
