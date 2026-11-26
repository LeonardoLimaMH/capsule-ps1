#include "common.h"

s32 func_800B1700(void) {
    typedef struct {
        u16 f0;
        u8 pad2[0xE];
        u16 f10;
        u8 pad12[0x78];
        u16 f8a;
        u8 pad8c[0x1A8 - 0x8C];
    } Rec1700;
    extern s16 D_80078C28[];
    extern u16 D_800EFA4C[];
    extern u16 D_800EFA4A[];
    extern s16 D_80103D38[];
    extern s32 D_800EEB70[];
    extern u16 D_8006AF80[];
    extern s32 D_800EF2D8[];
    extern Rec1700 D_80091618[];
    extern u8 D_800F2D30[];
    extern u8 D_800F2D98[];
    extern void func_800B8BF0(s32);
    extern s32 func_80027C14(u16);
    extern void func_800E1B30(void);
    extern void func_800CD418(s32, s32);

    s32 i;
    s32 state;
    u16 s0;
    u16 id;
    s32 j;
    s16 t;

    if (D_80078C28[0] != 0) {
        return 0;
    }

    D_800EFA4A[0] = D_800EFA4C[0];
    i = 1;
    do {
        if (i != D_80103D38[0]) {
            func_800B8BF0(i);
        }
        i--;
    } while (i >= 0);

    state = D_80103D38[0];
    if (D_800EEB70[0] == 0) {
        if (state != 1) {
            s0 = D_80091618[D_8006AF80[0]].f8a;
        } else {
            s0 = D_8006AF80[0];
        }
    } else if (state == 1) {
        s0 = D_8006AF80[0];
    } else {
        s0 = D_800EF2D8[0];
    }

    func_80027C14(s0);

    id = D_80091618[s0].f0;
    j = 0;
    while (1) {
        if ((u16)j != s0 && D_80091618[(u16)j].f10 != 0xFFFF && D_80091618[(u16)j].f0 == id) {
            break;
        }
        j++;
        if ((u16)j >= 6) {
            break;
        }
    }

    if ((u16)j == 6) {
        u8 *p = &D_800F2D30[id];
        u8 idx = *p;
        *p = 0xFF;
        D_800F2D98[idx] = 0xFF;
    }

    t = D_80103D38[0];
    if (t == 1) {
        func_800E1B30();
        D_800EEB70[0] = t;
        D_800EF2D8[0] = D_80091618[D_8006AF80[0]].f8a;
        D_80091618[D_8006AF80[0]].f8a = 0xFFFF;
        func_800CD418(0, 0);
    }

    return 1;
}

extern u8 D_800EEB9C[];
extern s32 D_800EE5D0[], D_800F2DBC[];
extern u8 *D_800F2DC0[];
extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

