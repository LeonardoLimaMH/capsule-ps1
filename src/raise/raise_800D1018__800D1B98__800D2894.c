#include "common.h"

/* registro de 0x79C bytes; o campo 0x798 é lido como palavra ou como byte */
typedef struct {
    u8 _p0[0x2BC];
    s32 unk_2BC;
    u8 _p2C0[0x64];
    s16 unk_324;
    u16 unk_326;
    s16 unk_328;
    u8 _p32A[0x1A];
    s16 unk_344;
    u8 _p346[0x452];
    union {
        u32 w;
        u8 b;
    } f_798;
} S_80100F38;

typedef struct {
    u8 pad_0[0x10];
    u16 unk_10;
    u8 pad_12[0x7E];
    u16 unk_90;
    u8 pad_92[0x116];
} Slot_80091618;
extern S_80100F38 D_80100F38[];

typedef struct {
    u8 pad[0x8B];
    u8 grid[2][8][8];
} S_800EFF58;

typedef struct {
    u8 _p0[0x64];
    s32 f_64;
    s32 f_68;
    s32 f_6C;
    s32 f_70;
} Struct_80069E4C;

typedef struct {
    u8 _p0[0x54];
    s32 f_54;
    u8 _p58[0xE0 - 0x58];
    s32 f_E0;
} Struct_80069AD4;


typedef struct { u8 pad[0x386]; s16 field; u8 tail[0x414]; } Record_800D2894;

void func_800D2894(s32 unused, s32 player) {
    u32 offset = (player) * 0x79C;
    u32 base = (u32)D_80100F38;
    Record_800D2894 *record = (Record_800D2894 *)(base + offset);
    record->field--;
}

s32 func_800D28D0(s32 arg0) {
    extern u8 D_80091618[];
    register s32 k asm("a0") = func_800B1260(arg0);
    Slot_80091618 *slots = (Slot_80091618 *)D_80091618;

    if (slots[(u16)k].unk_90 != 0) {
        k = func_800B12D8(arg0);
    }
    {
        register u32 index asm("v0") = (u16)k;
        return slots[index].unk_10 == 0;
    }
}

s32 func_800D297C(void) {
    extern u8 D_80063940[], D_80091618[];
    u32 id = (u16)func_800B1260();

    if (id != 0xFFFF) {
        id = *(u16 *)(D_80091618 + id * 0x1A8);
        if (id != 0xFFFF) {
            u8 *base = D_80063940;
            u8 *q = id * 0x3C + base;
            return (*(u32 *)(q + 0x18) & 3) == 2;
        }
    }
    return 0;
}

s32 func_800D2A10(void) {
    extern u8 D_80063940[], D_80091618[];
    u32 id = (u16)func_800B1260();

    if (id != 0xFFFF) {
        id = *(u16 *)(D_80091618 + id * 0x1A8);
        if (id != 0xFFFF) {
            u8 *base = D_80063940;
            u8 *q = id * 0x3C + base;
            return (*(u32 *)(q + 0x18) & 3) == 1;
        }
    }
    return 0;
}

s32 func_800D2AA4(void) {
    extern u8 D_80063940[], D_80091618[];
    u32 id = (u16)func_800B1260();

    if (id != 0xFFFF) {
        id = *(u16 *)(D_80091618 + id * 0x1A8);
        if (id != 0xFFFF) {
            u8 *base = D_80063940;
            u8 *q = id * 0x3C + base;
            return (*(u32 *)(q + 0x18) & 3) == 0;
        }
    }
    return 0;
}

s32 func_800D2B34(void) {
    u32 id = func_800B1260() & 0xFFFF;

    if (id != 0xFFFF) {
        u8 *p = (u8 *)&D_80100F38[id];
        s32 res = func_800CE128(*(s16 *)(p + 0x326));
        if (res == 2 || res == 6) {
            return 1;
        }
    }
    return 0;
}

s32 func_800D2BB8(s32 arg0) {
    extern u8 D_80063940[], D_80091618[];
    register s32 k asm("a0") = func_800B1260(arg0);
    Slot_80091618 *slots = (Slot_80091618 *)D_80091618;
    u32 id;
    register s32 r asm("v0");
    if (slots[(u16)k].unk_90 != 0) k = func_800B12D8(arg0);
    {
        register u32 index asm("v0") = (u16)k;
        if (slots[index].unk_10 != 0) return 0;
    }
    {
        u32 index = (u16)func_800B1260(arg0);
        r = 0;
        if (index != 0xFFFF) {
            u32 mon = *(u16 *)&slots[index];
            r = 0;
            if (mon != 0xFFFF) {
                u8 *base = D_80063940;
                u8 *q = mon * 0x3C + base;
                r = (*(u32 *)(q + 0x18) & 3) == 2;
            }
        }
    }
    if (r) return 1;
    id = (u16)func_800B1260(arg0);
    if (id == 0xFFFF || (id = *(u16 *)(D_80091618 + id * 0x1A8)) == 0xFFFF) {
        r = 0;
    } else {
        u8 *base = D_80063940;
        u8 *q = id * 0x3C + base;
        r = (*(u32 *)(q + 0x18) & 3) == 1;
    }
    return r << 1;
}

