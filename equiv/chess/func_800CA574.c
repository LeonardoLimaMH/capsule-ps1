#include "common.h"

#include "ghidra.h"
#define D_8005089C (*(u16 *)0x8005089C)
extern s32 func_80027B34();
extern s32 func_80033E5C();
extern s32 func_800A8E34();
void func_800CA574(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  iVar7 = 1;
  iVar6 = 0;
  iVar8 = 0;
  D_8005089C = 1;
  do {
    iVar4 = 0;
    puVar3 = &D_8005089C + iVar7;
    iVar5 = iVar8;
    do {
      iVar2 = func_800A8E34(param_1 + 0x5d0,iVar6,iVar4);
      if (iVar2 == 0) {
        uVar1 = func_80027B34(*(undefined1 *)(param_1 + iVar5 + 0x5e8));
        *puVar3 = uVar1;
      }
      else {
        *puVar3 = 0xffff;
      }
      puVar3 = puVar3 + 1;
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x7c;
    } while (iVar4 < 5);
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 0x2e8;
  } while (iVar6 < 2);
  func_80033E5C(&D_8005089C,0xb);
  return;
}
