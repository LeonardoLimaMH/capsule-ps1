#include "common.h"

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800979BC);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800979FC);

s32 func_80097AF0(s32 arg0, s32 arg1, s32 arg2)
{
  s8 *new_var;
  new_var = (s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)));
  return (*((u8 *) (new_var + 0x5E8))) + 0x10D;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097B24);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097C6C);

s32 func_80097D8C(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a3;
  s32 var_a1;
  u8 *new_var;
  s32 var_a2;
  u8 temp_t0;
  void *temp_v1;
  var_a1 = arg1;
  var_a2 = arg2;
  new_var = (u8 *) (((s8 *) (arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8)))) + 0x5E8);
  temp_t0 = *new_var;
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

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097E40);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009807C);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800981F0);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800991AC);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800992CC);

#include "common.h"

extern u8 D_8008ED68[];
extern void (*D_800AEF98[])(void);

void func_80099394(void) {
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 2) {
        func_8001FD98(4);
    }
    D_800AEF98[M2C_GFIELD(D_8008ED68, u16, 0xDC)]();
}

#include "common.h"

void func_800993F8(void) {
    extern M2C_UNK D_80085428[];
    extern s16 D_800B3ACC[];
    func_80013668();
    (*D_800B3ACC) = 0;
    M2C_GFIELD(D_80085428, s8, 0x5CB) = 4;
    M2C_GFIELD(D_80085428, s8, 0) = 3;
    M2C_GFIELD(D_80085428, s8, 0x5D0) = 1;
    func_80012508(D_80085428);
}

#include "common.h"

void func_80099444(void) {
    extern int func_80012508();
    func_80019F30(9, func_80012508);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099474);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099570);

void func_800997D4(void) {
    extern s32 D_8008F7D0[];
    if ((*D_8008F7D0) == 0) {
        func_80012508();
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099800);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099AE4);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099B18);

#include "common.h"

extern u16 D_8008EE44[];
extern void (*D_800AEFDC[])(void);

void func_80099C08(void) {
    D_800AEFDC[(*D_8008EE44)]();
}

#include "common.h"

void func_80099C48(void) {
    extern int func_80012508();
    func_80019F30(8, func_80012508);
    func_80012508();
}

#include "common.h"

extern s32 D_800B3AD0[];
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern void func_80032DB0(s32, s32, s32, s32, s32, void (*)(void));
extern void func_8009A160(void);
extern void func_8001ADCC(s32);
extern s32 func_80012508(void);

s32 func_80099C78(void) {
    s32 i;
    for (i = 0; i < 2; i++) func_80012A20(func_80019F30(0x20008, i + 2), 1, 0, 0);
    func_80012A20(func_80019F30(0x50008, 0), 1, 0, 0);
    func_80032DB0(0, 0, 3, 8, 0, func_8009A160);
    (*D_800B3AD0) = 0xB4;
    func_8001ADCC(8);
    return func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099D34);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099E2C);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099EA0);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099FCC);

#include "common.h"

extern char D_800AEFB4[], D_800AEFC8[], D_800AEFD8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);

s32 func_8009A094(void) {
    func_8001F1A8(-0x98, -0x18, 0, 1, 0, D_800AEFB4, 1, 9, 3);
    func_8001F1A8(-0x80, 8, 0, 1, 0, D_800AEFC8, 1, 8, 3);
    return func_8001F1A8(0x70, 8, 0, 1, 0, D_800AEFD8, 1, 2, 3);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A160);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A1D4);

#include "common.h"

void func_8009A294(void) {
    extern int func_80012508();
    func_80019F30(8, func_80012508);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A2C4);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A3E8);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A9B0);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AA0C);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AB30);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009ABE4);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AD04);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AEB4);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AF80);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B060);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B1CC);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B500);

#include "common.h"

void func_8009B564(void *arg0) {
    extern u8 D_8008ED68[];
    extern M2C_UNK D_800AF1AC[];
    extern s32 D_800B3ADC[];
    s32 temp_a3;
    s16 temp_a0;
    u16 temp_a1;
    u16 temp_v0;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a3;
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x84);
    if ((M2C_GFIELD(D_8008ED68, u16, 0xDC) == 6) && (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 3)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a3 & ~1);
        temp_a1 = M2C_FIELD(arg0, u16 *, 0x46);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((M2C_FIELD(arg0, s32 *, 0x30) & ~0x30) | 0x20);
        temp_v0 = temp_a1 + *(u16 *)((temp_a0 * 2) + (u8 *)D_800AF1AC);
        M2C_FIELD(arg0, u16 *, 0x46) = temp_v0;
        if ((temp_a0 == 0) && ((s16) temp_v0 < -0xB7)) {
            (*D_800B3ADC) = 0xB;
            func_80012508();
        }
    }
}

#include "common.h"

void func_8009B624(void *arg0) {
    extern u8 D_8008ED68[];
    extern M2C_UNK D_800B3AF8[];
    s32 temp_a2;
    s32 temp_v1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a2;
    if ((M2C_GFIELD(D_8008ED68, u16, 0xDC) == 5) && (*((D_800B3AF8 + (M2C_FIELD(arg0, s32 *, 0x84)))) == 2) && ((u16) M2C_GFIELD(D_8008ED68, u16, 0xE0) < 4U)) {
        temp_v1 = temp_a2 & ~1;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_v1 | 0x40);
        if ((u16) M2C_GFIELD(D_8008ED68, u16, 0xE0) < 2U) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_v1 | 0x48);
            if (!(M2C_GFIELD(D_8008ED68, s32, 0x18) & 7)) {
                M2C_FIELD(arg0, u16 *, 0x6E) = (u16) (M2C_FIELD(arg0, u16 *, 0x6E) + 1);
            }
        }
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B6D0);
