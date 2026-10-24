#include "common.h"

#include "ghidra.h"
undefined4 func_8009D6A4(int param_1)

{
    extern s32 D_8008EDF0[];
    extern s32 D_800EBDE0[];
    extern s32 D_800EBDE4[];
    extern M2C_UNK D_800EBDE8[];
    extern s32 D_800EBFEC[];
    extern s32 D_800EBFF0[];
    extern s32 D_800EBFF4[];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*D_800EBDE0) != 0) {
    (*D_800EBDE0) = (*D_800EBDE0) + -1;
    return 0;
  }
  if (((*D_8008EDF0) & 0x5000) != 0) {
    if (((*D_8008EDF0) & 0x1000) == 0) {
      iVar4 = (*D_800EBFF0);
      if ((((*D_8008EDF0) & 0x4000) != 0) &&
         (iVar4 = 0,
         (*D_800EBFF0) != *(int *)((D_800EBDE8)[(*D_800EBDE4)] + 0x14) + -1))
      {
        iVar4 = (*D_800EBFF0) + 1;
      }
    }
    else {
      if ((*D_800EBFF0) == 0) {
        (*D_800EBFF0) = *(int *)((D_800EBDE8)[(*D_800EBDE4)] + 0x14);
      }
      iVar4 = (*D_800EBFF0) + -1;
    }
    (*D_800EBFF0) = iVar4;
    (*D_800EBDE0) = 0x10;
    (*D_800EBFEC) = 0;
    return 0;
  }
  if (((*D_8008EDF0) & 0xa000) == 0) {
    if (((*D_8008EDF0) & 0x20) == 0) {
      return 0;
    }
    if ((*D_800EBFEC) != 0) {
      return 0;
    }
    iVar4 = func_80019F30(*(uint *)(D_800EBDE8)[(*D_800EBDE4)] | 0x70000,
                            *(uint *)((int)(D_800EBDE8)[(*D_800EBDE4)] +
                                     0x18) + (*D_800EBFF0));
    if (iVar4 == 0) {
      return 0;
    }
    func_80012A20(param_1 + 0x14,iVar4,0);
    iVar4 = (*D_800EBDE4);
    uVar3 = *(uint *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(uint *)(param_1 + 0x30) = uVar3 & 0xfffffe3f | 0x40;
    if (iVar4 < 4) {
      uVar3 = uVar3 & 0xfffffe0f | 0x60;
      goto L8009DA60;
    }
    if (7 < iVar4) {
      if (iVar4 < 10) {
        uVar3 = uVar3 & 0xfffffe0f | 0x60;
        goto L8009DA60;
      }
      if (iVar4 < 0x1a) {
        uVar3 = uVar3 & 0xfffffe0f | 0x60;
        goto L8009DA60;
      }
    }
    uVar3 = uVar3 & 0xfffffe0f | 0x50;
L8009DA60:
    *(uint *)(param_1 + 0x30) = uVar3;
    iVar4 = (*D_800EBFF0);
    *(undefined2 *)(param_1 + 0x4e) = 5;
    *(undefined2 *)(param_1 + 0x46) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(int *)(param_1 + 0x7c) = iVar4;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    return 0;
  }
  (*D_800EBDE0) = 0x10;
  (*D_800EBFEC) = 1;
  if (((*D_8008EDF0) & 0x8000) == 0) {
    iVar4 = (*D_800EBFF4);
    if ((((*D_8008EDF0) & 0x2000) != 0) &&
       (iVar4 = 0,
       (*D_800EBFF4) != *(int *)((D_800EBDE8)[(*D_800EBDE4)] + 8) + -1)) {
      iVar4 = (*D_800EBFF4) + 1;
    }
  }
  else {
    if ((*D_800EBFF4) == 0) {
      (*D_800EBFF4) = *(int *)((D_800EBDE8)[(*D_800EBDE4)] + 8);
    }
    iVar4 = (*D_800EBFF4) + -1;
  }
  (*D_800EBFF4) = iVar4;
  if ((*D_800EBDE4) == 7) {
    uVar1 = func_80019F30(0x2000e,(*D_800EBFF4) / 2 + 0x20);
    func_80019F30(uVar1,1,0,0);
  }
  iVar2 = func_80015CD0(*(uint *)(D_800EBDE8)[(*D_800EBDE4)] | 0x60000,
                          *(uint *)((int)(D_800EBDE8)[(*D_800EBDE4)] + 0xc)
                          + (*D_800EBFF4));
  iVar4 = (*D_800EBDE4);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x66) = 0;
  *(uint *)(param_1 + 0x30) = uVar3 & 0xfffffe3f | 0x40;
  if (iVar4 < 4) {
    uVar3 = uVar3 & 0xfffffe0f | 0x60;
    goto L8009D958;
  }
  if (7 < iVar4) {
    if (iVar4 < 10) {
      uVar3 = uVar3 & 0xfffffe0f | 0x60;
      goto L8009D958;
    }
    if (iVar4 < 0x1a) {
      uVar3 = uVar3 & 0xfffffe0f | 0x60;
      goto L8009D958;
    }
  }
  uVar3 = uVar3 & 0xfffffe0f | 0x50;
L8009D958:
  *(uint *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x18) = iVar2;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffff7;
  return 0;
}
