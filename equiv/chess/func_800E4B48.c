#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f760 (*(s32 *)0x8008F760)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A81D8 ((s32 (*)())0x800A81D8)
#define func_800A83E0 ((s32 (*)())0x800A83E0)
#define func_800AADE0 ((s32 (*)())0x800AADE0)
#define func_800DD1D4 ((s32 (*)())0x800DD1D4)
#define func_800DD274 ((s32 (*)())0x800DD274)
#define func_800FE21C ((s32 (*)())0x800FE21C)
#define func_800FED90 ((s32 (*)())0x800FED90)
#define func_800FEE40 ((s32 (*)())0x800FEE40)
#define func_800FF0A0 ((s32 (*)())0x800FF0A0)
undefined4 func_800E4B48(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint x;
  uint y;
  int iVar7;
  uint uVar8;
  SVECTOR SStack_38;
  uint local_30;

  iVar4 = DAT_8008f760;
  uVar8 = (uint)*(byte *)(param_2 + 0x5fa);
  iVar6 = param_2 + uVar8 * 2;
  iVar3 = uVar8 * 0x2e8 + param_2;
  iVar7 = iVar3 + 0x284;
  local_30 = (uint)*(byte *)(param_2 + uVar8 + 0x5fb);
  x = (uint)*(byte *)(iVar6 + 0x601);
  y = (uint)*(byte *)(iVar6 + 0x602);
  if (DAT_8008ee54 == 4) {
    iVar3 = func_800FEE40(x,y);
    if (iVar3 == 0) {
      return 0;
    }
    uVar5 = func_80019F30(0x70136,0x46);
    func_80015CD0(iVar4 + 0x14,uVar5,1);
    func_800A81D8(param_1,iVar4,uVar8,local_30);
    func_800FE21C(x,y,&SStack_38);
    func_800FF0A0(iVar4,&SStack_38,2);
    func_80034AB0(10);
  }
  else if (DAT_8008ee54 < 5) {
    if (DAT_8008ee54 == 1) {
      iVar4 = func_800FED90(iVar7);
      if (iVar4 == 0) {
        return 0;
      }
      uVar5 = func_80019F30(0x70136,0x45);
      iVar6 = *(int *)(iVar3 + 0x2f8);
      iVar4 = func_80015B3C(func_80018600,func_800AADE0,1);
      DAT_8008f760 = iVar4;
      func_80015EF8(iVar4);
      func_80015CD0(iVar4 + 0x14,uVar5,2);
      func_800A81D8(param_1,iVar4,uVar8,local_30);
      *(undefined2 *)(iVar4 + 0x46) = *(undefined2 *)(iVar6 + 0x46);
      *(undefined2 *)(iVar4 + 0x4a) = *(undefined2 *)(iVar6 + 0x4a);
      *(short *)(iVar4 + 0x4e) = *(short *)(iVar6 + 0x4e) + -2;
      uVar1 = *(undefined2 *)(iVar6 + 0x50);
      *(undefined2 *)(iVar4 + 0x52) = uVar1;
      *(undefined2 *)(iVar4 + 0x50) = uVar1;
      func_80034AB0(0x72);
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800e4d24:
      if (2 < *(uint *)(iVar4 + 0x20)) {
        *(undefined4 *)(iVar3 + 0x29c) = 0xa000000;
        DAT_8008ee54 = DAT_8008ee54 + 1;
        D_80119714 = 0;
        return 0;
      }
      return 0;
    }
    if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 != 0) {
        return 0;
      }
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 1;
      uVar2 = func_800A83E0(param_1,param_3,iVar7);
      *(undefined1 *)(param_3 + 0x25) = uVar2;
    }
    else {
      if (DAT_8008ee54 == 2) goto LAB_800e4d24;
      if (DAT_8008ee54 != 3) {
        return 0;
      }
      if (*(int *)(DAT_8008f760 + 0x1c) != 0) {
        return 0;
      }
      uVar2 = func_800DD1D4(param_3,x,y);
      *(undefined1 *)(param_3 + 0x25) = uVar2;
    }
  }
  else if (DAT_8008ee54 == 6) {
    if (*(int *)(DAT_8008f760 + 0x1c) != 0) {
      return 0;
    }
    func_80013928(DAT_8008f760);
  }
  else {
    if (5 < DAT_8008ee54) {
      if ((DAT_8008ee54 != 7) && (DAT_8008ee54 != 99)) {
        return 0;
      }
      return 1;
    }
    if (*(uint *)(DAT_8008f760 + 0x20) < 3) {
      return 0;
    }
    func_800DD274(iVar7,x,y);
    *(uint *)(iVar3 + 0x29c) = *(uint *)(iVar3 + 0x29c) ^ 0xa000000;
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}
