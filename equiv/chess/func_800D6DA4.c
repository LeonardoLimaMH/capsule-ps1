#include "common.h"

#include "ghidra.h"
#define DAT_8006394a (*(u8 *)0x8006394A)
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_80085a06 (*(u8 *)0x80085A06)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define DAT_80085a1e (*(u8 *)0x80085A1E)
#define DAT_80085a25 (*(u8 *)0x80085A25)
#define DAT_80085a26 (*(u8 *)0x80085A26)
#define DAT_80085a3b (*(u8 *)0x80085A3B)
#define DAT_8011965a (*(s8 *)0x8011965A)
#define D_80118C18 (*(s32 *)0x80118C18)
#define func_800D4F74 ((s32 (*)())0x800D4F74)
#define func_800D543C ((s32 (*)())0x800D543C)
#define func_800D5544 ((s32 (*)())0x800D5544)
#define func_800D56AC ((s32 (*)())0x800D56AC)
#define func_800D595C ((s32 (*)())0x800D595C)
#define func_800D5DAC ((s32 (*)())0x800D5DAC)
#define func_800D68A8 ((s32 (*)())0x800D68A8)
#define func_800D6A4C ((s32 (*)())0x800D6A4C)
void func_800D6DA4(uint param_1,undefined4 param_2)

{
  u8 cVar1;
  u8 cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  uVar7 = (param_1 & 0xff) >> 7;
  iVar4 = ((param_1 & 0x7f) - 1) * 0x7c + uVar7 * 0x2e8;
  uVar6 = (uint)((byte)(&DAT_8006394a)[(uint)(byte)(&DAT_80085a10)[iVar4] * 0x3c] >> 1);
  DAT_8011965a = (byte)(*(uint *)((uint)(byte)(&DAT_80085a26)[iVar4] * 4 +
                                 (uint)(byte)(&DAT_80085a25)[iVar4] * 0x34 + D_80118C18) >> 0x13) &
                 7;
  if (uVar6 == 1) {
    if ((*(uint *)((uint)(byte)(&DAT_80085a26)[iVar4] * 4 +
                  (uint)(byte)(&DAT_80085a25)[iVar4] * 0x34 + D_80118C18) >> 6 & 0x1fff) != 2) {
      return;
    }
  }
  else if (uVar6 == 0x58) {
    iVar5 = 0;
    iVar4 = uVar7 * 0x2e8;
    do {
      if (((&DAT_80085a1e)[iVar4] == '\0') && ((&DAT_80085a3b)[iVar4] != '\x01')) break;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x7c;
    } while (iVar5 < 5);
    if (iVar5 == 5) {
      return;
    }
  }
  switch(*(uint *)(((u8 *)0x8006B2B4) + uVar6 * 0x58) >> 7 & 0xf) {
  case 1:
    iVar4 = ((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8;
    func_800D4F74(param_1 & 0xff,param_2,(&DAT_80085a25)[iVar4],(&DAT_80085a26)[iVar4]);
    break;
  case 2:
    uVar7 = param_1 & 0xff;
    if ((*(uint *)(((u8 *)0x8006B2B4) + uVar6 * 0x58) >> 0xb & 0xf) < 2) {
      iVar4 = ((param_1 & 0x7f) - 1) * 0x7c + (uVar7 >> 7) * 0x2e8;
      cVar1 = (&DAT_80085a25)[iVar4];
      cVar2 = (&DAT_80085a26)[iVar4];
      func_800D4F74(uVar7,param_2,cVar1 + -1,cVar2);
      func_800D4F74(uVar7,param_2,cVar1 + '\x01',cVar2);
      func_800D4F74(uVar7,param_2,cVar1,cVar2 + -1);
      func_800D4F74(uVar7,param_2,cVar1,cVar2 + '\x01');
    }
    else {
      func_800D56AC(param_1 & 0xff,param_2);
    }
    break;
  case 3:
    if ((*(uint *)(((u8 *)0x8006B2B4) + uVar6 * 0x58) >> 0xb & 0xf) < 2) {
      func_800D543C(param_1 & 0xff,param_2);
    }
    else {
      func_800D595C(param_1 & 0xff,param_2);
    }
    break;
  case 4:
    if ((*(uint *)(((u8 *)0x8006B2B4) + uVar6 * 0x58) >> 0xb & 0xf) < 2) {
      func_800D5544(param_1 & 0xff,param_2);
    }
    else {
      func_800D5DAC(param_1 & 0xff,param_2);
    }
    break;
  case 5:
    func_800D68A8(param_1 & 0xff,param_2);
    break;
  case 6:
    func_800D6A4C(param_1 & 0xff,param_2);
    break;
  case 7:
    uVar7 = 0;
    uVar6 = 0;
    do {
      do {
        func_800D4F74(param_1 & 0xff,param_2,uVar7 & 0xff,uVar6 & 0xff);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 0xd);
      uVar7 = uVar7 + 1;
      uVar6 = 0;
    } while ((int)uVar7 < 0xd);
    break;
  case 10:
    bVar3 = (&DAT_80085a06)[(param_1 & 0xff) >> 7];
    uVar6 = 0;
    iVar4 = 0;
    do {
      uVar7 = 0;
      do {
        if ((*(uint *)(uVar7 * 4 + iVar4 + D_80118C18) >> 0x16 & 3) == (uint)bVar3) {
          func_800D4F74(param_1 & 0xff,param_2,uVar6 & 0xff,uVar7 & 0xff);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0xd);
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x34;
    } while ((int)uVar6 < 0xd);
  }
  return;
}
