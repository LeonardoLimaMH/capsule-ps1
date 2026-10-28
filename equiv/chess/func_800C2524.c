#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800125AC ((s32 (*)())0x800125AC)
#define func_80012604 ((s32 (*)())0x80012604)
#define func_8001A998 ((s32 (*)())0x8001A998)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
void func_800C2524(int param_1)

{
  s8 cVar1;
  undefined4 uVar2;
  s8 *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  iVar5 = param_1 + 0x5d0;
  uVar4 = (uint)*(byte *)(param_1 + 0xbca);
  pcVar3 = (s8 *)(iVar5 + uVar4 * 0x2e8 + 0x18 + (uint)*(byte *)(iVar5 + uVar4 + 0x5fb) * 0x7c);
  iVar6 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  func_8001A998(param_1 + 0xce6,3);
  if ((*pcVar3 == '\x17') && (pcVar3[0x29] == '\x01')) {
    pcVar3[0x29] = '\x02';
    uVar4 = 0xff;
  }
  else {
    cVar1 = *(s8 *)(iVar5 + uVar4 * 6 + 0x5ed);
    if ((cVar1 == '\0') || (cVar1 == '\x04')) {
      uVar4 = 2;
    }
    else {
      uVar4 = *(uint *)((uint)(byte)pcVar3[0x16] * 4 + (uint)(byte)pcVar3[0x15] * 0x34 + iVar6) &
              0x3f;
    }
  }
  *(s8 *)(param_1 + 0xce6) = (s8)uVar4;
  if (uVar4 == 5) {
    uVar2 = 0x65;
  }
  else if (uVar4 < 6) {
    if (uVar4 == 3) {
      uVar2 = 0x58;
    }
    else {
      uVar2 = 0x3a;
      if (uVar4 != 4) {
        uVar2 = 4;
        goto LAB_800c26b4;
      }
    }
  }
  else {
    if (uVar4 != 6) {
      uVar2 = 4;
      if (uVar4 == 0xff) {
        uVar2 = 3;
      }
LAB_800c26b4:
      func_80012604(uVar2);
      return;
    }
    uVar2 = 10;
  }
  func_80034AB0(uVar2);
  func_800125AC(5);
  return;
}
