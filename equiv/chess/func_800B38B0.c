#include "common.h"

#include "ghidra.h"
void func_800B38B0(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 + 0x5d0;
  iVar6 = 3;
  if (*(char *)(iVar5 + (uint)*(byte *)(param_1 + 0xbca) * 0x2e8 +
                (uint)*(byte *)(iVar5 + (uint)*(byte *)(param_1 + 0xbca) + 0x5fb) * 0x7c + 0x40) ==
      '\0') {
    iVar6 = 0;
    do {
      uVar7 = 1;
      cVar1 = *(char *)(param_1 + (uint)*(byte *)(param_1 + 0xbca) + 0xbcb);
      pcVar2 = (char *)func_800A8FFC(iVar5);
      if (iVar6 == 1) {
        if ((cVar1 != '\x05') && (*(char *)(param_1 + 0xbdd) == '\0')) {
          uVar3 = func_800CAF74(param_1 + 0xc00);
          goto code_r0x800b3a48;
        }
L800B3A50:
        uVar7 = 0;
L800B3A58:
        *(undefined1 *)(param_1 + iVar6 + 0xbf0) = uVar7;
      }
      else {
        if (1 < iVar6) {
          if (iVar6 == 2) {
            if ((((cVar1 == '\x05') || (*(char *)(param_1 + 0xbde) != '\0')) ||
                (iVar4 = func_800A8E84(iVar5), (*(uint *)(iVar4 + 0x10) & 3) == 2)) ||
               (*(char *)(param_1 + 0xbdc) != '\0')) goto L800B3A50;
            uVar3 = (uint)pcVar2[0x13];
          }
          else {
            if (iVar6 != 3) {
              *(undefined1 *)(param_1 + iVar6 + 0xbf0) = 1;
              goto L800B3A5C;
            }
            if ((*pcVar2 == '\x17') && (pcVar2[0x29] != '\0')) goto L800B3A58;
            uVar3 = *(uint *)(param_1 + 0xbdc) & 0xff0000ff;
          }
code_r0x800b3a48:
          uVar7 = 1;
          if (uVar3 == 0) goto L800B3A50;
          goto L800B3A58;
        }
        if (iVar6 == 0) {
          uVar7 = 1;
          if (*(char *)(param_1 + 0xbdc) != '\0') {
            uVar7 = 0;
          }
          goto L800B3A58;
        }
        *(undefined1 *)(param_1 + iVar6 + 0xbf0) = 1;
      }
L800B3A5C:
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    iVar5 = 0;
    iVar6 = param_1;
    do {
      if (*(char *)(iVar6 + 0xbf0) != '\0') goto L800B3A8C;
      iVar5 = iVar5 + 1;
      iVar6 = param_1 + iVar5;
    } while (iVar5 < 4);
  }
  else {
    iVar5 = param_1 + 3;
    do {
      *(undefined1 *)(iVar5 + 0xbf0) = 0;
      iVar6 = iVar6 + -1;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar6);
    iVar5 = 4;
L800B3A8C:
    *(char *)(param_1 + 0xbf5) = (char)iVar5;
  }
  return;
}
