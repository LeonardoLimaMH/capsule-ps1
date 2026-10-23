#include "common.h"

#include "ghidra.h"
void SsSeqCalledTbyT(void)

{
    extern s32 D_801373E4;
    extern s32 D_801373E8;
    extern s32 D_801373F0;
    extern s16 D_80137C70;
    extern s16 D_80137C72;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  if (D_801373E4 != 1) {
    D_801373E4 = 1;
    uVar6 = 0;
    _SsVmFlush();
    if (0 < D_80137C70) {
      piVar7 = (int *)D_801373F0;
      do {
        if (((D_801373E8 & 1 << (uVar6 & 0x1f)) != 0) && (iVar5 = 0, 0 < D_80137C72)) {
          iVar4 = (int)(short)uVar6;
          iVar3 = 0;
          iVar1 = 0;
          do {
            iVar2 = iVar3 >> 0x10;
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 1) != 0) {
              func_8011C974(iVar4,iVar2);
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x10) != 0) {
                _SsSndCrescendo(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x20) != 0) {
                _SsSndDecrescendo(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x40) != 0) {
                _SsSndTempo(iVar4,iVar2);
              }
              if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 0x80) != 0) {
                _SsSndTempo(iVar4,iVar2);
              }
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 2) != 0) {
              _SsSndPause(iVar4,iVar2);
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 8) != 0) {
              _SsSndReplay(iVar4,iVar2);
            }
            if ((*(uint *)(iVar1 + *piVar7 + 0x98) & 4) != 0) {
              _SsSndStop(iVar4,iVar2);
              *(undefined4 *)(iVar1 + *piVar7 + 0x98) = 0;
            }
            iVar3 = iVar3 + 0x10000;
            iVar5 = iVar5 + 1;
            iVar1 = iVar1 + 0xb0;
          } while (iVar5 < D_80137C72);
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 1;
      } while ((int)uVar6 < (int)D_80137C70);
    }
    D_801373E4 = 0;
  }
  return;
}
