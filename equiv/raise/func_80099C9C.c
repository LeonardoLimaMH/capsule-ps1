#include "common.h"

#include "ghidra.h"
void func_80099C9C(int param_1)

{
    extern M2C_UNK D_8008ED68[];
    extern u8 D_8008F702[];
    extern s32 D_8008F708[];
    extern u32 D_8008F714[];
    extern s32 D_8008EE4C[];
  undefined2 uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x34) & 0x7f;
  if ((*D_8008F702) == '\x01') {
    return;
  }
  switch(*(undefined2 *)(param_1 + 0x7a)) {
  case 0:
    sVar3 = *(short *)(param_1 + 0x7a) + 1;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
    break;
  case 1:
    if (D_8008EE4C != 6) {
      if ((*D_8008F714) == 3) goto L80099ED4;
      goto L80099F04;
    }
    sVar3 = *(short *)(param_1 + 0x7a);
    goto L80099E38;
  case 2:
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe | 8;
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  case 3:
    uVar2 = *(int *)(param_1 + 0x3c) + 1;
    *(uint *)(param_1 + 0x3c) = uVar2;
    if (*(short *)(param_1 + 0x76) == 0) {
      if (uVar2 < 0x29) goto L80099F04;
    }
    else if (uVar2 < 9) goto L80099F04;
    if (uVar4 == 4) {
      func_800125D8();
    }
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffff7;
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
    goto L80099F04;
  case 4:
    if ((*D_8008F714) == 0) {
      sVar3 = *(short *)(param_1 + 0x7a);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x76) = 0xfe00;
    }
    else {
      if ((*D_8008F714) != 2) goto L80099F04;
      uVar1 = 10;
      if (uVar4 == 4) {
        uVar1 = 0xfff6;
      }
      *(undefined2 *)(param_1 + 0x6a) = uVar1;
      sVar3 = *(short *)(param_1 + 0x7a);
      *(undefined2 *)(param_1 + 0x76) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
L80099E38:
    *(short *)(param_1 + 0x7a) = sVar3 + 1;
    goto L80099F04;
  case 5:
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 8;
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  case 6:
    uVar2 = *(int *)(param_1 + 0x3c) + 1;
    *(uint *)(param_1 + 0x3c) = uVar2;
    if (*(short *)(param_1 + 0x76) == 0) {
      if (uVar2 < 0x29) goto L80099F04;
    }
    else if (uVar2 < 9) goto L80099F04;
    if (uVar4 == 4) {
      func_800125D8();
    }
    *(undefined2 *)(param_1 + 0x7a) = 7;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
    goto L80099F04;
  case 7:
    if (1 < (*D_8008F714)) {
L80099ED4:
      func_800185F8(param_1);
      return;
    }
    if ((*D_8008F714) != 1) goto L80099F04;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x76) = 0x200;
    sVar3 = 1;
    break;
  default:
    goto L80099F04;
  }
  *(short *)(param_1 + 0x7a) = sVar3;
L80099F04:
  if ((uVar4 == 0xf) && ((*(uint *)(param_1 + 0x38) & 9) == 0)) {
    *(short *)(param_1 + 0x46) = (short)(*D_8008F708) * 0x50 + -0x38;
  }
  return;
}