s32 func_800D2D6C(s32 arg0) {
    extern u8 D_80063940[];
    extern u8 D_80091618[];
    u32 id;
    register s32 r asm("v0");
    id = (u16)func_800B1260(arg0);
    if (id == 0xFFFF || (id = *(u16 *)(D_80091618 + id * 0x1A8)) == 0xFFFF) {
        r = 0;
    } else {
        u8 *base = D_80063940;
        u8 *q = id * 0x3C + base;
        r = (*(u32 *)(q + 0x18) & 3) == 2;
    }
    if (r) return 1;
    id = (u16)func_800B1260(arg0);
    if (id == 0xFFFF || (id = *(u16 *)(D_80091618 + id * 0x1A8)) == 0xFFFF) {
        r = 0;
    } else {
        u8 *base = D_80063940;
        u8 *q = id * 0x3C + base;
        r = (*(u32 *)(q + 0x18) & 3) == 1;
    }
    return r << 1;
}

s32 func_800D2E90(s32 arg0) {
    extern u8 D_80063940[];
    extern u8 D_80091618[];
    u32 id;
    register s32 r asm("v0");
    id = (u16)func_800B1260(arg0);
    if (id == 0xFFFF || (id = *(u16 *)(D_80091618 + id * 0x1A8)) == 0xFFFF) {
        r = 0;
    } else {
        u8 *base = D_80063940;
        u8 *q = id * 0x3C + base;
        r = (*(u32 *)(q + 0x18) & 3) == 0;
    }
    if (r) return 1;
    id = (u16)func_800B1260(arg0);
    if (id == 0xFFFF || (id = *(u16 *)(D_80091618 + id * 0x1A8)) == 0xFFFF) {
        r = 0;
    } else {
        u8 *base = D_80063940;
        u8 *q = id * 0x3C + base;
        r = (*(u32 *)(q + 0x18) & 3) == 1;
    }
    return r << 1;
}

s32 func_800D2FB0(s32 arg0, s32 arg1) {
    register s32 r asm("s0") = 0xFF;
    u8 *p = (u8 *)&D_80100F38[(u16)func_800B1260(arg0)];
    switch (arg1) {
    case 1:
        if (*(s16 *)(p + 0x332) == 8) break;
        if (*(s16 *)(p + 0x334) != 1) {
            r = func_800D30B0(arg0, 1, -1);
            if ((s16)r < 0) break;
        }
        r = 0xFF;
        break;
    case 5:
        if (*(s16 *)(p + 0x332) != 1 && *(s16 *)(p + 0x334) != 8) {
            r = func_800D30B0(arg0, -1, 1);
            if ((s16)r < 0) break;
        }
        r = 0xFF;
        break;
    }
    return (s16)r;
}

s32 func_800D30B0(s32 a0, s32 a1, s32 a2) {
    extern u8 D_80091618[], D_800EF364[];
    register s32 k asm("a3") = func_800B1260(a0);
    u8 *p = (u8 *)D_80100F38 + (u16)k * 0x79C;
    Slot_80091618 *slots = (Slot_80091618 *)D_80091618;
    register u8 *base asm("a3");
    register s32 r asm("t0");
    register s32 c asm("a2");
    register s32 x asm("a0");
    register s32 y asm("a1");
    register s32 result asm("v0");
    s32 d;
    u8 b;

    if (slots[(u16)k].unk_90 != 0) k = func_800B12D8(a0);
    d = a1 - 1;
    x = *(u16 *)(p + 0x332);
    y = *(u16 *)(p + 0x334);
    x += d;
    r = x;
    d = a2 - 1;
    y += d;
    c = y;
    {
        register u32 id asm("v1") = (u16)k;
        base = slots[id].unk_10 * 64 + D_800EF364;
    }
    x = (s16)x * 8 + (s32)base;
    x += (s16)y;
    b = *(u8 *)x;
    result = 0xFF;
    if (b == result) {
        u8 *loopbase = base;
        *(u16 *)(p + 0x382) = 1;
        do {
            s32 row = r + a1;
            r = row;
            y = c + a2;
            row = (s16)row * 8;
            *(u16 *)(p + 0x382) += 1;
            b = loopbase[row + (s16)y];
            c = y;
        } while (b == 0xFF);
        result = -b;
    }
    return (s16)result;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D324C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D341C);

s32 func_800D3940(void) {
    return 0;
}

s32 func_800D3948(s32 a0) {
    extern u8 D_80091618[];
    extern u8 D_800EFF58[][8][8];
    extern u8 D_800EF364[][8][8];
    extern u16 D_8006AF80[];
    extern s32 func_800B1260(s32), func_800B12D8(s32);

    u16 val;
    s32 side;
    s32 k;
    Slot_80091618 *slots;
    u8 *p;
    s32 row, col;
    u16 k2;
    u8 *q2;
    u8 (*grid)[8][8];
    u8 *cell;

    k = func_800B1260(a0);
    val = 1;
    side = val - a0;
    p = (u8 *)&D_80100F38[(u16)k];
    slots = (Slot_80091618 *)D_80091618;

    if (slots[(u16)k].unk_90 != 0) {
        k = func_800B12D8(a0);
        side = a0;
    }
    row = *(s16 *)(p + 0x336);
    col = *(s16 *)(p + 0x338);
    if (D_800EF364[slots[(u16)k].unk_10][row][col - 9] == 0xFF) {
        return 0;
    }
    grid = D_800EFF58;
    cell = (u8 *)((u16)side * 64 + (u32)grid);
    cell = cell + row * 8;
    cell = cell + col;
    if (cell[0x8B] == val) {
        return *(s16 *)(p + 0x326);
    }
    if (*(u16 *)((u8 *)&slots[D_8006AF80[0]] + 0x8A) == 0xFFFF) {
        return -1;
    }
    val = func_800B1260(a0);
    p = (u8 *)&D_80100F38[val];
    k2 = func_800B12D8(a0);
    q2 = (u8 *)&D_80100F38[k2];
    if (slots[val].unk_90 == slots[k2].unk_90) {
        return -1;
    }
    if (*(s16 *)(p + 0x336) == *(s16 *)(q2 + 0x336) && *(s16 *)(p + 0x338) == *(s16 *)(q2 + 0x338)) {
        return *(s16 *)(p + 0x326);
    }
    if (*(s16 *)(p + 0x336) == *(s16 *)(q2 + 0x332) && *(s16 *)(p + 0x338) == *(s16 *)(q2 + 0x334)) {
        return *(s16 *)(p + 0x326);
    }
    return -1;
}

