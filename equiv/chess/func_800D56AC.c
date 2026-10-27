#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define DAT_80085a25 (*(u8 *)0x80085A25)
#define DAT_80085a26 (*(u8 *)0x80085A26)
#define func_800D4F74 ((s32 (*)())0x800D4F74)
void func_800D56AC(uint param_1,undefined4 param_2)

{
  s8 cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  uVar4 = param_1 & 0xff;
  iVar3 = ((param_1 & 0x7f) - 1) * 0x7c + (uVar4 >> 7) * 0x2e8;
  uVar7 = (uint)(byte)(&DAT_80085a25)[iVar3];
  uVar6 = (uint)(byte)(&DAT_80085a26)[iVar3];
  uVar8 = *(uint *)(((u8 *)0x8006B2B4) +
                   (*(uint *)(((u8 *)0x80063948) + (uint)(byte)(&DAT_80085a10)[iVar3] * 0x3c) >> 0x11 &
                   0x7f) * 0x58) >> 0xb & 0xf;
  uVar2 = *(uint *)(((u8 *)0x8006B2B4) +
                   (*(uint *)(((u8 *)0x80063948) + (uint)(byte)(&DAT_80085a10)[iVar3] * 0x3c) >> 0x11 &
                   0x7f) * 0x58) >> 0x11 & 0xf;
  uVar5 = 1;
  if (uVar2 == 10) {
    uVar5 = 2;
  }
  if (uVar2 == 4) {
    if (uVar5 <= uVar8) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar7 - uVar5 & 0xff,uVar6);
        uVar5 = uVar5 + 1;
        if (cVar1 != '\0') break;
      } while ((int)uVar5 <= (int)uVar8);
    }
    iVar3 = 1;
    if (uVar8 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar7 + iVar3 & 0xff,uVar6);
        iVar3 = iVar3 + 1;
        if (cVar1 != '\0') break;
      } while (iVar3 <= (int)uVar8);
    }
    iVar3 = 1;
    if (uVar8 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar7,uVar6 - iVar3 & 0xff);
        iVar3 = iVar3 + 1;
        if (cVar1 != '\0') break;
      } while (iVar3 <= (int)uVar8);
    }
    iVar3 = 1;
    if (uVar8 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar7,uVar6 + iVar3 & 0xff);
        iVar3 = iVar3 + 1;
        if (cVar1 != '\0') {
          return;
        }
      } while (iVar3 <= (int)uVar8);
    }
  }
  else if (uVar5 <= uVar8) {
    do {
      func_800D4F74(uVar4,param_2,uVar7 - uVar5 & 0xff,uVar6);
      func_800D4F74(uVar4,param_2,uVar7 + uVar5 & 0xff,uVar6);
      func_800D4F74(uVar4,param_2,uVar7,uVar6 - uVar5 & 0xff);
      func_800D4F74(uVar4,param_2,uVar7,uVar6 + uVar5 & 0xff);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 <= (int)uVar8);
  }
  return;
}
