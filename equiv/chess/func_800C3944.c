#include "common.h"

#include "ghidra.h"
#define DAT_8008f7ce (*(u8 *)0x8008F7CE)
#define func_8002CC74 ((s32 (*)())0x8002CC74)
#define func_8002CD50 ((s32 (*)())0x8002CD50)
#define func_80033974 ((s32 (*)())0x80033974)
#define func_800A84A0 ((s32 (*)())0x800A84A0)
#define func_800A8E34 ((s32 (*)())0x800A8E34)
#define func_800AFACC ((s32 (*)())0x800AFACC)
#define func_800B077C ((s32 (*)())0x800B077C)
#define func_800B0F1C ((s32 (*)())0x800B0F1C)
#define func_800CA69C ((s32 (*)())0x800CA69C)
#define func_800CA6B0 ((s32 (*)())0x800CA6B0)
void func_800C3944(int param_1)

{
  s8 cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  s8 *pcVar8;
  s8 *pcVar9;

  pcVar9 = (s8 *)(param_1 + 0x5d0);
  iVar7 = 0;
  iVar4 = 0;
  do {
    iVar5 = 0;
    iVar3 = iVar4;
    do {
      pcVar9[iVar3 + 0x40] = '\0';
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x7c;
    } while (iVar5 < 5);
    iVar7 = iVar7 + 1;
    iVar4 = iVar4 + 0x2e8;
  } while (iVar7 < 2);
  iVar4 = func_800CA6B0(param_1);
  if (iVar4 == 0) {
    func_800AFACC(param_1,1);
  }
  if ((*pcVar9 != '\x02') && (*(uint *)(param_1 + 3000) < 18000)) {
    iVar4 = func_800CA69C(param_1);
    if (*(s8 *)(param_1 + iVar4 + 0x5e0) == '\0') {
      iVar4 = func_800CA69C(param_1);
      *(byte *)(param_1 + iVar4 + 6) = *(byte *)(param_1 + iVar4 + 6) | 0x20;
    }
  }
  func_80033974(0);
  iVar4 = 0;
  iVar3 = 0x18;
  iVar7 = 0;
  *(undefined1 *)(param_1 + 0xbe9) = 0;
  *(undefined1 *)(param_1 + 0xbe0) = 0;
  *(undefined1 *)(param_1 + 0xbeb) = 0;
  do {
    iVar6 = 0;
    pcVar8 = pcVar9 + iVar3;
    iVar5 = iVar7;
    do {
      if (pcVar9[iVar5 + 0x43] != '\x01') {
        func_800A84A0(pcVar8,iVar4,iVar6,1);
      }
      iVar2 = func_800A8E34(pcVar9,iVar4,iVar6);
      if (iVar2 == 0) {
        pcVar9[iVar5 + 0x2f] = '\x01';
      }
      pcVar8 = pcVar8 + 0x7c;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x7c;
    } while (iVar6 < 5);
    iVar3 = iVar3 + 0x2e8;
    iVar4 = iVar4 + 1;
    iVar7 = iVar7 + 0x2e8;
  } while (iVar4 < 2);
  func_800B0F1C(pcVar9);
  *(undefined1 *)(param_1 + 0xbe5) = 2;
  *(undefined1 *)(param_1 + 0xbe6) = 0xff;
  cVar1 = func_800B077C(param_1,0x1e);
  DAT_8008f7ce = DAT_8008f7ce + cVar1;
  func_8002CC74();
  func_8002CD50();
  return;
}
