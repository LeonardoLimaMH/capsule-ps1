#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002E7A4);

void func_8002EC18(void) {
    extern u8 D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern s32 D_80078D28;
    extern s32 D_800922D8[];
    if (M2C_GFIELD(D_8008ED68, u8, 0x99A) == 0) {
        D_80078D28--;
        if (D_80078D28 <= 0) {
            D_80085428[0x5CB] = 1;
            D_800922D8[0] = 1;
            M2C_GFIELD(D_8008ED68, u16, 0xF0)++;
        }
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002EC70);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002F458);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002F85C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8002FFB8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_800307F0);

void func_80030D00(void) {
    extern u8 D_80085428[];
    extern s32 D_80078D28;
    extern u8 D_8008F702[];
    extern s32 D_800922D0[];
    if (D_8008F702[0] == 0) {
        if (D_800922D0[2] == 3) {
            D_80085428[0x5CB] = 0;
            D_800922D0[2] = 0;
        }
        D_80078D28--;
        if (D_80078D28 <= 0) {
            D_80085428[0x5CB] = 4;
            D_800922D0[2] = 4;
        }
    }
}

#include "common.h"

extern u8 D_80085428[];
extern s32 D_8008F6B8[];

void func_80030D64(void) {
    s32 i;

    func_8001A998(0x801CC000, 0x4000);
    for (i = 0; i < 3; i++) {
        func_80012074(D_80085428, i);
    }
    (*D_8008F6B8) = 0;
    func_8001CB80();
    func_8001CB78();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80030DD4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_8003177C);

#include "common.h"

void func_80031E60(void) {
    extern u16 D_80085430[];
    extern s8 D_800859F3[];
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008F78C[];
    extern M2C_UNK D_800922D0[];
    extern s32 D_800922D8[];
    M2C_GFIELD(D_800922D0, s16, 0) = 0;
    if ((M2C_GFIELD(D_800922D0, s16, 0xC) != 2) && ((*D_8008F78C) != 1)) {
        func_800338DC((*D_80085430));
    }
    if (M2C_GFIELD(D_8008ED68, s32, 0xA20) != 0) {
        M2C_GFIELD(D_8008ED68, s32, 0xA20) = 0;
        (*D_800859F3) = 4;
        (*D_800922D8) = 4;
        return;
    }
    M2C_GFIELD(D_8008ED68, s16, 0xF0) = 3;
    func_8001CB80();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80031EF0);

void func_800322F4(void) {
    extern u8 D_80085428[];
    extern u8 D_80078D34;
    extern s16 D_800922D0[];
    extern s16 D_800922DC[];
    if (D_80085428[0x5C8] & 4) {
        D_800922DC[0] = D_80085428[0x5C8] & 1;
        D_80078D34 = 1;
    } else {
        D_800922DC[0] = 2;
        D_80078D34 = 0;
    }
    D_800922D0[7] = (D_80085428[0x5C8] >> 1) & 1;
    D_800922D0[8] = D_80085428[0x5C9];
    D_800922D0[9] = (D_80085428[0x5CA] >> 3) & 1;
    D_800922D0[10] = (D_80085428[0x5CA] >> 4) & 1;
    D_800922D0[11] = *(u16 *)(D_80085428 + 0x5CC) & 7;
    D_800922D0[12] = (*(u16 *)(D_80085428 + 0x5CC) >> 3) & 7;
}

void func_80032398(void) {
    extern u8 D_80085428[];
    extern s16 D_800922D0[];
    extern void func_80033764(s32);
    s32 a;
    D_80085428[0x5C8] = (D_80085428[0x5C8] & 8) | (D_800922D0[7] << 1);
    a = D_800922D0[6];
    if (a != 2) {
        D_80085428[0x5C8] = D_80085428[0x5C8] | (u8)(D_800922D0[6] + 4);
        func_80033764(a != 1);
    }
    D_80085428[0x5C9] = D_800922D0[8];
    D_80085428[0x5CA] = (D_800922D0[9] << 3) | (D_800922D0[10] << 4);
    *(u16 *)(D_80085428 + 0x5CC) = (D_800922D0[11] | (*(u16 *)(D_80085428 + 0x5CC) & 0xFFC0)) | (D_800922D0[12] << 3);
    D_80085428[0x5E2] = D_800922D0[11];
    D_80085428[0x5E3] = D_800922D0[12];
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032474);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032570);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032610);

