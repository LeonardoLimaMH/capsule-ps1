#include "common.h"

void func_800AF9D4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xBE2) = 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AF9DC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AFACC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AFBDC);

void func_800AFCE0(s32 arg0) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    void *var_s0;

    temp_s4 = arg0 + 0x5D0;
    var_s2 = 0;
    var_s3 = 0x18;
    do {
        var_s1 = 0;
        var_s0 = temp_s4 + var_s3;
loop_2:
        if ((func_800A8E34(temp_s4, var_s2, var_s1) == 0) && (M2C_FIELD(var_s0, u8 *, 0x28) == 0)) {
            M2C_FIELD(var_s0, s8 *, 0x17) = 1;
            M2C_FIELD(var_s0, s8 *, 0x25) = func_800A835C(arg0, var_s2);
            func_800A84A0(var_s0, var_s2, var_s1, 0);
        }
        var_s1 += 1;
        var_s0 += 0x7C;
        if (var_s1 < 5) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s3 += 0x2E8;
    } while (var_s2 < 2);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AFDB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AFEA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AFFA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B03B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0478);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0530);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B06A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B077C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0844);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B09B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0BB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0D70);

void func_800B0F1C(void *arg0)
{
  int new_var;
  s8 *new_var2;
  new_var2 = (s8 *) (((s8 *) (arg0 + ((*((u8 *) (((s8 *) arg0) + 0x5FA))) * 2))) + 0x601);
  *new_var2 = 6;
  new_var = (*((u8 *) (((s8 *) arg0) + 0x5FA))) * 2;
  *((s8 *) (((s8 *) (arg0 + new_var)) + 0x602)) = 6;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0F48);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B2ABC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B2F48);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B30F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3218);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3338);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3488);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3558);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B360C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3714);
