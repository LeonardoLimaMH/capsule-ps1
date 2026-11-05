#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1700);

#include "common.h"

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

extern u8 D_800EEB9C[];
extern s32 D_800EE5D0[], D_800F2DBC[];
extern u8 *D_800F2DC0[];
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1B3C);

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
    s32 *p = D_80069AD4 + 2;
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1EBC);

void func_800B2094(void) {

}

void func_800B209C(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B20A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B21F0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B24B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B284C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2984);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2C64);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2EA4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3008);

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

#include "common.h"

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

#include "common.h"

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B4064);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B4390);

s32 func_800B44B8(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s32 func_800202A4();
    extern void func_800DC84C();
    u8 *s;
    s32 t;
    t = D_8006AF84[0];
    s = D_8006AFCC;
    if (*(u16 *)(s + 0x40) != 0) {
        return 0;
    }
    if (t != (t / 1200) * 1200) {
        if (t != (t / 600) * 600) {
            return 0;
        }
        if (func_800202A4(0x4B0) == 600) {
            *(u16 *)(s + 0x40) = 2;
            func_800DC84C(arg0 & 0xFFFF, 0x18);
            return 1;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B4588);
