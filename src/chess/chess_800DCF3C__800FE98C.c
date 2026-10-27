#include "common.h"
#include "ghidra.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FE98C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FEBF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FEC2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FED90);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FEE40);

#include "ghidra.h"
void func_800FEF04(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];

  func_800FF460(param_1,param_2,2,1,auStack_10);
  func_800FEC2C(auStack_10);
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FEF40);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF0A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF190);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF2CC);

void func_800FF3B4(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 temp_t0;

    temp_t0 = arg2 - arg3;
    M2C_FIELD(arg4, s16 *, 0) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 0) * temp_t0) + (M2C_FIELD(arg1, s16 *, 0) * arg3)) / arg2);
    M2C_FIELD(arg4, s16 *, 2) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 2) * temp_t0) + (M2C_FIELD(arg1, s16 *, 2) * arg3)) / arg2);
    M2C_FIELD(arg4, s16 *, 4) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 4) * temp_t0) + (M2C_FIELD(arg1, s16 *, 4) * arg3)) / arg2);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF460);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF644);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF700);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF740);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF820);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF8E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF96C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FFA00);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FFAB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FFCAC);
