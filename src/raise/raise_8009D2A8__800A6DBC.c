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

void func_800A6E14(void)
{
    extern u8 D_800EEB9C[];
    extern u8 D_8002E2AC[];
    extern void func_80013668(void);
    extern void func_80012200(void *);
    u8 *q = D_800EEB9C;
    u8 *r = q;
    s32 i = 0;
    *(s32 *)(q + 0x1c) = 0;
    do {
        s32 j = 0;
        *(s32 *)(q + 0x28) = 0;
        *(s32 *)(q + 0x98) = 0;
        if (*(s32 *)(q + 0x60) > 0) {
            s32 *x = (s32 *)(r + 0xd4);
            s32 *y = (s32 *)(r + 0x4c4);
            do {
                *x = 0;
                if (i < 2) *y = 0;
                y++;
                j++;
                x++;
            } while (j < *(s32 *)(q + 0x60));
        }
        q += 4;
        i++;
        r += 0x24;
    } while (i < 7);
    q = D_800EEB9C;
    *(s32 *)(q + 0x74c) = 0;
    *(s32 *)(q + 0x754) = 0;
    *(s32 *)(q + 0x75c) = 0;
    *(s32 *)(q + 0x770) = 0;
    *(s32 *)(q + 0x778) = 0;
    *(s32 *)(q + 0x764) = 0;
    func_80013668();
    *(s32 *)(q + 0x768) = 0;
    func_80012200(D_8002E2AC);
}

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

u16 func_800A72E0(s32 a, s32 b)
{
    extern u8 D_800ED2AC[];
    s32 i = 0;
    s32 neg = -1;
    u8 *base;
    s16 *p;

    a &= 0xffff;
    base = D_800ED2AC;
    p = (s16 *)(base + a * 60);
    p += (b & 0xffff) * 3;
    do {
        a = *(u16 *)p;
        if (*p != neg) goto out;
        i++;
        p++;
    } while (i < 3);
out:
    return a;
}

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

s16 func_800A752C(u16 a)
{
    typedef struct {
        u8 pad0[0xBE];
        s16 unkBE;
        u8 padC0[0x1A2 - 0xC0];
        u16 unk1A2;
        u8 pad1A4[0x1A8 - 0x1A4];
    } S_80091618;
    extern S_80091618 D_80091618[];
    S_80091618 *b = D_80091618;
    S_80091618 *e = &b[a];

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7600);
