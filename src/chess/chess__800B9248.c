#include "ghidra.h"
#include "common.h"
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

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9298);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B97B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B98E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9990);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9B88);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9E8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9F9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA108);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA274);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA3C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA4E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA744);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA820);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BAD3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BAF44);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BB344);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BB670);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BB880);
