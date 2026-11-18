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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B24B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B284C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2984);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2C64);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2EA4);

extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

s32 func_800B3008(s32 arg0, s32 arg1) {
    typedef struct {
        u8 pad0[0x62];
        u16 f62;
        u16 f64;
        u8 pad66[0xA];
        s32 f70;
        u8 pad74[0xFE];
        u16 f172;
        u8 pad174[0x1A8 - 0x174];
    } Rec3008;
    typedef struct {
        s16 f0[10];
        s16 f14[10];
    } BufAF90;
    extern Rec3008 D_80091618[];
    extern s32 D_800EEB78[];
    extern s16 D_800EEB84[];
    extern s32 D_800F2DB8[];
    extern s32 D_8006AF84[];
    extern BufAF90 D_8006AF90[];
    extern s32 func_800B21F0(u16, u16);
    extern s32 func_800202A4(s32);
    extern void func_800B2C64(u16, u16);
    extern s32 func_800D1CC4(u16, s32, s32, s32);

    Rec3008 *p0;
    s32 val;

    {
        Rec3008 *b = D_80091618;
        p0 = &b[(u16)arg0];
    }
    if (p0->f64 != 0) {
        return 0;
    }

    if (D_800EEB78[0] == 1) {
        D_800EEB78[0] = 0;
        goto ok;
    } else {
        u16 s0 = p0->f62;
        if (s0 != 1 || D_800EEB84[0] != 0) {
            return 0;
        }
        if (D_800F2DB8[0] > 0) {
            D_800F2DB8[0]--;
            return 0;
        }
        if (func_800B21F0((u16)arg0, (u16)arg1) < 0) {
            return 0;
        }
        if (func_800202A4(8) == 4) {
ok:
            {
                s32 now = D_8006AF84[0];
                Rec3008 *b = D_80091618;
                Rec3008 *r0 = &b[(u16)arg0];
                Rec3008 *r1 = &b[(u16)arg1];
                r0->f64 = 1;
                r1->f64 = 1;
                r0->f70 = now;
                r1->f70 = now;
                r0->f172++;
                r1->f172++;
                func_800B2C64((u16)arg0, (u16)arg1);
            }

            if (D_8006AF90->f0[0] < 3) {
                val = D_8006AF90->f0[D_8006AF90->f0[0]];
            } else {
                val = D_8006AF90->f14[D_8006AF90->f14[0]];
            }
            func_800D1CC4(val, 0x1B, 4, 0);
            D_800EEB84[0] = 1;
            return 1;
        }
        D_800EEB84[0] = s0;
    }

    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3204);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B34FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3824);

s32 func_800B3C38(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s16 D_80105990[];
    register s32 id asm("s1") = arg0;
    register s32 t asm("a0") = D_8006AF84[0];
    s32 state;
    u8 *s = D_8006AFCC;
    
    if (*(u16 *)(s + 0x32) == 0 && (state = *(u16 *)(s + 0x30)) == 1) {
        if (D_80105990[0] != state) {
            if (t >= 1200) {
                t %= 1200;
                if (t != 0) {
                    if (t == (t / 600) * 600) {
                        if (func_800202A4(0x24) == 0x12) {
                            *(u16 *)(s + 0x32) = 2;
                            func_800DC770(id & 0xFFFF, 0x11);
                            return 1;
                        }
                        goto done;
                    }
                    return 0;
                }
                goto done;
            }
            return 0;
        }
done:
        return 0;
    }
    return 0;
}

s32 func_800B3D44(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s32 func_800202A4();
    extern s32 func_800B46EC();
    extern void func_800DC718(), func_800DC8C8(), func_8003422C(), func_800DC640();
    s32 t = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    s32 st = *(u16 *)(s + 0x34);
    if (st != 1) {
        if (st < 2) {
            if (st != 0) {
                return 0;
            }
            if (*(u16 *)(s + 0x32) != 1) {
                return 0;
            }
            if (t - *(s32 *)(s + 0x4C) < 0x13B) {
                return 0;
            }
            if (func_800202A4(0x10) == 8) {
                *(u16 *)(s + 0x34) = 2;
                func_800DC718(arg0 & 0xFFFF, 0x12);
                return 1;
            }
        }
        return 0;
    }
    if (t - *(s32 *)(s + 0x50) < func_800B46EC(3)) {
        return 0;
    }
    func_800DC8C8(arg0 & 0xFFFF, 0x24);
    func_8003422C(0x1F);
    func_800DC640(arg0 & 0xFFFF, arg1 & 0xFFFF);
    return 0;
}

