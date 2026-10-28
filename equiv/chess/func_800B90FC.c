#include "common.h"

#include "ghidra.h"
#define DAT_80100fa9 (*(s8 *)0x80100FA9)
#define D_80100FA8 (*(s8 *)0x80100FA8)
#define D_801010B0 (*(s32 *)0x801010B0)
undefined4 func_800B90FC(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar3 = (uint)*(byte *)(param_1 + 0x5fa);
  iVar2 = param_1 + (uint)*(byte *)(param_1 + uVar3 + 0x5fb) * 0x7c + uVar3 * 0x2e8;
  uVar4 = (uint)*(byte *)(iVar2 + 0x2d) + (int)(s8)(&D_80100FA8)[param_2 * 2];
  iVar2 = (uint)*(byte *)(iVar2 + 0x2e) + (int)(s8)(&DAT_80100fa9)[param_2 * 2];
  if (((uVar4 < 0xd) && (-1 < iVar2)) && (iVar2 < 0xd)) {
    uVar1 = 0;
    if (1 < (*(uint *)(iVar2 * 4 +
                      uVar4 * 0x34 + *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 9) * 0x34)) &
            0x3f)) {
      uVar1 = 1;
      param_1 = param_1 + uVar3 * 2;
      *(s8 *)(param_1 + 0x601) = (s8)uVar4;
      *(s8 *)(param_1 + 0x602) = (s8)iVar2;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
