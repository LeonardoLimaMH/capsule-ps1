#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: func_800FE188 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_8008f760 (*(s32 *)0x8008F760)
#define DAT_8008f764 (*(s32 *)0x8008F764)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_8001ADF8 ((s32 (*)())0x8001ADF8)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800F68C8 ((s32 (*)())0x800F68C8)
#define func_800F71B4 ((s32 (*)())0x800F71B4)
#define func_800FE188 ((s32 (*)())0x800FE188)
undefined4 func_800DE944(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;

  iVar3 = DAT_8008f760;
  if (DAT_8008ee54 == 3) {
LAB_800debc8:
    if (D_80119714 < 0x1e) {
      return 0;
    }
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  else {
    if (DAT_8008ee54 < 4) {
      if (DAT_8008ee54 == 1) {
        *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x70) + 0x1c) + 0x14) = 0xf0;
        iVar3 = func_80015B3C(func_80018600,func_800F68C8,1);
        func_800FE188(param_3,(SVECTOR *)(iVar3 + 0x28));
        *(undefined1 *)(iVar3 + 0x30) = 0x7f;
        *(undefined1 *)(iVar3 + 0x31) = 0x7f;
        *(undefined1 *)(iVar3 + 0x32) = 0x7f;
        *(undefined1 *)(iVar3 + 0x34) = 0x7f;
        *(undefined1 *)(iVar3 + 0x35) = 0x7f;
        *(undefined1 *)(iVar3 + 0x36) = 0x7f;
        *(undefined1 *)(iVar3 + 0x3a) = 0x7f;
        *(undefined1 *)(iVar3 + 0x3c) = 9;
        *(undefined2 *)(iVar3 + 0x3e) = 0x28;
        *(undefined2 *)(iVar3 + 0x40) = 0x30;
        *(undefined2 *)(iVar3 + 0x44) = 0x578;
        *(undefined2 *)(iVar3 + 0x46) = 0x14;
        *(undefined1 *)(iVar3 + 0x38) = 0xff;
        *(undefined1 *)(iVar3 + 0x39) = 0xff;
        *(undefined2 *)(iVar3 + 0x42) = 0;
        *(undefined2 *)(iVar3 + 0x48) = 0xffff;
        *(undefined1 *)(iVar3 + 0x4c) = 0;
        *(short *)(iVar3 + 0x2a) = *(short *)(iVar3 + 0x2a) + -10;
        DAT_8008f764 = iVar3;
        DAT_8008f760 = func_80015B3C(func_80018600,func_800F71B4,1);
        *(short *)(DAT_8008f760 + 0x28) =
             *(short *)(*(int *)(param_3 + 0x70) + 0x46) + (short)(DAT_8008ee70 / 2);
        *(short *)(DAT_8008f760 + 0x2a) =
             *(short *)(*(int *)(param_3 + 0x70) + 0x4a) + (short)(DAT_8008ee74 / 2) + -0x28;
        sVar1 = *(short *)(*(int *)(param_3 + 0x70) + 0x4e);
        *(undefined1 *)(DAT_8008f760 + 0x2e) = 10;
        *(undefined2 *)(DAT_8008f760 + 0x30) = 0x10;
        *(undefined2 *)(DAT_8008f760 + 0x34) = 100;
        *(undefined1 *)(DAT_8008f760 + 0x38) = 0x9f;
        *(undefined1 *)(DAT_8008f760 + 0x39) = 0x9f;
        *(undefined1 *)(DAT_8008f760 + 0x3a) = 0xff;
        *(short *)(DAT_8008f760 + 0x2c) = sVar1 + 10;
        func_80034AB0(4);
        func_8001ADF8(3,0x10,1,1);
LAB_800deb4c:
        DAT_8008ee54 = DAT_8008ee54 + 1;
        D_80119714 = 0;
        return 0;
      }
      if (DAT_8008ee54 < 2) {
        if (DAT_8008ee54 != 0) {
          return 0;
        }
        param_3[0x17] = 0x88;
        param_3[0x23] = '\x01';
        goto LAB_800deb4c;
      }
      *(short *)(DAT_8008f760 + 0x36) = (short)((D_80119714 * 0xfa) / 0x3c);
      if (D_80119714 < 0x3c) {
        return 0;
      }
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      goto LAB_800debc8;
    }
    if (DAT_8008ee54 == 5) goto LAB_800decd0;
    if (4 < DAT_8008ee54) {
      if (DAT_8008ee54 == 99) {
        return 1;
      }
      return 0;
    }
  }
  *(short *)(iVar3 + 0x34) = (short)(((0x3c - D_80119714) * 100) / 0x3c);
  uVar2 = (undefined1)(((0x3c - D_80119714) * 0x9f) / 0x3c);
  *(undefined1 *)(iVar3 + 0x39) = uVar2;
  *(undefined1 *)(iVar3 + 0x38) = uVar2;
  *(s8 *)(iVar3 + 0x3a) = (s8)(((0x3c - D_80119714) * 0xff) / 0x3c);
  if (D_80119714 < 0x3c) {
    return 0;
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800decd0:
  func_80013928(iVar3);
  func_80013928(DAT_8008f764);
  return 1;
}