s32 func_800B3E44(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_80078C28[];
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = (*D_8006AF84);
    if ((M2C_GFIELD(D_8006AFCC, u16, 0x36) == 0) && ((*D_80078C28) == 0)) {
        temp_s1 = arg0 & 0xFFFF;
        if (func_800E13C8(temp_s1, arg1 & 0xFFFF) != 0) {
            if (temp_s0 >= 0x4B0) {
                if (temp_s0 != ((temp_s0 / 1200) * 0x4B0)) {
                    if (temp_s0 == ((temp_s0 / 600) * 0x258)) {
                        if (func_800202A4(0x1E0) == 0xF0) {
                            M2C_GFIELD(D_8006AFCC, u16, 0x36) = 2U;
                            func_800D1CC4(temp_s1, 0x13, 0, 0);
                            return 1;
                        }
                        goto block_8;
                    }
                    /* Duplicate return node #9. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
block_8:
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_800B3F54(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_80078C28[];
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = (*D_8006AF84);
    if ((M2C_GFIELD(D_8006AFCC, u16, 0x38) == 0) && ((*D_80078C28) == 0)) {
        temp_s1 = arg0 & 0xFFFF;
        if (func_800E13C8(temp_s1, arg1 & 0xFFFF) != 0) {
            if (temp_s0 >= 0x4B0) {
                if (temp_s0 != ((temp_s0 / 1200) * 0x4B0)) {
                    if (temp_s0 == ((temp_s0 / 600) * 0x258)) {
                        if (func_800202A4(0x12C0) == 0x960) {
                            M2C_GFIELD(D_8006AFCC, u16, 0x38) = 2U;
                            func_800D1CC4(temp_s1, 0x14, 0, 0);
                            return 1;
                        }
                        goto block_8;
                    }
                    /* Duplicate return node #9. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
block_8:
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_800B4064(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    register s32 id asm("s0") = arg0;
    register s32 t asm("a0") = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    register s32 r asm("v0");
    register u32 hour asm("v1");
    if (*(u16 *)(s + 0x3A) == 0) {
        r = t % 28800;
        hour = r / 1200 - 5;
        if (hour < 17) return 0;
        if (t != (t / 1200) * 1200) {
            if (t == (t / 600) * 600) {
                if (func_800202A4(0x30) == 0x18) {
                    *(u16 *)(s + 0x3A) = 2;
                    func_800DC7F4((u16)id, 0x15);
                    return 1;
                }
                goto done;
            }
            return 0;
        }
done:
        return 0;
    }
    return 0;
}

s32 func_800B418C(s32 arg0, s32 arg1) {
    typedef struct { u8 pad[0x10]; u16 kind; u8 rest[0x196]; } Rec418C;
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s16 D_8006B008[];
    extern u8 D_8008ED90[];
    extern Rec418C D_80091618[];
    s32 t = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    s32 state = *(u16 *)(s + 0x3C);
    s32 other;
    s32 dt;
    u16 kind;
    if (state != 1) {
        if (state >= 2) return 0;
        if (state != 0) return 0;
        { register u32 id asm("v1") = arg0 & 0xFFFF;
          kind = D_80091618[id].kind; }
        if (kind == 6 && ((other = arg1 & 0xFFFF) == 0xFFFF || D_80091618[other].kind == kind)
            && (u32)((t % 28800) / 1200 - 5) >= 17) {
            if (t != (t / 1200) * 1200) {
                if (t == (t / 600) * 600) {
                    if (func_800202A4(0x24) == 0x12) {
                        D_8006B008[0] = 2;
                        func_800DC79C((u16)arg0, 0x16);
                        return 1;
                    }
                    goto done;
                }
                return 0;
            }
done:
            return 0;
        }
        return 0;
    }
    {
        dt = t - *(s32 *)(s + 0x60);
        if (dt >= func_800B46EC(2) && D_8008ED90[0] == 0) {
            *(s32 *)(s + 0x60) = t;
            func_800DC984((u16)arg0, 0xFFFF);
        }
        return 0;
    }
}

s32 func_800B4390(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    register s32 id asm("s0") = arg0;
    register s32 t asm("a0") = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    register s32 r asm("v0");
    register u32 hour asm("v1");
    if (*(u16 *)(s + 0x3E) == 0) {
        r = t % 28800;
        hour = r / 1200 - 5;
        if (hour < 17) return 0;
        if (t != (t / 1200) * 1200) {
            if (t == (t / 600) * 600) {
                if (func_800202A4(0x2D0) == 0x168) {
                    *(u16 *)(s + 0x3E) = 2;
                    func_800DC7C8((u16)id, 0x17);
                    return 1;
                }
                goto done;
            }
            return 0;
        }
done:
        return 0;
    }
    return 0;
}

s32 func_800B44B8(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s32 func_800202A4();
    extern void func_800DC84C();
    register s32 id asm("s0") = arg0;
    s32 t = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    if (*(u16 *)(s + 0x40) != 0) {
        return 0;
    }
    if (t != (t / 1200) * 1200) {
        if (t != (t / 600) * 600) {
            return 0;
        }
        if (func_800202A4(0x4B0) == 600) {
            *(u16 *)(s + 0x40) = 2;
            func_800DC84C(id & 0xFFFF, 0x18);
            return 1;
        }
    }
    return 0;
}

s32 func_800B4588(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    register s32 id asm("s1") = arg0;
    register s32 t asm("a0") = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    register s32 r asm("v0");
    register u32 hour asm("v1");
    if (*(u16 *)(s + 0x42) != 0) return 0;
    if (*(u16 *)(s + 0x30) != 0) return 0;
    {
        r = t % 28800;
        hour = r / 1200 - 18;
        if (hour >= 5) goto done;
        if (t != (t / 1200) * 1200) {
            if (t == (t / 600) * 600) {
                if (func_800202A4(0x12) == 9) {
                    *(u16 *)(s + 0x42) = 2;
                    func_800DC820((u16)id, 0x19);
                    return 1;
                }
                goto done;
            }
            return 0;
        }
done:
        return 0;
    }
    return 0;
}
