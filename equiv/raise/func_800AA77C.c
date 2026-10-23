#include "common.h"

#include "ghidra.h"
undefined4 func_800AA77C(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 1;
  do {
    sVar1 = func_800B1260(iVar4);
    if (sVar1 != -1) {
      switch(param_1) {
      case 0:
      case 1:
        iVar2 = func_800E1594(sVar1);
        if (iVar2 == 1) {
          return 0;
        }
        iVar2 = func_800E1388(sVar1);
        if (iVar2 != 1) {
          return 0;
        }
        iVar2 = func_800E1140(sVar1);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = func_800E16AC(sVar1);
        if (iVar2 != 1) {
          iVar2 = func_800E14C4(sVar1);
          goto L800AA874;
        }
        break;
      case 2:
        uVar3 = 1;
        break;
      case 3:
        iVar2 = func_800E1594(sVar1);
        if (iVar2 == 1) {
          return 0;
        }
        iVar2 = func_800E1388(sVar1);
        if (iVar2 != 1) {
          return 0;
        }
        iVar2 = func_800E16AC(sVar1);
L800AA874:
        if (iVar2 != 1) {
          uVar3 = 1;
        }
        break;
      case 4:
        iVar2 = func_800E1594();
        if (iVar2 == 1) {
          return 0;
        }
      }
    }
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
      return uVar3;
    }
  } while( true );
}
