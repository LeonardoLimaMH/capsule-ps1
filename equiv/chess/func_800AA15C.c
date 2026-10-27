/* arg0: 0x80120000 */
/* arg1: small */
/* arg2: small */
#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(u8 *)0x80063948)
#define DAT_8006b2a4 (*(u8 *)0x8006b2a4)
#define DAT_8006b2b4 (*(u8 *)0x8006b2b4)
#define D_80063940 (*(u8 *)0x80063940)
#define D_80100F04 (*(s16 *)0x80100F04)
#define D_80100F08 (*(s32 *)0x80100F08)
#define D_80100F0C (*(s32 *)0x80100F0C)
#define D_80100F18 (*(s32 *)0x80100F18)
#define D_80100F1C (*(s32 *)0x80100F1C)
#define D_80100F20 (*(s32 *)0x80100F20)
#define func_800188F0 ((s32 (*)())0x800188F0)
#define func_80018EF4 ((s32 (*)())0x80018EF4)
#define func_8001F1A8 ((s32 (*)())0x8001F1A8)
#define func_8001F35C ((s32 (*)())0x8001F35C)
#define func_8001F7A4 ((s32 (*)())0x8001F7A4)
#define func_800A95F8 ((s32 (*)())0x800A95F8)
#define func_800A9810 ((s32 (*)())0x800A9810)
#define func_800CA664 ((s32 (*)())0x800CA664)
#define func_800CAA6C ((s32 (*)())0x800CAA6C)
void func_800AA15C(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  short local_34;

  iVar7 = (param_4 + -7) * 0x10000 >> 0x10;
  iVar4 = (param_5 + 0x62) * 0x10000 >> 0x10;
  pbVar10 = (byte *)(param_1 + param_2 * 0x2e8 + 0x5e8 + param_3 * 0x7c);
  func_800188F0(iVar7,iVar4,0,0,D_80100F1C);
  func_800188F0((param_4 + 0x2c) * 0x10000 >> 0x10,iVar4,1,0,D_80100F1C);
  func_800188F0((param_4 + 0x5f) * 0x10000 >> 0x10,iVar4,2,0,D_80100F1C);
  iVar4 = (param_5 + 0x71) * 0x10000 >> 0x10;
  func_800188F0(iVar7,iVar4,3,0,D_80100F1C);
  if (param_3 == 5) {
    func_8001F1A8((int)(short)param_4,(int)(short)param_5,(int)D_80100F04,1,0,&D_80100F0C,1,6,
                  D_80100F1C);
    func_8001F1A8((param_4 + 0x74) * 0x10000 >> 0x10,(param_5 + 4) * 0x10000 >> 0x10,(int)D_80100F04
                  ,0,0,&D_80100F18,0,3,D_80100F1C);
    func_8001F1A8((param_4 + -5) * 0x10000 >> 0x10,(param_5 + 0x30) * 0x10000 >> 0x10,
                  (int)D_80100F04,1,0,&D_80100F20,1,0xb,D_80100F1C);
    func_8001F35C((param_4 + -2) * 0x10000 >> 0x10,iVar4,(int)D_80100F04,0,0,
                  5 - (uint)*(byte *)(param_1 + param_2 + 0xbda),3,D_80100F1C);
    func_800A9810(param_1,param_2,param_4,param_5,1);
  }
  else {
    func_8001F1A8((param_4 + -8) * 0x10000 >> 0x10,(int)(short)param_5,(int)D_80100F04,1,0,
                  pbVar10 + 1,0,8,D_80100F1C);
    func_8001F1A8((param_4 + 0x68) * 0x10000 >> 0x10,(param_5 + 4) * 0x10000 >> 0x10,3,0,0,
                  &D_80063940 + (uint)*pbVar10 * 0x3c,0,9,D_80100F1C);
    func_8001F7A4((param_4 + 0x1c) * 0x10000 >> 0x10,(param_5 + 0x12) * 0x10000 >> 0x10,3,0,
                  *(uint *)(&DAT_80063948 +
                           (uint)*(byte *)(param_1 + param_3 * 0x7c + param_2 * 0x2e8 + 0x5e8) *
                           0x3c) >> 8 & 0xf,D_80100F1C);
    if (*pbVar10 == 99) {
      uVar8 = func_800CA664((int)*(short *)(*(int *)(pbVar10 + 0x70) + 100));
    }
    else {
      uVar8 = *(uint *)(&DAT_80063948 + (uint)*pbVar10 * 0x3c) >> 0xc & 3;
    }
    if (uVar8 == 1) {
      uVar3 = 4;
    }
    else {
      uVar3 = 3;
    }
    func_8001F1A8((param_4 + 0x6a) * 0x10000 >> 0x10,(param_5 + 0x12) * 0x10000 >> 0x10,3,0,0,
                  uVar8 * 8 + -0x7ff92990,0,uVar3,D_80100F1C);
    iVar4 = (param_4 + 0x98) * 0x10000 >> 0x10;
    func_80018EF4(iVar4,(param_5 + 0x12) * 0x10000 >> 0x10,uVar8,0,D_80100F1C);
    iVar7 = (param_5 + 0x1f) * 0x10000 >> 0x10;
    iVar5 = (*(uint *)(&DAT_80063948 + (uint)*pbVar10 * 0x3c) >> 0x11 & 0x7f) * 0x58;
    func_8001F1A8((param_4 + 0x18) * 0x10000 >> 0x10,iVar7,3,1,0,&DAT_8006b2a4 + iVar5,1,8,
                  D_80100F1C);
    iVar9 = (param_4 + -5) * 0x10000 >> 0x10;
    func_8001F1A8(iVar9,(param_5 + 0x30) * 0x10000 >> 0x10,(int)D_80100F04,1,0,iVar5 + -0x7ff94d44,1
                  ,0xe,D_80100F1C);
    func_8001F1A8(iVar9,(param_5 + 0x3f) * 0x10000 >> 0x10,(int)D_80100F04,1,0,iVar5 + -0x7ff94d28,1
                  ,0xe,D_80100F1C);
    func_8001F1A8(iVar9,(param_5 + 0x4e) * 0x10000 >> 0x10,(int)D_80100F04,1,0,iVar5 + -0x7ff94d0c,1
                  ,2,D_80100F1C);
    if ((*(uint *)(&DAT_8006b2b4 + iVar5) & 3) != 2) {
      func_8001F35C(iVar4,iVar7,3,1,0,(int)(s8)pbVar10[0x13],1,D_80100F1C);
      func_8001F1A8((param_4 + 0xa6) * 0x10000 >> 0x10,iVar7,3,1,0,&D_80100F08,1,2,D_80100F1C);
      func_8001F35C((param_4 + 0xb4) * 0x10000 >> 0x10,iVar7,3,1,0,(int)(s8)pbVar10[0x14],1,
                    D_80100F1C);
    }
    uVar3 = D_80100F1C;
    uVar6 = 3;
    sVar1 = func_800CAA6C(pbVar10,4);
    local_34 = (short)(param_5 + 0x12);
    if ((sVar1 != 0) && (uVar6 = 1, sVar1 < 0)) {
      uVar6 = 3;
    }
    func_8001F35C((param_4 + 0xb9) * 0x10000 >> 0x10,(int)local_34,uVar6,0,0,pbVar10[0x12],1,uVar3);
    uVar3 = D_80100F1C;
    sVar1 = D_80100F04;
    sVar2 = func_800CAA6C(pbVar10,1);
    if ((sVar2 != 0) && (sVar1 = 1, sVar2 < 0)) {
      sVar1 = 3;
    }
    func_8001F35C((param_4 + 9) * 0x10000 >> 0x10,(param_5 + 99) * 0x10000 >> 0x10,(int)sVar1,0,0,
                  pbVar10[0xf],3,uVar3);
    uVar3 = D_80100F1C;
    sVar1 = D_80100F04;
    sVar2 = func_800CAA6C(pbVar10,2);
    if ((sVar2 != 0) && (sVar1 = 1, sVar2 < 0)) {
      sVar1 = 3;
    }
    func_8001F35C((param_4 + 0x39) * 0x10000 >> 0x10,(param_5 + 99) * 0x10000 >> 0x10,(int)sVar1,0,0
                  ,pbVar10[0x10],3,uVar3);
    uVar3 = D_80100F1C;
    sVar1 = D_80100F04;
    sVar2 = func_800CAA6C(pbVar10,3);
    if ((sVar2 != 0) && (sVar1 = 1, sVar2 < 0)) {
      sVar1 = 3;
    }
    func_8001F35C((param_4 + 0x79) * 0x10000 >> 0x10,(param_5 + 99) * 0x10000 >> 0x10,(int)sVar1,0,0
                  ,pbVar10[0x11],1,uVar3);
    uVar3 = D_80100F1C;
    sVar1 = D_80100F04;
    func_800CAA6C(pbVar10,0);
    func_8001F35C((param_4 + 9) * 0x10000 >> 0x10,(param_5 + 0x71) * 0x10000 >> 0x10,(int)sVar1,0,0,
                  pbVar10[0xe],3,uVar3);
    func_800A95F8(param_1,param_2,((uint)pbVar10[0xe] << 0x10) / (uint)pbVar10[9],param_4,param_5,2)
    ;
  }
  return;
}
