#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
extern s32 func_800125D8();
extern s32 func_80012604();
void func_800B81E0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;

  iVar4 = param_1 + 0x5d0 + (uint)*(byte *)(param_1 + 0xbca) * 0x2e8 + 0x18 +
          (uint)*(byte *)(param_1 + 0x5d0 + (uint)*(byte *)(param_1 + 0xbca) + 0x5fb) * 0x7c;
  bVar1 = *(byte *)(param_1 + 0xce6);
  if (bVar1 == 4) {
    uVar2 = 8;
LAB_800b829c:
    puVar3 = (uint *)((uint)*(byte *)(iVar4 + 0x16) * 4 +
                     (uint)*(byte *)(iVar4 + 0x15) * 0x34 +
                     *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
    *puVar3 = *puVar3 & 0xffffffc0 | 2;
    func_80012604(uVar2);
  }
  else {
    if (bVar1 < 5) {
      uVar2 = 9;
      if (bVar1 == 3) goto LAB_800b829c;
    }
    else if ((bVar1 == 5) || (bVar1 == 6)) {
      *(undefined2 *)(param_1 + 0xc) = 0;
      func_80012604(6);
      return;
    }
    func_800125D8();
  }
  return;
}
