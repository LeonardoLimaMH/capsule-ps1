#include "common.h"

void func_800A6DBC(void) {
    func_8001AD74(8);
}

s32 func_800A6DDC(void)
{
  extern s32 D_8008F7D0[];
  if ((*D_8008F7D0) == 0)
  {
    func_800E1B30();
    return 1;
  }
  if (D_8008F7D0)
  {
    return 0;
  }
  else
  {
    return 0;
  }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A6E14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A6ED4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A70F8);

u16 func_800A7280(s32 a, s32 b)
{
    typedef struct {
        s16 unk[10][3];
    } Struct_D_800ED504;
    extern Struct_D_800ED504 D_800ED504[];
    s32 i = 0;
    s32 neg = -1;
    Struct_D_800ED504 *base;
    u32 q;
    s16 *p;

    a &= 0xffff;
    base = D_800ED504;
    q = (u32)&base[a];
    p = (s16 *)(((u16)b * 6) + q);
    do {
        if (*p != neg) goto out;
        i++;
        p++;
    } while (i < 3);
out:
    return i;
}

extern u8 D_800916E8[];
extern s16 D_800EC588[][17];

extern s16 D_800ECB84[][17];

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A72E0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7340);

void func_800A74C0(u16 a, u16 b)
{
    extern u8 D_80091618[];
    extern u16 D_800EBFF8[];
    u32 base = (u32)D_80091618;
    int off = a * 0x1A8;
    u32 tab = (u32)D_800EBFF8;
    u16 *s = (u16 *)(tab + b * 8);
    *(u16 *)(base + off + 0xE8) = s[0];
    *(u16 *)(base + off + 0xEA) = s[1];
    *(u16 *)(base + off + 0xEC) = s[2];
    *(u16 *)(base + off + 0xEE) = s[3];
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A752C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7600);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A76C0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7730);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A79D8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7C7C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7F20);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A8184);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A8340);

void func_800A847C(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A8484);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A865C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A875C);

void func_800A88E4(u16 a0, u16 a1) {
    s16 *e = (s16 *)(D_800916E8 + a0 * 0x1A8);
    s16 i;
    for (i = 1; i < 17; i++, e++) {
        s16 v = *e;
        v += D_800EC588[a1][i];
        if (i >= 2) {
            v = (v < 0) ? 0 : ((v > 0xFF) ? 0xFF : v);
        }
        if (i >= 13) {
            v = (v < 0) ? 0 : ((v > 100) ? 100 : v);
        }
        *e = v;
    }
}

void func_800A89E0(u16 a0, s16 a1) {
    s16 *e = (s16 *)(D_800916E8 + a0 * 0x1A8);
    s16 i;
    for (i = 1; i < 17; i++, e++) {
        s16 v = *e;
        v += D_800ECB84[a1][i];
        if (i >= 2) {
            v = (v < 0) ? 0 : ((v > 0xFF) ? 0xFF : v);
        }
        if (i >= 13) {
            v = (v < 0) ? 0 : ((v > 100) ? 100 : v);
        }
        *e = v;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A8AE0);

void func_800A8C10(void) {

}

void func_800A8C18(void) {

}

void func_800A8C20(void) {

}

s32 func_800A8C28(void) {
    return 0;
}
