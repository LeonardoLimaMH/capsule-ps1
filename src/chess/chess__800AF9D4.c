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

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3878);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B38B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3AE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3C4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3D24);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3EC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B40F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B4284);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B4304);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B4384);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B4400);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B4518);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B48F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B4CA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B5020);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B5184);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B52FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B5438);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B5780);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B58EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B5BE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B5C4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B5DA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B5F8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B61C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B63CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B65CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B678C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B698C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B6B70);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B6D2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B6E24);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B711C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B7200);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B74BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B75C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B7630);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B7734);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B7790);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B780C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B7988);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B7D64);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B7F34);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B80E4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B81E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B8310);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B8478);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B862C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B8740);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B881C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B8A0C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B8DA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B8EC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B8F38);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B9020);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B90FC);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B9298);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B9684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B97B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B98E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B9990);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B9B88);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B9E8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B9F9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BA108);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BA274);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BA3C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BA4E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BA684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BA744);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BA820);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BAD3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BAF44);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BB344);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BB670);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800BB880);
