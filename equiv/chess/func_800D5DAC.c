#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define DAT_80085a25 (*(u8 *)0x80085A25)
#define DAT_80085a26 (*(u8 *)0x80085A26)
#define func_800D0B4C ((s32 (*)())0x800D0B4C)
#define func_800D4F74 ((s32 (*)())0x800D4F74)
void func_800D5DAC(uint param_1,undefined4 param_2)

{
  s8 cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  uVar7 = param_1 & 0xff;
  iVar6 = ((param_1 & 0x7f) - 1) * 0x7c + (uVar7 >> 7) * 0x2e8;
  uVar4 = *(uint *)(((u8 *)0x8006B2B4) +
                   (*(uint *)(((u8 *)0x80063948) + (uint)(byte)(&DAT_80085a10)[iVar6] * 0x3c) >> 0x11 &
                   0x7f) * 0x58) >> 0xb;
  bVar3 = (byte)uVar4 & 0xf;
  uVar5 = *(uint *)(((u8 *)0x8006B2B4) +
                   (*(uint *)(((u8 *)0x80063948) + (uint)(byte)(&DAT_80085a10)[iVar6] * 0x3c) >> 0x11 &
                   0x7f) * 0x58) >> 0x11 & 0xf;
  uVar11 = (uint)(byte)(&DAT_80085a25)[iVar6];
  uVar10 = (uint)(byte)(&DAT_80085a26)[iVar6];
  if ((uVar5 == 4) || (uVar5 == 0xc)) {
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 - iVar6 & 0xff,uVar10);
        if (cVar1 != '\0') break;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 + iVar6 & 0xff,uVar10);
        iVar6 = iVar6 + 1;
        if (cVar1 != '\0') break;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11,uVar10 - iVar6 & 0xff);
        if (cVar1 != '\0') break;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11,uVar10 + iVar6 & 0xff);
        iVar6 = iVar6 + 1;
        if (cVar1 != '\0') break;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 - iVar6 & 0xff,uVar10 - iVar6 & 0xff);
        if (cVar1 != '\0') break;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 - iVar6 & 0xff,uVar10 + iVar6 & 0xff);
        iVar6 = iVar6 + 1;
        if (cVar1 != '\0') break;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 + iVar6 & 0xff,uVar10 - iVar6 & 0xff);
        iVar6 = iVar6 + 1;
        if (cVar1 != '\0') break;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 + iVar6 & 0xff,uVar10 + iVar6 & 0xff);
        iVar6 = iVar6 + 1;
        if (cVar1 != '\0') {
          return;
        }
      } while (iVar6 <= (int)(uint)bVar3);
    }
  }
  else if (uVar5 == 10) {
    bVar2 = func_800D0B4C(uVar11 - 1 & 0xff,uVar10);
    if (bVar2 < 2) {
      iVar6 = 2;
      if (1 < bVar3) {
        do {
          cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 - iVar6 & 0xff,uVar10);
          if (cVar1 != '\0') break;
          iVar6 = iVar6 + 1;
        } while (iVar6 <= (int)(uint)bVar3);
      }
    }
    bVar2 = func_800D0B4C(uVar11 + 1 & 0xff,uVar10);
    if (bVar2 < 2) {
      iVar6 = 2;
      if (1 < bVar3) {
        do {
          cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 + iVar6 & 0xff,uVar10);
          if (cVar1 != '\0') break;
          iVar6 = iVar6 + 1;
        } while (iVar6 <= (int)(uint)bVar3);
      }
    }
    bVar2 = func_800D0B4C(uVar11,uVar10 - 1 & 0xff);
    if (bVar2 < 2) {
      iVar6 = 2;
      if (1 < bVar3) {
        do {
          cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11,uVar10 - iVar6 & 0xff);
          if (cVar1 != '\0') break;
          iVar6 = iVar6 + 1;
        } while (iVar6 <= (int)(uint)bVar3);
      }
    }
    bVar2 = func_800D0B4C(uVar11,uVar10 + 1 & 0xff);
    if (bVar2 < 2) {
      iVar6 = 2;
      if (1 < bVar3) {
        do {
          cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11,uVar10 + iVar6 & 0xff);
          if (cVar1 != '\0') break;
          iVar6 = iVar6 + 1;
        } while (iVar6 <= (int)(uint)bVar3);
      }
    }
    bVar2 = func_800D0B4C(uVar11 - 1 & 0xff,uVar10 - 1 & 0xff);
    if (bVar2 < 2) {
      iVar6 = 2;
      if (1 < bVar3) {
        do {
          cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 - iVar6 & 0xff,uVar10 - iVar6 & 0xff);
          if (cVar1 != '\0') break;
          iVar6 = iVar6 + 1;
        } while (iVar6 <= (int)(uint)bVar3);
      }
    }
    bVar2 = func_800D0B4C(uVar11 - 1 & 0xff,uVar10 + 1 & 0xff);
    if (bVar2 < 2) {
      iVar6 = 2;
      if (1 < bVar3) {
        do {
          cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 - iVar6 & 0xff,uVar10 + iVar6 & 0xff);
          if (cVar1 != '\0') break;
          iVar6 = iVar6 + 1;
        } while (iVar6 <= (int)(uint)bVar3);
      }
    }
    bVar2 = func_800D0B4C(uVar11 + 1 & 0xff,uVar10 - 1 & 0xff);
    if (bVar2 < 2) {
      iVar6 = 2;
      if (1 < bVar3) {
        do {
          cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 + iVar6 & 0xff,uVar10 - iVar6 & 0xff);
          if (cVar1 != '\0') break;
          iVar6 = iVar6 + 1;
        } while (iVar6 <= (int)(uint)bVar3);
      }
    }
    bVar2 = func_800D0B4C(uVar11 + 1 & 0xff,uVar10 + 1 & 0xff);
    if (bVar2 < 2) {
      iVar6 = 2;
      if (1 < bVar3) {
        do {
          cVar1 = func_800D4F74(param_1 & 0xff,param_2,uVar11 + iVar6 & 0xff,uVar10 + iVar6 & 0xff);
          iVar6 = iVar6 + 1;
          if (cVar1 != '\0') {
            return;
          }
        } while (iVar6 <= (int)(uint)bVar3);
      }
    }
  }
  else if (uVar5 == 0xb) {
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        bVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar11 - iVar6 & 0xff,uVar10);
        if ((bVar2 == 0xff) || ((bVar2 & 0x7f) == 6)) break;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        bVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar11 + iVar6 & 0xff,uVar10);
        if ((bVar2 == 0xff) || (iVar6 = iVar6 + 1, (bVar2 & 0x7f) == 6)) break;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        bVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar11,uVar10 - iVar6 & 0xff);
        if ((bVar2 == 0xff) || ((bVar2 & 0x7f) == 6)) break;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        bVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar11,uVar10 + iVar6 & 0xff);
        if ((bVar2 == 0xff) || (iVar6 = iVar6 + 1, (bVar2 & 0x7f) == 6)) break;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        bVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar11 - iVar6 & 0xff,uVar10 - iVar6 & 0xff);
        if ((bVar2 == 0xff) || ((bVar2 & 0x7f) == 6)) break;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        bVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar11 - iVar6 & 0xff,uVar10 + iVar6 & 0xff);
        if ((bVar2 == 0xff) || (iVar6 = iVar6 + 1, (bVar2 & 0x7f) == 6)) break;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        bVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar11 + iVar6 & 0xff,uVar10 - iVar6 & 0xff);
        if ((bVar2 == 0xff) || (iVar6 = iVar6 + 1, (bVar2 & 0x7f) == 6)) break;
      } while (iVar6 <= (int)(uint)bVar3);
    }
    iVar6 = 1;
    if (bVar3 != 0) {
      do {
        bVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar11 + iVar6 & 0xff,uVar10 + iVar6 & 0xff);
        if (bVar2 == 0xff) {
          return;
        }
        iVar6 = iVar6 + 1;
        if ((bVar2 & 0x7f) == 6) {
          return;
        }
      } while (iVar6 <= (int)(uint)bVar3);
    }
  }
  else {
    iVar6 = 1;
    if ((uVar4 & 0xf) != 0) {
      do {
        uVar8 = uVar11 - iVar6 & 0xff;
        func_800D4F74(uVar7,param_2,uVar8,uVar10);
        uVar9 = uVar11 + iVar6 & 0xff;
        func_800D4F74(uVar7,param_2,uVar9,uVar10);
        uVar5 = uVar10 - iVar6 & 0xff;
        func_800D4F74(uVar7,param_2,uVar11,uVar5);
        uVar4 = uVar10 + iVar6 & 0xff;
        func_800D4F74(uVar7,param_2,uVar11,uVar4);
        func_800D4F74(uVar7,param_2,uVar8,uVar5);
        func_800D4F74(uVar7,param_2,uVar8,uVar4);
        func_800D4F74(uVar7,param_2,uVar9,uVar5);
        func_800D4F74(uVar7,param_2,uVar9,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)(uint)bVar3);
    }
  }
  return;
}
