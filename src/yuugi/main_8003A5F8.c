#include "common.h"
#include "yuugi.h"

typedef struct {
    u32 unk_0x0;
    u32 unk_0x4;
    u32 unk_0x8;
    u32 unk_0xC;
    u32 unk_0x10;
    u8 unk_0x14[4];
    u16 unk_0x18;
    u8 unk_0x1A[2];
    u16 unk_0x1C;
    u8 unk_0x1E[2];
    u8 unk_0x20;
    u8 unk_0x21[2];
    u8 unk_0x23;
    u8 unk_0x24;
    u8 unk_0x25;
    u8 unk_0x26[2];
} Unk_800944B8Stream;

typedef struct {
    Unk_800944B8Stream unk_0x0[16];
    u8 unk_0x280[4];
    u8 *unk_0x284;
    u8 unk_0x288[0xC];
    u32 unk_0x294;
    u8 unk_0x298[0xA];
    u16 unk_0x2A2;
    u8 unk_0x2A4[4];
    u8 unk_0x2A8;
    u8 unk_0x2A9[3];
} Unk_800944B8;

extern Unk_800944B8 D_800944B8[];
extern s32 D_80078C9C;

s32 func_8003A5F8(void) {
    extern s32 D_80078C84;
    extern s32 D_80078C88;
    extern s32 D_80078C90;
    extern s32 D_80078CC0[];
    if (((*D_80078CC0) == 0) || (D_80078C84 != 0)) {
        return 1;
    }
    if (D_80078C88 == 0) {
        D_80078C88 = 1;
        func_8003C390();
        if (D_80078C90 >= 0xB) {
            func_800383C8();
            func_8003CAD8();
            D_80078C90 = 0;
        }
        D_80078C88 = 0;
        D_80078C90 += 1;
    }
    return 0;
}

#include "common.h"

extern s32 D_80078C94;
extern s32 D_80078D5C;
extern s32 D_80078C84;
extern s32 func_8003A5F8();
extern s32 func_8004FE3C();

void func_8003A690(void) {
    if (D_80078C94 == 0) {
        D_80078C94 = 1;
        func_8004FEDC();
        D_80078D5C = func_8004FE3C(0xF2000002, 2, 0x1000, func_8003A5F8);
        func_8004FE7C(D_80078D5C);
        SetRCnt(0xF2000002, 0x1C00, 0x1000);
        StartRCnt(0xF2000002);
        func_8004FEEC();
        D_80078C84 = 0;
        D_80078C94 = 0;
    }
}

void func_8003A71C(void) {
    extern s32 D_80078C84;
    extern s32 D_80078C94;
    extern s32 D_80078D5C;
    D_80078C94 = 1;
    func_8004FEDC();
    StopRCnt(0xF2000002);
    func_8004FE8C(D_80078D5C);
    func_8004FE4C(D_80078D5C);
    func_8004FEEC();
    D_80078C84 = 0;
}

void func_8003A774(void) {
    extern s32 D_80078C84;
    extern s32 D_80078C94;
    D_80078C94 = 1;
    func_8004FEDC();
    StopRCnt(0xF2000002);
    func_8004FEEC();
    D_80078C84 = 0;
}

void func_8003A7B4(void) {
    extern s32 D_80078C88;
    extern s32 D_80078C8C;
    if (D_80078C88 == 0) {
        D_80078C88 = 1;
        if (D_80078C8C != 0) {
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
        }
        func_800383C8();
        func_8003CAD8();
        D_80078C88 = 0;
    }
}

void func_8003A84C(void) {

}

#include "common.h"

s32 func_8003A854(u8 *a, u8 *b, s32 n) {
    if (n == 0) {
        return -1;
    }
    while (--n != 0) {
        if (*a != *b) {
            return *a - *b;
        }
        a++;
        b++;
    }
    return *a - *b;
}

s32 func_8003A8A4(u32 arg0) {
    extern u8 D_80078CA4[];
    register u32 pos asm("a3") = arg0;
    u8 *pattern = D_80078CA4;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = e->unk_0x284;
    u8 *a;
    u8 *b;
    s32 n;
    s32 x, y, diff;
    do {
        a = pattern;
        b = data + pos;
        n = 3;
        do {
            x = *a++;
            y = *b;
            if (x != y) goto compare;
            b++;
        } while (--n);
        x = *a;
        y = *b;
compare:
        diff = x - y;
        if (diff == 0) return pos + 4;
        pos++;
    } while (pos <= e->unk_0x294);
    return -1;
}

s32 func_8003A940(u32 arg0) {
    extern u8 D_80078CAC[];
    register u32 pos asm("a3") = arg0;
    u8 *pattern = D_80078CAC;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = e->unk_0x284;
    u8 *a;
    u8 *b;
    s32 n;
    s32 x, y, diff;
    do {
        a = pattern;
        b = data + pos;
        n = 3;
        do {
            x = *a++;
            y = *b;
            if (x != y) goto compare;
            b++;
        } while (--n);
        x = *a;
        y = *b;
compare:
        diff = x - y;
        if (diff == 0) return pos + 4;
        pos++;
    } while (pos <= e->unk_0x294);
    return -1;
}