void func_80032760(void *arg0) {
    extern u16 D_8008EE58[];
    extern s32 D_800922D8[];
    if (D_8008EE58[0] == 3) {
        M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    if ((u32) (D_800922D8[0] - 3) < 2U) {
        func_800185F8(arg0);
    }
}

#include "common.h"

void func_800327CC(void *arg0) {
    extern M2C_UNK D_80065390[];
    extern M2C_UNK D_8008ED68[];
    extern s16 D_800922D0[];
    extern s32 D_800922D8[];
    if ((M2C_GFIELD(D_8008ED68, u16, 0xF0) == 5) && ((*D_800922D0) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if ((u32) M2C_GFIELD(D_8008ED68, u32, 0xA20) >= 6U) {
            M2C_FIELD(arg0, s32 *, 0x18) = func_8001A434(M2C_GFIELD(D_8008ED68, u32, 0xA20) + 0x1C, D_80065390);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
    if ((u32) ((*D_800922D8) - 3) < 2U) {
        func_800185F8(arg0);
    }
}

#include "common.h"

void func_80032888(void *arg0) {
    extern M2C_UNK D_80065390[];
    extern M2C_UNK D_8008ED68[];
    extern s16 D_800922D0[];
    extern s32 D_800922D8[];
    if ((M2C_GFIELD(D_8008ED68, u16, 0xF0) == 6) && ((*D_800922D0) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if ((u32) M2C_GFIELD(D_8008ED68, u32, 0xA20) >= 3U) {
            M2C_FIELD(arg0, s32 *, 0x18) = func_8001A434(M2C_GFIELD(D_8008ED68, u32, 0xA20) + 0x1F, D_80065390);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
    if ((u32) ((*D_800922D8) - 3) < 2U) {
        func_800185F8(arg0);
    }
}

extern u8 D_8008F702[];
extern u32 D_800922D8[];
extern void func_80033450();
extern s32 func_800185F8();

/* o valor em v0 na saída é o que sobra nos registradores do original (no caso 0, o
   endereço lido da tabela de saltos) */
void func_80032944(u8 *o)
{
  s32 v;
  if ((*D_8008F702) != 0)
  {
    return *D_8008F702;
  }
  switch (*D_800922D8)
  {
    case 0:
      return 0x80032A18;

    case 1:
      *((s16 *) (o + 0x6A)) = -1;
      *((s16 *) (o + 0x6E)) = 1;
      v = ((*((s32 *) (o + 0x84))) * 64) - 0xA0;
      *((s16 *) (o + 0x46)) = v;
      return v;

    case 2:
      return func_80033450(o);

    case 3:
      *((s16 *) (o + 0x6A)) = 0;
      *((s16 *) (o + 0x46)) = ((*((s32 *) (o + 0x84))) * 64) - 0xA0;
      *((s16 *) (o + 0x4A)) = ((*((s32 *) (o + 0x80))) * 64) - 0xA0;
      if ((*((s32 *) (o + 0x84))) & 1)
    {
      v = ~(*((u16 *) (o + 0x80)));
    }
    else
    {
      v = 5 - (*((u16 *) (o + 0x80)));
    }
      *((s16 *) (o + 0x6E)) = v;
      return v;

    case 4:
      return func_800185F8(o);

  }

  return 0x80010000;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032A28);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032B0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032BB8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032C54);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032CF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032DB0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80032E78);

#include "common.h"

extern u8 *func_80015B3C();
extern s32 func_8001A434();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];

u8 *func_80032F50(s16 x, s16 y, s16 z, s32 a3, void *cb) {
    u8 *o;

    if (cb == 0) {
        cb = (void *)func_8003350C;
    }
    o = func_80015B3C(cb, func_800161C4, 1);
    func_80015EF8(o);
    func_8001611C(0x1000);
    o[0x5A] = 0x80;
    o[0x59] = 0x80;
    o[0x58] = 0x80;
    *(s16 *)(o + 0x46) = x;
    *(s16 *)(o + 0x4A) = y;
    *(s16 *)(o + 0x4E) = z;
    *(s32 *)(o + 0x30) = (*(s32 *)(o + 0x30) & ~0x30) | 0x20;
    *(s32 *)(o + 0x18) = func_8001A434(a3, D_80065390);
    *(s32 *)(o + 0x7C) = a3;
    return o;
}

#include "common.h"

extern u8 *func_80015B3C();
extern s32 func_8001A44C();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];

u8 *func_80033020(s16 x, s16 y, s16 z, s32 a3, void *cb) {
    u8 *o;

    if (cb == 0) {
        cb = (void *)func_8003350C;
    }
    o = func_80015B3C(cb, func_800161C4, 1);
    func_80015EF8(o);
    func_8001611C(0x1000);
    o[0x5A] = 0x80;
    o[0x59] = 0x80;
    o[0x58] = 0x80;
    *(s16 *)(o + 0x46) = x;
    *(s16 *)(o + 0x4A) = y;
    *(s16 *)(o + 0x4E) = z;
    *(s32 *)(o + 0x18) = 0;
    *(s32 *)(o + 0x30) = (*(s32 *)(o + 0x30) & ~0x30) | 0x20;
    func_80015CD0(o + 0x14, func_8001A44C(a3, D_80065390), 0);
    *(s32 *)(o + 0x7C) = a3;
    return o;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033100);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033318);

#include "common.h"

void func_80033450(void *arg0)
{
  extern u8 D_800859F3[];
  extern u16 D_8008EE58[];
  u32 temp_a1;
  u32 temp_v1;
  if (((*D_800859F3) != 4) && (((u32) ((*D_8008EE58) - 4)) < 4U))
  {
    temp_a1 = *((u32 *) (((s8 *) arg0) + 0x38));
    if (((temp_a1 >> 3) & 1) == (temp_v1 = 1))
    {
      *((u32 *) (((s8 *) arg0) + 0x38)) = (u32) (temp_a1 & (~8));
    }
  }
  else
  {
    temp_v1 = *((u32 *) (((s8 *) arg0) + 0x38));
    if (!((temp_v1 >> 3) & 1))
    {
      *((u32 *) (((s8 *) arg0) + 0x38)) = (u32) (temp_v1 | 8);
    }
    if (((*((s16 *) (((s8 *) arg0) + 0x46))) + 0x40) < (-0xA0))
    {
      *((s16 *) (((s8 *) arg0) + 0x46)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x46)))) + 0x180);
    }
    if ((*((s16 *) (((s8 *) arg0) + 0x4A))) >= 0x79)
    {
      *((s16 *) (((s8 *) arg0) + 0x46)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x46)))) - 0x40);
      *((s16 *) (((s8 *) arg0) + 0x4A)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x4A)))) - 0x140);
    }
  }
}

