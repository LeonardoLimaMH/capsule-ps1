#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80112D28", DecDCTin);

void DecDCTout(void) {
    func_80113004();
}

#include "ghidra.h"
uint DecDCTinSync(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = func_80113090();
  }
  else {
    uVar1 = func_801131B8();
    uVar1 = uVar1 >> 0x1d & 1;
  }
  return uVar1;
}

#include "ghidra.h"
uint DecDCToutSync(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = func_80113124();
  }
  else {
    uVar1 = func_801131B8();
    uVar1 = uVar1 >> 0x18 & 1;
  }
  return uVar1;
}

void DecDCTinCallback(s32 arg0) {
    slpm_DMACallback(0, arg0);
}

void DecDCToutCallback(s32 arg0) {
    slpm_DMACallback(1, arg0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80112D28", func_80112E84);
