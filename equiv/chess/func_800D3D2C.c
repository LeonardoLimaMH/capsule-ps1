#include "common.h"

#include "ghidra.h"
#define D_80085A10 (*(s32 *)0x80085A10)
#define _D_80118C18 (*(s32 *)0x80118C18)
undefined4 func_800D3D2C(int param_1,uint param_2,char *param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  uVar7 = (param_2 & 0xff) >> 7;
  pbVar3 = (byte *)(param_1 + uVar7 * 0x2a + (param_2 & 0x7f) * 7 + 9);
  uVar8 = (uint)pbVar3[1];
  uVar9 = (uint)*pbVar3;
  uVar10 = (uint)pbVar3[5];
  bVar1 = *(byte *)((uint)(byte)(&D_80085A10)[((param_2 & 0x7f) - 1) * 0x7c + uVar7 * 0x2e8] * 0x3c
                   + -0x7ff9c6b7);
  if (((bVar1 & 0xf) < 4) && ((bVar1 & 0xf) != 0)) {
    if (*(char *)(uVar7 + 0x80085a06) == '\x01') {
      uVar7 = uVar8 + 1;
    }
    else {
      uVar7 = uVar8 - 1;
    }
    uVar5 = uVar7 & 0xff;
    if ((uVar9 < 0xd) && (uVar5 < 0xd)) {
      uVar4 = *(uint *)(uVar5 * 4 + uVar9 * 0x34 + _D_80118C18);
      uVar2 = uVar4 >> 6 & 0x1fff;
      if ((uVar2 != 0) && ((uVar2 < 3 && (1 < (uVar4 & 0x3f))))) {
        bVar1 = *(byte *)(uVar9 * 0xd + param_1 + uVar5 + 100);
        if (bVar1 != 0) {
          if ((uint)(bVar1 >> 7) != (param_2 & 0xff) >> 7) {
            return 0;
          }
          if ((bVar1 & 0x7f) == 6) {
            return 0;
          }
        }
        uVar5 = *(uint *)((uVar7 & 0xff) * 4 + uVar9 * 0x34 + _D_80118C18);
        if ((uVar5 >> 6 & 0x1fff) != 2) {
          iVar6 = (uVar5 >> 0x13 & 7) -
                  (*(uint *)(uVar8 * 4 + uVar9 * 0x34 + _D_80118C18) >> 0x13 & 7);
          if (0 < iVar6) {
            uVar10 = uVar10 - iVar6;
          }
          if (0 < (int)uVar10) {
            if (param_4 == '\0') {
              param_3[uVar9 * 0xd + (uVar7 & 0xff)] = '\x01';
            }
            else {
              *param_3 = (char)uVar7 + (char)(uVar9 * 0xd);
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