s32 func_800D3BD8(s32 arg0) {
    extern u8 D_80091618[];
    register Slot_80091618 *slots asm("a0");
    Slot_80091618 *slot;
    s32 k = func_800B1260(arg0);

    slots = (Slot_80091618 *)D_80091618;
    slot = &slots[(u16)k];
    if (slot->unk_90 != 0) {
        register s32 new_k asm("a0") = func_800B12D8(arg0);
        if ((u16)new_k == 0xFFFF) {
            slot->unk_90 = 0;
        } else {
            k = new_k;
        }
    }
    {
        register Slot_80091618 *s asm("a0") = (Slot_80091618 *)D_80091618;
        return s[(u16)k].unk_10 == 0;
    }
}

s32 func_800D3CB0(s32 arg0) {
    extern s32 D_8008ED80[];
    s32 n = 7;
    s32 id = func_800B1260(arg0);
    s32 i = 0;
    u8 *p = (u8 *)&D_80100F38[(u16)id];
    u8 *q = p;
    u32 pos;
    short v;

    do {
        *(s16 *)(q + 0x346) = func_800D3DC0(arg0, i);
        i += 1;
        q += 2;
    } while (i < 8);

    pos = rand() + D_8008ED80[0];
    pos &= 7;
    v = *(s16 *)(p + pos * 2 + 0x346);
    while (v == -1) {
        pos = (pos == 7) ? 0 : (pos + 1);
        if (n == 0) {
            return -1;
        }
        v = *(s16 *)(p + pos * 2 + 0x346);
        n--;
    }
    return pos;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D3DC0);

s32 func_800D3F88(s32 a0, s32 a1, s32 a2) {
    extern u8 D_80091618[], D_800EF364[], D_800EFF58[];
    extern u16 D_8006AF80[];
    register s32 k asm("a2") = func_800B1260(a0);
    register s32 side asm("a3") = 1 - a0;
    u8 *p = (u8 *)D_80100F38 + (u16)k * 0x79C;
    Slot_80091618 *slots = (Slot_80091618 *)D_80091618;
    u32 r, c;
    register s32 d asm("v0");
    register s32 x asm("a1"), y asm("a0");
    s16 row, col;
    register s32 b asm("s1");
    u16 k1, k2;
    u8 *q2;
    if (slots[(u16)k].unk_90 != 0) {
        k = func_800B12D8(a0);
        side = a0;
    }
    d = a1 - 1;
    {
        register u32 id asm("v1") = (u16)k;
        register Slot_80091618 *slot asm("v0");
        register u8 *grid asm("v1");
        u8 *base;
        x = *(u16 *)(p + 0x332);
        y = *(u16 *)(p + 0x334);
        x += d;
        d = a2 - 1;
        y += d;
        slot = &slots[id];
        grid = D_800EF364;
        r = x;
        base = slot->unk_10 * 64 + grid;
        row = x;
        {
            register s32 rowoff asm("a2") = row * 8;
            u8 *at = rowoff + base;
            col = y;
            b = *(at + col);
        }
        c = y;
    }
    if (b != 0xFF) {
        {
            register u8 *flags asm("v0") = D_800EFF58;
            u8 *at = (u16)side * 64 + flags;
            at += 0x94;
            if (*(row * 8 + at + col) == 1) return -1;
        }
        if (*(u16 *)((u8 *)&slots[D_8006AF80[0]] + 0x8A) != 0xFFFF) {
            k1 = func_800B1260(a0);
            k2 = func_800B12D8(a0);
            q2 = (u8 *)&D_80100F38[k2];
            if (slots[k1].unk_90 != slots[k2].unk_90) {
                if (row == *(s16 *)(q2 + 0x336) - 1 && col == *(s16 *)(q2 + 0x338) - 1)
                    b = -1;
                else if ((s16)r == *(s16 *)(q2 + 0x332) - 1 && (s16)c == *(s16 *)(q2 + 0x334) - 1)
                    b = -1;
            }
        }
    }
    return (s16)b;
}

