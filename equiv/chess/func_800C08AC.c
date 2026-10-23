#include "common.h"

#include "ghidra.h"
void func_800C08AC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar6 = (char *)(param_1 + 0xcb0);
  bVar1 = *(byte *)(param_1 + 0x5d0 + (uint)*(byte *)(param_1 + 0xbca) + 0x5fb);
  *(undefined1 *)(param_1 + 0xbe0) = 0;
  pcVar7 = (char *)(param_1 + 0x5d0 + (uint)*(byte *)(param_1 + 0xbca) * 0x2e8 + 0x18 +
                   (uint)bVar1 * 0x7c);
  iVar4 = 0;
  do {
    pcVar6[iVar4 + 4] = pcVar6[iVar4 + (uint)*(byte *)(param_1 + 0xcd6) * 2 + 8];
    iVar5 = iVar4 + 1;
    pcVar6[iVar4 + 6] = pcVar7[iVar4 + 0x15];
    iVar4 = iVar5;
  } while (iVar5 < 2);
  *(char *)(param_1 + 0xcd6) = *(char *)(param_1 + 0xcd6) + '\x01';
  cVar2 = func_800A8378(param_1);
  pcVar7[0x25] = cVar2;
  *(undefined1 *)(param_1 + 0xcd9) = 8;
  *(undefined1 *)(param_1 + 0xcd8) = 8;
  cVar2 = *pcVar7;
  if (((cVar2 == '!') || (cVar2 == '%')) || (cVar2 == '=')) {
    if ((*pcVar6 == *(char *)(param_1 + 0xcb6)) &&
       (*(char *)(param_1 + 0xcb1) == *(char *)(param_1 + 0xcb7))) {
      if (*(char *)(param_1 + 0xcb8) == *(char *)(param_1 + 0xcb2)) {
        iVar4 = 1;
        if (*(char *)(param_1 + 0xcb9) != *(char *)(param_1 + 0xcb3)) goto L800C09E8;
        cVar2 = '\b';
      }
      else {
        iVar4 = 1;
L800C09E8:
        do {
          do {
            iVar5 = iVar4;
            iVar4 = iVar5 + 1;
          } while (pcVar6[iVar5 * 2 + 8] != *(char *)(param_1 + 0xcb2));
          iVar4 = iVar5 + 1;
        } while (pcVar6[iVar5 * 2 + 9] != *(char *)(param_1 + 0xcb3));
        cVar2 = ((char)iVar5 + '\x01') * '\b';
      }
      *(char *)(param_1 + 0xcda) = cVar2;
      uVar3 = 6;
      goto L800C0A70;
    }
    if (*pcVar7 != '=') goto L800C0A44;
    pcVar7[0x17] = '\x01';
  }
  else {
L800C0A44:
    pcVar7[0x17] = -0x78;
    pcVar7[0x23] = '\0';
  }
  uVar3 = 7;
  *(uint *)(pcVar7 + 0x18) = *(uint *)(pcVar7 + 0x18) | 0x40040;
L800C0A70:
  func_80012604(uVar3);
  return;
}
