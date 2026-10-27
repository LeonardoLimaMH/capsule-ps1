#include "common.h"

#include "ghidra.h"
#define D_80119660 (*(s32 *)0x80119660)
#define D_8011970A (*(u8 *)0x8011970A)
#define _D_80118C18 (*(s32 *)0x80118C18)
#define null_ARRAY_80118fb3 ((u8 *)0x80118FB3)
#define null_ARRAY_801191cf ((u8 *)0x801191CF)
extern s32 func_800D2CE4();
extern s32 func_800D7328();
extern s32 func_800D862C();
extern s32 func_800D90C0();
undefined4 func_800DB14C(byte param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;

  uVar8 = 0;
  bVar2 = *(byte *)((param_1 >> 7) + 0x80085a06);
  uVar3 = func_800D7328(param_1,&D_80119660);
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar5 = 0;
    uVar7 = uVar8;
    if (uVar3 != 0) {
      do {
        uVar7 = (uint)(byte)(&D_80119660)[iVar5];
        cVar1 = func_800D2CE4(6,uVar7);
        if ((cVar1 == '\x01') || (cVar1 = func_800D2CE4(0x86,uVar7), cVar1 == '\x01'))
        break;
        if ((*(uint *)((uint)(byte)(null_ARRAY_80118fb3 +
                                   (uVar7 & 0x7f) * 7 + ((int)uVar7 >> 7) * 0x2a)[1] * 4 +
                      (uint)(byte)null_ARRAY_80118fb3[(uVar7 & 0x7f) * 7 + ((int)uVar7 >> 7) * 0x2a]
                      * 0x34 + _D_80118C18) >> 0x16 & 3) == (uint)bVar2) {
          uVar8 = uVar7;
        }
        iVar5 = iVar5 + 1;
        uVar7 = uVar8;
      } while (iVar5 < (int)uVar3);
    }
    uVar4 = 0;
    if (uVar7 != 0) {
      func_800D90C0(param_1);
      pbVar6 = null_ARRAY_801191cf + (uVar7 & 0x7f) * 7 + ((int)uVar7 >> 7) * 0x2a;
      bVar2 = func_800D862C(param_1,uVar7);
      uVar4 = 1;
      null_ARRAY_801191cf[(uint)*pbVar6 * 0xd + (uint)pbVar6[1] + 0x5b] = 0;
      pbVar6[1] = bVar2 % 0xd;
      *pbVar6 = bVar2 / 0xd;
      null_ARRAY_801191cf[(uint)*pbVar6 * 0xd + (uint)pbVar6[1] + 0x5b] = (char)uVar7;
      iVar5 = ((uVar7 & 0x7f) - 1) * 0x7c + ((int)uVar7 >> 7) * 0x2e8;
      (*(u8 *)((u8 *)&D_8011970A + 0)) = *(undefined1 *)(iVar5 + -0x7ff7a5db);
      (*(u8 *)((u8 *)&D_8011970A + 1)) = *(undefined1 *)(iVar5 + -0x7ff7a5da);
    }
  }
  return uVar4;
}