s32 func_800D4258(s32 param_1) {
    extern u8 D_80091618[];
    extern u8 D_800EF524[];
    extern s32 D_800FDE08[];
    extern s32 D_800FAE10[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    u32 k = (u16)func_800B1260(param_1);
    s32 t7;
    register u32 t6 asm("t6");
    register s32 t3 asm("t3");
    register s32 t2 asm("t2");
    register u8 *t0 asm("t0");
    register u8 *a0 asm("a0");
    register u8 *t1 asm("t1");
    register u8 *a2 asm("a2");
    register u32 t5 asm("t5");
    register u8 *t4 asm("t4");
    register u32 a3 asm("a3");
    register u32 a1 asm("a1");

    if (k == 0xFFFF) {
        return 0;
    }

    {
        register s32 v0_temp asm("v0") = param_1 != 1;
        t7 = v0_temp;
    }
    t6 = 0xFFFF;
    t3 = -1;
    t2 = 1;

    {
        register u32 off asm("v0") = k * 0x1A8;
        register u8 *v1_base asm("v1") = D_80091618;
        t0 = off + (u32)v1_base;
    }
    a0 = t0;
    t1 = D_800EF524;
    a2 = t1;
    t5 = *(u16 *)(t0 + 0x10);
    t4 = t0 + 0xC;
    a3 = (u16)t5;
    {
        register u32 off2 asm("v0");
        off2 = a3 * 4 + a3;
        off2 = off2 * 8 - a3;
        a1 = off2 * 4;
    }

    do {
        s32 v0;
        if (a3 == t6) {
            v0 = *(s32 *)(a2 + 0x444);
        } else {
            v0 = *(s32 *)(t1 + a1);
        }
        if (v0 != t3) {
            register u8 *v1 asm("v1") = *(u8 **)(a0 + 0x18C);
            *(u16 *)(v1 + 0x4C) = t2 - *(u16 *)(v1 + 0x4C);
        }
        *(s32 *)(a0 + 0x18C) = 0;
        a0 += 4;
        a1 += 0x34;
        a2 += 0x34;
    } while ((s32)a0 < (s32)t4);

    if (t5 != 0xFFFF) {
        register s32 mask asm("a0") = ~0x100;
        u8 *p1 = *(u8 **)(t0 + 0x178);
        u32 v1 = *(u32 *)(p1 + 0x34);
        *(u32 *)(p1 + 0x34) = (v1 & mask) | ((((v1 >> 8) & 1) ^ 1) << 8);
        {
            register u32 off asm("v1") = t7 * 4;
            *(s32 *)(t0 + 0x178) = 0;
            *(s32 *)((u8 *)D_800FDE08 + off) = 0;

            p1 = *(u8 **)(t0 + 0x17C);
            v1 = *(u32 *)(p1 + 0x34);
            *(u32 *)(p1 + 0x34) = (v1 & mask) | (((~(v1 >> 8)) & 1) << 8);
            *(s32 *)(t0 + 0x17C) = 0;
            *(s32 *)((u8 *)D_800FAE10 + off) = 0;
        }
    }

    *D_800EFA4A = 0;
    *D_800EFA4C = 0;
    return 1;
}

s32 func_800D43FC(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4404);

s32 func_800D46A4(void) {
    extern s16 D_80078C28[];
    extern u16 D_800F1D14[];
    extern u16 D_800EF2D8[];
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern u8 D_800900C0[];
    extern u8 D_800EF524[];
    extern s16 D_80078C26[];
    extern s32 D_800EEBA8[];
    extern s32 D_800F0578[];
    extern s32 D_800F0550[];
    extern s32 D_80078C34[];
    extern void func_800B9F50(s32);
    extern void func_800D4404(s32, s32);
    extern void func_800B4C40(s32);
    extern void func_80024990(s32, s32, s32, s32);
    extern void func_800282A0(s32);

    register s32 i asm("a3");
    register u8 *slots asm("t3");
    register s32 val_80 asm("t1");
    register s32 val_28 asm("t2");
    register u8 *a2 asm("a2");
    register u8 *t0 asm("t0");

    if (*D_80078C28 != 0) {
        return 0;
    }

    if (*D_800F1D14 != 0) {
        *D_800F1D14 -= 1;
        return 0;
    }

    *D_800F1D14 = 0x10;
    *D_8006AF80 = *D_800EF2D8;
    func_800B9F50(1);
    func_800D4404(7, 1);
    func_800B4C40(*D_8006AF80);

    i = 0;
    {
        register u8 *v0 asm("v0") = D_80091618;
        slots = v0;
    }
    val_80 = 0x80;
    val_28 = 0x28;
    {
        register u8 *v0 asm("v0") = D_800900C0;
        a2 = v0;
    }
    {
        register u8 *v0 asm("v0") = D_800EF524;
        t0 = v0;
    }

    do {
        register u8 *obj asm("a0");
        u8 *slot;
        s32 count;
        s32 ptr;
        register s32 j asm("a1");
        u32 id;

        {
            register s32 minus_one asm("v0") = -1;
            *(s32 *)(t0 + 0x448) = minus_one;
        }
        {
            register u16 *p_af80 asm("v0") = D_8006AF80;
            id = *p_af80;
        }
        {
            register u32 off asm("v0") = id * 0x1A8;
            slot = off + (u32)slots;
        }
        obj = *(u8 **)(slot + i * 4 + 0x18C);
        {
            register s32 mask asm("v1") = ~8;
            *(u32 *)(obj + 0x50) = *(u32 *)(obj + 0x50) & mask;
        }

        count = *(s32 *)(a2 + 0xC);
        ptr = *(s32 *)(a2 + 0xA0);
        j = 0;
        if (count > 0) {
            u8 *p = (u8 *)ptr;
            do {
                j++;
                p[0x2A] = val_80;
                p[0x29] = val_80;
                p[0x28] = val_80;
                p[0x2B] = val_28;
                p += 0x2C;
            } while (j < count);
        }
        a2 += 0xBC;
        i++;
        t0 += 0x34;
    } while (i < 2);

    {
        u8 *grid = D_800EF524;
        register s32 a3_arg asm("a3") = 12;
        if (*D_80078C26 == 3) {
            a3_arg = 10;
        }
        func_80024990(*(s32 *)(grid + 0x474), 1, 0x32, a3_arg);
    }
    *D_800EEBA8 = 0;
    *D_800F0550 = *D_800F0578;
    if (*D_80078C34 != 0x7006) {
        func_800282A0(0x7006);
    }
    return 1;
}

s32 func_800D4858(void) {
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4860);

void func_800D4B7C(s32 unused_arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;
    void *temp_s0;

    temp_a1 = arg1 & 0xFFFF;
    temp_s0 = (temp_a1 * 0x79C) + (u8 *)D_80100F38;
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x180);
    if (temp_a0 != 0) {
        func_80013928(temp_a0, temp_a1);
        M2C_FIELD(temp_s0, s32 *, 0x180) = 0;
    }
}

