#include "common.h"

#include "ghidra.h"
undefined4 func_800C44EC(undefined4 param_1,undefined4 param_2)

{
    extern M2C_UNK D_80091618[];
    extern s16 D_800F0770[];
    extern M2C_UNK D_80100F38[];
    extern s32 D_80101104[];
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = func_800B1260(param_2);
  iVar4 = (uVar2 & 0xffff) * 0x79c;
  sVar1 = *(short *)(iVar4 + -0x7fefed84);
  if (sVar1 == 1) {
    func_800CE4B8(param_2,param_1,(int)(short)(*D_800F0770),1);
    *(undefined2 *)(iVar4 + -0x7fefed84) = 2;
L800C45A4:
    iVar3 = func_80015E60(param_1);
    if (iVar3 == 1) {
      *(undefined2 *)(iVar4 + -0x7fefed84) = 3;
    }
    else {
      func_800CB438
                ((int)*(short *)(iVar4 + -0x7fefed56),param_1,
                 *(undefined2 *)((*D_80091618) + (uVar2 & 0xffff) * 0x1a8),0x57);
    }
  }
  else {
    if (sVar1 < 2) {
      if (sVar1 == 0) {
        *(undefined2 *)(iVar4 + -0x7fefed84) = 1;
        goto L800C4618;
      }
    }
    else if (sVar1 == 2) goto L800C45A4;
    iVar3 = *(int *)(D_80101104 + iVar4 + 0xf0);
    *(undefined2 *)(iVar4 + -0x7fefed84) = 0;
    *(int *)(D_80101104 + iVar4 + 0xf0) = iVar3 + 1;
  }
L800C4618:
  return *(undefined4 *)(D_80101104 + iVar4 + 0xf0);
}
