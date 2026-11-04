#include "common.h"
#include "yuugi.h"

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

typedef struct {
    s16 unk_0x0;
    u8 unk_0x2[0x17];
    u8 unk_0x19;
    u8 unk_0x1A;
    u8 unk_0x1B;
} Unk_800947E8;

typedef struct {
    u8 unk_0x0[0x288];
    s16 unk_0x288;
    s16 unk_0x28A;
    s16 unk_0x28C;
    s16 unk_0x28E;
    u8 unk_0x290[0x1C];
} Unk_800944B8Init;

typedef struct {
    s32 unk_0x0;
    s32 unk_0x4;
    u8 unk_0x8[0x10];
    s16 unk_0x18;
    u8 unk_0x1A[2];
    s16 unk_0x1C;
    u8 unk_0x1E[2];
    u8 unk_0x20;
    u8 unk_0x21[2];
    u8 unk_0x23;
    u8 unk_0x24;
    u8 unk_0x25;
    u8 unk_0x26[2];
} Unk_800944B8Stream;

#ifndef UNK_800944B8_DEFINED
#define UNK_800944B8_DEFINED
typedef struct {
    struct {
        s32 unk_0x0;
        u8 unk_0x4[0x1C];
        u8 unk_0x20;
        u8 unk_0x21[7];
    } unk_0x0[16];
    u8 unk_0x280[4];
    u8 *unk_0x284;
    u8 unk_0x288[0xC];
    u32 unk_0x294;
    u8 unk_0x298[0xA];
    u16 unk_0x2A2;
    u8 unk_0x2A4[8];
} Unk_800944B8;

extern Unk_800944B8 D_800944B8[];
extern s32 D_80078C9C;
#endif

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

extern u8 D_800949A8[];

#ifndef UNK_800944B8_DEFINED
#define UNK_800944B8_DEFINED

#endif

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

#ifndef UNK_800944B8_DEFINED
#define UNK_800944B8_DEFINED

#endif

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

typedef struct {
    u8 unk_0x0[0x284];
    u8 *unk_0x284;
    u8 unk_0x288[0xC];
    u32 unk_0x294;
    u8 unk_0x298[0x14];
} Unk_800944B8_2;

s32 func_8003AA78(u8 *s) {
    register Unk_800944B8_2 *base asm("a0") = D_800944B8;
    Unk_800944B8_2 *e = &base[D_80078C9C];
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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003AE48);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003AF34);

void func_8003B15C(s32 *arg0, s32 arg1) {
    *arg0 += arg1;
}

void func_8003B170(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003B178);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003B6F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003B7B4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003BC94);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003BFCC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C0C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C29C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C390);

#ifndef UNK_800944B8_DEFINED
#define UNK_800944B8_DEFINED
typedef struct {
    struct {
        s32 unk_0x0;
        u8 unk_0x4[0x1C];
        u8 unk_0x20;
        u8 unk_0x21[7];
    } unk_0x0[16];
    u8 unk_0x280[4];
    u8 *unk_0x284;
    u8 unk_0x288[0xC];
    u32 unk_0x294;
    u8 unk_0x298[0xA];
    u16 unk_0x2A2;
    u8 unk_0x2A4[8];
} Unk_800944B8_2;

#endif

void func_8003C530(s32 n) {
    s32 i;
    for (i = 0; i < D_800944B8[n].unk_0x2A2; i++) {
        D_800944B8[n].unk_0x0[i].unk_0x20 = 1;
        D_800944B8[n].unk_0x0[i].unk_0x0 = 0;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C5BC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C654);

#ifndef UNK_800944B8_DEFINED
#define UNK_800944B8_DEFINED

#endif

void func_8003C73C(void) {
    extern Unk_800947E8 D_800947E8[];
    extern s32 D_80094768[];
    extern s32 D_80078D64;
    s32 i;
    for (i = 0; i < 16; i++) {
        D_800947E8[i].unk_0x0 = -1;
        D_800947E8[i].unk_0x19 = 0x7F;
        D_800947E8[i].unk_0x1A = 0x7F;
        D_800947E8[i].unk_0x1B = 0x40;
        {
            s32 *q = &D_80094768[i * 2];
            q[1] = 0;
            q[0] = 0;
        }
    }
    for (i = 0; i < 1; i++) {
        Unk_800944B8Init *e = &((Unk_800944B8Init *)D_800944B8)[i];
        e->unk_0x288 = -1;
        e->unk_0x28A = 0;
        e->unk_0x28E = 0x7F;
        e->unk_0x28C = 0x7F;
    }
    D_80078D64 = 0x1000;
}

void func_8003C7C8(void) {
    SpuInit();
    func_80038890();
    func_8003C73C();
    SpuInitMalloc(0x10, D_800949A8);
}
