#include "common.h"

#include "ghidra.h"
#define D_80119660 (*(s32 *)0x80119660)
#define D_8011970A (*(u8 *)0x8011970A)
#define _D_80118C18 (*(s32 *)0x80118C18)
#define null_ARRAY_801191cf ((u8 *)0x801191CF)
extern s32 func_800D7328();
extern s32 func_800D90C0();
undefined4 func_800DC494(uint param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;

  iVar7 = ((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8;
  bVar1 = *(byte *)(iVar7 + -0x7ff7a5db);
  bVar2 = *(byte *)(iVar7 + -0x7ff7a5da);
  uVar3 = func_800D7328(param_1 & 0xff,&D_80119660);
  if ((uVar3 & 0xff) != 0) {
    uVar8 = 0;
    if ((uVar3 & 0xff) != 0) {
      uVar4 = 0;
      do {
        iVar7 = (((byte)(&D_80119660)[uVar4] & 0x7f) - 1) * 0x7c +
                (uint)((byte)(&D_80119660)[uVar4] >> 7) * 0x2e8;
        bVar5 = *(byte *)(iVar7 + -0x7ff7a5db);
        bVar6 = *(byte *)(iVar7 + -0x7ff7a5da);
        if (bVar1 < bVar5) {
          bVar5 = bVar5 + 1;
        }
        else if (bVar5 < bVar1) {
          bVar5 = bVar5 - 1;
        }
        if (bVar2 < bVar6) {
          bVar6 = bVar6 + 1;
        }
        else if (bVar6 < bVar2) {
          bVar6 = bVar6 - 1;
        }
        if ((((0xc < bVar5) || (0xc < bVar6)) ||
            (uVar4 = *(uint *)((uint)bVar6 * 4 + (uint)bVar5 * 0x34 + _D_80118C18),
            (uVar4 >> 6 & 0x1fff) == 0)) || ((uVar4 & 0x3f) < 2)) break;
        uVar8 = uVar8 + 1;
        uVar4 = uVar8 & 0xff;
      } while ((uVar8 & 0xff) < (uVar3 & 0xff));
    }
    if ((uVar8 & 0xff) != (uVar3 & 0xff)) {
      bVar1 = (&D_80119660)[uVar8 & 0xff];
      func_800D90C0(param_1 & 0xff);
      iVar7 = (bVar1 & 0x7f) - 1;
      uVar3 = (uint)(bVar1 >> 7);
      null_ARRAY_801191cf[iVar7 * 7 + uVar3 * 0x2a + 9] = 0;
      iVar7 = iVar7 * 0x7c + uVar3 * 0x2e8;
      null_ARRAY_801191cf
      [(uint)*(byte *)(iVar7 + -0x7ff7a5db) * 0xd + (uint)*(byte *)(iVar7 + -0x7ff7a5da) + 0x5b] = 0
      ;
      null_ARRAY_801191cf[uVar3 + 5] = null_ARRAY_801191cf[uVar3 + 5] + -1;
      (*(u8 *)((u8 *)&D_8011970A + 0)) = *(undefined1 *)(iVar7 + -0x7ff7a5db);
      (*(u8 *)((u8 *)&D_8011970A + 1)) = *(undefined1 *)(iVar7 + -0x7ff7a5da);
      return 1;
    }
  }
  return 0;
}