s32 func_800B1940(void) {
    extern s32 D_800EEB88[];
    extern s16 D_80103D38[];
    s32 var_v0;

    if ((*D_800EEB88) == 0) {
        (*D_800EEB88) = 8;
        func_800CD288((*D_80103D38), 0);
        func_800C60E0((*D_80103D38), 0);
        func_800C62A4((*D_80103D38), 0);
        func_800C5EFC((*D_80103D38), 0);
        var_v0 = 1;
        if ((*D_80103D38) == 1) {
            func_800E20A8();
            func_800CD418(0, 1);
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    (*D_800EEB88) -= 1;
    var_v0 = 0;
    return var_v0;
}

extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);
void func_800B19E0(u16 a0) {
    typedef struct { u8 pad[0x780]; s32 unk780; } S_EEB9C;
    typedef struct { u8 pad[0x79C]; } S_80100F38;
    extern S_80100F38 D_80100F38[];
    extern u8 D_800EEB9C[];
    extern s32 D_800EE5D0[], D_800F2DBC[];
    extern u8 *D_800F2DC0[];
    extern s32 func_80019F30(s32, s32);
    extern void func_80015CD0(void *, s32, s32);
    register u8 *base asm("a1") = (u8 *)D_80100F38;
    s32 offset = a0 * 0x79C;
    u8 **q = (u8 **)((u8 *)&D_80100F38[a0] + 0x194);
    s16 *s = (s16 *)((u8 *)&D_80100F38[a0] + 0x356);
    s32 i = 0;
    s32 r;
    *(s32 *)(base + offset + 0x190) = D_800F2DBC[0];
    do {
        s32 *data = D_800EE5D0;
        *q = D_800F2DC0[i];
        r = func_80019F30(D_800EE5D0[0] | 0x70000, data[6] + ((S_EEB9C *)D_800EEB9C)->unk780 + *s);
        func_80015CD0(*q + 0x14, r, 0);
        *(u16 *)(*q + 0x66) = 0;
        *(s32 *)(*q + 0x30) &= ~0x1C0;
        i++;
        *(s32 *)(*q + 0x30) = (*(s32 *)(*q + 0x30) & ~0x30) | 0x20;
        *(s32 *)(*q + 0x7C) = ((S_EEB9C *)D_800EEB9C)->unk780 + *s;
        q++;
        s++;
    } while (i < 6);
}

s32 func_800B1B3C(void) {
    typedef struct { u8 p0[0x10]; u16 f10; u8 p12[0x78]; u16 f8a, f8c; u8 p8e[0x11A]; } Rec1B;
    typedef struct { u8 p0[0x190]; s32 f190; u8 *f194[6]; u8 p1ac[0x5F0]; } Data1B;
    extern Rec1B D_80091618[];
    extern Data1B D_80100F38[];
    extern s16 D_80103D38[];
    extern u16 D_8006AF80[];
    extern s32 D_800EF2D8[], D_800EEB70[];
    u32 s1;
    s32 s0;
    register s32 i asm("a2");
    u8 **a;
    u8 **b;
    register u8 *base asm("a0");
    register s32 k asm("v1");
    register s32 offset asm("v0");
    register u8 **slots asm("v1");
    if (D_80103D38[0] == 1) {
        u8 *e = D_800EEB9C;
        s1 = D_8006AF80[0];
        s0 = *(s32 *)(e + 0x73C);
        D_80091618[s1].f10 = 0xFFFF;
        D_80091618[s0].f8a = 0xFFFF;
        D_80091618[s0].f8c = 0;
        D_8006AF80[0] = s0;
        *(s32 *)(e + 0x73C) = s0;
        func_80026514(s1);
        base = (u8 *)D_80100F38;
        k = s1;
        offset = k << 4;
        offset = (offset - k) << 2;
        offset = (offset + k) << 3;
        offset = (offset - k) << 2;
        slots = (u8 **)(base + 0x194);
        a = (u8 **)((u8 *)slots + offset);
        D_800F2DBC[0] = *(s32 *)(base + offset + 0x190);
        i = 0;
        b = D_800F2DC0;
        for (; i < 6; i++) {
            *b++ = *a;
            *a += 0x90;
        }
        func_800D8FB0((u16)s1);
        func_800B19E0((u16)s1);
        func_800E2110();
    } else {
        s1 = D_8006AF80[0];
        s0 = D_80091618[s1].f8a;
        D_80091618[s0].f10 = 0xFFFF;
        D_80091618[s0].f8a = 0xFFFF;
        D_80091618[s0].f8c = 0;
        D_800EF2D8[0] = s1;
        func_80026514(s0);
        base = (u8 *)D_80100F38;
        k = s0;
        offset = k << 4;
        offset = (offset - k) << 2;
        offset = (offset + k) << 3;
        offset = (offset - k) << 2;
        slots = (u8 **)(base + 0x194);
        a = (u8 **)((u8 *)slots + offset);
        D_800F2DBC[0] = *(s32 *)(base + offset + 0x190);
        i = 0;
        b = D_800F2DC0;
        for (; i < 6; i++) {
            *b++ = *a;
            *a += 0x90;
        }
        func_800D8FB0((u16)s0);
        func_800B19E0((u16)s0);
        D_80091618[D_8006AF80[0]].f8a = 0xFFFF;
    }
    D_800EEB70[0] = 2;
    func_800B1E7C();
    func_800B4C40(D_8006AF80[0]);
    func_800B6FA0();
    return 1;
}

s32 func_800B1DEC(void) {
    typedef struct { u8 pad[0x66]; u16 f66; u16 f68; u8 pad2[0x1A8 - 0x6A]; } Rec1DEC;
    extern s32 D_800EEB8C[];
    extern u16 D_8006AF80[];
    extern Rec1DEC D_80091618[];
    if (D_800EEB8C[0] == 0) {
        D_80091618[D_8006AF80[0]].f66 = 0;
        D_800EEB8C[0] = 8;
        D_80091618[D_8006AF80[0]].f68 = 0;
        return 1;
    }
    D_800EEB8C[0]--;
    return 0;
}

s32 func_800B1E7C(void) {
    extern s32 D_80069AD4[];
    extern u16 D_800EFA4C[], D_800EFA4A[];
    extern s32 D_800EEB70[];
    s32 i = 2;
    s32 *p = D_80069AD4;
    p += 2;
    do {
        p[0x11] = 0;
        i--;
        p--;
    } while (i >= 0);
    D_800EFA4C[0] = 0;
    D_800EFA4A[0] = 0;
    D_800EEB70[0] = 0;
    return 1;
}

extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

s32 func_800B1EBC(void) {
    typedef struct {
        u8 pad0[0x66];
        u16 f66;
        u16 f68;
        u8 pad6a[0x18C - 0x6A];
        s32 f18c;
        u8 pad190[0x1A8 - 0x190];
    } Rec1EBC;
    extern u16 D_8006AF80[];
    extern u16 D_8008EE4C[];
    extern Rec1EBC D_80091618[];
    extern s32 D_800EEB8C[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    extern s16 D_80103D38[];
    extern void func_80024990(s32, s32, s32, s32);
    extern void func_800125D8(void);
    extern s32 func_800B1668(void);

    s32 ret = 0;
    s32 tmp;

    switch (D_8008EE4C[0]) {
    case 0:
        if (D_80103D38[0] == 1) {
            D_800EFA4C[0] = 2;
        } else {
            D_800EFA4C[0] = 0;
        }
        if (D_800EFA4C[0] != D_800EFA4A[0]) {
            func_80024990(D_80091618[D_8006AF80[0]].f18c, 1, 0x32, 0);
        }
        func_800125D8();
        break;
    case 1:
        if (func_800B1668() == 1) {
            func_800125D8();
        }
        break;
    case 2:
        if (func_800B1700() == 1) {
            func_800125D8();
        }
        break;
    case 3:
        if (func_800B1940() == 1) {
            func_800125D8();
        }
        break;
    case 4:
        if (func_800B1B3C() == 1) {
            func_800125D8();
        }
        break;
    case 5:
        if (D_800EEB8C[0] == 0) {
            tmp = 1;
            D_80091618[D_8006AF80[0]].f66 = 0;
            D_800EEB8C[0] = 8;
            D_80091618[D_8006AF80[0]].f68 = 0;
        } else {
            D_800EEB8C[0]--;
            tmp = 0;
        }
        if (tmp == 1) {
            func_800125D8();
        }
        break;
    case 6:
        ret = 1;
        break;
    }
    return ret;
}

void func_800B2094(void) {

}

void func_800B209C(void) {

}

s32 func_800B20A4(s32 arg0, s32 arg1) {
    extern u8 D_80100F38[];
    u8 temp_v1;
    register s32 var_a0 asm("a0");
    register s32 state asm("v0");
    s32 var_v0;
    s32 var_v1;
    u8 temp_a1;
    void *temp_a2;
    void *temp_a3;

    temp_a2 = ((arg0 & 0xFFFF) * 0x79C) + D_80100F38;
    temp_a3 = ((arg1 & 0xFFFF) * 0x79C) + D_80100F38;
    temp_a1 = *M2C_FIELD(temp_a2, u8 **, 0x2BC);
    temp_v1 = *M2C_FIELD(temp_a3, u8 **, 0x2BC);
    if ((temp_a1 == 0x52) || (temp_a1 == 0xD) || (temp_a1 == 0x53) || (temp_a1 == 0x69) || (temp_a1 == 0x79) || (temp_a1 == 0x7A) || (temp_a1 == 0x71) || (temp_a1 == 0x74) || (temp_a1 == 0x77) || (var_a0 = 1, (temp_a1 == 0x70))) {
        state = M2C_FIELD(temp_a2, s16 *, 0x344);
        var_a0 = state != 2;
    }
    temp_v1 = temp_v1 & 0xFF;
    if ((temp_v1 == 0x52) || (temp_v1 == 0xD) || (temp_v1 == 0x53) || (temp_v1 == 0x69) || (temp_v1 == 0x79) || (temp_v1 == 0x7A) || (temp_v1 == 0x71) || (temp_v1 == 0x74) || (temp_v1 == 0x77) || (temp_v1 == 0x70)) {
        state = M2C_FIELD(temp_a3, s16 *, 0x344);
        var_v1 = state != 2;
    } else {
        var_v1 = 1;
    }
    var_v0 = 1;
    if ((var_a0 != 1) || (var_v1 != var_a0)) {
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B21F0);
