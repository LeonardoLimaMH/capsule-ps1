#include "common.h"

void func_80099B40(void) {

}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_80099B48);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_80099D38);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A0B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A30C);

void func_8009A48C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xF) = 3;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A498);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A608);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A75C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A8B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009AAA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009AC88);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009B23C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009B4C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009B814);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009B948);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BAD8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BB98);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BCC8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BE30);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BEE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BFD4);

#include "ghidra.h"
void func_8009C0E4(void)

{
    uint uVar1;
    undefined4 uVar2;
    int iVar3;

    uVar1 = func_800CA480();
    uVar2 = func_80019F30(uVar1 | 0x50000,0);
    {
        register u32 matching_a0 __asm__("$4") = (uVar2);
        register s32 matching_a1 __asm__("$5") = (1);
        register s32 matching_a2 __asm__("$6") = 0;
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
        : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
        func_80012A20(matching_a0, matching_a1, matching_a2, matching_a2);
    }
    iVar3 = 0;
    do {
        uVar2 = func_80019F30(uVar1 | 0x20000,iVar3);
        {
            register u32 matching_a0 __asm__("$4") = (uVar2);
            register s32 matching_a1 __asm__("$5") = (1);
            register s32 matching_a2 __asm__("$6") = 0;
            __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
            : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
            func_80012A20(matching_a0, matching_a1, matching_a2, matching_a2);
        }
        iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    return;
}

void func_8009C178(char arg1)
{
  s32 new_var;
  func_80012A20(func_80019F30(0x20013, new_var + 0x10), 3, 0x380, 0x100);
  new_var = arg1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C1B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C278);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C3BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C4B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C5C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C6F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C758);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C7D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C898);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C964);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009CA60);

void func_8009CBDC(void) {
    s32 i;
     s32 z;
     i=0;
     do {
    if(i==0) z=i;
     else z=0;
     func_80012A20(func_80019F30(0x20013,i+0x18),1,z,z);
    i++;

}while(i<2);

}

void func_8009CC34(void) {
    s32 i;
     s32 z;
     i=0;
     do {
    if(i==0) z=i;
     else z=0;
     func_80012A20(func_80019F30(0x20013,i+0x1B),1,z,z);
    i++;

}while(i<2);

}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009CC8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009CD9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009CEE8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009D0AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009D2AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009D750);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009DA94);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009DB7C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009DD64);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009DED8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009E024);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009E1BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009E448);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009E798);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009EA04);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009EB3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009EC40);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009ED2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009EDA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009EFB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009F25C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009F4AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009F820);

void func_8009F960(void) {
    extern u8 D_800861A0[];
    if ((*D_800861A0) != 0) {
        func_800185F8();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009F98C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009FD2C);

void func_8009FD78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, arg1 - 3);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009FDAC);

void func_8009FE5C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, 8);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009FE90);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009FF58);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A03F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A0448);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A04C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A0540);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A062C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A070C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A0850);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A0930);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A0AD4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A0C54);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A0D40);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A0E60);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A11C0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A1278);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A1330);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A13B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A14EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A1630);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A1780);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A1924);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A1BD4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A1CA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A1D3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A208C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A2308);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A24A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A2660);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A2810);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A2D38);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A2E20);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A3080);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A33F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A360C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A3758);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A37E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A39AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A3AE8);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A3C5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A3E20);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A3FC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A4108);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A41C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A431C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A44E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A461C);

#include "ghidra.h"
undefined4 func_800A4678(undefined4 param_1)

{
    extern int func_800CBBB4();
  undefined4 uVar1;

  uVar1 = func_80015B3C(param_1,func_800CBBB4,3);
  func_8001602C(uVar1);
  return uVar1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A46B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A475C);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A4900);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A4A10);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A4B34);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A4C3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A4CB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A4F2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A549C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A559C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A5714);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A5850);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A5B00);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A5BAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A5C3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A5CCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A5DCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A5F2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A5FEC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A60F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A6578);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A6938);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A6DA8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A70EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A71DC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A7310);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A74D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A77E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A7A60);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A7B30);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A7BB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A7CBC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A7DCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A81D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A82A0);

s32 func_800A835C(s32 arg0, s32 arg1) {
    return (M2C_FIELD((arg0 + arg1), u8 *, 0x5DE) != 2) * 4;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8378);