s32 func_8003A9DC(u32 arg0) {
    extern u8 D_80078CB4[];
    register u32 pos asm("a3") = arg0;
    register u8 *pattern asm("t2") = D_80078CB4;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = e->unk_0x284;
    u8 *a;
    u8 *b;
    s32 n;
    s32 x, y, diff;
    do {
        a = pattern;
        b = data + pos;
        n = 2;
        do {
            x = *a++;
            y = *b;
            if (x != y) goto compare;
            b++;
        } while (--n);
        x = *a;
        y = *b;
compare:
        diff = x - y;
        if (diff == 0) return pos + 3;
        pos++;
    } while (pos <= e->unk_0x294);
    return -1;
}

s32 func_8003AA78(u8 *s) {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = *(u8 *volatile *)&e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)s;
    u8 c = data[pos];
    pos++;
    *(u32 *)s = pos;
    if (e->unk_0x294 < pos) { s[0x20] = 1; return -1; }
    return c;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003AAF0);

s32 func_8003AC20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return ((((((arg0 & 0xFF) << 8) + (arg1 & 0xFF)) << 8) + (arg2 & 0xFF)) << 8) | (arg3 & 0xFF);
}

s32 func_8003AC4C(s32 arg0, s32 arg1) {
    return ((arg0 & 0xFF) << 8) | (arg1 & 0xFF);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003AC60);

s32 func_8003AE48(u8 *s) {
    register u8 *stream asm("a2") = s;
    register s32 hi asm("a1");
    register s32 lo asm("v1");
    {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = *(u8 *volatile *)&e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)stream;
    u32 c = data[pos];
    pos++;
    *(u32 *)stream = pos;
    if (e->unk_0x294 < pos) { stream[0x20] = 1; hi = -1; }
    else hi = (u8)c;
}
    {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = *(u8 *volatile *)&e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)stream;
    u32 c = data[pos];
    pos++;
    *(u32 *)stream = pos;
    if (e->unk_0x294 < pos) { stream[0x20] = 1; lo = -1; }
    else lo = (u8)c;
}
    return ((hi & 0xFF) << 8) | (lo & 0xFF);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003AF34);

void func_8003B15C(s32 *arg0, s32 arg1) {
    *arg0 += arg1;
}

void func_8003B170(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003B178);

s32 func_8003B6F4(u8 *s) {
    u32 i = 0;
    u32 n = func_8003AAF0(s);
    s32 result;
    register s32 more asm("v0");
    do {
        Unk_800944B8 *e = &D_800944B8[D_80078C9C];
        u32 pos = *(u32 *)s;
        u8 c = e->unk_0x284[pos];
        *(u32 *)s = ++pos;
        i++;
        if (e->unk_0x294 < pos) { s[0x20] = 1; result = -1; }
        else result = c;
        if ((u8)result == 0xF7) {
            more = i < n;
            break;
        }
        more = i < n;
    } while (more);
    return more;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003B7B4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003BC94);

s32 func_8003BFCC(u32 *s) {
    extern u8 D_80078CAC[];
    u8 *pattern = D_80078CAC;
    u32 found = -1;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    register u32 pos asm("a3") = *s;
    u8 *data = e->unk_0x284;
    u8 *a, *b;
    s32 n, x, y, diff;
    do {
        a = pattern;
        b = data + pos;
        n = 3;
        do {
            x = *a++;
            y = *b;
            if (x != y) goto compare;
            b++;
        } while (--n);
        x = *a;
        y = *b;
compare:
        diff = x - y;
        if (diff == 0) {
            found = pos + 4;
            break;
        }
        pos++;
    } while (pos <= e->unk_0x294);
    *s = found;
    if (found != -1U) {
        s32 v = func_8003AC60(s);
        u32 pos;
        s[2] = v;
        pos = s[0];
        s[4] = pos;
        s[3] = pos + v;
        return 0;
    }
    return 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C0C8);

s32 func_8003C29C(s32 n) {
    extern s32 D_80078C98;
    u8 *base = (u8 *)D_800944B8;
    s32 offset = n * sizeof(Unk_800944B8);
    Unk_800944B8 *e = (Unk_800944B8 *)(base + offset);
    s32 i;
    D_80078C98 = 0;
    e->unk_0x2A8 = 0;
    D_80078C9C = n;
    func_8003AF34(n);
    for (i = 0; i < e->unk_0x2A2; i++, base += 0x28) {
        u8 *t = base + offset;
        s32 v;
        *(u32 *)(t + 4) = *(u32 *)t;
        v = func_8003AAF0(t);
        t[0x20] = 0;
        t[0x23] = 0;
        t[0x25] = 0;
        t[0x24] = 0;
        *(s16 *)(t + 0x1C) = v;
        *(s16 *)(t + 0x18) = 0;
        if (D_80078C98 != 0) func_8003C0C8(t);
    }
    return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C390);

void func_8003C530(s32 n) {
    s32 i;
    for (i = 0; i < D_800944B8[n].unk_0x2A2; i++) {
        u8 *t = (u8 *)&D_800944B8[n] + i * 0x28;
        t[0x20] = 1;
        *(u32 *)t = 0;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C5BC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C654);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C73C);

#include "common.h"

extern u8 D_800949A8[];

void func_8003C7C8(void) {
    SpuInit();
    func_80038890();
    func_8003C73C();
    SpuInitMalloc(0x10, D_800949A8);
}