void *func_800D4BE4(void) {
    typedef struct Obj {
        u8 pad0[0x18];
        s32 unk18;
        s32 unk1C;
        u8 pad20[0x10];
        s32 unk30;
        s32 unk34;
        s32 unk38;
    } Obj;
    extern void func_800D4EC0();
    extern void func_800161C4();
    extern void *func_80015B3C();
    extern void func_80015EF8();
    extern s32 func_80019F30();
    extern s32 D_800EE5D0[];
    extern s32 D_800EF320[];
    extern s16 D_80078C20[];

    Obj *obj = (Obj *)func_80015B3C(func_800D4EC0, func_800161C4, 1);
    if (obj != NULL) {
        s32 arg1;
        s32 f30, f34, f38;
        func_80015EF8(obj);
        arg1 = D_800EE5D0[3] + *D_800EF320;
        obj->unk18 = func_80019F30(D_800EE5D0[0] | 0x60000, arg1);
        f30 = obj->unk30;
        f34 = obj->unk34;
        obj->unk1C = 0;
        f30 &= ~0x1C0;
        f30 = (f30 & ~0x30) | 0x20;
        f34 &= ~0x100;
        f30 &= ~8;
        obj->unk30 = f30;
        f34 |= (*D_80078C20 & 1) << 8;
        f38 = obj->unk38;
        obj->unk34 = f34;
        obj->unk38 = (f38 | 1) & ~0x30 & ~0x40;
    }
    return obj;
}

void *func_800D4CC4(s32 arg0) {
    typedef struct {
        u8 pad0[0x178];
        s32 unk178;
        u8 pad17C[0x1C];
        s16 unk198;
        s16 unk19A;
        u8 pad19C[0xC];
    } Slot_1A8;
    typedef struct {
        u8 pad0[0x18];
        s32 unk18;
        u8 pad1C[0x18];
        u32 unk34;
        u32 unk38;
    } Obj;
    typedef struct {
        u8 pad0[0x784];
        s32 table[100][2];
    } S_EEB9C;

    extern s32 func_800B1260();
    extern s32 func_80019F30();
    extern void func_800C5850();
    extern u8 D_80091618[];
    extern s32 D_800EE5D0[];
    extern S_EEB9C D_800EEB9C;

#define SLOT(id) ((Slot_1A8 *)(D_80091618 + ((id) & 0xFFFF) * 0x1A8))

    s32 s2 = func_800B1260(arg0);
    u8 *rec = (u8 *)D_80100F38 + (s2 & 0xFFFF) * 0x79C;

    if (SLOT(s2)->unk198 != -1) goto do_work;
    if (SLOT(s2)->unk19A != -1) goto do_work;

    (*(Obj **)(rec + 0x184))->unk38 |= 1;
    goto done;

do_work: {
        register u8 *base asm("a0") = D_80091618;
        Slot_1A8 *slot2 = (Slot_1A8 *)(base + (s2 & 0xFFFF) * 0x1A8);
        s32 s1;
        s32 idx = slot2->unk198;
        s32 val;
        register u32 k asm("a0");

        if (idx != -1) {
            s1 = 0;
        } else {
            idx = slot2->unk19A;
            s1 = 1;
        }

        val = D_800EEB9C.table[idx][s1];
        (*(Obj **)(rec + 0x184))->unk18 = func_80019F30(D_800EE5D0[0] | 0x60000, D_800EE5D0[3] + val);
        (*(Obj **)(rec + 0x184))->unk38 &= ~1;
        (*(Obj **)(rec + 0x184))->unk34 = ((*(Obj **)(rec + 0x184))->unk34 & ~0xC00) | (s1 << 10);
        
        k = s2 & 0xFFFF;
        (*(Obj **)(rec + 0x184))->unk34 = ((*(Obj **)(rec + 0x184))->unk34 & 0xFFFF0FFF) | ((k & 0xF) << 12);
        *(s32 *)(rec + 0x188) = 0;
        func_800C5850(((Slot_1A8 *)(D_80091618 + k * 0x1A8))->unk178, *(Obj **)(rec + 0x184), 0, 0, -1);
    }

done:
    return *(Obj **)(rec + 0x184);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4EC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D533C);

s32 func_800D5530(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D5538);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D5658);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D577C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D5A94);

u8 *func_800D5C10(s32 idx) {
    u8 *rec = (u8 *)D_80100F38 + (idx & 0xFFFF) * 0x79C;

    *(s16 *)(rec + 0x396) = 0;
    return rec;
}

void func_800D5C44(s32 idx) {
    extern u8 D_8008EE6A[];
    u8 *rec = (u8 *)D_80100F38 + (idx & 0xFFFF) * 0x79C;

    *(s16 *)(rec + 0x39C) = 0;
    *D_8008EE6A = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D5C80);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D613C);

s32 func_800D6848(s32 arg0) {
    extern s32 D_800F1D1C[][2];
    s32 val;
    s32 a0 = arg0 & 0x3F;

    if ((u32)a0 <= 0x10) {
        val = D_800F1D1C[a0][1];
    } else if (a0 <= 0x20) {
        val = D_800F1D1C[0x20 - a0][1];
    } else if (a0 <= 0x30) {
        val = -D_800F1D1C[a0 - 0x20][1];
    } else {
        val = -D_800F1D1C[0x40 - a0][1];
    }
    return (s16)val;
}

