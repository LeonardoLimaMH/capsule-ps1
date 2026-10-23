#include "common.h"

#include "ghidra.h"
void func_800227D4(int param_1)

{
    extern M2C_UNK D_80065164[];
    extern M2C_UNK D_8006AF90[];
    extern u8 D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008F704[];
    extern u32 D_8008F708[];
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  switch(*(undefined2 *)(param_1 + 0x7a)) {
  case 0:
    *(undefined4 *)(param_1 + 0x3c) = 0;
    sVar1 = *(short *)(param_1 + 0x7a);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe | 8;
    goto L800229F0;
  case 1:
  case 7:
    goto L800229F4;
  case 2:
    if ((*D_8008F708) != 1) {
      if ((*D_8008F708) == 3) {
        *(undefined2 *)(param_1 + 0x7a) = 6;
      }
      goto L80022A88;
    }
    break;
  case 3:
    uVar3 = *(uint *)(param_1 + 0x34) & 0x7f;
    if (uVar3 == 2) {
      uVar3 = *(uint *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x6a) = 0xfffa;
L800228AC:
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(uint *)(param_1 + 0x38) = uVar3 | 8;
    }
    else if ((uVar3 == 0) || (uVar3 == 3)) {
      uVar3 = *(uint *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x6a) = 0xffff;
      goto L800228AC;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  case 4:
    uVar3 = *(int *)(param_1 + 0x3c) + 1;
    *(uint *)(param_1 + 0x3c) = uVar3;
    if (uVar3 < 0x41) goto L80022A88;
    if ((*(uint *)(param_1 + 0x34) & 0x7f) == 1) {
      func_80012668();
    }
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffff7;
    if ((*(uint *)(param_1 + 0x34) & 0x7f) == 2) {
      *(undefined2 *)(param_1 + 0x7a) = 8;
      goto L80022A88;
    }
    break;
  case 5:
    if ((*D_8008F708) < 2) {
      if ((*D_8008F708) != 0) goto L80022A88;
      uVar3 = *(uint *)(param_1 + 0x34) & 0x7f;
      if ((uVar3 == 0) || (uVar3 == 3)) {
        uVar2 = 1;
        goto L80022A7C;
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
      goto L80022A80;
    }
    break;
  case 6:
    uVar3 = *(uint *)(param_1 + 0x34) & 0x7f;
    if ((uVar3 == 0) || (uVar3 == 3)) {
      uVar2 = 6;
L800229D0:
      *(undefined2 *)(param_1 + 0x6a) = uVar2;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else if (uVar3 == 1) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x6e) = 0xfffa;
    }
    else {
      uVar2 = 0xfffa;
      if (uVar3 == 2) goto L800229D0;
    }
    sVar1 = *(short *)(param_1 + 0x7a);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 8;
L800229F0:
    *(short *)(param_1 + 0x7a) = sVar1 + 1;
L800229F4:
    uVar3 = *(int *)(param_1 + 0x3c) + 1;
    *(uint *)(param_1 + 0x3c) = uVar3;
    if (0x40 < uVar3) {
      if ((*(uint *)(param_1 + 0x34) & 0x7f) == 1) {
        func_80012668();
      }
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffff7;
      *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
    }
    goto L80022A88;
  case 8:
    if (1 < (*D_8008F708)) {
      func_800185F8(param_1);
      return;
    }
    uVar2 = 6;
    if ((*D_8008F708) != 0) goto L80022A88;
L80022A7C:
    *(undefined2 *)(param_1 + 0x6a) = uVar2;
L80022A80:
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x7a) = 0;
  default:
    goto L80022A88;
  }
  *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
L80022A88:
  uVar3 = *(uint *)(param_1 + 0x34) & 0x7f;
  if (uVar3 == 0) {
    if ((*D_80085428) == '\0') {
      uVar5 = 0x6000e;
      iVar4 = *(short *)((*D_8008F704) * 2 + *(int *)(param_1 + 0x7c) * 0x1e + -0x7ff9506e) * 2 +
              0x107;
    }
    else {
      uVar5 = 0x60013;
      iVar4 = *(short *)((*D_8008F704) * 2 + *(int *)(param_1 + 0x7c) * 0x1e + -0x7ff9506e) * 2 + 0xe1
      ;
    }
    uVar5 = func_80019F30(uVar5,iVar4);
    *(undefined4 *)(param_1 + 0x18) = uVar5;
  }
  else {
    uVar6 = 0;
    if (uVar3 == 2) {
      do {
        uVar5 = 0;
        uVar3 = uVar6 + 1;
        if (uVar6 == (*D_8008F704)) {
          uVar5 = 3;
        }
        func_8001F1A8((int)((*(ushort *)(param_1 + 0x46) + 0x10) * 0x10000) >> 0x10,
                      (int)(((uint)*(ushort *)(param_1 + 0x4a) + uVar3 * 0x10) * 0x10000) >> 0x10,
                      uVar5,1,0,
                      (*D_80065164) +
                      *(short *)(uVar6 * 2 + *(int *)(param_1 + 0x7c) * 0x1e + -0x7ff9506e) * 0xc,1,
                      6,*(short *)(param_1 + 0x4e) + -1);
        uVar6 = uVar3;
      } while (uVar3 < 3);
    }
  }
  return;
}
