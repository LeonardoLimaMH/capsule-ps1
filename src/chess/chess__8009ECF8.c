#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_8009ECF8(void *arg0)
{
  s32 var_a1;
  void *var_v1;
  s8 *new_var;
  *((s8 *) (((s8 *) arg0) + 0x624)) = 7;
  var_a1 = 0;
  var_v1 = arg0;
  do
  {
    new_var = var_v1;
    var_a1 += 1;
    *((s32 *) (((s8 *) var_v1) + 0x77C)) = (s32) (*((s32 *) (((s8 *) new_var) + 0x798)));
    var_v1 += 4;
  }
  while (var_a1 < 3);
  new_var = ((s8 *) arg0) + ((short) 0x62A);
  *((s8 *) new_var) = 1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009ED2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009EDA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009EFB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009F25C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009F4AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009F820);

void func_8009F960(void) {
    extern u8 D_800861A0[];
    if ((*D_800861A0) != 0) {
        func_800185F8();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009F98C);

#include "common.h"

void func_8009FD2C(void *arg0, void *arg1) {
    extern s16 D_80101B3A[];
    (*D_80101B3A) = ((s32) (M2C_FIELD(arg1, u8 *, 0x28) + 1) >> 1) + 0xC2;
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, 9);
}

void func_8009FD78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, arg1 - 3);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009FDAC);

void func_8009FE5C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, 8);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009FE90);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_8009FF58);

void func_800A0238(s32 arg0, s32 arg1) {
    extern u8 D_80100D58[];
    func_8009FF58(arg0, D_80100D58, 0x18, arg1);
}

void func_800A0264(s32 arg0, s32 arg1) {
    extern u8 D_80100D88[];
    func_8009FF58(arg0, D_80100D88, 0x16, arg1);
}

void func_800A0290(s32 arg0, s32 arg1) {
    extern u8 D_80100DB4[];
    func_8009FF58(arg0, D_80100DB4, 0xB, arg1);
}

void func_800A02BC(s32 arg0, s32 arg1) {
    extern u8 D_80100DCC[];
    func_8009FF58(arg0, D_80100DCC, 0x8, arg1);
}

void func_800A02E8(s32 arg0, s32 arg1) {
    extern u8 D_80100DDC[];
    func_8009FF58(arg0, D_80100DDC, 0x28, arg1);
}

void func_800A0314(s32 arg0, s32 arg1) {
    extern u8 D_80100E2C[];
    func_8009FF58(arg0, D_80100E2C, 0xC, arg1);
}

void func_800A0340(s32 arg0, s32 arg1) {
    extern u8 D_80100E44[];
    func_8009FF58(arg0, D_80100E44, 0x13, arg1);
}

void func_800A036C(s32 arg0, s32 arg1) {
    extern u8 D_80100E6C[];
    func_8009FF58(arg0, D_80100E6C, 0x17, arg1);
}

void func_800A0398(s32 arg0, s32 arg1) {
    extern u8 D_80100E9C[];
    func_8009FF58(arg0, D_80100E9C, 0x1B, arg1);
}

void func_800A03C4(s32 arg0, s32 arg1) {
    extern u8 D_80100ED4[];
    func_8009FF58(arg0, D_80100ED4, 0x13, arg1);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A03F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A0448);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A04C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A0540);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A062C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A070C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A0850);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A0930);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A0AD4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A0C54);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A0D40);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A0E60);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A11C0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A1278);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A1330);

#include "common.h"

void func_800A13B4(void *arg0) {
    extern u16 D_8008EE4C[];
    u16 temp_v1;
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((*D_8008EE4C) != 0) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x38) & ~1) | 8);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        case 1:
            temp_v0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
            M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0;
            if (temp_v0 >= 0x1AU) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~8);
                M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
                return;
            }
        } else {
            return;
        }
        break;
    case 2:
        if ((u16) (*D_8008EE4C) >= 0xCU) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
            M2C_FIELD(arg0, u16 *, 0x6A) = (u16) -(s32) M2C_FIELD(arg0, u16 *, 0x6A);
            M2C_FIELD(arg0, u16 *, 0x6E) = (u16) -(s32) M2C_FIELD(arg0, u16 *, 0x6E);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        case 3:
            temp_v0_2 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
            M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0_2;
            if (temp_v0_2 >= 0x1AU) {
                func_800185F8(arg0, arg0);
            }
        }
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A14EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A1630);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A1780);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A1924);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A1BD4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A1CA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A1D3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A208C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A2308);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A24A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A2660);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A2810);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A2D38);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A2E20);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A3080);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A33F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A360C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A3758);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A37E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A39AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A3AE8);

