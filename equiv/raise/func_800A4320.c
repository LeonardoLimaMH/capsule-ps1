#include "common.h"

#include "ghidra.h"
undefined4 func_800A4320(undefined2 param_1,undefined2 param_2,short param_3,short param_4)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  sVar3 = param_4;
  if (param_3 == 1) {
    if (param_4 == 1) {
      iVar1 = func_800A3448(param_1,param_2,1,1,0,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,1,1,1,1);
      if (iVar1 == 0) {
        return 0;
      }
      sVar3 = 1;
      uVar4 = 1;
      sVar2 = 1;
      goto L800A4774;
    }
    if ((ushort)(param_4 - 2U) < 6) {
      iVar1 = func_800A3448(param_1,param_2,1,param_4,0,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,1,param_4,1,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,1,param_4,1,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,1,param_4,1,0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = 0;
      uVar5 = 0xffffffff;
      sVar2 = 1;
    }
    else {
      if (param_4 != 8) goto L800A4788;
      iVar1 = func_800A3448(param_1,param_2,1,8,1,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,1,8,1,0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = 0;
      uVar5 = 0xffffffff;
      sVar3 = 8;
      sVar2 = 1;
    }
  }
  else {
    if (5 < (ushort)(param_3 - 2U)) goto L800A4788;
    sVar2 = param_3;
    if (param_4 == 1) {
      iVar1 = func_800A3448(param_1,param_2,param_3,1,0xffffffff,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,param_3,1,0xffffffff,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,param_3,1,0,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,param_3,1,1,1);
      if (iVar1 == 0) {
        return 0;
      }
      sVar3 = 1;
      uVar4 = 1;
    }
    else {
      if ((ushort)(param_4 - 2U) < 6) {
        iVar1 = func_800A3448(param_1,param_2,param_3,param_4,0xffffffff,0);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = func_800A3448(param_1,param_2,param_3,param_4,0xffffffff,1);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = func_800A3448(param_1,param_2,param_3,param_4,0,1);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = func_800A3448(param_1,param_2,param_3,param_4,1,1);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = func_800A3448(param_1,param_2,param_3,param_4,1,0);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = func_800A3448(param_1,param_2,param_3,param_4,1,0xffffffff);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = func_800A3448(param_1,param_2,param_3,param_4,0,0xffffffff);
        if (iVar1 == 0) {
          return 0;
        }
        uVar4 = 0xffffffff;
        uVar5 = 0xffffffff;
        goto L800A4778;
      }
      if (param_4 != 8) goto L800A4788;
      iVar1 = func_800A3448(param_1,param_2,param_3,8,1,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,param_3,8,1,0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,param_3,8,0,0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,param_3,8,0xffffffff,0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      sVar3 = 8;
      uVar4 = 0xffffffff;
    }
L800A4774:
    uVar5 = 0;
  }
L800A4778:
  iVar1 = func_800A3448(param_1,param_2,sVar2,sVar3,uVar4,uVar5);
  if (iVar1 == 0) {
    return 0;
  }
L800A4788:
  if (param_3 != 8) {
    return 1;
  }
  if (param_4 == 1) {
    iVar1 = func_800A3448(param_1,param_2,8,1,0xffffffff,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_800A3448(param_1,param_2,8,1,0xffffffff,1);
    if (iVar1 == 0) {
      return 0;
    }
    param_4 = 1;
  }
  else {
    if (5 < (ushort)(param_4 - 2U)) {
      if (param_4 != 8) {
        return 1;
      }
      iVar1 = func_800A3448(param_1,param_2,8,8,0,0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,8,8,0xffffffff,0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_800A3448(param_1,param_2,8,8,0xffffffff,0);
      if (iVar1 != 0) {
        return 1;
      }
      return 0;
    }
    iVar1 = func_800A3448(param_1,param_2,8,param_4,0,0xffffffff);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_800A3448(param_1,param_2,8,param_4,0xffffffff,0xffffffff);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_800A3448(param_1,param_2,8,param_4,0xffffffff,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_800A3448(param_1,param_2,8,param_4,0xffffffff,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = func_800A3448(param_1,param_2,8,param_4,0,1);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}
