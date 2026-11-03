#include "common.h"

#include "common.h"

extern u16 D_8006AF80[];
extern u8 D_800EEB9C[];

typedef struct {
    u8 pad[0x44];
    s32 value;
} Entry_800EEB9C;

void func_800B4944(s32 arg0) {
    typedef struct { u8 _p0[0x8A]; u16 f_8A; u8 _p8C[0x11C]; } S_80091618;
    typedef struct { u8 _p0[0x190]; s32 *f_190; u8 _p194[0x608]; } S_80100F38;
    extern S_80091618 D_80091618[];
    extern s32 D_800EE5D0[];
    extern s16 D_800EEB90[];
    extern S_80100F38 D_80100F38[];
    s32 i;
    s32 idx;
    s32 v;
    s32 t;
    s32 *q;
    u32 base;
    S_80100F38 *p;

    if (D_80091618[*D_8006AF80].f_8A == 0xFFFF && arg0 == 0) {
        arg0 = 1;
    }
    *D_800EEB90 = arg0 == 1;
    i = 1;
    base = (u32)D_80100F38;
    q = (s32 *)D_800EEB9C;
    for (; i >= 0; i--) {
        idx = func_800B1260(i) & 0xFFFF;
        if (idx != 0xFFFF) {
            p = (S_80100F38 *)((idx * 0x79C) + base);
            if (*D_800EEB90 == i) {
                v = q[0x32];
            } else {
                t = i - 2;
                v = D_800EE5D0[2] + t;
            }
            v = func_80019F30(D_800EE5D0[0] | 0x60000, v + D_800EE5D0[3]);
            p->f_190[7] = 0;
            p->f_190[6] = v;
            func_800B4AAC(idx);
        }
    }
}

void func_800B4AAC(s32 arg0) {
    typedef struct { u8 _p0[0x8A]; u16 f_8A; u8 _p8C[0x11C]; } S_80091618;
    typedef struct {
        u8 _p0[0x46];
        s16 f_46;
        u8 _p48[2];
        s16 f_4A;
        u8 _p4C[2];
        u16 f_4E;
    } SubEntry;
    typedef struct {
        u8 _p0[0x190];
        SubEntry *f_190;
        SubEntry *f_194[6];
        u8 _p1AC[0x5F0];
    } S_80100F38;
    typedef struct {
        u8 _p0[0x108];
        s32 f_108;
        s32 f_10C;
    } S_8008ED68;
    typedef struct {
        u16 unk0;
        u16 unk2;
    } S_EEB94;

    extern u16 D_8006AF80[];
    extern S_8008ED68 D_8008ED68;
    extern S_80091618 D_80091618[];
    extern s16 D_800EEB90[];
    extern S_EEB94 D_800EEB94[];
    extern S_80100F38 D_80100F38[];

    s32 a1 = arg0;
    S_80100F38 *temp_t2;
    s32 var_t4;
    s32 var_t1;
    s32 var_t0;
    SubEntry **var_a1;
    s32 var_a3;
    S_8008ED68 *ed;
    s32 var_a2;
    s32 hx, hy;
    u32 diff;
    S_EEB94 *temp_v1;

    temp_t2 = &D_80100F38[a1];
    if (a1 == *D_8006AF80) {
        var_t4 = 1;
        if (D_80091618[a1].f_8A == 0xFFFF) {
            var_t1 = 0;
            var_t0 = 0;
        } else {
            var_t1 = 8;
            var_t0 = 12;
        }
    } else {
        var_t4 = 0;
        var_t1 = -8;
        var_t0 = -4;
    }

    var_a1 = temp_t2->f_194;
    var_a3 = 0;
    ed = &D_8008ED68;
    hx = ed->f_108 / 2 - 0x2C;
    var_a2 = 0x10;

    temp_t2->f_190->f_46 = var_t1 - hx;
    hy = ed->f_10C / 2 - 0x38;
    temp_t2->f_190->f_4A = var_t0 - hy;
    diff = (var_t4 ^ *D_800EEB90) != 0;
    temp_v1 = (S_EEB94 *)((u8 *)D_800EEB94 + diff * 4);
    temp_t2->f_190->f_4E = temp_v1->unk0;

    do {
        (*var_a1)->f_46 = (var_t1 - ed->f_108 / 2) + 0x104;
        var_a3++;
        (*var_a1)->f_4A = (var_t0 - (ed->f_10C / 2 - 0x38)) + var_a2;
        var_a2 += 0x12;
        (*var_a1)->f_4E = temp_v1->unk2;
        var_a1++;
    } while (var_a3 < 6);
}

