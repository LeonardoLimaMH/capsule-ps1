#include "common.h"

#include "ghidra.h"
#define DAT_80085a1e (*(u8 *)0x80085A1E)
#define DAT_801191ca (*(s32 *)0x801191CA)
#define func_800D2340 ((s32 (*)())0x800D2340)
#define func_800D90C0 ((s32 (*)())0x800D90C0)
bool func_800DC874(byte param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_20 [8];

  uVar4 = 1 - (param_1 >> 7);
  iVar2 = 0;
  iVar3 = (uVar4 & 0xff) * 0x2e8;
  local_20[2] = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  do {
    if ((&DAT_80085a1e)[iVar3] != '\0') {
      uVar1 = func_800D2340((uVar4 * 0x80 | iVar2 + 1U) & 0xff);
      local_20[uVar1 & 0xff] = local_20[uVar1 & 0xff] + 1;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x7c;
  } while (iVar2 < 5);
  uVar4 = func_800D2340(param_1);
  uVar4 = uVar4 & 0xff;
  iVar3 = (uint)local_20[(uVar4 + 2) % 3] - (uint)local_20[(uVar4 + 1) % 3];
  iVar2 = (uint)local_20[(uVar4 + 1) % 3] - (uint)local_20[(uVar4 + 3) % 3];
  if (iVar3 < iVar2) {
    func_800D90C0(param_1);
    (*(u16 *)((u8 *)&DAT_801191ca + 2)) = (*(u16 *)((u8 *)&DAT_801191ca + 2)) + ((short)iVar2 - (short)iVar3) * 1000;
  }
  return iVar3 < iVar2;
}
