#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74", func_800D4F74);

void func_800D543C(u8 arg0, s32 arg1) {
    extern u8 D_80085428[];
    extern void func_800D4F74();
    u8 *base = D_80085428;
    u8 *p = base + (((arg0 & 0x7F) - 1) * 0x7C + (arg0 >> 7) * 0x2E8);
    s32 x = p[0x5FD];
    s32 y = p[0x5FE];
    s32 l, r, up, dn;

    func_800D4F74(arg0, arg1, l = (x - 1) & 0xFF, up = (y - 1) & 0xFF);
    func_800D4F74(arg0, arg1, l, dn = (y + 1) & 0xFF);
    func_800D4F74(arg0, arg1, r = (x + 1) & 0xFF, up);
    func_800D4F74(arg0, arg1, r, dn);
}

void func_800D5544(u8 arg0, s32 arg1) {
    extern u8 D_80085428[];
    extern void func_800D4F74();
    u8 *base = D_80085428;
    u8 *p = base + (((arg0 & 0x7F) - 1) * 0x7C + (arg0 >> 7) * 0x2E8);
    s32 x = p[0x5FD];
    s32 y = p[0x5FE];
    s32 l, r, up, dn;

    func_800D4F74(arg0, arg1, l = (x - 1) & 0xFF, y & 0xFF);
    func_800D4F74(arg0, arg1, r = (x + 1) & 0xFF, y & 0xFF);
    func_800D4F74(arg0, arg1, x & 0xFF, up = (y - 1) & 0xFF);
    func_800D4F74(arg0, arg1, x & 0xFF, dn = (y + 1) & 0xFF);
    func_800D4F74(arg0, arg1, l, up);
    func_800D4F74(arg0, arg1, l, dn);
    func_800D4F74(arg0, arg1, r, up);
    func_800D4F74(arg0, arg1, r, dn);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74", func_800D56AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74", func_800D595C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74", func_800D5DAC);

void func_800D68A8(u8 arg0, s32 arg1) {
    typedef struct {
        u8 pad0[0x10];
        u32 unk10;
        u8 pad14[0x58 - 0x14];
    } D6B2A4_W;
    extern D63940_t D_80063940[];
    extern D6B2A4_W D_8006B2A4[];
    extern u8 D_80085428[];
    extern void func_800D4F74();
    u8 *base = D_80085428;
    u8 *p = base + (((arg0 & 0x7F) - 1) * 0x7C + (arg0 >> 7) * 0x2E8);
    s32 x = p[0x5FD];
    s32 y = p[0x5FE];
    s32 n = (D_8006B2A4[(D_80063940[p[0x5E8]].unk8 >> 17) & 0x7F].unk10 >> 11) & 0xF;
    s32 r;
    s32 j;

    for (r = 1; r <= n; r++) {
        for (j = 0; j < r; j++) {
            s32 k = r - j;
            func_800D4F74(arg0, arg1, (x + j) & 0xFF, (y + k) & 0xFF);
            func_800D4F74(arg0, arg1, (x - j) & 0xFF, (y - k) & 0xFF);
            func_800D4F74(arg0, arg1, (x + k) & 0xFF, (y - j) & 0xFF);
            func_800D4F74(arg0, arg1, (x - k) & 0xFF, (y + j) & 0xFF);
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74", func_800D6A4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74", func_800D6DA4);

u8 func_800D72CC(u8 arg0, void *arg1) {
    extern s8 D_80119658[];
    extern u8 D_80119659[];
    func_8001A998(arg1, 0xA9);
    (*D_80119658) = 0;
    (*D_80119659) = 0;
    func_800D6DA4(arg0 & 0xFF, arg1);
    return (*D_80119659);
}

u8 func_800D7328(u8 arg0, void *arg1) {
    extern s8 D_80119658[];
    extern u8 D_80119659[];
    func_8001A998(arg1, 0xC);
    (*D_80119658) = 1;
    (*D_80119659) = 0;
    func_800D6DA4(arg0 & 0xFF, arg1);
    return (*D_80119659);
}

u8 func_800D7388(u8 *arg0, s32 arg1) {
    extern u8 D_80119658[];
    extern u8 D_80119659[];
    extern u8 (*D_80118C18[])[13][4];
    u8 v = D_80118C18[0][arg0[0x15]][arg0[0x16]][3];
    func_8001A998(arg1, 0xC);
    D_80119658[0] = 1;
    D_80119659[0] = 0;
    func_800D6DA4(v, arg1);
    return D_80119659[0];
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74", func_800D741C);

u8 func_800D76D8(u8 arg0, s32 arg1) {
    typedef struct {
        u8 pad0[0x10];
        u32 pad10 : 15;
        u32 a : 2;
        u32 b : 4;
        u32 pad10_hi : 11;
        u8 pad14[0x58 - 0x14];
    } D6B2A4_B;
    extern D63940_t D_80063940[];
    extern D6B2A4_B D_8006B2A4[];
    extern u8 D_80085428[];
    extern u8 D_80119658[];
    extern u8 D_80119659[];
    D63940_t *data = D_80063940;
    u8 *base = D_80085428;
    u8 *p = base + (((arg0 & 0x7F) - 1) * 0x7C + ((arg0 & 0xFF) >> 7) * 0x2E8);
    D6B2A4_B *s0 = &D_8006B2A4[(data[p[0x5E8]].unk8 >> 17) & 0x7F];
    u32 a = s0->a;
    u32 b = s0->b;

    s0->a = 0;
    s0->b = 2;
    func_8001A998(arg1, 0xA9, data);
    D_80119658[0] = 0;
    D_80119659[0] = 0;
    func_800D6DA4(arg0, arg1);
    s0->a = a;
    s0->b = b;
    return D_80119659[0];
}

u8 func_800D783C(u8 arg0, s32 arg1) {
    typedef struct {
        u8 pad0[0x10];
        u32 pad10 : 15;
        u32 a : 2;
        u32 b : 4;
        u32 pad10_hi : 11;
        u8 pad14[0x58 - 0x14];
    } D6B2A4_B;
    extern D63940_t D_80063940[];
    extern D6B2A4_B D_8006B2A4[];
    extern u8 D_80085428[];
    extern u8 D_80119658[];
    extern u8 D_80119659[];
    D63940_t *data = D_80063940;
    u8 *base = D_80085428;
    u8 *p = base + (((arg0 & 0x7F) - 1) * 0x7C + ((arg0 & 0xFF) >> 7) * 0x2E8);
    D6B2A4_B *s0 = &D_8006B2A4[(data[p[0x5E8]].unk8 >> 17) & 0x7F];
    u32 a = s0->a;
    u32 b = s0->b;

    s0->a = 0;
    s0->b = 2;
    func_8001A998(arg1, 0xA9, data);
    D_80119658[0] = 1;
    D_80119659[0] = 0;
    func_800D6DA4(arg0, arg1);
    s0->a = a;
    s0->b = b;
    return D_80119659[0];
}

typedef struct {
    s16 score;
    u8 pad[0x10C];
} ChessBest;
typedef struct {
    u8 pad0[0x39A];
    u8 unk39A;
    u8 pad39B[0x4A0 - 0x39B];
    ChessBest best;
    ChessBest cur;
} ChessWork79A4;
extern s16 func_800D113C(void);
s32 func_800D79A4(void) {
    extern ChessWork79A4 D_80118C18;
    s16 v = func_800D113C();

    D_80118C18.cur.score = v;
    if (D_80118C18.unk39A == 0) {
        if (v > D_80118C18.best.score) {
            D_80118C18.best = D_80118C18.cur;
            return 1;
        }
    } else {
        if (v < D_80118C18.best.score) {
            D_80118C18.best = D_80118C18.cur;
            return 1;
        }
    }
    return 0;
}

u32 func_800D7B80(u8 arg0, u8 arg1) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_80085428[];
    u8 *table = D_8006B2A4;
    D63940_t *data = (D63940_t *)D_80063940;
    u8 *base = D_80085428;
    u8 *battle;
    u8 *p;
    u16 amount;
    s16 result;
    s32 kind;

    battle = base + (((arg0 & 0x7F) - 1) * 0x7C + (arg0 >> 7) * 0x2E8);
    p = table + ((data[battle[0x5E8]].unk8 >> 17) & 0x7F) * 0x58;
    amount = *(u16 *)(p + 0x14);
    kind = *(u32 *)(p + 0x10) >> 29;
    switch (kind) {
    case 1:
        result = amount;
        break;
    case 2:
        result = arg1 + amount;
        break;
    case 3:
        result = arg1 + (arg1 * (s16)amount) / 100;
        break;
    default:
        result = arg1;
        break;
    }
    if (result >= 0) {
        if (result >= 0x100) {
            result = 0xFF;
        }
    } else {
        result = 0;
    }
    return result & 0xFF;
}

s32 func_800D7CC4(s16 arg0) {
    return func_800202A4(0x64) < arg0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74", func_800D7CFC);

u8 func_800D7E94(u32 arg0, u8 arg1) {
    extern u8 D_80085428[];
    extern u32 func_800D7B80();
    extern u8 func_800D23F0();
    u32 a = arg0 & 0xFF;
    u8 *base = D_80085428;
    u32 side1;
    u8 *p1 = base + (((arg0 & 0x7F) - 1) * 0x7C + (side1 = a >> 7) * 0x2E8);
    u32 r = func_800D7B80(a, p1[0x5F7]);
    u8 *p2 = base + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
    return func_800D23F0(side1, r & 0xFF, p2[0x5F8]);
}

u32 func_800D7F64(u8 arg0, u8 arg1) {
    extern u8 D_80085428[];
    extern u8 (*D_80118C18[])[13][4];
    extern u32 func_800D7B80();
    extern s32 func_800D23F0();
    u8 *base = D_80085428;
    u32 side;
    u8 *p1 = base + (((arg0 & 0x7F) - 1) * 0x7C + (side = (arg0 & 0xFF) >> 7) * 0x2E8);
    u8 a = p1[0x5FD];
    u8 b = p1[0x5FE];
    u32 r = func_800D7B80(arg0 & 0xFF, p1[0x5F7]);
    u32 res;

    if (((*(u32 *)D_80118C18[0][a][b] >> 6) & 0x1FFF) != 2) {
        u8 *p2 = base + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
        res = (u8)((s16)func_800D23F0(side, r & 0xFF, p2[0x5F8]) / 2);
    } else {
        u8 *p2 = base + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
        res = (u8)func_800D23F0(side, r & 0xFF, p2[0x5F8]);
    }
    return res;
}

static inline u8 is_lt_800D80F8(s32 a, s32 b) {
    if (a < b) {
        return 1;
    }
    return 0;
}
u8 func_800D80F8(u32 arg0, u8 arg1) {
    typedef struct { u8 pad[0x14]; u16 unk14; u8 pad2[0x58 - 0x16]; } D6B2A4_t;
    extern D63940_t D_80063940[];
    extern D6B2A4_t D_8006B2A4[];
    extern u8 D_80085428[];
    extern s32 func_800202A4(s32);
    u8 *base = D_80085428;
    u8 *p1 = base + (((arg0 & 0x7F) - 1) * 0x7C + ((arg0 & 0xFF) >> 7) * 0x2E8);
    u8 *p2 = base + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
    s32 s0 = D_8006B2A4[(D_80063940[p1[0x5E8]].unk8 >> 17) & 0x7F].unk14 + (p1[0x5FA] - p2[0x5FA]) * 5;
    s32 v = (s16)s0;
    s32 r;
    if (v > 0) {
        if (v >= 0x65) {
            s0 = 0x64;
        }
    } else {
        s0 = 1;
    }
    r = func_800202A4(0x64);
    {
        register s32 t asm("s0") = s0 << 16;
        s0 = t >> 16;
    }
    if (is_lt_800D80F8(r, s0)) {
        u8 *b = D_80085428;
        u8 *q;
        b[0xCDE] = 1;
        q = b + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
        return q[0x5F6];
    }
    return 1;
}

static inline s16 finish_800D82A0(s32 value, u8 arg1) {
    extern u8 D_80085428[];
    register s32 v asm("a3") = value;
    register s32 cmp asm("a2") = (s16)v;
    u8 *base2 = D_80085428;
    u8 *p2 = base2 + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
    if (p2[0x5F1] < cmp) {
        v = ((volatile u8 *)p2)[0x5F1];
    }
    return v - p2[0x5F6];
}
INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4__800D3274__800D33B0__800D4F74", func_800D82A0);

s32 func_800D8490(u8 arg0, u32 arg1) {
    extern u8 D_80085428[];
    u8 *base = D_80085428;
    u8 *p = base + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
    u8 r = func_800D7B80(arg0 & 0xFF, p[0x5F7]);
    return r - p[0x5F7];
}

s32 func_800D8508(u8 arg0, u32 arg1) {
    extern u8 D_80085428[];
    extern u32 func_800D7B80();
    u8 *base = D_80085428;
    s32 i = ((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8;
    u8 *q = base + i;
    u32 r = func_800D7B80(arg0, q[0x5F8]);
    return (r & 0xFF) - q[0x5F8];
}
