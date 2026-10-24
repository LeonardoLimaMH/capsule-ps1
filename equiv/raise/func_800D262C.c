#include "common.h"

#include "ghidra.h"
undefined4 func_800D262C(int param_1,uint param_2)

{
    extern M2C_UNK D_80100F38[];
  int iVar1;
  uint uVar2;
  
  if (param_1 == 2) {
    if (*(short *)(param_2 * 0x79c + -0x7fefed44) != 0) {
      func_800D2894(2,param_2);
      if (*(short *)(param_2 * 0x79c + -0x7fefed42) != 0) {
        return 0;
      }
      func_800D2864(2,param_2);
      return 1;
    }
    uVar2 = param_2 & 0xffff;
    iVar1 = func_800E14C4(uVar2);
    if (iVar1 == 1) {
      return 0;
    }
    iVar1 = func_800E1140(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_800E1388(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_800E16AC(uVar2);
    if (iVar1 != 1) {
      iVar1 = func_800D2748(2,param_2);
      if (iVar1 < 1) {
        return 0;
      }
      func_80034AB0(0x55);
      func_800D2828(2,param_2);
      func_800C0810(0x20,uVar2);
    }
  }
  return 0;
}
