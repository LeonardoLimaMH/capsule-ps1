#include "common.h"

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A0824);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A0944);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A09A4);

void func_800A1250(void) {
    extern int func_80012508();
    func_8001A464(0x12, 0x8011C400);
    func_8001A464(0x13, 0x8011EDF4);
    func_8001A464(0x14, 0x8013B9B4);
    func_8001A464(0x10, 0x8014E298);
    func_8001A464(0x1D, 0x8016CF00);
    func_8001A464(0x1E, 0x801840FC);
    func_8001A464(0x1F, 0x801891A0);
    func_8001A464(0x20, 0x8018E048);
    func_8001A464(0x21, 0x80194728);
    func_8001A464(0x22, 0x80199B34);
    func_8001A464(0x23, 0x8019E904);
    func_8001A464(0x24, 0x801A4664);
    func_8001A464(0x25, 0x801A9560);
    func_8001A464(0x26, 0x801AF324);
    func_8001A464(0x27, 0x801B49C0);
    func_8001A464(0x28, 0x801BBC64);
    func_8001A480(0xE, 0x8011C400);
    func_80019F30(0x12000E, func_80012508);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A1394);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A13E8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A150C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A1798);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A225C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A2588);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A2678);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A29D4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A2A80);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A2B64);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A2BB0);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A2CC8);

void func_800A2D84(void *arg0)
{
  extern u16 D_8008EE44[];
  s32 new_var;
  s32 var_v0;
  if ((*D_8008EE44) == (*((s32 *) (((s8 *) arg0) + 0x84))))
  {
    new_var = ~1;
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var;
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  new_var = var_v0;
  *((s32 *) (((s8 *) arg0) + 0x38)) = new_var;
}

void func_800A2DBC(void *arg0)
{
  extern u16 D_8008EE44[];
  extern s16 D_800B3B38[];
  int new_var;
  s32 var_v0;
  if (((*D_8008EE44) == 6) && ((*D_800B3B38) != 0))
  {
    new_var = ~1;
    if (arg0)
    {
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var;
    }
    else
    {
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var;
    }
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A2E00);

void func_800A2F1C(void *arg0) {
    extern u16 D_8008EE44[];
    extern u8 D_800B3B38[];
    if (((*D_8008EE44) == 6) && (M2C_FIELD(D_800B3B38, s16 *, 0) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD(D_800B3B38, s16 *, 0xC) == 0) {
            M2C_FIELD(arg0, s16 *, 0x4A) = -0x18;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}

void func_800A2F88(void *arg0) {
    extern u16 D_8008EE44[];
    extern u8 D_800B3B38[];
    s16 var_v0;

    if (((*D_8008EE44) != 7) || (M2C_FIELD(D_800B3B38, s16 *, 0) != 1)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    if (M2C_FIELD(D_800B3B38, s16 *, 0xC) < 3) {
        var_v0 = (M2C_FIELD(D_800B3B38, s16 *, 0xC) * 0x10) - 0x60;
    } else if (M2C_FIELD(D_800B3B38, s16 *, 0xC) == 8) {
        var_v0 = 0x50;
    } else {
        var_v0 = (M2C_FIELD(D_800B3B38, s16 *, 0xC) * 0x10) - 0x50;
    }
    M2C_FIELD(arg0, s16 *, 0x4A) = var_v0;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3014);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3060);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3128);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3230);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A32F0);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3388);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3410);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3570);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3654);

void func_800A3718(void *arg0) {
    extern u16 D_8008EE44[];
    extern s16 D_800B3B3C[];
    if ((*D_8008EE44) != 0x14) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, (*D_800B3B3C) + 0x19);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A378C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3814);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A39D8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3AB4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3BDC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3C70);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3D44);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A3F70);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A4038);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A40DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A4448);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A4654);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A4720);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A4820);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A4884);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A4964);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A4A28);

void func_800A4A8C(void) {
    extern int func_80012508();
    func_8001A464(0xC, 0x80110000);
    func_80019F30(0xC, func_80012508);
    func_80012508();
}
