#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80020304 ((s32 (*)())0x80020304)
#define func_800B8740 ((s32 (*)())0x800B8740)
void func_800B881C(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;

  iVar6 = 0;
  sVar1 = *(short *)(param_1 + 0x5cc);
  puVar8 = *(uint **)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  puVar7 = puVar8;
  do {
    iVar5 = 0;
    puVar4 = puVar7;
    do {
      uVar3 = *puVar4 & 0x3f;
      if (uVar3 < 7) {
        if (uVar3 < 5) {
          if ((uVar3 == 3) && ((-1 < sVar1 || (iVar2 = func_800202A4(2), iVar2 != 0)))) {
            uVar3 = *puVar4 & 0xffffffc0;
LAB_800b8978:
            uVar3 = uVar3 | 2;
            goto LAB_800b897c;
          }
        }
        else {
          uVar3 = *puVar4 & 0xffffffc0;
          if (-1 < sVar1) goto LAB_800b8978;
        }
      }
      else {
        if (uVar3 != 7) goto LAB_800b8984;
        if ((-1 < sVar1) || (iVar2 = func_800202A4(3), iVar2 == 0)) {
          uVar3 = *puVar4 & 0xffffffc0;
          goto LAB_800b8978;
        }
        iVar2 = func_80020304(3);
        if (iVar2 == 0) {
          uVar3 = *puVar4 & 0xffffffc0 | 3;
        }
        else if (iVar2 == 1) {
          uVar3 = *puVar4 & 0xffffffc0 | 5;
        }
        else {
          uVar3 = *puVar4 & 0xffffffc0 | 6;
        }
LAB_800b897c:
        *puVar4 = uVar3;
      }
LAB_800b8984:
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xd);
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 0xd;
    if (0xc < iVar6) {
      iVar6 = 0;
      if (sVar1 < 0) {
        iVar6 = func_800202A4(2);
      }
      iVar5 = 0;
      if (0 < iVar6) {
        do {
          func_800B8740(puVar8,4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      return;
    }
  } while( true );
}