void func_8003350C(void) {

}

#include "common.h"

extern u8 D_800922F0[];

void func_80033514(s32 a0, s32 a1) {
    s32 attr[10];
    s32 m[4];

    D_800922F0[0xA] = 3;
    M2C_GFIELD(D_800922F0, s16, 4) = 0xFF;
    M2C_GFIELD(D_800922F0, s16, 6) = 0x5F;
    D_800922F0[8] = 0xFF;
    D_800922F0[9] = 0xFF;
    func_8003C7C8();
    attr[0] = 0x2C3;
    ((s16 *)attr)[2] = 0x3FFF;
    ((s16 *)attr)[3] = 0x3FFF;
    ((s16 *)attr)[8] = 0x7FFF;
    ((s16 *)attr)[9] = 0x7FFF;
    attr[5] = 1;
    attr[6] = 1;
    SpuSetCommonAttr(attr);
    M2C_GFIELD(D_800922F0, s32, 0xC) = a0;
    func_80037138(a1);
    func_80034B14();
    func_80033AC8();
    func_80033764(0);
    *(s16 *)D_800922F0 = 2;
    func_80033824(0x801EF000, a0, 0x2800);
    ((u8 *)m)[0] = 0x11;
    func_80036DB0(m);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033604);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4", func_80033764);

u8 func_800337D0(void) {
    extern u8 D_800922F2[];
    return (*D_800922F2);
}
