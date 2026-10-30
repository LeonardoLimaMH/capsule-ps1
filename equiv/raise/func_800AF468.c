#include "common.h"

#include "ghidra.h"
void func_800AF468(int param_1,uint param_2)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800F07E4[];
    extern s32 D_800F0D38[];
    extern M2C_UNK D_80100F38[];
    extern s32 D_80101104[];
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = param_2 & 0xffff;
  iVar4 = uVar6 * 0x1a8;
  if (*(short *)(iVar4 + -0x7ff6e848) == 0) {
    if (*(short *)(iVar4 + -0x7ff6e84a) == 1) {
      iVar3 = func_800E7B18(uVar6);
      if ((iVar3 != 1) || (uVar5 = 0x1f, param_1 == 2)) goto L800AF570;
      *(undefined2 *)(iVar4 + -0x7ff6e84a) = 0;
    }
    else {
      sVar1 = func_800E7A28(uVar6);
      *(short *)(iVar4 + -0x7ff6e84a) = sVar1;
      if ((sVar1 != 1) || (uVar5 = 0x1e, param_1 == 2)) goto L800AF570;
    }
    func_800C0810(uVar5,uVar6);
    uVar2 = func_800B5034(param_1,uVar6,7);
    *(undefined2 *)(uVar6 * 0x79c + -0x7fefed64) = uVar2;
  }
L800AF570:
  param_2 = param_2 & 0xffff;
  iVar4 = param_2 * 0x1a8;
  if (*(short *)(iVar4 + -0x7ff6e84a) == 0) {
    if (*(short *)(iVar4 + -0x7ff6e848) == 1) {
      iVar3 = func_800E7B18(param_2);
      if ((((iVar3 == 1) && (param_1 != 2)) &&
          (iVar3 = func_800E1674(param_2), iVar3 != 1)) &&
         ((iVar3 = func_800E0FB8(param_2,0xffff), iVar3 != 1 &&
          (iVar3 = func_800E14C4(param_2), iVar3 != 1)))) {
        func_800D0FE0(param_1,param_2,3);
        iVar3 = param_2 * 0x79c;
        *(undefined2 *)((u8 *)D_80101104 + iVar3 + 0xec) = 6;
        *(undefined2 *)((u8 *)D_80101104 + iVar3 + 0xf4) = 6;
        *(undefined2 *)((u8 *)D_80101104 + iVar3 + 0xee) = 4;
        *(undefined2 *)((u8 *)D_80101104 + iVar3 + 0xf6) = 4;
        *(undefined2 *)((u8 *)D_80101104 + iVar3 + 0xfc) = 0;
        *(undefined2 *)((u8 *)D_80101104 + iVar3 + 0xfe) = 0;
        uVar5 = (*D_800F0D38);
        *(undefined1 **)((u8 *)D_80101104 + iVar3 + 0xf8) = (*D_800F07E4);
        *(undefined4 *)((u8 *)D_80101104 + iVar3 + 0xf0) = uVar5;
        uVar2 = func_800B5034(param_1,param_2,7);
        *(undefined2 *)(iVar3 + -0x7fefed64) = uVar2;
        *(short *)(iVar4 + -0x7ff6e914) = (short)(*(short *)(iVar4 + -0x7ff6e914) * 3) >> 2;
      }
    }
    else {
      iVar3 = func_800E1674(param_2);
      if ((((iVar3 != 1) && (iVar3 = func_800E0FB8(param_2,0xffff), iVar3 != 1)) &&
          (iVar3 = func_800E14C4(param_2), iVar3 != 1)) &&
         (((iVar3 = func_800E1140(param_2), iVar3 != 0 &&
           (iVar3 = func_800E1388(param_2), iVar3 != 0)) &&
          ((iVar3 = func_800E1624(param_2), iVar3 != 1 &&
           ((iVar3 = func_800E7AA0(param_2), iVar3 == 1 && (param_1 != 2)))))))) {
        *(undefined2 *)(iVar4 + -0x7ff6e848) = 1;
        func_800D0FE0(param_1,param_2,1);
        func_800C8320(*(undefined4 *)(iVar4 + -0x7ff6e870),param_1,3);
      }
    }
  }
  return;
}
