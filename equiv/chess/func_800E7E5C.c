#include "common.h"

#include "ghidra.h"
#define _D_8008F754 (*(s16 *)0x8008F754)
#define bRam8008ee6b (*(u8 *)0x8008EE6B)
extern s32 func_80013920();
void func_800E7E5C(int param_1)

{
  char cVar1;
  short sVar2;

  if (bRam8008ee6b < 2) {
    sVar2 = *(short *)(param_1 + 0x16) + 1;
  }
  else {
    sVar2 = *(short *)(param_1 + 0x16) + (ushort)bRam8008ee6b;
  }
  *(short *)(param_1 + 0x16) = sVar2;
  if (sVar2 < 0x1f) {
    *(short *)(param_1 + 0x3e) = *(short *)(param_1 + 0x3e) + 400;
    if (_D_8008F754 == 0) {
      *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + 0x14;
    }
    else {
      *(short *)(param_1 + 0x3a) = *(short *)(param_1 + 0x3a) + 0x40;
      *(short *)(param_1 + 0x3c) = *(short *)(param_1 + 0x3c) + 0x40;
      if (0x27 < *(byte *)(param_1 + 0x30)) {
        cVar1 = *(char *)(param_1 + 0x36) + -0x28;
        *(char *)(param_1 + 0x36) = cVar1;
        *(char *)(param_1 + 0x35) = cVar1;
        *(char *)(param_1 + 0x34) = cVar1;
        *(char *)(param_1 + 0x32) = cVar1;
        *(char *)(param_1 + 0x31) = cVar1;
        *(char *)(param_1 + 0x30) = cVar1;
      }
    }
  }
  else {
    func_80013920();
  }
  return;
}
