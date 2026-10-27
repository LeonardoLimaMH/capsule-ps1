#include "common.h"

#include "ghidra.h"
#define DAT_800f062a (*(u16 *)0x800F062A)
#define DAT_800f0656 (*(u16 *)0x800F0656)
#define DAT_800f065a (*(s16 *)0x800F065A)
#define DAT_80100d4a (*(s16 *)0x80100D4A)
#define D_800EE630 (*(s32 *)0x800EE630)
#define D_800EF300 (*(s32 *)0x800EF300)
#define D_800F062C (*(s32 *)0x800F062C)
#define D_800F0640 (*(u16 *)0x800F0640)
#define D_800F0654 (*(s16 *)0x800F0654)
#define D_800F0658 (*(s16 *)0x800F0658)
#define D_800F065C (*(s16 *)0x800F065C)
#define D_800FAE10 (*(s32 *)0x800FAE10)
#define D_800FDE08 (*(s32 *)0x800FDE08)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A1D58 ((s32 (*)())0x800A1D58)
#define func_800B6D98 ((s32 (*)())0x800B6D98)
undefined4 func_800BEDA8(void)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;

  uVar3 = (uint)DAT_800f0656;
  DAT_800f0656 = (ushort)(uVar3 + 1);
  if (D_800F0658 == 1) {
    if (DAT_80100d4a == 0) {
      D_800F0658 = 2;
      iVar4 = 0;
      piVar7 = &D_800F062C;
      do {
        iVar4 = iVar4 + 1;
        *(uint *)(*piVar7 + 0x38) = *(uint *)(*piVar7 + 0x38) | 1;
        piVar7 = piVar7 + 1;
      } while (iVar4 < 5);
    }
    else {
      iVar4 = 0;
      piVar7 = &D_800F062C;
      psVar6 = &D_800F0640;
      DAT_80100d4a = DAT_80100d4a + -1;
      do {
        iVar4 = iVar4 + 1;
        *(short *)(*piVar7 + 0x46) = *(short *)(*piVar7 + 0x46) + *psVar6;
        iVar5 = *piVar7;
        piVar7 = piVar7 + 1;
        *(short *)(iVar5 + 0x4a) = *(short *)(iVar5 + 0x4a) + psVar6[1];
        psVar6 = psVar6 + 2;
      } while (iVar4 < 5);
    }
  }
  else if ((D_800F0658 < 2) && (D_800F0658 == 0)) {
    iVar4 = (int)D_800F0654;
    if ((iVar4 < 6) &&
       ((int)*(short *)(&D_800F065C + iVar4 * 2) == (int)((uVar3 + 1) * 0x10000) >> 0x10)) {
      if (iVar4 != 0) {
        func_80034AB0(0x51);
      }
      D_800F0654 = D_800F0654 + 1;
    }
    if (*(short *)(D_800EF300 + 0x24) < 0) {
      iVar4 = 0;
      piVar7 = &D_800F062C;
      do {
        iVar5 = *piVar7;
        if (iVar5 == 0) {
          iVar5 = func_800B6D98(iVar4 + 10,0,0,5,0,&D_800EE630,iVar4 + 0x36,1,0,0,0,1);
          *piVar7 = iVar5;
        }
        else {
          *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) & 0xfffffffe;
        }
        *(undefined2 *)(*piVar7 + 0x46) = *(undefined2 *)(D_800EF300 + 0x46);
        iVar4 = iVar4 + 1;
        *(undefined2 *)(*piVar7 + 0x4a) = *(undefined2 *)(D_800EF300 + 0x4a);
        *(undefined2 *)(*piVar7 + 0x4e) = *(undefined2 *)(D_800EF300 + 0x4e);
        piVar7 = piVar7 + 1;
      } while (iVar4 < 5);
      *(uint *)(D_800FDE08 + 0x38) = *(uint *)(D_800FDE08 + 0x38) | 8;
      DAT_800f062a = 0x60;
      *(uint *)(D_800FAE10 + 0x38) = *(uint *)(D_800FAE10 + 0x38) | 8;
      func_800A1D58(1,0);
      D_800F0658 = 1;
      DAT_80100d4a = 0x20;
      func_80034AB0(0x51);
    }
  }
  sVar1 = DAT_800f062a;
  if (((0 < D_800F0658) && (DAT_800f065a == 0)) && (sVar1 = DAT_800f062a + -1, DAT_800f062a == 0)) {
    *(uint *)(D_800FDE08 + 0x38) = *(uint *)(D_800FDE08 + 0x38) & 0xfffffff7;
    *(undefined2 *)(D_800FDE08 + 0x74) = 0;
    *(undefined2 *)(D_800FDE08 + 0x76) = 0;
    *(uint *)(D_800FAE10 + 0x38) = *(uint *)(D_800FAE10 + 0x38) & 0xfffffff7;
    *(undefined2 *)(D_800FAE10 + 0x74) = 0;
    *(undefined2 *)(D_800FAE10 + 0x76) = 0;
    DAT_800f065a = 1;
    sVar1 = DAT_800f062a;
  }
  DAT_800f062a = sVar1;
  if ((D_800F0658 == 2) && (uVar2 = 1, DAT_800f065a == 1)) {
    DAT_800f065a = 0;
    D_800F0658 = 0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
