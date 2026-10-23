#include "common.h"

#include "ghidra.h"
void func_800CC46C(int param_1,int param_2,int param_3,int param_4)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800F1928[];
    extern M2C_UNK D_800F1958[];
    extern M2C_UNK D_800F19C8[];
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  
  if (param_1 != 2) {
    uVar1 = *(ushort *)(param_2 * 0x1a8 + -0x7ff6e9d6);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        cVar2 = (char)((*(short *)((*D_800F1958) + param_3 * 2) * param_4) / 0x3c) +
                (char)*(undefined2 *)((*D_800F1928) + param_3 * 2);
        uVar3 = func_800B1260(param_1);
        iVar4 = *(int *)((*D_800F19C8) + (uint)uVar5 * 4 + (uVar3 & 0xffff) * 0xc);
        uVar5 = uVar5 + 1;
        *(char *)(iVar4 + 0x5a) = cVar2;
        *(char *)(iVar4 + 0x59) = cVar2;
        *(char *)(iVar4 + 0x58) = cVar2;
      } while (uVar5 < uVar1);
    }
  }
  return;
}
