#include "common.h"

#include "ghidra.h"
bool func_800294AC(undefined4 param_1,uint param_2)

{
    extern u8 D_80069AB4[];
    extern u8 D_80091618[];
    extern u8 D_800EF364[];
    extern u8 D_80100F38[];
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  
  uVar3 = func_800B1260();
  uVar3 = uVar3 & 0xffff;
  if (uVar3 != 0xffff) {
    iVar8 = uVar3 * 0x1a8;
    uVar11 = (uint)*(ushort *)(iVar8 + -0x7ff6e9d8);
    if (uVar11 != 0xffff) {
      uVar9 = 0;
      if (*(short *)(iVar8 + -0x7ff6e9d6) != 0) {
        do {
          iVar5 = (uint)uVar9 * 0xc + iVar8;
          uVar1 = *(ushort *)((uint)uVar9 * 2 + iVar8 + -0x7ff6e9d4);
          iVar10 = *(int *)(iVar5 + -0x7ff6e9cc);
          iVar5 = *(int *)(iVar5 + -0x7ff6e9c8);
          uVar2 = func_800A9658((int)((*(ushort *)((*D_80069AB4) + (uint)uVar1 * 2) - 1) * 0x10000)
                                  >> 0x10);
          uVar7 = 0;
          if (uVar2 != 0) {
            iVar6 = (int)(short)*(ushort *)((*D_80069AB4) + (uint)uVar1 * 2);
            uVar4 = 0;
            do {
              uVar7 = uVar7 + 1;
              if (param_2 ==
                  (byte)(D_800EF364)
                        [(iVar5 - (((int)uVar4 % iVar6 & 0xffffU) + 1)) +
                         (iVar10 - (((int)uVar4 / iVar6 & 0xffffU) + 1)) * 8 + uVar11 * 0x40]) {
                return true;
              }
              uVar4 = (uint)uVar7;
            } while (uVar7 < uVar2);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(iVar8 + -0x7ff6e9d6));
      }
      return param_2 ==
             *(byte *)(*(short *)(uVar3 * 0x79c + -0x7fefed92) * 8 + uVar11 * 0x40 +
                       (int)*(short *)(uVar3 * 0x79c + -0x7fefed90) + -0x7ff10ca5);
    }
  }
  return false;
}
