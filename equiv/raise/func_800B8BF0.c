#include "common.h"

#include "ghidra.h"
void func_800B8BF0(int param_1)

{
    extern u8 D_80091618[];
    extern u8 D_800EE9B8[];
    extern u8 D_80100F38[];
    extern u8 D_8010126A[];
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = func_800B1260();
  uVar4 = uVar2 & 0xffff;
  if (uVar4 == 0xffff) {
    return;
  }
  if (*(int *)(D_800EE9B8 + (1 - param_1) * 4) == 1) {
    if (param_1 == 1) {
L800B8C98:
      iVar3 = uVar4 * 0x79c;
      uVar1 = *(undefined2 *)(iVar3 + -0x7fefed90);
      *(undefined2 *)(D_8010126A + iVar3) = *(undefined2 *)(iVar3 + -0x7fefed92);
      *(undefined2 *)(iVar3 + -0x7fefed94) = uVar1;
      goto L800B8D38;
    }
  }
  else {
    if (*(int *)(D_800EE9B8 + (1 - param_1) * 4) != -1) {
      if (*(short *)(uVar4 * 0x1a8 + -0x7ff6e958) != 0) {
        func_800E33E4(param_1,D_8010126A + uVar4 * 0x79c,uVar4 * 0x79c + -0x7fefed94);
      }
      goto L800B8D38;
    }
    if (param_1 != 1) goto L800B8C98;
  }
  iVar3 = uVar4 * 0x79c;
  *(undefined2 *)(iVar3 + -0x7fefed92) = *(undefined2 *)(D_8010126A + iVar3);
  *(undefined2 *)(iVar3 + -0x7fefed90) = *(undefined2 *)(iVar3 + -0x7fefed94);
L800B8D38:
  *(undefined2 *)((uVar2 & 0xffff) * 0x1a8 + -0x7ff6e958) = 0;
  *(undefined4 *)(D_800EE9B8 + (1 - param_1) * 4) = 0;
  iVar3 = (uVar2 & 0xffff) * 0x79c;
  func_800E3260
            (param_1,(int)*(short *)(D_8010126A + iVar3),
             (int)*(short *)(iVar3 + -0x7fefed94));
  func_800E355C(param_1);
  return;
}
