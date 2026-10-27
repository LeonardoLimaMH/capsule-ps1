#include "common.h"
#include "ghidra.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B38B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3AE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3C4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3D24);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3EC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B40F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4284);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4304);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4384);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4400);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4518);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B48F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4CA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5020);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5184);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B52FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5438);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5780);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B58EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5BE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5C4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5DA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5F8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B61C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B63CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B65CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B678C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B698C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6B70);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6D2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6E24);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B711C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7200);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B74BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B75C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7630);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7734);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7790);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B780C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7988);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7D64);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7F34);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B80E4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B81E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8310);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8478);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B862C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8740);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B881C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8A0C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8DA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8EC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8F38);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9020);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B90FC);

#include "ghidra.h"
void func_800B91F0(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;

  if (*param_2 == 'P') {
    uVar1 = 0x76;
  }
  else {
    uVar1 = 0x3a;
    if (*param_2 != '^') {
      return;
    }
    param_2[0x17] = -0x78;
    param_2[0x23] = '\x01';
    *(undefined4 *)(*(int *)(param_2 + 0x70) + 0x88) = 0;
  }
  func_80034AB0(uVar1);
  return;
}

#include "ghidra.h"
void func_800B9248(undefined4 param_1,char *param_2)

{
  func_80034AB0(0x41);
  if (*param_2 == 'E') {
    param_2[0x17] = -0x78;
    param_2[0x23] = '\x01';
    *(undefined4 *)(*(int *)(param_2 + 0x70) + 0x88) = 0;
  }
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9298);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B97B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B98E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9990);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9B88);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9E8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9F9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BA108);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BA274);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BA3C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BA4E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BA684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BA744);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BA820);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BAD3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BAF44);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BB344);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BB670);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800BB880);
