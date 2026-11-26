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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D2BB8);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D2FB0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D30B0);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D3F88);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4258);

s32 func_800D43FC(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4404);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D46A4);

s32 func_800D4858(void) {
    return 1;
}
