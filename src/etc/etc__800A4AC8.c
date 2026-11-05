#include "common.h"
#include "ghidra.h"

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

void func_800A5400(void) {
    extern struct { u8 pad0[0x88]; u32 f88; u8 pad8c[0xC]; u32 f98; } D_8008ED68[];
    extern char D_800B2DA8[];
    extern s32 D_800B3C1C[], D_800B3C24[], D_800B3C20[];
    extern u8 D_800B3C28[], D_800B3C29[], D_8008542A[];
    register u32 a asm("a0");
    u32 b;
    register u32 mask asm("v0");
    func_8001F1A8(-0x38, 0x50, 0, 1, 0, D_800B2DA8, 1, 9, 2);
    a = D_8008ED68[0].f88;
    if ((a & 0x1000) || (D_8008ED68[0].f98 & 0x1000)) {
        if (D_800B3C1C[0] >= 2) {
            func_80034AB0(0x84);
            D_800B3C1C[0] -= 2;
        }
    } else if ((a & 0x4000) || (D_8008ED68[0].f98 & 0x4000)) {
        if (D_800B3C1C[0] < 2) {
            func_80034AB0(0x84);
            D_800B3C1C[0] += 2;
        }
    } else if ((a & 0x8000) || (D_8008ED68[0].f98 & 0x8000)) {
        if (D_800B3C1C[0] & 1) {
            func_80034AB0(0x84);
            D_800B3C1C[0]--;
        }
    } else if ((mask = a & 0x2000) || (D_8008ED68[0].f98 & 0x2000)) {
        if (!(D_800B3C1C[0] & 1)) {
            func_80034AB0(0x84);
            D_800B3C1C[0]++;
        }
    }
    a = D_8008ED68[0].f88;
    if ((a & 0x830) || ((b = D_8008ED68[0].f98) & 0x830)) {
        if (D_800B3C1C[0] == 0 && D_8008542A[0] == 0) {
            func_80034AB0(0x4C);
        } else {
            func_80034AB0(0x48);
            D_800B3C28[0] = 1;
            func_80012544((u16)(*(u16 *)D_800B3C1C + 6));
            D_800B3C24[0] = 0;
            D_800B3C20[0] = 0;
            D_800B3C1C[0] = 0;
            D_800B3C29[0] = 1;
        }
    } else if ((mask = a & 0x40) || (b & 0x40)) {
        func_80034AB0(0x5D);
        func_80034BD8(-3, 0);
        func_80033974(0x7017);
        func_80012544(0xA);
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A5654);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A6198);

void func_800A6D68(void) {
    extern u8 D_80065164[];
    extern struct { s16 count; s16 entries[3]; } D_8006AF90[];
    extern struct { u8 p0[0x88]; u32 f88; u8 p8c[0xC]; u32 f98; } D_8008ED68[];
    extern u8 D_800B2DA8[];
    extern s32 D_800B3C1C[];
    s32 i;
    func_8001F1A8(-0x38, 0x50, 0, 1, 0, D_800B2DA8, 1, 9, 2);
    for (i = 0; i < 3; i++) {
        func_80020844((s16)(i * 0x60 - 0x88), 0x10, 0x50, 0x18, 0, 0, 0, 0, 5);
    }
    if (D_8006AF90[0].count > 0) {
        for (i = 0; i < D_8006AF90[0].count; i++) {
            func_8001F1A8((s16)(i * 0x60 - 0x84), 0x14, 0, 1, 0,
                D_80065164 + D_8006AF90[0].entries[i] * 12, 1, 6, 2);
        }
    }
    if ((D_8008ED68[0].f88 & 0x40) || (D_8008ED68[0].f98 & 0x40)) {
        func_80034AB0(0x5D);
        D_800B3C1C[0] = 2;
        func_80012544(5);
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A6F10);

void func_800A7654(void) {
    extern int func_80099394();
    func_80013668();
    func_80012200(&func_80099394);
}

void func_800A7680(u16 *arg0) {
    extern u8 D_8008ED68[];
    extern void func_8001EA24(s16, s16, s32, s32, s32, s32);
    s32 left = -0x90;
    s16 y = 0;
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
            func_8001EA24(left + *(s32 *)(p + 0x108) / 2 + x,
                         y + *(s32 *)(p + 0x10C) / 2, 0, c, 0, 3);
            x += 0xE;
        }
        s++;
    }
}