s32 func_800D68D4(s32 arg0) {
    extern s32 D_800F1D1C[][2];
    s32 val;
    s32 a0 = arg0 & 0x3F;

    if ((u32)a0 <= 0x10) {
        val = D_800F1D1C[a0][0];
    } else if (a0 <= 0x20) {
        val = -D_800F1D1C[0x20 - a0][0];
    } else if (a0 <= 0x30) {
        val = -D_800F1D1C[a0 - 0x20][0];
    } else {
        val = D_800F1D1C[0x40 - a0][0];
    }
    return (s16)val;
}

void func_800D6960(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
    M2C_FIELD(arg0, s8 *, 2) = arg3;
    M2C_FIELD(arg0, s8 *, 3) = 0x38;
}
extern void func_800D0730(s16 *, s32, s32, s32);
extern s32 func_800D6A2C(s32, s32, s32, s32, s32, s32);

s32 func_800D6978(s32 a0, s32 a1, s32 a2) {
    s16 b[4];
    u16 k = a0;
    u8 *p = (u8 *)D_80100F38 + k * 0x79C;
    func_800D0730(b, (s16)(*(u16 *)(p + 0x332) - 1), (s16)(*(u16 *)(p + 0x334) - 1), 0);
    return func_800D6A2C(k, b[0], b[2], 3, (u8)a1, (u16)a2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D6A2C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D827C);

extern s32 D_80069B28[];
extern u8 D_80091618[], D_800EF524[], D_800900C0[];
extern void func_800D8A20(void);
s32 func_800D8440(void) {
    extern s32 D_80069B28[];
    extern u8 D_80091618[];
    extern u8 D_800EF524[];
    extern u8 D_800900C0[];
    s32 i;
    u8 *slots;
    u8 *grid;
    s32 minus_one;

    if (D_80069B28[0] != 0) {
        func_800D8A20();
        return 0;
    }

    i = 1;
    slots = D_80091618;
    grid = D_800EF524;
    minus_one = -1;

    do {
        u16 k = func_800B1260(i);
        if (k != 0xFFFF) {
            register s32 j asm("a2") = 0;
            register u32 off asm("a1") = 0x234;
            u8 *base;
            register u8 *p0 asm("a0");
            u32 unk = *(u16 *)(slots + k * 0x1A8 + 0x10);
            u32 q_off;

            base = D_800900C0;
            p0 = base;
            q_off = unk * 0x9C;

            do {
                if (*(s32 *)((u8 *)q_off + (u32)grid) != minus_one) {
                    register s32 one asm("v0") = 1;
                    if (i == one) {
                        *(s32 *)p0 = minus_one;
                    } else {
                        *(s32 *)(off + (u32)base) = minus_one;
                    }
                }
                off += 0xBC;
                p0 += 0xBC;
                j++;
                q_off += 0x34;
            } while (j < 3);
        }
        i--;
    } while (i >= 0);

    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8558);

s32 func_800D865C(void) {
    extern s32 D_80069B28[];
    extern u8 D_80091618[];
    extern u8 D_800EF524[];
    extern u8 D_800900C0[];
    s32 i;
    u8 *slots;
    u8 *grid;
    s32 minus_one;

    if (D_80069B28[0] != 0) {
        func_800D8A20();
        return 0;
    }

    i = 1;
    slots = D_80091618;
    grid = D_800EF524;
    minus_one = -1;

    do {
        u16 k = func_800B1260(i);
        if (k != 0xFFFF) {
            register s32 j asm("a2") = 0;
            register u32 off asm("a1") = 0x234;
            u8 *base;
            register u8 *p0 asm("a0");
            u32 unk = *(u16 *)(slots + k * 0x1A8 + 0x10);
            u32 q_off;

            base = D_800900C0;
            p0 = base;
            q_off = unk * 0x9C;

            do {
                if (*(s32 *)((u8 *)q_off + (u32)grid) != minus_one) {
                    register s32 one asm("v0") = 1;
                    if (i == one) {
                        *(s32 *)p0 = minus_one;
                    } else {
                        *(s32 *)(off + (u32)base) = minus_one;
                    }
                }
                off += 0xBC;
                p0 += 0xBC;
                j++;
                q_off += 0x34;
            } while (j < 3);
        }
        i--;
    } while (i >= 0);

    return 1;
}

void func_800D8774(s32 mode, s32 a1, s32 a2) {
    extern u8 D_80069E4C[];
    extern s32 D_80069B28[];

    if (mode == 1) {
        goto case_1;
    }
    if (mode < 2) {
        goto set_b28;
    }
    if (mode == 2) {
        goto case_2;
    }
    *D_80069B28 = mode;
    goto end;

case_1:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = *(s32 *)(p + 0x60);
    }
    goto set_b28;

case_2:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = a2;
        *(s32 *)(p + 0x60) = a1;
    }

set_b28:
    *D_80069B28 = mode;

end:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x6C) = 0;
        *(s32 *)(p + 0x70) = 0x10;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D87E8);

void func_800D8A20(void) {
    extern Struct_80069E4C D_80069E4C[];
    extern Struct_80069AD4 D_80069AD4[];

    if (D_80069E4C[0].f_6C == 0) {
        D_80069E4C[0].f_6C = 1;
        D_80069E4C[0].f_70 = 0x10;
        return;
    }

    if (D_80069E4C[0].f_70 >= 9) {
        D_80069AD4[0].f_E0 += (D_80069E4C[0].f_68 - D_80069E4C[0].f_64) / 8;
    } else {
        D_80069AD4[0].f_E0 -= (D_80069E4C[0].f_68 - D_80069E4C[0].f_64) / 8;
    }

    if (--D_80069E4C[0].f_70 == 0) {
        D_80069E4C[0].f_6C = 0;
        D_80069AD4[0].f_54 = 0;
        D_80069AD4[0].f_E0 = D_80069E4C[0].f_64;
    }
}

