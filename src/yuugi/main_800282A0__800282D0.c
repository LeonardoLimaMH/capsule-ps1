#include "common.h"
#include "yuugi.h"

s32 func_800282D0(void) {
    extern s32 D_80078C3C;
    extern s32 D_80078C40;
    D_80078C40 = 0;
    D_80078C3C = 0;
    return 0;
}

s32 func_800282E0(void)
{
  extern u16 D_80078C34;
  extern s32 D_80078C3C;
  extern s32 D_80078C40;
  switch (D_80078C40)
  {
    case 0:
 do { func_800338DC(D_80078C34); D_80078C40 += 1; } while (0);
      return 0;

    case 1:
      if (func_80019654() != 0)
    {
      D_80078C40 = 0;
      D_80078C3C = 0;
      return 1;
    }
      return 0;

    default:
      return 0;

  }

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002835C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002840C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_800284C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002858C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_800293E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_800294AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_800296C0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_80029784);

void func_80029A9C(void *arg0) {
    extern s32 D_80069B28[];
    extern s32 D_80069EB8[];
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;

    if (((*D_80069B28) != 0) && ((*D_80069EB8) == 0)) {
        temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
        var_s1 = M2C_FIELD(arg0, s32 *, 0xA0);
        var_s0 = 0;
        if (temp_s2 > 0) {
            do {
                func_800D87E8(arg0, var_s0, var_s1);
                var_s0 += 1;
                var_s1 += 0x2C;
            } while (var_s0 < temp_s2);
        }
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_80029B28);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_80029C90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_80029E90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A090);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A290);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A490);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A734);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A934);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002AB68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002AD68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002AF9C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B138);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B334);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B4D0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B66C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B7E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B964);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BD08);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BD94);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BE20);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BEAC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C000);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C214);

#include "ghidra.h"
uint func_8002C438(undefined2 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((param_4 & 0xffff) * 8 + param_2);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  func_8002C4E8(param_1,param_3);
  return param_4 & 0xffff;
}

#include "ghidra.h"
uint func_8002C490(undefined2 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((param_4 & 0xffff) * 8 + param_2);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  func_8002C4E8(param_1,param_3);
  return param_4 & 0xffff;
}

void func_8002C4E8(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) + M2C_FIELD(arg1, u16 *, 0));
        M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) + M2C_FIELD(arg1, u16 *, 2));
        M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) + M2C_FIELD(arg1, u16 *, 4));
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C534);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C610);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C728);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C768);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002C93C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002CA80);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002CBDC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002CC2C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002CC74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002CD50);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002CEC0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002D48C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002DA58);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002E160);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002E2AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002E38C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002E4D0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002E640);