void func_800A3C24(void *arg0)
{
  s8 *new_var4;
  u8 new_var5;
  s8 *new_var3;
  int new_var;
  int new_var2;
  extern u8 D_80086012[];
  s32 var_v0;
  new_var3 = ((s8 *) arg0) + 0x50;
  new_var5 = (u8) (*D_80086012);
  if (new_var5 >= 5U)
  {
    if (new_var)
    {
      new_var2 = ~1;
      new_var = (*((s32 *) new_var3)) & new_var2;
      var_v0 = new_var;
    }
    else
    {
      new_var2 = ~1;
      new_var = (*((s32 *) new_var3)) & new_var2;
      var_v0 = new_var;
    }
  }
  else
  {
    new_var4 = ((s8 *) arg0) + 0x50;
    var_v0 = *((s32 *) new_var4);
    var_v0 = var_v0 | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x50)) = var_v0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A3C5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A3E20);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A3FC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A4108);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A41C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A431C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A44E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A461C);

#include "ghidra.h"
undefined4 func_800A4678(undefined4 param_1)

{
    extern int func_800CBBB4();
  undefined4 uVar1;

  uVar1 = func_80015B3C(param_1,func_800CBBB4,3);
  func_8001602C(uVar1);
  return uVar1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A46B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A475C);

s32 func_800A4858(s32 unused_arg0, s32 arg1, s32 arg2, void *arg3) {
    s16 temp_a0;
    s16 temp_a3;

    temp_a0 = M2C_FIELD(arg3, s16 *, 0);
    if ((temp_a0 >= ((arg1 * 0x64) - 0x258)) && ((((arg1 + 1) * 0x64) - 0x258) >= temp_a0)) {
        temp_a3 = M2C_FIELD(arg3, s16 *, 4);
        if (temp_a3 >= ((arg2 * 0x64) - 0x258)) {
            return ((((arg2 + 1) * 0x64) - 0x258) < temp_a3) ^ 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A4900);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A4A10);

#include "common.h"
void func_800A4B34(void *arg0) {
    extern int func_800161C4();
    extern int func_800A5BAC();
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0 + 0x5D0;
    M2C_FIELD(temp_v0, s8 *, 0x610) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x619) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x61B) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x615) = 1;
    M2C_FIELD(temp_v0, u8 *, 0x616) = 0xFF;
    if (M2C_FIELD((temp_v0 + M2C_FIELD(temp_v0, u8 *, 0x5FA)), u8 *, 0x16) != 7) {
        temp_v0_2 = func_80015B3C(&func_800A5BAC, &func_800161C4, 5);
        func_80015EF8(temp_v0_2);
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, 0x39);
        M2C_FIELD(temp_v0_2, s16 *, 0x46) = -0x98;
        M2C_FIELD(temp_v0_2, s16 *, 0x4A) = -0x6C;
        M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 4;
        M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) | 0x40);
        M2C_FIELD(temp_v0_2, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, u8 *, 0xBCA);
        M2C_FIELD(temp_v0_2, s32 *, 0x80) = (s32) M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0x5E6);
        if (M2C_FIELD(arg0, u8 *, 0xBCA) == 0) {
            M2C_FIELD(temp_v0_2, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x46) + 0xD8);
        }
    }
    func_800125D8();
}

#include "common.h"

void func_800A4C3C(void *arg0) {
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    if (func_800C9414() == 0) {
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        if (M2C_FIELD((temp_s0 + M2C_FIELD(temp_s0, u8 *, 0x5FA)), u8 *, 0x10) == 0) {
            func_800CFE1C();
            func_800125D8();
        }
        func_800125D8();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A4CB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A4F2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A549C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A559C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A5714);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A5850);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A5B00);

#include "common.h"

void func_800A5BAC(void *arg0) {
    extern u16 D_8008EE48[];
    if ((*D_8008EE48) != 2) {
        func_800185F8(arg0);
        return;
    }
    func_8001F35C((s16) (((1 - M2C_FIELD(arg0, s32 *, 0x7C)) * 0xD8) - 0x63), -0x68, 0, 1, 0, M2C_FIELD(arg0, s32 *, 0x80), 1, 3);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A5C3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A5CCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A5DCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A5F2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A5FEC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A60F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A6578);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A6938);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A6DA8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A70EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A71DC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A7310);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A74D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A77E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A7A60);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A7B30);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A7BB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A7CBC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A7DCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A81D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A82A0);

s32 func_800A835C(s32 arg0, s32 arg1) {
    return (M2C_FIELD((arg0 + arg1), u8 *, 0x5DE) != 2) * 4;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8", func_800A8378);
