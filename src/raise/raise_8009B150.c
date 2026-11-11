#include "common.h"

static inline s32 verifica_indice_8009B150(s32 i) {
    extern u8 D_80091618[];
    extern u16 D_8006AF80[];
    register s32 indice asm("v1") = i;
    u8 *p = D_80091618 + indice * 0x1A8;
    if (*(u16 *)(p + 0x10) == 0xFFFF || i == *D_8006AF80) return 0;
    if (*(u16 *)(p + 0x8A) != 0xFFFF) return 0;
    return *(u16 *)(p + 0x84) < 3U;
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
    s32 result;
    if (flags & 0x20) {
        func_80034AB0(0x48);
        ret = 1;
    } else if (flags & 0x40) {
        func_80034AB0(0x5D);
        ret = -1;
    } else {
        b = base;
        if (flags & 0x2000) {
            do {
                temp_a0 = *(u32 *)(b + 0x99C);
                temp_a0 += 1;
                temp_a0 %= 6;
                *(s32 *)(b + 0x99C) = temp_a0;
            } while (!verifica_indice_8009B150(temp_a0));
            *D_8008F710 = 2;
        } else if (flags & 0x8000) {
            do {
                temp_a0 = *(u32 *)(b + 0x99C);
                temp_a0 += 5;
                temp_a0 %= 6;
                *(s32 *)(b + 0x99C) = temp_a0;
            } while (!verifica_indice_8009B150(temp_a0));
            *D_8008F710 = 1;
        }
    }
    result = ret;
    if (s0 != *D_8008F704) {
        func_80034AB0(0x84);
        result = 2;
    }
    return result;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B350);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B4DC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B800);

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