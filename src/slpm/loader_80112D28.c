#include "common.h"

#include "common.h"

/* DecDCTin: C do SDK PsyQ importado de https://github.com/sozud/psy-q-decomp (MIT),
   arquivo src/press/libpress.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
void DecDCTin(s32* arg0, s32 arg1) {
    s32 new_var2;
    s32 var_v0;
    s32 var_v0_2;
    if (arg1 & 1) {
        var_v0 = (*arg0) & 0xF7FFFFFF;
    } else {
        new_var2 = 0x08000000;
        var_v0 = 0x08000000;
        var_v0 = (*arg0) | var_v0;
    }
    *arg0 = var_v0;
    var_v0 = 0x02000000;
    if (arg1 & 2) {
        new_var2 = var_v0;
        var_v0_2 = (*arg0) | new_var2;
    } else {
        var_v0_2 = (*arg0) & 0xFDFFFFFF;
    }
    *arg0 = var_v0_2;
    func_80112F74(arg0, *(u16*)arg0);
}

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
