#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025764);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025C48);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025CEC);

#include "common.h"

void func_80025DA8(void) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    s32 temp_v1;
    void *temp_v0;

    switch ((*D_80085428)) {                           /* irregular */
    case 0:
        temp_v1 = func_800B1260() & 0xFFFF;
        if (temp_v1 != 0xFFFF) {
            temp_v0 = (temp_v1 * 0x79C) + (u8 *)D_80100F38;
            M2C_FIELD(temp_v0, u16 *, 0x32E) = (u16) M2C_FIELD(temp_v0, u16 *, 0x332);
            M2C_FIELD(temp_v0, u16 *, 0x330) = (u16) M2C_FIELD(temp_v0, u16 *, 0x334);
            M2C_FIELD(temp_v0, u16 *, 0x33A) = (u16) M2C_FIELD(temp_v0, u16 *, 0x33C);
            return;
        }
        return;
    case 1:
        M2C_GFIELD(D_80069E4C, u8, 0x16) = (u8) M2C_GFIELD(D_80069E4C, u8, 0x19);
        M2C_GFIELD(D_80069E4C, u8, 0x17) = (u8) M2C_GFIELD(D_80069E4C, u8, 0x1A);
        M2C_GFIELD(D_80069E4C, u8, 0x18) = (u8) M2C_GFIELD(D_80069E4C, u8, 0x1B);
        break;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025E54);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025EF8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025FC0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026020);

#include "common.h"

void func_80026078(s32 arg0, s32 arg1, s8 arg2)
{
  s8 new_var;
  extern M2C_UNK D_80069E4C[];
  ((struct 
  {
    u8 _p[0xC];
    s8 v;
  } *) D_80069E4C)->v = (s8) (0xD - arg0);
  new_var = (s8) (0xD - arg1);
  ((struct 
  {
    u8 _p[0xD];
    s8 v;
  } *) D_80069E4C)->v = new_var;
  ((struct 
  {
    u8 _p[0x10];
    s8 v;
  } *) D_80069E4C)->v = 7;
  ((struct 
  {
    u8 _p[0x11];
    s8 v;
  } *) D_80069E4C)->v = 7;
  ((struct 
  {
    u8 _p[0x12];
    s8 v;
  } *) D_80069E4C)->v = arg2;
  func_800260C8(7, 7);
}

void func_800260C8(s32 arg0, s32 arg1) {
    func_80025C48(1, arg0 & 0xFF, arg1 & 0xFF);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800260F4);

void func_800264BC(void *arg0)
{
  int new_var;
  extern s32 D_80078D14;
  s32 temp_v1;
  s32 var_a1;
  var_a1 = 0;
  D_80078D14 = arg0 + 0x323;
  new_var = 0xFF;
  *((s8 *) (((s8 *) arg0) + 0x323)) = 0;
  do
  {
    *((s8 *) (((s8 *) (D_80078D14 + var_a1)) + 1)) = new_var;
    temp_v1 = var_a1 * 2;
    *((s8 *) (((s8 *) (D_80078D14 + temp_v1)) + 4)) = new_var;
    var_a1 += 1;
    *((s8 *) (((s8 *) (D_80078D14 + temp_v1)) + 5)) = new_var;
  }
  while (var_a1 < 3);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026514);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800267F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026930);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800270D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800278C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800279D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027A88);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027B34);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027C14);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027E04);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027EAC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80028084);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80028200);
