#include "common.h"

#include "ghidra.h"
undefined4 func_800D613C(uint param_1,short param_2,short param_3)

{
    extern u16 D_8006AF80[];
    extern void * D_8008ED68[];
    extern M2C_UNK D_800900C0[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  int iStack_30;
  
  if (*(short *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e) == -1) {
    iVar5 = (param_1 & 0xffff) * 0x79c;
    iVar6 = func_800E36E4((param_1 & 0xffff) == (uint)(*D_8006AF80));
    PushMatrix();
    func_8002CEC0((*D_800900C0) + iVar6 * 0xbc);
    uVar11 = 0;
    do {
      sVar4 = func_800D68D4(uVar11 + (int)*(short *)(iVar5 + -0x7fefed26));
      iVar6 = sVar4 * 0x32;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      *(short *)(iVar5 + -0x7fefefa8) = param_2 + (short)(iVar6 >> 0xc);
      *(undefined2 *)(iVar5 + -0x7fefefa6) = 0;
      sVar4 = func_800D6848(uVar11 + (int)*(short *)(iVar5 + -0x7fefed26));
      iVar6 = sVar4 * 0x32;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      *(short *)(iVar5 + -0x7fefefa4) = param_3 + (short)(iVar6 >> 0xc);
      sVar4 = func_800D68D4(uVar11 + *(short *)(iVar5 + -0x7fefed26) + 1);
      iVar6 = sVar4 * 0x32;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      *(short *)(iVar5 + -0x7fefefa0) = param_2 + (short)(iVar6 >> 0xc);
      *(undefined2 *)(iVar5 + -0x7fefef9e) = 0;
      sVar4 = func_800D6848(uVar11 + *(short *)(iVar5 + -0x7fefed26) + 1);
      iVar6 = sVar4 * 0x32;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      *(short *)(iVar5 + -0x7fefef9c) = param_3 + (short)(iVar6 >> 0xc);
      *(undefined2 *)(iVar5 + -0x7fefef98) = *(undefined2 *)(iVar5 + -0x7fefefa8);
      *(short *)(iVar5 + -0x7fefef96) = -*(short *)(iVar5 + -0x7fefed38);
      *(undefined2 *)(iVar5 + -0x7fefef90) = *(undefined2 *)(iVar5 + -0x7fefefa0);
      *(undefined2 *)(iVar5 + -0x7fefef94) = *(undefined2 *)(iVar5 + -0x7fefefa4);
      *(short *)(iVar5 + -0x7fefef8e) = -*(short *)(iVar5 + -0x7fefed38);
      *(undefined2 *)(iVar5 + -0x7fefef8c) = *(undefined2 *)(iVar5 + -0x7fefef9c);
      iVar6 = RotTransPers4(iVar5 + -0x7fefefa8,iVar5 + -0x7fefefa0,iVar5 + -0x7fefef98,
                              iVar5 + -0x7fefef90,&uStack_48,&uStack_44,&uStack_40,&uStack_3c,
                              auStack_38,auStack_34);
      iVar10 = *(int *)((*D_8008ED68) + 0x1090);
      uVar9 = 0;
      if ((iVar10 != 0) && (iVar10 + 0x24U <= (*D_8008ED68) + 0x4594U)) {
        uVar9 = iVar10 + 0x24U;
      }
      *(uint *)((*D_8008ED68) + 0x1090) = uVar9;
      SetPolyG4(iVar10);
      SetSemiTrans(iVar10,1);
      puVar7 = (*D_80100F38) + iVar5 + (uVar11 & 7) * 0x10 + 0x20;
      *(undefined1 *)(iVar10 + 4) = *puVar7;
      *(undefined1 *)(iVar10 + 5) = puVar7[1];
      *(undefined1 *)(iVar10 + 6) = puVar7[2];
      *(undefined1 *)(iVar10 + 0xc) = puVar7[4];
      *(undefined1 *)(iVar10 + 0xd) = puVar7[5];
      *(undefined1 *)(iVar10 + 0xe) = puVar7[6];
      *(undefined1 *)(iVar10 + 0x14) = puVar7[8];
      *(undefined1 *)(iVar10 + 0x15) = puVar7[9];
      *(undefined1 *)(iVar10 + 0x16) = puVar7[10];
      *(undefined1 *)(iVar10 + 0x1c) = puVar7[0xc];
      *(undefined1 *)(iVar10 + 0x1d) = puVar7[0xd];
      *(undefined1 *)(iVar10 + 0x1e) = puVar7[0xe];
      *(undefined2 *)(iVar10 + 8) = uStack_48;
      *(undefined2 *)(iVar10 + 10) = uStack_46;
      *(undefined2 *)(iVar10 + 0x10) = uStack_44;
      *(undefined2 *)(iVar10 + 0x12) = uStack_42;
      *(undefined2 *)(iVar10 + 0x18) = uStack_40;
      *(undefined2 *)(iVar10 + 0x1a) = uStack_3e;
      uVar11 = uVar11 + 1;
      *(undefined2 *)(iVar10 + 0x20) = uStack_3c;
      *(undefined2 *)(iVar10 + 0x22) = uStack_3a;
      AddPrim((*D_8008ED68) + iVar6 * 4 + 0x70);
      func_80018610(*(undefined2 *)(iVar5 + -0x7fefed34),iVar6);
      iStack_30 = iVar5 + -0x7fefefa0;
    } while ((int)uVar11 < 0x40);
    iVar6 = 0;
    do {
      *(short *)(iVar5 + -0x7fefefa8) = param_2;
      *(undefined2 *)(iVar5 + -0x7fefefa6) = 0;
      *(short *)(iVar5 + -0x7fefefa4) = param_3;
      uVar11 = *(uint *)(iVar5 + -0x7fefefa8);
      uVar9 = *(uint *)(iVar5 + -0x7fefefa4);
      uVar2 = iVar5 + 0x80101063U & 3;
      puVar3 = (uint *)((iVar5 + 0x80101063U) - uVar2);
      *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar11 >> (3 - uVar2) * 8;
      *(uint *)(iVar5 + -0x7fefefa0) = uVar11;
      uVar11 = iVar5 + 0x80101067U & 3;
      puVar3 = (uint *)((iVar5 + 0x80101067U) - uVar11);
      *puVar3 = *puVar3 & -1 << (uVar11 + 1) * 8 | uVar9 >> (3 - uVar11) * 8;
      *(uint *)(iVar5 + -0x7fefef9c) = uVar9;
      sVar4 = func_800D68D4(iVar6 + *(short *)(iVar5 + -0x7fefed26));
      iVar10 = sVar4 * 0x32;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0xfff;
      }
      *(short *)(iVar5 + -0x7fefef98) = param_2 + (short)(iVar10 >> 0xc);
      *(undefined2 *)(iVar5 + -0x7fefef96) = 0;
      sVar4 = func_800D6848(iVar6 + *(short *)(iVar5 + -0x7fefed26));
      iVar10 = sVar4 * 0x32;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0xfff;
      }
      *(short *)(iVar5 + -0x7fefef94) = param_3 + (short)(iVar10 >> 0xc);
      sVar4 = func_800D68D4(iVar6 + *(short *)(iVar5 + -0x7fefed26) + 1);
      iVar10 = sVar4 * 0x32;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0xfff;
      }
      *(short *)(iVar5 + -0x7fefef90) = param_2 + (short)(iVar10 >> 0xc);
      *(undefined2 *)(iVar5 + -0x7fefef8e) = 0;
      sVar4 = func_800D6848(iVar6 + *(short *)(iVar5 + -0x7fefed26) + 1);
      iVar10 = sVar4 * 0x32;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0xfff;
      }
      *(short *)(iVar5 + -0x7fefef8c) = param_3 + (short)(iVar10 >> 0xc);
      iVar10 = RotTransPers4(iVar5 + -0x7fefefa8,iStack_30,iVar5 + -0x7fefef98,iVar5 + -0x7fefef90
                               ,&uStack_48,&uStack_44,&uStack_40,&uStack_3c,auStack_38,auStack_34);
      iVar8 = 0;
      puVar7 = (*D_80100F38) + iVar5;
      do {
        if (iVar8 < 2) {
          puVar7[0x140] = 0xff;
        }
        else {
          puVar7[0x140] = ((byte)iVar6 & 7) * -0x10 + -0x80;
        }
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 4;
      } while (iVar8 < 4);
      iVar8 = *(int *)((*D_8008ED68) + 0x1090);
      uVar11 = 0;
      if ((iVar8 != 0) && (iVar8 + 0x24U <= (*D_8008ED68) + 0x4594U)) {
        uVar11 = iVar8 + 0x24U;
      }
      *(uint *)((*D_8008ED68) + 0x1090) = uVar11;
      SetPolyG4(iVar8);
      SetSemiTrans(iVar8,1);
      uVar1 = *(undefined1 *)(iVar5 + -0x7fefef88);
      *(undefined1 *)(iVar8 + 4) = uVar1;
      *(undefined1 *)(iVar8 + 5) = uVar1;
      *(undefined1 *)(iVar8 + 6) = uVar1;
      uVar1 = *(undefined1 *)(iVar5 + -0x7fefef84);
      *(undefined1 *)(iVar8 + 0xc) = uVar1;
      *(undefined1 *)(iVar8 + 0xd) = uVar1;
      *(undefined1 *)(iVar8 + 0xe) = uVar1;
      uVar1 = *(undefined1 *)(iVar5 + -0x7fefef80);
      *(undefined1 *)(iVar8 + 0x14) = uVar1;
      *(undefined1 *)(iVar8 + 0x15) = uVar1;
      *(undefined1 *)(iVar8 + 0x16) = uVar1;
      uVar1 = *(undefined1 *)(iVar5 + -0x7fefef7c);
      *(undefined1 *)(iVar8 + 0x1c) = uVar1;
      *(undefined1 *)(iVar8 + 0x1d) = uVar1;
      *(undefined1 *)(iVar8 + 0x1e) = uVar1;
      *(undefined2 *)(iVar8 + 8) = uStack_48;
      *(undefined2 *)(iVar8 + 10) = uStack_46;
      *(undefined2 *)(iVar8 + 0x10) = uStack_44;
      *(undefined2 *)(iVar8 + 0x12) = uStack_42;
      *(undefined2 *)(iVar8 + 0x18) = uStack_40;
      *(undefined2 *)(iVar8 + 0x1a) = uStack_3e;
      iVar6 = iVar6 + 1;
      *(undefined2 *)(iVar8 + 0x20) = uStack_3c;
      *(undefined2 *)(iVar8 + 0x22) = uStack_3a;
      AddPrim((*D_8008ED68) + iVar10 * 4 + 0x70);
      func_80018610(*(undefined2 *)(iVar5 + -0x7fefed34),iVar10);
    } while (iVar6 < 0x40);
    PopMatrix();
  }
  return 0;
}
