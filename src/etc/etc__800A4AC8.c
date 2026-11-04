#include "common.h"

void func_800A4AC8(void) {
    func_8001A49C(0x80110000);
    func_80012508();
}

void func_800A4AF0(void) {
    extern u16 D_8008EE48[];
    extern u8 D_800859F0[];
    extern s32 D_800B3C18[];
    switch ((s32)D_8008EE48[0]) {
    case 0:
        D_800B3C18[0] = 0;
        if (D_800859F0[0] & 4) func_80012578();
        else func_80012508();
        break;
    case 1:
        if (func_80019654()) func_80012578();
        break;
    case 2:
        func_800338DC(0x7017);
        func_80012578();
        break;
    case 3:
        if (D_800859F0[0] & 4) {
            if (func_800337EC() & 0x80) func_80012508();
        } else func_80012508();
        break;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A4BCC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A5400);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A5654);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A6198);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A6D68);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A6F10);

void func_800A7654(void) {
    extern int func_80099394();
    func_80013668();
    func_80012200(&func_80099394);
}

void func_800A7680(u16 *arg0) {
    extern u8 D_8008ED68[];
    extern void func_8001EA24(s16, s16, s32, s32, s32, s32);
    register s32 left asm("s4") = -0x90;
    s32 y = 0;
    u8 *p = D_8008ED68;
    u16 *s = arg0;
    s32 x = 0;
    s32 c;
    while (1) {
        c = *s;
        if (c == 0xFFEE) break;
        if (c == 0xFFF0) {
            x = 0;
            y += 0x10;
        } else {
            func_8001EA24(*(s32 *)(p+0x108) / 2 + left + x,
                         y + *(s32 *)(p+0x10C)/2, 0, c, 0, 3);
            x += 0xE;
        }
        s++;
    }
}

void func_800A7754(u16 *arg0, u8 arg1) {
    extern u8 D_8008ED68[];
    extern void func_8001EA24(s16, s16, s32, s32, s32, s32);
    u8 sel = arg1;
    register s32 left asm("s6") = -0x80;
    s32 y = 0x40;
    u32 i = 0;
    u8 *p = D_8008ED68;
    u16 *s = arg0;
    s32 x = i;
    s32 c;
    for (; i < 0x20; x += 0xE) {
        c = *s;
        if (i == sel) {
            x = 0;
            y += 0x10;
        }
        s++;
        i++;
        func_8001EA24(*(s32 *)(p + 0x108) / 2 + left + x,
                     y + *(s32 *)(p + 0x10C) / 2, 3, c, 0, 3);
    }
}

void func_800A7840(int param_1)

{
    extern u8 D_80063940[];
    extern s32 D_800B3C1C[];
  if (param_1 == 0) {
    (*D_800B3C1C) = ((*D_800B3C1C) + 1) % 0x67;
  }
  else {
    (*D_800B3C1C) = (*D_800B3C1C) + -1;
    if ((*D_800B3C1C) < 0) {
      (*D_800B3C1C) = 0x66;
    }
  }
  { u8 *base = D_80063940;
  if ((*(u32 *)(base + (*D_800B3C1C) * 0x3c + 0x14) >> 5 & 1) == 0) {
    func_800A7840(param_1);
  }
  }
  return;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A790C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A7984);

void func_800A7D2C(void) {
    extern u8 D_80085428[];
    extern s32 D_800B3C20[];
    s32 i = D_800B3C20[0];
    u8 *base = D_80085428;
    s32 next;
    s32 j;
    u8 *src;
    u8 *dst;
    if (i != 0x31 && (i != 0 || base[2] != 1)) {
        next = i + 1;
        if (next < base[2]) {
            src = base + next * 14;
            dst = base + i * 14;
            do {
                {
                    register u8 *d asm("a2");
                    register u8 *s asm("a1");
                    j = 0;
                    d = dst;
                    dst[0x50] = src[0x50];
                    s = src;
                    do {
                        *(d + j + 0x51) = *(s + j + 0x51);
                        j++;
                    } while (j < 8);
                }
                {
                    register u8 *d asm("a2");
                    register u8 *s asm("a1");
                    j = 0;
                    d = dst;
                    s = src;
                    do {
                        u8 *v = d + j;
                        u8 value = *(s + j + 0x59);
                        j++;
                        v[0x59] = value;
                    } while (j < 5);
                }
                dst += 14;
                i++;
                src += 14;
            } while (base[2] > ++next);
        }
    }
    {
        u8 *p = base + i * 14;
        p[0x50] = 0;
        j = 7;
        p += 7;
        for (; j >= 0; j--) { p[0x51] = 0; p--; }
        j = 4;
        p = base + i * 14 + 4;
        for (; j >= 0; j--) { p[0x59] = 0; p--; }
    }
    base[2]--;
    if (base[2] == 0) D_800B3C20[0] = 0;
    else if (D_800B3C20[0] >= base[2]) D_800B3C20[0] = base[2] - 1;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A7EB0);
