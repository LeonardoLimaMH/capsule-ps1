#include "common.h"

#include "ghidra.h"
undefined4 func_800E7328(undefined4 param_1,int param_2,int param_3,int param_4)

{
    extern u8 D_80018600[];
    extern u8 D_80069AD4[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE54[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern u8 D_8011974C[];
    extern s32 D_80069BBE[];
    extern int func_800E6F18();
    extern int func_800F52C4();
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [2];
  short sStack_46;
  undefined2 uStack_40;
  short sStack_3e;
  undefined2 uStack_3c;
  undefined1 auStack_38 [2];
  short sStack_36;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [2];
  short sStack_26;
  
  iVar2 = (*D_80119714);
  uVar7 = *(undefined4 *)(param_3 + 0x70);
  iVar6 = *(int *)(param_4 + 0x70);
  switch((*D_8008EE54)) {
  case 0:
    func_800FE958(0,0,400);
    (*D_8011974C) = '\x01';
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x60000000;
    (*D_80119714) = 0;
    (*D_8008EE54) = (*D_8008EE54) + 1;
    break;
  case 1:
    func_800FF460(param_3,param_4,0x14,(*D_80119714),auStack_48);
    iVar6 = rsin((iVar2 << 0xc) / 0x28);
    iVar6 = iVar6 * 0x1e;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    sStack_46 = sStack_46 - ((short)((iVar2 * 0x78) / 0x14) + (short)(iVar6 >> 0xc));
    func_800FF190(param_3,auStack_48,0);
    if (iVar2 < 0x14) {
      return 0;
    }
    iVar2 = func_80015B3C(D_80018600,func_800F52C4,1);
    *(undefined1 *)(iVar2 + 0x28) = 200;
    *(undefined1 *)(iVar2 + 0x29) = 200;
    *(undefined1 *)(iVar2 + 0x2a) = 0xff;
    *(undefined1 *)(iVar2 + 0x30) = 1;
    *(undefined2 *)(iVar2 + 0x32) = 0x14;
    func_80034AB0(4);
    goto L800E775C;
  case 2:
    iVar2 = 0;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x2000000;
    func_800FE188(param_4,&uStack_40);
    sStack_3e = sStack_3e + -0x78;
    do {
      iVar6 = D_80069BBE + 0x100;
      if (iVar6 < 0) {
        iVar6 = D_80069BBE + 0x2ff;
      }
      iVar4 = (iVar6 >> 9) + iVar2;
      iVar5 = iVar4 + 4;
      iVar6 = iVar5;
      if (iVar5 < 0) {
        iVar6 = iVar4 + 0xb;
      }
      iVar4 = func_80020CE4(uVar7,func_800E6F18,1);
      uVar1 = func_80019F30(0x6014d,(iVar5 + (iVar6 >> 3) * -8) * 3);
      *(undefined4 *)(iVar4 + 0x18) = uVar1;
      *(int *)(iVar4 + 0x8c) = iVar2;
      *(undefined2 *)(iVar4 + 0x6a) = uStack_40;
      *(short *)(iVar4 + 0x6e) = sStack_3e;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(iVar4 + 0x72) = uStack_3c;
    } while (iVar2 < 8);
    (*D_80119714) = 0;
    (*D_8008EE54) = (*D_8008EE54) + 1;
    break;
  case 4:
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x40000000;
    iVar2 = (uint)*(ushort *)(iVar6 + 0x50) << 0x10;
    *(short *)(iVar6 + 0x50) = (short)((iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1);
    goto L800E775C;
  case 6:
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x2000000;
    func_800FE188(param_4,auStack_38);
    sStack_36 = sStack_36 + -0x78;
    func_800FF190(param_3,auStack_38,0);
    bVar3 = *(char *)(param_3 + 0x25) + 4;
    *(byte *)(param_3 + 0x25) = bVar3 - (bVar3 & 0xf8);
    iVar2 = func_80015B3C(D_80018600,func_800F52C4,1);
    *(undefined1 *)(iVar2 + 0x28) = 200;
    *(undefined1 *)(iVar2 + 0x29) = 200;
    *(undefined1 *)(iVar2 + 0x2a) = 0xff;
    *(undefined1 *)(iVar2 + 0x30) = 1;
    *(undefined2 *)(iVar2 + 0x32) = 0x14;
    func_80034AB0(0x800a);
    goto L800E775C;
  case 7:
    func_800FE188(param_4,auStack_30);
    func_800FF190(param_4,auStack_30,0);
    iVar5 = rsin((iVar2 << 0xe) / 0x28);
    iVar4 = (uint)*(ushort *)(iVar6 + 0x50) << 0x10;
    iVar5 = ((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1) * (0x28 - iVar2) * iVar5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    *(ushort *)(iVar6 + 0x50) = *(ushort *)(iVar6 + 0x50) - (short)((iVar5 >> 0xc) / 0x28);
    if (iVar2 < 0x28) {
      return 0;
    }
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) ^ 0x40000000;
L800E775C:
    (*D_80119714) = 0;
    (*D_8008EE54) = (*D_8008EE54) + 1;
    break;
  case 8:
    iVar5 = 0x3c - (*D_80119714);
    func_800FF460(param_3,param_4,0x3c,iVar5,auStack_28);
    iVar6 = rsin((iVar5 * 0x1000) / 0x78);
    iVar6 = iVar6 * 0x1e;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    sStack_26 = sStack_26 - ((short)((iVar5 * 0x78) / 0x3c) + (short)(iVar6 >> 0xc));
    func_800FF190(param_3,auStack_28,0);
    if (iVar2 < 0x3c) {
      return 0;
    }
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x60000000;
    (*D_8011974C) = '\x02';
    (*D_80119714) = 0;
    (*D_8008EE54) = (*D_8008EE54) + 1;
    break;
  case 9:
    if ((*D_8011974C) == '\0') goto L800E7864;
    break;
  case 99:
L800E7864:
    *(undefined1 *)(param_2 + 0x60d) = 2;
    return 1;
  }
  return 0;
}