s32 func_800A83E0(s32 unused_arg0, void *arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_v0;

    temp_a3 = M2C_FIELD(arg2, u8 *, 0x15) - M2C_FIELD(arg1, u8 *, 0x15);
    temp_a0 = M2C_FIELD(arg2, u8 *, 0x16) - M2C_FIELD(arg1, u8 *, 0x16);
    if (temp_a3 > 0) {
        var_v0 = 5;
        if (temp_a0 <= 0) {
            var_v0 = 6;
            if (temp_a0 < 0) {
                return 7;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_a3 < 0) {
        var_v0 = 3;
        if (temp_a0 <= 0) {
            var_v0 = 2;
            if (temp_a0 < 0) {
                return 1;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = (temp_a0 > 0) * 4;
    return var_v0;
}

#include "ghidra.h"
int func_800A8444(undefined4 param_1, int param_2, int param_3, int param_4)
{
  int iVar1;
  param_3 = param_3 - ((uint) (*((byte *) (param_2 + 0x15))));
  param_4 = param_4 - ((uint) (*((byte *) (param_2 + 0x16))));
  if (!(param_3 < 1))
  {
    iVar1 = 5;
    if ((param_4 < 1) && ((iVar1 = 6, param_4 < 0)))
    {
      iVar1 = 7;
    }
  }
  else
    if (param_3 < 0)
  {
    iVar1 = 3;
    if ((param_4 < 1) && ((iVar1 = 2, param_4 < 0)))
    {
      iVar1 = 1;
    }
  }
  else
  {
    iVar1 = ((uint) (0 < param_4)) << 2;
  }
  return iVar1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A84A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8548);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8710);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8770);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A87C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8830);

s16 func_800A88C4(s16 a) {
     return 0x4020 / a;

}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A88E8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8954);

s32 func_800A8994(s32 arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = (u8 *) (((s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)))) + 0x5E8);
  return (*new_var) + 0x10D;
}

s32 func_800A89C8(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a1;
  s32 var_a2;
  s32 var_a3;
  u8 temp_t0;
  unsigned int new_var;
  void *temp_v1;
  var_a1 = arg1;
  var_a2 = arg2;
  new_var = arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8));
  temp_t0 = *((u8 *) (((s8 *) new_var) + 0x5E8));
  var_a3 = 0;
  if (var_a1 != 0)
  {
    goto loop_2;
  }
  if (var_a2 == 0)
  {
    goto block_9;
  }
  loop_2:
  if (var_a2 == 0)
  {
    goto block_4;
  }

  block_3:
  var_a2 -= 1;

  goto block_5;
  block_4:
  var_a1 -= 1;

  var_a2 = 4;
  block_5:
  temp_v1 = arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8));

  if (temp_t0 != (*((u8 *) (((s8 *) temp_v1) + 0x5E8))))
  {
    goto block_7;
  }
  var_a3 = (*((u8 *) (((s8 *) temp_v1) + 0x612))) + 1;
  block_7:
  if (var_a1 != 0)
  {
    goto loop_2;
  }

  if (var_a2 != 0)
  {
    goto block_3;
  }
  block_9:
  return var_a3;

}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8A7C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8B14);

s32 func_800A8D08(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  new_var = arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8));
  return (((u32) (*((u32 *) (((s8 *) new_var) + 0x30)))) >> 0x19) & 3;
}

s32 func_800A8D44(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *new_var;
  new_var = (s32 *) (((s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)))) + 0x30);
  return (*new_var) & 0x08000000;
}

s32 func_800A8D7C(s32 arg0, s32 arg1, s32 arg2)
{
  s8 *new_var;
  new_var = ((s8 *) (arg0 + ((arg2 * 0x7C) + ((long) (arg1 * 0x2E8))))) + 0x30;
  return (*((s32 *) new_var)) & 0x10000000;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8DB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8E08);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8E34);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8E84);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8EE8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8F3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A8FA0);

void *func_800A8FFC(void *arg0)
{
  u8 temp_v0;
  s8 *new_var;
  temp_v0 = *((u8 *) (((s8 *) arg0) + 0x5FA));
  new_var = (s8 *) (arg0 + temp_v0);
  return (arg0 + ((temp_v0 * 0x2E8) + 0x18)) + ((*((u8 *) (new_var + 0x5FB))) * 0x7C);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A903C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A9100);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A924C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A93DC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A954C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A95F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A9810);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A9A78);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800A9C9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AA15C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AAAA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AAB8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AACAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AADE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800ABD9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800ACD58);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800ACF04);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800ACFA8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AD06C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AD240);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AD408);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AD4D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AD7B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800ADAA4);

s32 func_800ADBC4(s32 arg0) {
    return arg0 & 0x1F;
}

s32 func_800ADBCC(s32 arg0) {
    return (arg0 >> 5) & 7;
}

s32 func_800ADBD8(s32 arg0) {
    return (arg0 >> 8) & 0x1F;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800ADBE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800ADD70);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800ADF5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AE03C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AE1BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AE35C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AE504);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AE728);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AE8AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AEA4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_800AEBD0);