s32 func_800DBB3C(s16 id);
void func_800D8AF8(u8 *arg0, s32 arg1) {
 extern u8 D_8008F702[];
 extern u8 D_80069E4C[];
 register s32 i asm("t0");
 register s16 *a asm("a2");
 register s16 *b asm("a0");
 register s16 *bp asm("a3");
 register s16 *ap asm("a1");
 u8 *p;
 if(D_8008F702[0]!=1) {
 i=0;
 p=D_80069E4C;
 a=(s16 *)(*(u8 **)(arg0+0xB4)+arg1*32);
 b=(s16 *)(*(u8 **)(arg0+0xB8)+arg1*32);
 bp=b+2;
 ap=a+2;
 do {
 if(*(s32 *)(p+0x70)>=9) {
 a[0]+=b[0]>>7; ap[-1]+=bp[-1]>>7; ap[0]+=bp[0]>>7;
 } else {
 a[0]-=b[0]>>7; ap[-1]-=bp[-1]>>7; ap[0]-=bp[0]>>7;
 }
 i++; ap+=4; a+=4; bp+=4; b+=4;
 } while(i<4);
 }
}

s32 func_800D8BF8(void) {
    extern s32 D_800EE9B8[];
    s32 i;
    for (i = 1; i >= 0; i--) {
        u32 id = (u16)func_800B1260(i);
        if (id != 0xFFFF) {
            u32 w = D_80100F38[id].f_798.w;
            if (((w >> 14) & 0x3F) == 9 && ((w >> 26) & 0x1F) - 10 < 2) {
                if (D_800EE9B8[1 - i] == 0) {
                    continue;
                }
                return 1;
            }
        }
    }
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8CCC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8E90);

void func_800D8FB0(u32 id) {
    extern S_80100F38 D_800F0D40;
    D_80100F38[(u16)id] = D_800F0D40;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D9030);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D926C);

#include "common.h"
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800F1DA4[];
extern u8 *D_800F1DA8[];
extern u8 *func_800D9030(void);

s32 func_800D9888(s32 a0, s32 a1)
{
  int new_var;
  u8 *p = (u8 *)D_80100F38 + ((func_800B1260(a1) & 0xFFFF) * 0x79C);
  new_var = ~1;
  if (a1 == 1)
  {
    u8 *o;
    *D_800F1DA4 = 0;
    o = func_800D9030();
    *D_800F1DA8 = o;
    *((s32 *) (o + 0x38)) &= new_var;
    *((s32 *) (o + 0x34)) |= 0x200;
  }
  return *((s32 *) (p + 0x2BC)) += 1;
}

#include "common.h"

/* rand-u16: 0x8006AF90 1 0,1,2,3 */
extern u8 D_80091618[];
extern u16 D_8006AF90[];
extern s32 D_800EEB64[];
extern s32 func_800B1260(s32);
extern void func_800D1CC4(s32, s32, s32, s32);

s32 func_800D9930(s32 a0, s32 a1)
{
  s16 *new_var3;
  s16 *new_var2;
  s32 k = func_800B1260(a1);
  u8 *new_var;
  u8 *p = (u8 *)D_80100F38 + ((487 * ((u16) k)) * 4);
  if (a1 == 1)
  {
    *D_800EEB64 = a1;
    new_var3 = (s16 *) D_8006AF90;
    if (((s16 *) D_8006AF90)[10] == 0)
    {
      new_var2 = new_var3;
      func_800D1CC4(D_8006AF90[new_var2[0]], 0x26, 4, 1);
    }
  }
  new_var = D_80091618;
  *((u16 *) ((new_var + (((u16) k) * 0x1A8)) + 0x64)) = 0;
  return *((s32 *) (p + 0x2BC)) += 1;
}

#include "common.h"

extern u8 D_80091618[];
extern s32 D_800EEB6C[];
extern s32 func_800B1260(s32);
extern void func_800D4B7C(s32, s32), func_800D1CC4(s32, s32, s32, s32);
extern s32 func_800D0CFC(s32);

s32 func_800D9A20(s32 a0, s32 a1)
{
  u8 *new_var;
  u16 k = func_800B1260(a1);
  u8 *p;
  new_var = D_80091618;
  *((u16 *) ((new_var + (k * 0x1A8)) + 0x66)) = 0;
  *((u16 *) ((new_var + (k * 0x1A8)) + 0x68)) = 0;
  p = (u8 *)D_80100F38 + (k * 0x79C);
  func_800D4B7C(a1, k);
  if (func_800D0CFC(a1) == 0)
  {
    func_800D1CC4(k, 0x1D, 0, 0);
    *D_800EEB6C = 1;
  }
  return *((s32 *) (p + 0x2BC)) += 1;
}

#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) (D_80100F38[func_800B12D8(a) & 0xFFFF].f_798.w)

