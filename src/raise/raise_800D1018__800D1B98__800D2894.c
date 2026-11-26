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
