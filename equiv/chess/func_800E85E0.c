#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f754 (*(u16 *)0x8008F754)
#define DAT_8008f756 (*(u16 *)0x8008F756)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 func_800202A4();
extern s32 func_80034AB0();
extern s32 rsin();
undefined4 func_800E85E0(undefined4 param_1,int param_2,char *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;

  if (DAT_8008ee54 != 2) {
    if (2 < DAT_8008ee54) {
      if (DAT_8008ee54 != 4) {
        if (DAT_8008ee54 < 4) {
          iVar3 = rsin((D_80119714 * 0x1000) / 7);
          iVar3 = (short)DAT_8008f756 * iVar3;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xfff;
          }
          *(short *)(*(int *)(param_4 + 0x70) + 0x54) = (short)(iVar3 >> 0xc);
          DAT_8008f756 = DAT_8008f756 - 6;
          if ((int)((uint)DAT_8008f756 << 0x10) < 1) {
            DAT_8008ee54 = DAT_8008ee54 + 1;
            D_80119714 = 0;
            return 0;
          }
          return 0;
        }
        if (DAT_8008ee54 != 99) {
          return 0;
        }
      }
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) ^ 0x80000000;
      *(undefined1 *)(param_2 + 0x70d) = 0;
      return 1;
    }
    if (DAT_8008ee54 == 0) {
      param_3[0x17] = -0x79;
      param_3[0x23] = '\x01';
      if (*param_3 == 'L') {
        sVar2 = func_800202A4(5);
        DAT_8008f754 = sVar2 + 3;
      }
      else {
        sVar2 = func_800202A4(7);
        DAT_8008f754 = sVar2 + 4;
      }
      *(undefined2 *)(param_2 + 0x710) = 0;
      *(undefined1 *)(param_2 + 0x70d) = 1;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      D_80119714 = 0;
      return 0;
    }
    if (DAT_8008ee54 != 1) {
      return 0;
    }
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x80000000;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  iVar3 = *(int *)(*(int *)(param_3 + 0x70) + 0x20);
  if (iVar3 < 4) {
    return 0;
  }
  if (iVar3 == 0x12) {
    *(undefined1 *)(param_2 + 0x70d) = 1;
    DAT_8008f754 = DAT_8008f754 - 1;
    if (0 < (int)((uint)DAT_8008f754 << 0x10)) {
      *(undefined4 *)(*(int *)(param_3 + 0x70) + 0x20) = 6;
    }
  }
  if ((iVar3 == 6) && (*(char *)(param_2 + 0x70d) != '\0')) {
    sVar2 = *(short *)(param_2 + 0x710) + 10;
    *(short *)(param_2 + 0x710) = sVar2;
    if ((short)(ushort)*(byte *)(param_4 + 0xe) < sVar2) {
      *(ushort *)(param_2 + 0x710) = (ushort)*(byte *)(param_4 + 0xe);
    }
    *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
    *(undefined1 *)(param_2 + 0x70d) = 0;
  }
  sVar2 = *(short *)(*(int *)(param_4 + 0x70) + 0x46);
  sVar1 = *(short *)(*(int *)(param_3 + 0x70) + 0x46);
  iVar3 = rsin((D_80119714 * 0x1000) / 7);
  iVar3 = iVar3 * 300;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  iVar3 = iVar3 >> 0xc;
  if ((int)sVar2 - (int)sVar1 < 1) {
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar2 = -(short)iVar3;
  }
  else {
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar2 = (short)iVar3;
  }
  *(short *)(*(int *)(param_4 + 0x70) + 0x54) = sVar2;
  iVar3 = D_80119714;
  if (D_80119714 < 0) {
    iVar3 = D_80119714 + 7;
  }
  if ((iVar3 >> 3) << 3 == D_80119714 + -1) {
    func_80034AB0(0x1c);
  }
  if (*(int *)(*(int *)(param_3 + 0x70) + 0x1c) == 0) {
    D_80119714 = 0;
    DAT_8008f756 = 300;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    return 0;
  }
  return 0;
}
