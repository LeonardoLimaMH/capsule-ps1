#include "common.h"

#include "ghidra.h"
int _SsVmSetSeqVol(uint param_1,undefined2 param_2,undefined2 param_3)

{
    extern s32 D_801332F4[];
    extern M2C_UNK D_801373F0[];
    extern M2C_UNK D_80137C90[];
    extern M2C_UNK D_80137C92[];
    extern M2C_UNK D_80137C94[];
    extern M2C_UNK D_80137C98[];
    extern M2C_UNK D_80137C9A[];
    extern M2C_UNK D_80137C9C[];
    extern M2C_UNK D_80137C9E[];
    extern M2C_UNK D_80137CA0[];
    extern M2C_UNK D_80138198[];
    extern M2C_UNK D_801381B8[];
    extern M2C_UNK D_801381BA[];
    extern s16 D_80138468[];
    extern s32 D_8013846C[];
    extern void * D_80138474[];
    extern s32 D_80138478[];
    extern s8 D_8013847C[];
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(D_801373F0 + (param_1 & 0xff) * 4) + ((int)(param_1 & 0xff00) >> 8) * 0xb0;
  *(undefined2 *)(iVar7 + 0x58) = param_2;
  *(undefined2 *)(iVar7 + 0x5a) = param_3;
  if (0x7e < *(ushort *)(iVar7 + 0x58)) {
    *(undefined2 *)(iVar7 + 0x58) = 0x7f;
  }
  if (0x7e < *(ushort *)(iVar7 + 0x5a)) {
    *(undefined2 *)(iVar7 + 0x5a) = 0x7f;
  }
  iVar8 = 0;
  if ('\0' < (*D_8013847C)) {
    iVar1 = 0;
    do {
      if (((((*D_801332F4) & 1 << (iVar1 >> 0x10 & 0x1fU)) == 0) &&
          (iVar1 = (iVar1 >> 0x10) * 0x36, *(short *)(D_80137C98 + iVar1) == (short)param_1)) &&
         ((int)*(short *)(D_80137CA0 + iVar1) == (int)*(char *)(iVar7 + 0x26))) {
        _SsVmVSetUp((int)*(short *)(D_80137CA0 + iVar1),(int)*(short *)(D_80137C9A + iVar1));
        iVar6 = (*(short *)(D_80137C9A + iVar1) * 0x10 + (int)*(short *)(D_80137C9E + iVar1)) *
                0x20 + (*D_80138478);
        uVar5 = (((int)((uint)*(byte *)((*D_80138474) + 0x18) *
                       (((int)*(short *)(D_80137C90 + iVar1) *
                        (int)*(short *)(*(short *)(D_80137C94 + iVar1) * 2 + iVar7 + 0x60)) / 0x7f)
                       * 0x3fff) / 0x3f01) *
                 (uint)*(byte *)(*(short *)(D_80137C9C + iVar1) * 0x10 + (*D_8013846C) + 1) *
                (uint)*(byte *)(iVar6 + 2)) / 0x3f01;
        uVar4 = (uVar5 * *(ushort *)(iVar7 + 0x58)) / 0x7f;
        uVar3 = (uint)*(byte *)(iVar6 + 3);
        uVar5 = (uVar5 * *(ushort *)(iVar7 + 0x5a)) / 0x7f;
        if (uVar3 < 0x40) {
          uVar5 = (uVar5 * uVar3) / 0x3f;
        }
        else {
          uVar4 = (uVar4 * (0x7f - uVar3)) / 0x3f;
        }
        sVar2 = (short)iVar8;
        uVar3 = (uint)*(byte *)(*(short *)(D_80137C9C + sVar2 * 0x36) * 0x10 + (*D_8013846C) + 4);
        if (uVar3 < 0x40) {
          uVar5 = (uint)((ulonglong)((longlong)(int)((uVar5 & 0xffff) * uVar3) * 0x82082083) >> 0x25
                        );
        }
        else {
          uVar4 = (int)((uVar4 & 0xffff) * (0x7f - uVar3)) / 0x3f;
        }
        uVar3 = (uint)(byte)(D_80137C92)[sVar2 * 0x36];
        if (uVar3 < 0x40) {
          uVar5 = (uint)((ulonglong)((longlong)(int)((uVar5 & 0xffff) * uVar3) * 0x82082083) >> 0x25
                        );
        }
        else {
          uVar4 = (int)((uVar4 & 0xffff) * (0x7f - uVar3)) / 0x3f;
        }
        uVar3 = uVar4 & 0xffff;
        if ((*D_80138468) == 1) {
          if (uVar3 < (uVar5 & 0xffff)) {
            uVar4 = uVar5;
          }
          uVar3 = uVar4 & 0xffff;
          uVar5 = uVar4;
        }
        iVar1 = (int)sVar2;
        *(short *)(D_801381B8 + iVar1 * 0x10) = (short)((int)(uVar3 * uVar3) / 0x3fff);
        *(short *)(D_801381BA + iVar1 * 0x10) =
             (short)((int)((uVar5 & 0xffff) * (uVar5 & 0xffff)) / 0x3fff);
        (D_80138198)[iVar1] = (D_80138198)[iVar1] | 3;
      }
      iVar8 = iVar8 + 1;
      iVar1 = iVar8 * 0x10000;
    } while (iVar8 * 0x10000 >> 0x10 < (int)(*D_8013847C));
  }
  return (int)(short)param_1;
}
