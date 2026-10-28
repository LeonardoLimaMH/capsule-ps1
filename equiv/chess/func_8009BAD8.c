#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define D_80118710 (*(u8 *)0x80118710)
void func_8009BAD8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  s8 cVar4;
  int iVar5;

  iVar3 = 0;
  cVar4 = '\0';
  iVar5 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  iVar1 = 0;
  do {
    iVar1 = (iVar1 >> 2) - (iVar3 >> 0x1f);
    iVar2 = iVar3 + iVar1 * -0xd;
    if ((*(uint *)(iVar2 * 4 + iVar1 * 0x34 + iVar5) & 0x3f) == 0) {
      (&D_80118710)[iVar2 + iVar1 * 0xd] = 0;
    }
    else {
      (&D_80118710)[iVar2 + iVar1 * 0xd] = cVar4;
      cVar4 = cVar4 + '\x01';
    }
    iVar3 = iVar3 + 1;
    iVar1 = (int)((ulonglong)((longlong)iVar3 * 0x4ec4ec4f) >> 0x20);
  } while (iVar3 < 0xa9);
  return;
}
