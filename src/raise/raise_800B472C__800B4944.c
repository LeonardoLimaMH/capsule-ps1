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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B4AAC);

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

    func_800B4E08(arg0, D_800EEB94[1]);
    func_800B6D98(1, 0x2C, 0x38, D_800EEB94[0], 0, D_800EE5D0,
        (arg0 == *D_8006AF80) ? *D_800EEC64 : (D_800EE5D0[2] - 2),
        1, 1, 0, 2, 1);
}

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

void func_800B53D4(s32 a0, s32 a1) {
    typedef struct {
        u8 pad[0x79C];
    } S_80100F38;
    extern S_80100F38 D_80100F38[];
    typedef struct { u8 pad[0x780]; s32 unk780; } S_EEB9C;
    extern u8 D_800EEB9C[];
    extern s32 D_800EE5D0[];
    extern s32 func_800B5034(s32, s32, s32);
    extern s32 func_80019F30(s32, s32);
    extern void func_80015CD0(void *, s32, s32);

    u8 *p = (u8 *)&D_80100F38[a1];
    s16 *s2 = (s16 *)(p + 0x356);
    u8 **s1 = (u8 **)(p + 0x194);
    s16 i;
    s32 r;

    for (i = 0; i < 8; i++, s2++) {
        switch (i) {
        case 6: {
            s32 v1;
            r = func_800B5034(a0, a1, 6);
            if ((s16)r > 0) {
                if ((s16)r >= 100) {
                    v1 = 99;
                } else {
                    v1 = r;
                }
            } else {
                v1 = 1;
            }
            *s2 = v1;
            break;
        }
        case 7:
            *s2 = func_800B5034(a0, a1, 7);
            break;
        default: {
            s16 v;
            r = func_800B5034(a0, a1, i);
            v = r;
            if (*s2 != v) {
                s32 *t = D_800EE5D0;
                s32 val;
                *s2 = r;
                val = t[6];
                func_80015CD0(*s1 + 0x14, func_80019F30(D_800EE5D0[0] | 0x70000, val + ((S_EEB9C *)D_800EEB9C)->unk780 + v), 0);
                *(u16 *)(*s1 + 0x66) = 0;
                *(s32 *)(*s1 + 0x30) &= ~0x1C0;
                *(s32 *)(*s1 + 0x30) = (*(s32 *)(*s1 + 0x30) & ~0x30) | 0x20;
                *(s32 *)(*s1 + 0x7C) = ((S_EEB9C *)D_800EEB9C)->unk780 + v;
            }
            s1++;
            break;
        }
        }
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B472C__800B4944", func_800B55B8);

void func_800B5A78(s32 arg0, s32 arg1) {
    typedef struct {
        u8 _p0[0x38];
        u32 b38_0 : 1;
        u32 _b38_1 : 31;
    } SubEntry;
    typedef struct {
        u8 _p0[0x190];
        SubEntry *f_190;
        SubEntry *f_194[6];
        u8 _p1AC[0x5F0];
    } S_80100F38;

    extern S_80100F38 D_80100F38[];
    extern u16 func_800B1260(s32);
    u8 val;
    u16 id;
    S_80100F38 *p;

    val = (arg1 != 1);
    id = func_800B1260(arg0);
    if (id != 0xFFFF) {
        p = &D_80100F38[id];
        p->f_190->b38_0 = val;
        p->f_194[0]->b38_0 = val;
        p->f_194[1]->b38_0 = val;
        p->f_194[2]->b38_0 = val;
        p->f_194[3]->b38_0 = val;
        p->f_194[4]->b38_0 = val;
        p->f_194[5]->b38_0 = val;
    }
}

void func_800B5BA0(s32 arg0) {
    typedef struct {
        u8 _p0[0x38];
        u32 b38_0 : 1;
    } SubEntry;
    typedef struct {
        u8 _p0[0x190];
        SubEntry *f_190;
        SubEntry *f_194[6];
        u8 _p1AC[0x5F0];
    } S_80100F38;

    extern S_80100F38 D_80100F38[];
    extern u16 func_800B1260(s32);
    s32 i;
    u32 val;
    u16 id;
    S_80100F38 *p;

    val = (arg0 != 1);
    i = 1;
    do {
        id = func_800B1260(i);
        if (id != 0xFFFF) {
            p = &D_80100F38[id];
            p->f_190->b38_0 = val;
            p->f_194[0]->b38_0 = val;
            p->f_194[1]->b38_0 = val;
            p->f_194[2]->b38_0 = val;
            p->f_194[3]->b38_0 = val;
            p->f_194[4]->b38_0 = val;
            p->f_194[5]->b38_0 = val;
        }
        i--;
    } while (i >= 0);
}

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

s32 func_800B5F44(s32 arg0, s32 arg1) {
    typedef struct {
        u8 _p0[0x5C0];
        s32 f_5C0[2][9];
    } S_800EEB9C;

    extern u8 D_800EE5D0[];
    extern u8 D_800EEB9C[];
    extern s32 func_800B6D98(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);
    s32 x;
    s32 y;

    if (arg0 < 2) {
        x = ((arg0 % 2) * 0x24) + 0x38;
        y = ((arg0 / 2) * 0xE) + 0x24;
        return func_800B6D98(1, (s16)x, (s16)y, 6, 0, D_800EE5D0, ((S_800EEB9C *)D_800EEB9C)->f_5C0[arg0][arg1], 1, 1, 0, 2, 1);
    }
    return 0;
}
