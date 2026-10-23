#include "common.h"

#include "ghidra.h"
uint slpm__SpuSetAnyVoice(int param_1,uint param_2,int param_3,int param_4)

{
    extern s32 D_8013338C[];
    extern s32 D_801333C0[];
    extern M2C_UNK * D_801333D4[];
    extern M2C_UNK D_801384C8[];
  ushort uVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  
  puVar2 = (*D_801384C8);
  if (((*D_801333C0) & 1) == 0) {
    puVar2 = (*D_801333D4);
  }
  uVar5 = (uint)*(ushort *)(puVar2 + param_3 * 2) |
          (*(ushort *)(puVar2 + param_4 * 2) & 0xff) << 0x10;
  uVar4 = (ushort)param_2;
  uVar1 = (ushort)(param_2 >> 0x10);
  if (param_1 == 1) {
    if (((*D_801333C0) & 1) == 0) {
      puVar3 = (ushort *)((*D_801333D4) + param_4 * 2);
      *(ushort *)((*D_801333D4) + param_3 * 2) = *(ushort *)((*D_801333D4) + param_3 * 2) | uVar4;
      *puVar3 = *puVar3 | uVar1 & 0xff;
    }
    else {
      *(ushort *)((*D_801384C8) + param_3 * 2) = *(ushort *)((*D_801384C8) + param_3 * 2) | uVar4;
      *(ushort *)((*D_801384C8) + param_4 * 2) = *(ushort *)((*D_801384C8) + param_4 * 2) | uVar1 & 0xff
      ;
      (*D_8013338C) = (*D_8013338C) | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
    }
    uVar5 = uVar5 | param_2 & 0xffffff;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      if (((*D_801333C0) & 1) == 0) {
        puVar3 = (ushort *)((*D_801333D4) + param_4 * 2);
        *(ushort *)((*D_801333D4) + param_3 * 2) = *(ushort *)((*D_801333D4) + param_3 * 2) & ~uVar4;
        *puVar3 = *puVar3 & ~(uVar1 & 0xff);
      }
      else {
        *(ushort *)((*D_801384C8) + param_3 * 2) = *(ushort *)((*D_801384C8) + param_3 * 2) & ~uVar4;
        *(ushort *)((*D_801384C8) + param_4 * 2) =
             *(ushort *)((*D_801384C8) + param_4 * 2) & ~(uVar1 & 0xff);
        (*D_8013338C) = (*D_8013338C) | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
      }
      uVar5 = uVar5 & ~(param_2 & 0xffffff);
    }
  }
  else if (param_1 == 8) {
    if (((*D_801333C0) & 1) == 0) {
      puVar3 = (ushort *)((*D_801333D4) + param_4 * 2);
      *(ushort *)((*D_801333D4) + param_3 * 2) = uVar4;
      *puVar3 = uVar1 & 0xff;
    }
    else {
      *(ushort *)((*D_801384C8) + param_3 * 2) = uVar4;
      *(ushort *)((*D_801384C8) + param_4 * 2) = uVar1 & 0xff;
      (*D_8013338C) = (*D_8013338C) | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
    }
    uVar5 = param_2 & 0xffffff;
  }
  return uVar5;
}
