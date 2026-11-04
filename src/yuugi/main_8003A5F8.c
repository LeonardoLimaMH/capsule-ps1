#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 unk_0x0[0x284];
    u8 *unk_0x284;
    u8 unk_0x288[0xC];
    u32 unk_0x294;
    u8 unk_0x298[0x14];
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
    extern s32 D_80078C9C;
    extern u8 D_80078CA4[];
    register s32 var_a0 asm("a0");
    s32 var_v0;
    u32 var_a3;
    register u8 *var_a1 asm("a1");
    register u8 *var_a2 asm("a2");
    u8 var_v0_2;
    u8 var_v1;
    Unk_800944B8 *temp_t0;
    u8 *pattern = D_80078CA4;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    u8 *data;

    var_a3 = arg0;
    temp_t0 = &base[D_80078C9C];
    data = temp_t0->unk_0x284;
loop_1:
    var_a1 = pattern;
    var_a2 = data + var_a3;
    var_a0 = 3;
loop_2:
    var_v1 = *var_a1;
    var_v0_2 = *var_a2;
    var_a1 += 1;
    if (var_v1 == var_v0_2) {
        var_a0 -= 1;
        var_a2 += 1;
        if (var_a0 == 0) {
            var_v1 = *var_a1;
            var_v0_2 = *var_a2;
        } else {
            goto loop_2;
        }
    }
    var_v0 = var_a3 + 4;
    if (var_v1 != var_v0_2) {
        var_a3 += 1;
        var_a1 = pattern;
        if (temp_t0->unk_0x294 < var_a3) {
            var_v0 = -1;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003A940);

s32 func_8003A9DC(u32 arg0) {
    extern s32 D_80078C9C;
    extern u8 D_80078CB4[];
    register s32 var_a0 asm("a0");
    s32 var_v0;
    u32 var_a3;
    register u8 *var_a1 asm("a1");
    register u8 *var_a2 asm("a2");
    u8 var_v0_2;
    u8 var_v1;
    Unk_800944B8 *temp_t0;
    register u8 *pattern asm("t2") = D_80078CB4;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    u8 *data;

    var_a3 = arg0;
    temp_t0 = &base[D_80078C9C];
    data = temp_t0->unk_0x284;
loop_1:
    var_a1 = pattern;
    var_a2 = data + var_a3;
    var_a0 = 2;
loop_2:
    var_v1 = *var_a1;
    var_v0_2 = *var_a2;
    var_a1 += 1;
    if (var_v1 == var_v0_2) {
        var_a0 -= 1;
        var_a2 += 1;
        if (var_a0 == 0) {
            var_v1 = *var_a1;
            var_v0_2 = *var_a2;
        } else {
            goto loop_2;
        }
    }
    var_v0 = var_a3 + 3;
    if (var_v1 != var_v0_2) {
        var_a3 += 1;
        var_a1 = pattern;
        if (temp_t0->unk_0x294 < var_a3) {
            var_v0 = -1;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
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
    s32 lo;
    {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)stream;
    u8 c = data[pos];
    pos++;
    *(u32 *)stream = pos;
    if (e->unk_0x294 < pos) { stream[0x20] = 1; hi = -1; }
    else hi = c;
}
    {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)stream;
    u8 c = data[pos];
    pos++;
    *(u32 *)stream = pos;
    if (e->unk_0x294 < pos) { stream[0x20] = 1; lo = -1; }
    else lo = c;
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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003B6F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003B7B4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003BC94);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003BFCC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C0C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C29C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C390);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003A5F8", func_8003C530);

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

