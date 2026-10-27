#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6a (*(u8 *)0x8008EE6A)
#define DAT_8008f754 (*(u16 *)0x8008F754)
#define DAT_8008f760 (*(s32 *)0x8008F760)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 GetClut();
extern s32 GetTPage();
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800C867C ((s32 (*)())0x800C867C)
#define func_800DD1D4 ((s32 (*)())0x800DD1D4)
#define func_800FA548 ((s32 (*)())0x800FA548)
#define func_800FE21C ((s32 (*)())0x800FE21C)
#define func_800FEE40 ((s32 (*)())0x800FEE40)
undefined4 func_800DE518(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint x;
  uint y;

  iVar4 = DAT_8008f760;
  iVar3 = param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2;
  x = (uint)*(byte *)(iVar3 + 0x601);
  y = (uint)*(byte *)(iVar3 + 0x602);
  if (DAT_8008ee54 == 3) {
LAB_800de708:
    *(short *)(iVar4 + 0x2a) = DAT_8008f754 - (short)(((0x1e - D_80119714) * 400) / 0x1e);
    *(short *)(iVar4 + 0x34) = (short)((D_80119714 * 400) / 0x1e);
    if (D_80119714 < 0x1e) {
      return 0;
    }
    param_3[0x17] = 1;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  else {
    if (DAT_8008ee54 < 4) {
      if (DAT_8008ee54 == 1) {
        iVar4 = func_800FEE40(x,y);
        if (iVar4 == 0) {
          return 0;
        }
        param_3[0x17] = 0x88;
        param_3[0x23] = 1;
        goto LAB_800de90c;
      }
      if (DAT_8008ee54 < 2) {
        if (DAT_8008ee54 != 0) {
          return 0;
        }
        bVar1 = func_800DD1D4(param_3,x,y);
        param_3[0x25] = bVar1;
        goto LAB_800de90c;
      }
      if (*(int *)(*(int *)(param_3 + 0x70) + 0x1c) != 0) {
        return 0;
      }
      DAT_8008ee6a = 2;
      iVar4 = func_80015B3C(func_80018600,func_800FA548,1);
      DAT_8008f760 = iVar4;
      func_800FE21C(x,y,(SVECTOR *)(iVar4 + 0x28));
      *(undefined1 *)(iVar4 + 0x30) = 0x7f;
      *(undefined1 *)(iVar4 + 0x31) = 0x7f;
      *(undefined1 *)(iVar4 + 0x32) = 0x7f;
      *(undefined2 *)(iVar4 + 0x3c) = 0xfa;
      *(undefined2 *)(iVar4 + 0x3e) = 0x14;
      *(undefined2 *)(iVar4 + 0x42) = 100;
      *(undefined2 *)(iVar4 + 0x38) = 0x3c;
      *(undefined2 *)(iVar4 + 0x44) = 0x2800;
      uVar2 = GetTPage(0,1,0x280,0x100);
      *(undefined2 *)(iVar4 + 0x46) = uVar2;
      uVar2 = GetClut(0xb0,0x1f0);
      DAT_8008f754 = *(short *)(iVar4 + 0x2a);
      *(undefined2 *)(iVar4 + 0x48) = uVar2;
      *(undefined1 *)(iVar4 + 0x4a) = 0;
      func_80034AB0(0x801d);
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      goto LAB_800de708;
    }
    if (DAT_8008ee54 == 5) {
      *(short *)(DAT_8008f760 + 0x36) = (short)(((0x1e - D_80119714) * 0x3c) / 0x1e);
      if (D_80119714 < 0x1e) {
        return 0;
      }
      func_80013928(iVar4);
      DAT_8008ee6a = 0;
      goto LAB_800de90c;
    }
    if (4 < DAT_8008ee54) {
      if ((DAT_8008ee54 != 6) && (DAT_8008ee54 != 99)) {
        return 0;
      }
      return 1;
    }
  }
  *(short *)(iVar4 + 0x36) = (short)((D_80119714 * 0x3c) / 0x10);
  *(short *)(iVar4 + 0x38) = (short)(((0x10 - D_80119714) * 0x3c) / 0x10);
  if (D_80119714 < 0x10) {
    return 0;
  }
  func_800C867C(param_1,param_2,x,y,
                *(uint *)(&DAT_8006b2b4 +
                         (*(uint *)(&DAT_80063948 + (uint)*param_3 * 0x3c) >> 0x11 & 0x7f) * 0x58)
                >> 0x1a & 7);
LAB_800de90c:
  DAT_8008ee54 = DAT_8008ee54 + 1;
  D_80119714 = 0;
  return 0;
}