void func_800B4C40(s32 arg0) {
    typedef struct { u8 _p0[0x190]; s32 *f_190; u8 _p194[0x608]; } S_80100F38;
    extern u16 D_8006AF80[];
    extern s32 D_800EE5D0[];
    extern s32 D_800EE5D8[];
    extern s16 D_800EEB90[];
    extern s32 *D_800EEC48[];
    extern s32 D_800EEC64[];
    extern S_80100F38 D_80100F38[];
    s32 var_a1;
    s32 var_a3;
    s32 v;
    s32 t;
    S_80100F38 *p;

    var_a1 = 0;
    if (arg0 != 0xFFFF) {
        if (arg0 == *D_8006AF80) {
            var_a1 = 1;
            *D_800EEB90 = 1;
            *D_800EEC48 = D_80100F38[arg0].f_190;
        }
        p = &D_80100F38[arg0];
        if (*D_800EEB90 == var_a1) {
            var_a3 = *D_800EEC64;
        } else {
            t = var_a1 - 2;
            var_a3 = *D_800EE5D8 + t;
        }
        v = func_80019F30(D_800EE5D0[0] | 0x60000, var_a3 + D_800EE5D0[3]);
        p->f_190[7] = 0;
        p->f_190[6] = v;
        func_800B4AAC(arg0);
    }
}

void func_800B4D60(s32 arg0) {
    extern u16 D_8006AF80[];
    extern s32 D_800EE5D0[];
    extern s16 D_800EEB94[];
    extern s32 D_800EEC64[];
    extern void func_800B4E08(s32, s16);
    extern void func_800B6D98(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);
    s16 *p = D_800EEB94;
    s32 a = arg0;
    s32 *d;
    s32 x;

    func_800B4E08(a, p[1]);
    d = D_800EE5D0;
    if (a == *D_8006AF80) {
        x = *D_800EEC64;
    } else {
        x = d[2] - 2;
    }
    func_800B6D98(1, 0x2C, 0x38, p[0], 0, d, x, 1, 1, 0, 2, 1);
}

#include "common.h"

void func_800B4E08(s32 arg0, s16 arg1) {
    extern u8 D_800EE5D0[];
    extern u8 D_800EEB9C[];
    extern u8 D_80100F38[];
    void *temp_s0;

    temp_s0 = (arg0 * 0x79C) + D_80100F38;
    M2C_FIELD(temp_s0, s32 *, 0x194) = func_800B6D98(1, 0x104, 0x48, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x356), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x198) = func_800B6D98(1, 0x104, 0x5A, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x358), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x19C) = func_800B6D98(1, 0x104, 0x6C, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x35A), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x1A0) = func_800B6D98(1, 0x104, 0x7E, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x35C), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x1A4) = func_800B6D98(1, 0x104, 0x90, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x35E), 0, 1, 0, 2, 1);
    M2C_FIELD(temp_s0, s32 *, 0x1A8) = func_800B6D98(1, 0x104, 0xA2, arg1, 0, D_800EE5D0, M2C_GFIELD(D_800EEB9C, s32, 0x780) + M2C_FIELD(temp_s0, s16 *, 0x360), 0, 1, 0, 2, 1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5034);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B53D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B55B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5A78);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5BA0);

s32 func_800B5CF4(s32 arg0) {
    typedef struct {
        u8 _p0[0x190];
        s32 f_190;
        u8 _p194[0x608];
    } S_80100F38;
    typedef struct {
        u8 _p0[0xB4];
        s32 arr[1];
    } S_800EEB9C;
    extern u16 D_8006AF80[];
    extern u8 D_800EE5D0[];
    extern u8 D_800EEB9C[];
    extern S_80100F38 D_80100F38[];
    extern s32 func_800B6D98(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);
    s32 ret;
    s32 x;
    s32 y;

    if (arg0 == 5) {
        ret = D_80100F38[*D_8006AF80].f_190;
    } else {
        x = ((arg0 % 2) * 0x24) + 0x38;
        y = ((arg0 / 2) * 0xE) + 0x24;
        ret = func_800B6D98(1, (s16)x, (s16)y, 7, 0, D_800EE5D0, ((S_800EEB9C *)D_800EEB9C)->arr[arg0], 1, 1, 0, 2, 1);
    }
    return ret;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5DE8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B5F44);