void func_800A7754(u16 *arg0, u8 arg1) {
    extern u8 D_8008ED68[];
    extern void func_8001EA24(s16, s16, s32, s32, s32, s32);
    u8 sel = arg1;
    s32 left = -0x80;
    s32 y = 0x40;
    u32 i = 0;
    u8 *p = D_8008ED68;
    u16 *s = arg0;
    s32 x = i;
    s32 c;
    for (; i < 0x20; x += 0xE) {
        s32 w;
        c = *s;
        if (i == sel) {
            x = 0;
            y += 0x10;
        }
        s++;
        i++;
        w = *(s32 *)(p + 0x108) / 2;
        w = left + w;
        w += x;
        func_8001EA24((s16)w, y + *(s32 *)(p + 0x10C) / 2, 3, c, 0, 3);
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

void func_800A790C(int param_1) {
 extern s8 D_800B3C2A[];
 int i=0;
 int shifted=(param_1<<16)>>15;
 do {
 int arg=i+0x13;
 int r=func_80019F30(0x2000c,shifted+arg);
 func_80012A20(r,1,0,0);
 ++i;
 } while(i<2);
 D_800B3C2A[0]=1;
}

void func_800A7984(s32 idx) {
    extern u8 D_80091618[];
    extern s16 D_800B3C38[];
    register s32 saved asm("t4") = idx;
    register s32 k asm("a1") = 0;
    register s32 c1 asm("t3") = 1;
    register s32 c2 asm("t1") = 2;
    register s32 c3 asm("t0") = 3;
    register u8 *base asm("v1") = D_80091618;
    register s32 index asm("a0") = (s16)idx;
    register s32 offset asm("v0") = index * 0x1A8;
    register u8 *e asm("a2") = offset + base;
    register s16 *base_S asm("a3") = D_800B3C38;
    register s16 *p asm("a0") = base_S;
    register s32 v asm("v1");
    register s32 cmp2 asm("v0");

    for (; k < 4; k++, p++) {
        register s32 val asm("v1");
        register s32 cmp asm("v0");
        if (k == c1) goto case1;
        if (k < 2) {
            if (k == 0) goto case0;
        } else {
            if (k == c2) goto case2;
            if (k == c3) goto case3;
        }
        goto converted;
case0:
        D_800B3C38[0] = *(u16 *)(e + 0xDA);
        goto converted;
case1:
        base_S[1] = *(u16 *)(e + 0xDC);
        goto converted;
case2:
        base_S[2] = *(u16 *)(e + 0xDE);
        goto converted;
case3:
        base_S[3] = *(u16 *)(e + 0xD2);
converted:;
        val = *p;
        if ((cmp = val < 0x41)) *p = 0;
        else if ((cmp = val < 0x6B)) *p = c1;
        else if ((cmp = val < 0x8E) || ((cmp = val < 0x96) && k < 2)) *p = c2;
        else {
            val = *p;
            if ((cmp = val < 0xBC) || ((cmp = val < 0xC8) && (u32)(k - 1) < 2)) *p = c3;
            else *p = 4;
        }
    }
    {
        register u8 *b2 asm("a0") = D_80091618;
        u8 *e2 = b2 + (s16)saved * 0x1A8;
        s16 *S = D_800B3C38;
        register s32 h asm("a0") = *(s16 *)(e2 + 0xE6);
        register s32 num asm("v1") = h * 200;
        register s32 den asm("v0");
        h = *(u16 *)(e2 + 0x9E);
        den = (h << 1) + h;
        den >>= 1;
        num = num / den;
        S[4] = num;
        v = S[4];
        if ((cmp2 = v < 0x17)) S[4] = 5;
        else if ((cmp2 = v < 0x2D)) S[4] = 0;
        else if ((cmp2 = v < 0x43)) S[4] = 1;
        else if ((cmp2 = v < 0x64)) S[4] = 2;
        else if ((cmp2 = v < 0x85)) S[4] = 3;
        else if ((cmp2 = v < 0x9C)) S[4] = 4;
        else S[4] = 6;
    }
    {
        register s16 *S asm("a1") = D_800B3C38;
        register u8 *b3 asm("a0") = D_80091618;
        u8 *e3 = b3 + (s16)saved * 0x1A8;
        S[5] = (*(u16 *)(e3 + 0xD4));
        if (S[5] < (*(s16 *)(e3 + 0xD6))) S[5] = (*(u16 *)(e3 + 0xD6));
        v = S[5];
        if ((cmp2 = v < 0x33)) S[5] = 4;
        else if ((cmp2 = v < 0x65)) S[5] = 3;
        else if ((cmp2 = v < 0x97)) S[5] = 2;
        else if ((cmp2 = v < 0xC8)) S[5] = 1;
        else S[5] = 0;
    }
    {
        register u8 *b4 asm("a0") = D_80091618;
        register s32 i4 asm("v1") = (s16)saved;
        u8 *e4 = b4 + i4 * 0x1A8;
        register s16 *S asm("a1") = D_800B3C38;
        S[6] = *(s32 *)(e4 + 0xC4) / 28800 + 1;
        if ((*(s16 *)(e4 + 0x1A0)) == 1) S[7] = 5;
        else if ((*(s16 *)(e4 + 0x19E)) == 1) S[7] = 4;
        else if ((*(s16 *)(e4 + 0x19C)) == 1) S[7] = 3;
        else if ((*(s16 *)(e4 + 0xC0)) < 0x18) S[7] = 1;
        else S[7] = 0;
    }
}

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

void func_800A7EB0(void) {
    extern u8 D_80091618[], D_80085428[], D_80063940[];
    extern u8 D_8006AF80[], D_8006AFCC[];
    extern s32 D_800B3C20[];
    extern void func_80027C14(u16), func_80027E04(u16), func_80026514(u16);
    s32 j = 0;
    u8 *base = D_80085428;
    u32 n = base[2];
    u8 *dst;
    u8 *m;
    s32 any;
    u16 k;
    {
    register u8 *tmp asm("v0") = D_80091618;
    register u8 *b asm("t1") = tmp;
    dst = base + n * 14;
    dst[0x50] = (b + (D_800B3C20[0]) * 0x1A8)[0];
    do { u8 *d = dst + j; u8 *e = b + D_800B3C20[0]*0x1A8 + j; u8 v=e[8]; j++; d[0x51]=v; }while(j<8);
    }
    {
        extern u8 D_800916CC[];
        u8 *d = base + n * 14;
        u8 *src = D_800916CC + D_800B3C20[0]*0x1A8;
        j=0;
        do { u8 *e=d+j; j++; e[0x59]=*src; src+=2; }while(j<5);
    }
    base[2] += 1;
    {
    u8 *data=D_80063940;
    u8 *entries=D_80091618;
    m = data + *(u16 *)(entries + D_800B3C20[0]*0x1A8)*60;
    if (((*(u32 *)(m + 0x14) >> 5) & 1) != 1) {
        *(u32 *)(m + 0x14) |= 0x20;
        base[4] += 1;
    }
    func_80027C14(D_800B3C20[0]);
    func_80027E04(D_800B3C20[0]);
    {
        u8 *e = (D_80091618 + (D_800B3C20[0]) * 0x1A8);
        k = *(u16 *)(e + 0x8A);
        if (k != 0xFFFF) {
            *(u16 *)((D_80091618 + (k) * 0x1A8) + 0x8A) = 0xFFFF;
            *(u16 *)((D_80091618 + (*(u16 *)(e + 0x8A)) * 0x1A8) + 0x8C) = 0;
        }
    }
    func_80026514(D_800B3C20[0]);
    {
        s32 v = D_800B3C20[0];
        u8 *e = (D_80091618 + (v) * 0x1A8);
        *(u16 *)(e + 0x19C) = 0;
        *(u16 *)(e + 0x19E) = 0;
        *(u16 *)(e + 0x1A0) = 0;
        base[v + 0xD7C] = 0;
    }
    any = 0;
    for (j = 0; j < 6; j++)
        if (*(u16 *)((D_80091618 + (j) * 0x1A8) + 0x10) != 0xFFFF) any = 1;
    }
    if (any) return;
    *(u16 *)D_8006AF80 = 0;
    *(u32 *)(D_8006AF80 + 4) = 0x20D0;
    for (j = 0; j < 5; j++) {
        *(s32 *)(D_8006AFCC + 8 + j * 4) = -1;
        *(s32 *)(D_8006AFCC + 0x1C + j * 4) = 0;
    }
    for (j = 0; j < 0xB; j++) {
        *(u16 *)(D_8006AFCC + 0x30 + j * 2) = 0;
        *(u32 *)(D_8006AFCC + 0x48 + j * 4) = 0;
        *(u16 *)(D_8006AFCC + 0x74 + j * 2) = 0;
    }
    return;
}
