#include "common.h"

static inline s32 verifica_indice_8009B150(s32 i) {
    struct Entrada {
        u8 _p0[0x10];
        u16 f10;
        u8 _p12[0x72];
        u16 f84;
        u8 _p86[4];
        u16 f8a;
        u8 _p8c[0x11c];
    };
    extern struct Entrada D_80091618[];
    extern u16 D_8006AF80[];
    struct Entrada *p = &D_80091618[i];

    if (p->f10 == 0xFFFF || i == *D_8006AF80)
        return 0;
    if (p->f8a != 0xFFFF)
        return 0;
    return p->f84 < 3U;
}

static inline void avanca_indice_8009B150(u8 *b, u32 passo) {
    u32 i;
    do {
        i = *(u32 *)(b + 0x99C);
        i += passo;
        i %= 6;
        *(s32 *)(b + 0x99C) = i;
    } while (!verifica_indice_8009B150(i));
}

s32 func_8009B150(void) {
    extern u8 D_8008ED68[];
    extern s32 D_8008F710[];
    extern s32 D_8008F704[];
    extern void func_80034AB0(s32);

    u8 *base = D_8008ED68;
    s32 s0 = *(s32 *)(base + 0x99C);
    s32 flags = *(s32 *)(base + 0x88);
    s32 ret = 0;
    u32 temp_a0;
    u8 *b;

    if (flags & 0x20) {
        func_80034AB0(0x48);
        ret = 1;
    } else if (flags & 0x40) {
        func_80034AB0(0x5D);
        ret = -1;
    } else {
        b = base;
        if (flags & 0x2000) {
            avanca_indice_8009B150(b, 1);
            *D_8008F710 = 2;
        } else if (flags & 0x8000) {
            avanca_indice_8009B150(b, 5);
            *D_8008F710 = 1;
        }
    }

    if (s0 != *D_8008F704) {
        func_80034AB0(0x84);
        ret = 2;
    }
    return ret;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B350);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B4DC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B800);

#include "common.h"

void func_8009BA00(void) {
    extern M2C_UNK D_8008ED68[];
    M2C_GFIELD(D_8008ED68, s8, 0x28) = 0;
    M2C_GFIELD(D_8008ED68, s8, 0x29) = 0;
    M2C_GFIELD(D_8008ED68, s8, 0x2A) = 0;
    M2C_GFIELD(D_8008ED68, s8, 0x2B) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x2C) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x99C) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9A0) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9A4) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9A8) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9AC) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9B4) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9B8) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9BC) = 0;
}

void func_8009BA40(void)
{
  extern M2C_UNK D_8008ED68[];
  if (D_8008ED68)
  {
    *((s8 *) (((s8 *) D_8008ED68) + 0x28)) = 0;
    *((s8 *) (0x29 + ((s8 *) D_8008ED68))) = 0;
    *((s8 *) (((s8 *) D_8008ED68) + 0x2A)) = 0;
    *((s8 *) (((s8 *) D_8008ED68) + 0x2B)) = 0;
    *((s32 *) (((s8 *) D_8008ED68) + 0x2C)) = 0;
  }
  else
  {
    *((s8 *) (((s8 *) D_8008ED68) + 0x28)) = 0;
    *((s8 *) (0x29 + ((s8 *) D_8008ED68))) = 0;
    *((s8 *) (((s8 *) D_8008ED68) + 0x2A)) = 0;
    *((s8 *) (((s8 *) D_8008ED68) + 0x2B)) = 0;
    *((s32 *) (((s8 *) D_8008ED68) + 0x2C)) = 0;
  }
}
