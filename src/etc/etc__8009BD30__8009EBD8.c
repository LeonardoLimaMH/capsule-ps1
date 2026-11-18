#include "common.h"

extern u8 D_80085428[];
extern u16 D_8008EE44[];
extern void (*D_800B2C2C[])(u8 *);
extern void (*D_800B2C2C[])(u8 *);
void func_800A4964();
extern void (*D_800B2C2C[])(u8 *);
void func_800A4964();
extern void (*D_800B2C2C[])(u8 *);
void func_800A4964();
void func_800A4964();

void func_8009EBD8(void *arg0)
{
  extern u16 D_8008EE48[];
  extern s16 D_800B3B64[];
  M2C_UNK var_a0;
  s32 var_a1;
  s32 var_s0;
  s32 var_v0;
  u8 temp_a0;
  var_s0 = 0;
  var_v0 = 0 < 3;
  do
  {
    var_v0 = var_s0 < 3;
    if (var_v0 != 0)
    {
      var_a0 = 0x20013;
      var_a1 = var_s0 + 0x10;
    }
    else
    {
      var_a0 = 0x20014;
      var_a1 = var_s0 + 0x18;
    }
    var_s0 += 1;
    func_80012A20(func_80019F30(var_a0, var_a1), 1, 0, 0);
  }
  while (var_s0 < 8);
  func_80012A20(func_80019F30(0x50014, 5), 1, 0, 0);
  if ((*D_8008EE48) == 0)
  {
    temp_a0 = *((u8 *) (((s8 *) arg0) + 0x5D0));
    if ((temp_a0 == 2) || ((*((u8 *) (((s8 *) arg0) + 0x5DA))) == 1))
    {
      func_80012544(0x12);
      goto block_11;
    }
    if (temp_a0 == 1)
    {
      func_80012544(0x11);
      if ((*D_800B3B64) == 0)
      {
        block_11:
        func_800125AC(2);

      }
    }
    else
    {
      goto block_12;
    }
  }
  else
  {
    block_12:
    func_80012544(0xC);

  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__8009EBD8", func_8009ECF4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__8009EBD8", func_8009F384);

extern void (*D_800B2C2C[])(u8 *);

void func_800A4964();

void func_8009F9DC(u8 *arg0) {
    typedef struct {
        u8 pad0[8];
        s16 unk8;
        u8 padA[0x22];
        s16 unk2C;
    } StructB3B38;
    extern u8 D_8008ED68[];
    extern s32 D_8008EDF0[];
    extern StructB3B38 D_800B3B38[];
    extern s16 D_800B3B40[];
    extern s32 D_800B3C08[];
    extern void func_800220B8(u8 *);
    extern s32 func_800220D4(u8 *, s32, s32, s32);
    extern s32 func_8001F8B0(s32, s32);
    extern void func_80034AB0(s32);
    extern void func_80012578(void);
    extern void func_80012508(void);
    extern void func_80012544(s32);
    extern void func_800125AC(s32);

    u8 *ed = D_8008ED68;
    StructB3B38 *b38;

    switch (*(u16 *)(ed + 0xE0)) {
    case 0:
        func_800220B8(arg0);
        *(s32 *)(arg0 + 0x14) = func_8001F8B0(arg0[0x5E5] + 8, 6);
        func_80012578();
        break;
    case 1:
        if (func_800220D4(arg0, 1, 1, 1) != 0) {
            func_80012578();
        }
        break;
    case 2:
        if (*(s32 *)(ed + 0x88) & 0x8000) {
            func_80034AB0(0x84);
            *D_800B3B40 = 0;
        } else if (*(s32 *)(ed + 0x88) & 0x2000) {
            func_80034AB0(0x84);
            *D_800B3B40 = 1;
        }
        if (*D_8008EDF0 & 0x830) {
            func_80034AB0(0x48);
            b38 = D_800B3B38;
            arg0[0x5DA] = b38->unk8;
            *D_800B3C08 = 0;
            if (arg0[0x5DA] == 0) {
                b38->unk8 = 0;
                func_80012508();
                func_800125AC(arg0[0x5E1] == 1 ? 1 : 2);
                break;
            }
            if (b38->unk2C == 1) {
                func_800220B8(arg0);
                *(s32 *)(arg0 + 0x14) = func_8001F8B0(arg0[0x5E5] + 8, 3);
                func_80012578();
                break;
            }
            b38->unk8 = 0;
            func_80012508();
            func_800125AC(2);
        } else if (*D_8008EDF0 & 0x40) {
            func_80034AB0(0x5D);
            *D_800B3B40 = arg0[0x5D9];
            func_80012544(0x10);
        }
        break;
    case 3:
        if (func_800220D4(arg0, 1, 1, 1) != 0) {
            *D_800B3B40 = 0;
            func_80012508();
            func_800125AC(2);
        }
        break;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__8009EBD8", func_8009FBDC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__8009EBD8", func_8009FF08);

extern void (*D_800B2C2C[])(u8 *);

void func_800A4964();

void func_800A03D4(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern u8 D_800B2998[];
    extern u8 D_800B29B0[];
    extern s16 D_800B3B38[];
    extern s16 D_800B3B3C[];
    extern s16 D_800B3B40[];
    extern s32 D_800B3C08[];
    extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
    extern void func_80034AB0(s32);
    extern void func_80012578(void);
    extern void func_80012544(s32);
    extern void func_800125AC(s32);
    extern s32 rand(void);

    u8 *ed = D_8008ED68;
    s16 *b38;

    switch (*(u16 *)(ed + 0xE0)) {
    case 0:
        func_8001F1A8(-0x50, 0x50, 0, 1, 0, D_800B2998, 1, 0xB, 2);
        if ((*(s32 *)(ed + 0x88) & 0x20) || (*(s32 *)(ed + 0x98) & 0x20)) {
            func_80034AB0(0x48);
            func_80012578();
        } else if ((*(s32 *)(ed + 0x88) & 0x40) || (*(s32 *)(ed + 0x98) & 0x40)) {
            func_80034AB0(0x5D);
            *D_800B3B40 = arg0[0x5D9];
            func_80012544(0x10);
        }
        break;
    case 1:
        func_8001F1A8(-0x50, 0x50, 1, 1, 0, D_800B29B0, 1, 0xB, 2);
        func_80034AB0(0x57);
        b38 = D_800B3B38;
        b38[2] += 1;
        if (b38[2] >= 4) {
            b38[2] = 0;
        }
        if ((*(s32 *)(ed + 0x88) & 0x20) || (*(s32 *)(ed + 0x98) & 0x20)) {
            b38[2] += rand() % 3;
            b38[2] %= 4;
            func_80012578();
        }
        break;
    case 2:
        arg0[0x5DA] = *D_800B3B3C % 2;
        *D_800B3C08 = 0x3C;
        func_80034AB0(0x13);
        func_80012578();
        break;
    case 3:
        if (--(*D_800B3C08) < 0) {
            D_800B3B38[2] = 0;
            D_800B3B38[4] = 0;
            func_80012544(0x12);
            func_800125AC(2);
        }
        break;
    }
}

void func_800A0668(void) {
    extern u16 D_8008EE48[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x20010, var_s0 + 0xB), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 0x18);
    func_80012A20(func_80019F30(0x50010, 1), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012508();
        func_800125AC(1);
        return;
    }
    func_80012508();
}

void func_800A0718(void) {
    extern u16 D_8008EE48[];
    func_80012A20(func_80019F30(0x20014, 7), 1, 0, 0);
    func_80012A20(func_80019F30(0x50014, 3), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012544(0x15);
        func_800125AC(1);
        return;
    }
    func_80012508();
}