s32 func_800D9B00(s32 a0, s32 a1)
{
  u8 *p = (u8 *) (&D_80100F38[func_800B1260(a1) & 0xFFFF]);
  S_80100F38 *new_var;
  switch (*((s16 *) (p + 0x344)))
  {
    case 0:
      *((u16 *) (p + 0x344)) = 1;
      *((s32 *) (p + 0x798)) &= ~0x3000;
      break;

    case 1:
      func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(*((s16 *) (p + 0x326))), 0);
      *((u16 *) (p + 0x344)) = 2;
      *((s32 *) (p + 0x798)) = ((*((s32 *) (p + 0x798))) & (~0x3000)) | 0x1000;
      break;

    case 2:
      if ((((*(new_var = &D_80100F38[func_800B12D8(a1) & 0xFFFF])).f_798.w >> 12) & 3) != 0)
    {
      *((u16 *) (p + 0x344)) = 3;
      *((s32 *) (p + 0x798)) = ((*((s32 *) (p + 0x798))) & (~0x3000)) | 0x2000;
    }
      break;

    default:
      if ((((*(new_var = &D_80100F38[func_800B12D8(a1) & 0xFFFF])).f_798.w >> 12) & 3) == 2)
    {
      *((u16 *) (p + 0x344)) = 0;
      *((s32 *) (p + 0x2BC)) += 1;
    }
      break;

  }

  return *((s32 *) (p + 0x2BC));
}

#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) ((q = &D_80100F38[func_800B12D8(a) & 0xFFFF])->f_798.w)

s32 func_800D9CC8(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    S_80100F38 *q;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        P32(0x798) &= ~0x300;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(PS16(0x326)), 0);
        P16(0x344) = 2;
        P32(0x798) = (P32(0x798) & ~0x300) | 0x100;
        break;
    case 2:
        if (((Q798(a1) >> 8) & 3) != 0) {
            P16(0x344) = 3;
            P32(0x798) = (P32(0x798) & ~0x300) | 0x200;
        }
        break;
    default:
        if (((Q798(a1) >> 8) & 3) == 2) {
            P16(0x344) = 0;
            P32(0x2BC) += 1;
            func_800D8E90(a1);
        }
        break;
    }
    return P32(0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D9E94);

#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) ((q = &D_80100F38[func_800B12D8(a) & 0xFFFF])->f_798.b)

s32 func_800DA154(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    S_80100F38 *q;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        P32(0x798) &= ~0xC0;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(PS16(0x326)), 0);
        P16(0x344) = 2;
        P32(0x798) = (P32(0x798) & ~0xC0) | 0x40;
        break;
    case 2:
        if ((Q798(a1) >> 6) != 0) {
            P16(0x344) = 3;
            P32(0x798) = (P32(0x798) & ~0xC0) | 0x80;
        }
        break;
    default:
        if ((Q798(a1) >> 6) == 2) {
            P16(0x344) = 0;
            P32(0x2BC) += 1;
            func_800D8E90(a1);
        }
        break;
    }
    return P32(0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DA318);

s32 func_800DA500(s32 unused, s32 arg1) {
    extern u8 D_80091618[], D_80063940[];
    s32 raw = func_800B1260(arg1);
    register u8 *base asm("a0") = D_80091618;
    u16 k = raw;
    u16 *slot = (u16 *)(base + k * 0x1A8);
    S_80100F38 *p = &D_80100F38[k];
    register u8 *data asm("a1") = D_80063940;
    u16 c = *slot;

    if ((u32)(((*(u32 *)(data + c * 0x3C + 0xC) >> 11) & 0x1F) - 0x19) < 6) {
        u8 *pc = (u8 *)p->unk_2BC;
        if (*pc != 1) {
            register u8 *n asm("v0");
            register u8 *old asm("v1");
            do {
                n = pc + 1;
                old = pc;
                p->unk_2BC = (s32)n;
                pc = n;
            } while (old[1] != 1);
        }
    } else {
        p->unk_2BC++;
    }
    return p->unk_2BC;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DA5FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DA7C4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DA9D0);

s32 func_800DAC08(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern s16 D_800F07D0[];
    s32 id = (u16)func_800B1260(arg1);
    S_80100F38 *p = &D_80100F38[id];
    u8 *q;
    s32 val;
    switch (p->unk_344) {
    case 0:
        {
            register u8 *slots asm("v1") = D_80091618;
            u8 *slot = id * 0x1A8 + slots;
            register u8 *base asm("v1") = D_80063940;
            register u32 kind asm("a0") = *(u16 *)slot;
            q = kind * 0x3C + base;
        }
        if (((*(u32 *)(q + 0xC) >> 11) & 0x1F) != 0x12) {
            p->unk_2BC++;
        } else if (func_800E14C4(id) == 1) {
            p->unk_2BC++;
        } else {
            p->unk_324 = p->unk_326;
            val = (*(u32 *)(q + 0x1C) >> 8) & 7;
            p->unk_326 = val;
            p->unk_328 = func_800D06D4(p->unk_324, val);
            p->unk_344 = 1;
        }
        break;
    case 1:
        if ((D_8008ED80[0] & 3) == 3) {
            if (p->unk_328 == 0) {
                func_800CE4B8(arg1, arg0, D_800F07D0[0], 1);
                p->unk_344 = 2;
            } else {
                func_800CE164(arg1);
                func_800CE204(arg1, arg0);
            }
        }
        break;
    case 2:
        if (func_80015E60(arg0) == 1) {
            p->unk_344 = 3;
        } else {
            func_80098FEC(arg0, arg1, id);
        }
        break;
    default:
        p->unk_344 = 0;
        p->unk_2BC++;
        break;
    }
    return p->unk_2BC;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DAE14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DB074);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DB2C0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DB530);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DB798);

void func_800DBAA8(s16 arg0) {
    extern u8 D_80091618[], D_80063940[];
    u8 *src = D_80091618;
    u8 *base;
    u32 idx;
    u32 v;
    u32 *q;
    idx = *(u16 *)(src + arg0 * 0x1A8);
    v = func_800DBB3C(arg0);
    base = D_80063940;
    q = (u32 *)(idx * 0x3C + base);
    q[3] = (q[3] & ~0xF800) | ((v & 0x1F) << 11);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DBB3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DBC98);
