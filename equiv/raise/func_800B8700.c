#include "common.h"

#include "ghidra.h"
undefined4 func_800B8700(short param_1,uint param_2,int param_3)

{
    extern s16 D_80078C20[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800EFF4C[];
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  if (param_1 == 0x18) {
    if (param_3 == 0) {
      func_800B84FC((*D_800EFF4C));
    }
    else if (param_3 == 1) {
      (*D_800EFF4C) = func_80013928
                             (param_2 & 0xffff,
                              *(undefined2 *)((u8 *)D_80091618 + (param_2 & 0xffff) * 0x1a8),
                              (int)(*D_80078C20));
    }
  }
  else if (param_1 == 0x19) {
    iVar5 = 1;
    if (param_3 == 0) {
      iVar3 = 0x10000;
      do {
        func_800B1260((D_800EFF4C)[1 - (iVar3 >> 0x10)]);
        iVar5 = iVar5 + -1;
        iVar3 = iVar5 * 0x10000;
      } while (-1 < iVar5 * 0x10000);
    }
    else {
      iVar5 = 1;
      if (param_3 == 1) {
        do {
          sVar4 = (short)iVar5;
          uVar1 = func_800B84FC((int)sVar4);
          uVar2 = func_80013928
                            (uVar1 & 0xffff,*(undefined2 *)((u8 *)D_80091618 + (uVar1 & 0xffff) * 0x1a8),
                             2);
          iVar5 = iVar5 + -1;
          (D_800EFF4C)[1 - sVar4] = uVar2;
        } while (-1 < iVar5 * 0x10000);
      }
    }
  }
  return 1;
}
