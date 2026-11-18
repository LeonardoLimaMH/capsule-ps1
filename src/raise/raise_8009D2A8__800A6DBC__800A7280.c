#include "common.h"

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

u16 func_800A72E0(s32 a, s32 b)
{
    typedef struct {
        s16 unk[10][3];
    } Struct_D_800ED2AC;
    extern Struct_D_800ED2AC D_800ED2AC[];
    s32 i = 0;
    s32 neg = -1;
    Struct_D_800ED2AC *base;
    u32 q;
    s16 *p;
    u16 last;

    a &= 0xffff;
    base = D_800ED2AC;
    q = (u32)&base[a];
    p = (s16 *)(((u16)b * 6) + q);
    do {
        s16 v = *p;
        last = *(volatile u16 *)p;
        if (v != neg) goto out;
        i++;
        p++;
    } while (i < 3);
out:
    return last;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A7280", func_800A7340);

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
