#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2110);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2558);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2714);

void func_800E2A98(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2AA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2D7C);

void *func_800E3090(s32 arg0) {
    extern u16 D_80078C20[];
    extern u8 D_80091618[];
    extern s32 D_800EBFF4[];
    extern s32 D_800EE630[];
    extern void func_800BA1B4(), func_800B9F2C(), func_800161C4();
    extern void *func_80015B3C(void *, void *, s32);
    extern void func_80015EF8(void *);
    extern s32 func_80020364(s32);
    extern s32 func_80019F30(s32, s32);
    extern void func_80013920(void *);
    extern s32 func_800B1260(s32);

    void *var_a0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0_2;
    u16 temp_s5;
    u16 var_s6;
    void *temp_v0;

    temp_s3 = func_800B1260(arg0) & 0xFFFF;
    temp_s5 = *(u16 *)((temp_s3 * 0x1A8) + D_80091618);
    if (arg0 != 1) {
        var_s6 = 1 - D_80078C20[0];
    } else {
        var_s6 = D_80078C20[0];
    }
    D_800EBFF4[0] = 3;
    if (arg0 == 1) {
        var_a0 = func_800BA1B4;
    } else {
        var_a0 = func_800B9F2C;
    }
    temp_v0 = func_80015B3C(var_a0, func_800161C4, 0xB);
    if (temp_v0 != NULL) {
        func_80015EF8(temp_v0);
        temp_s1 = D_800EE630[0];
        temp_v0_2 = func_80019F30(temp_s1 | 0x60000, *(s32 *)((u8 *)D_800EE630 + 0xC) + D_800EBFF4[0] + func_80020364(temp_s5 & 0xFF));
        if (temp_v0_2 == 0) {
            func_80013920(temp_v0);
            return NULL;
        }
        {
            u32 m_30 = ~0x30;
            u32 m_8 = ~8;
            u32 v30;
            u32 v34;
            u32 v38;

            *(s32 *)((u8 *)temp_v0 + 0x18) = temp_v0_2;
            v30 = *(s32 *)((u8 *)temp_v0 + 0x30);
            v34 = *(s32 *)((u8 *)temp_v0 + 0x34);
            *(s16 *)((u8 *)temp_v0 + 0x66) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x1C) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x8C) = temp_s5;

            v30 = (v30 & ~0x1C0) | 0x40;
            v34 = (v34 & ~0x100) | ((var_s6 & 1) << 8);
            v34 = (v34 & ~0x200) | ((arg0 & 1) << 9);
            v34 = (v34 & ~0xC00) | ((temp_s3 & 3) << 10);
            v30 &= m_30;
            v38 = *(s32 *)((u8 *)temp_v0 + 0x38);
            v30 &= m_8;
            *(s32 *)((u8 *)temp_v0 + 0x30) = v30;
            *(s32 *)((u8 *)temp_v0 + 0x34) = v34;
            v38 = (((v38 | 1) & m_8) & m_30) & ~0x40;
            *(s32 *)((u8 *)temp_v0 + 0x38) = v38;
        }
    }
    return temp_v0;
}

void func_800E3260(s32 a0, s32 a1, s32 a2) {
    extern u8 D_80091618[];
    extern s32 func_800B1260(s32);
    register u8 *base asm("a0");
    u16 k = func_800B1260(a0);
    base = D_80091618;
    {
        u8 *p = base + (k * 0x1A8);
        *(s32 *)(p + 0xA4) = a1;
        *(s32 *)(p + 0xA8) = a2;
        *(s32 *)(p + 0xAC) = 5;
    }
}

#include "common.h"

void func_800E32D0(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    (*D_800F1EE0) = 1;
    func_800A4984();
    (*D_800F1EE0) = 0;
    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

void func_800E334C(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    extern void func_800A4984(s32, s16 *, s16 *);
    extern void func_80025CEC(s32, s32, s32, s32);
    extern void func_80025E54(s32, s32, s32);

loop:
    (*D_800F1EE0) = 1;
    func_800A4984(arg0, arg1, arg2);
    (*D_800F1EE0) = 0;
    if (*arg1 + *arg2 < 10) {
        goto loop;
    }

    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

#include "common.h"

void func_800E33E4(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    (*D_800F1EE0) = 0;
    func_800A4984();
    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

void func_800E3450(s32 arg0, s32 arg1, s32 arg2) {
    extern u8 *D_800FDE08[];
    extern u8 D_80100F38[];
    extern s32 func_800B1260(void);
    extern void func_800D0730(void *, s32, s32, s32);
    extern void func_800CED80(s32, s32, s32);
    extern s32 func_800E3A04(s32, void *, void *);
    register s32 s3 asm("s3") = arg0;
    register s32 s1 asm("s1") = arg1;
    register s32 s5 asm("s5") = arg2;
    s32 s = s3 != 1;
    u8 *temp_s0 = (u8 *)D_80100F38 + ((func_800B1260() & 0xFFFF) * 0x79C);
    register u8 *temp_s4 asm("s4") = temp_s0 + 0x1CC;
    s16 temp_s1 = s1 - 1;
    s32 val = (temp_s1 * 8 - 1) + s5;
    u8 **temp_s2;

    *(s16 *)(temp_s0 + 0x32C) = val;
    *(s16 *)(temp_s0 + 0x32A) = val;
    *(s16 *)(temp_s0 + 0x326) = 0;
    *(s16 *)(temp_s0 + 0x324) = 0;
    func_800D0730(temp_s4, temp_s1, (s16)(s5 - 1), 0);
    func_800CED80(s3, *(s16 *)(temp_s0 + 0x32A), *(s16 *)(temp_s0 + 0x32C));
    temp_s2 = &D_800FDE08[s];
    *(s16 *)(*temp_s2 + 0x4E) = func_800E3A04(s3, temp_s4, temp_s2);
}

void func_800E355C(s32 arg0) {
    extern u8 D_80091618[];
    extern u8 *D_800FDE08[];
    extern u8 D_80100F38[];
    extern s32 func_800B1260();
    extern void func_800D0730(void *, s32, s32, s32);
    extern void func_800CED80(s32, s32, s32);
    extern s32 func_800E3A04(s32, void *, void *);

    u8 *base_s4 = D_80100F38;
    u16 k1 = func_800B1260();
    u8 *temp_a1 = base_s4 + (k1 * 0x79C);
    u8 *temp_v1 = D_80091618 + (k1 * 0x1A8);
    s32 s3 = arg0 != 1;
    s32 val_v0;
    s16 s2;
    s16 s1;
    u8 *temp_s0;
    u8 *temp_s4;
    u8 **temp_s3;

    *(s16 *)(temp_a1 + 0x1D4) = 0;
    *(s16 *)(temp_a1 + 0x1D6) = 0;
    *(s16 *)(temp_a1 + 0x1D8) = 0;
    val_v0 = *(s32 *)(temp_v1 + 0xA4);
    s2 = *(s32 *)(temp_v1 + 0xA8);
    *(s16 *)(temp_a1 + 0x338) = s2;
    *(s16 *)(temp_a1 + 0x334) = s2;
    *(s16 *)(temp_a1 + 0x332) = val_v0;
    s1 = *(s16 *)(temp_a1 + 0x332);
    *(s16 *)(temp_a1 + 0x336) = val_v0;

    temp_s0 = base_s4 + ((func_800B1260(arg0) & 0xFFFF) * 0x79C);
    temp_s4 = temp_s0 + 0x1CC;
    *(s16 *)(temp_s0 + 0x326) = 0;
    *(s16 *)(temp_s0 + 0x324) = 0;
    s1--;
    {
        s16 a1_arg = s1;
        s16 a2_arg = s2 - 1;
        s1 = (s1 * 8) - 1 + s2;
        *(s16 *)(temp_s0 + 0x32C) = s1;
        *(s16 *)(temp_s0 + 0x32A) = s1;
        func_800D0730(temp_s4, a1_arg, a2_arg, 0);
    }
    func_800CED80(arg0, *(s16 *)(temp_s0 + 0x32A), *(s16 *)(temp_s0 + 0x32C));
    temp_s3 = &D_800FDE08[s3];
    *(s16 *)(*temp_s3 + 0x4E) = func_800E3A04(arg0, temp_s4, temp_s3);
}

s32 func_800E36E4(s32 a0) {
    typedef struct {
        u8 pad0[0x8A];
        u16 unk8A;
        u8 pad8C[4];
        u16 unk90;
        u8 pad92[0x1A8 - 0x92];
    } S_80091618;
    extern S_80091618 D_80091618[];
    extern u16 D_8006AF80[];
    extern s32 D_800EE9B8[];
    register s32 t0 asm("t0") = a0;
    s32 s = t0 != 1;
    register S_80091618 *base asm("a0") = D_80091618;
    S_80091618 *e = &base[D_8006AF80[0]];
    register u16 v asm("v0");
    register s32 ret asm("v1");

    if (e->unk8A == 0xFFFF) {
        return 1;
    }
    if (t0 == 1) {
        if (D_800EE9B8[s] != 0) {
            ret = 4;
            v = e->unk90;
            goto ret_4_1;
        } else {
            v = e->unk90;
            ret = 1;
            goto ret_1_4;
        }
    }
    if (D_800EE9B8[s] != 0) {
        v = base[e->unk8A].unk90;
        ret = 1;
ret_1_4:
        if (v == 0) return ret;
        return 4;
    }
    v = base[e->unk8A].unk90;
    ret = 4;
ret_4_1:
    if (v == 0) return ret;
    return 1;
}

s32 func_800E3810(s32 a0) {
    typedef struct {
        u8 pad0[0x8A];
        u16 unk8A;
        u8 pad8C[4];
        u16 unk90;
        u8 pad92[0x1A8 - 0x92];
    } S_80091618;
    extern S_80091618 D_80091618[];
    extern u16 D_8006AF80[];
    extern s32 D_800EE9B8[];
    extern s32 func_800B1260(s32);
    extern s32 func_800B12D8(s32);
    register s32 s1 asm("s1") = a0;
    register s32 s2 asm("s2");
    register s32 s0 asm("s0");
    register s32 s asm("a0");
    s32 i3_var;

    func_800B1260(s1);
    s2 = func_800B12D8(s1);
    s0 = (u16)s2;
    s = s1 != 1;
    if (s1 != 0 && s1 == 1) {
        if ((s16)s2 == -1) {
            return 1;
        }
        if (D_800EE9B8[s] != 0) {
            if (D_800EE9B8[s] < 1) {
                if (D_800EE9B8[s] == -1) {
                    return 1;
                }
            } else if (D_800EE9B8[s] == 1) {
                if (D_80091618[s0].unk90 != 0) {
                    return 1;
                }
                return 4;
            }
        }
        if (D_80091618[s0].unk90 != 0) {
            return 4;
        }
        return 1;
    }
    i3_var = D_800EE9B8[s];
    if (i3_var != 0) {
        if (i3_var < 1) {
            if (i3_var == -1) {
                s0 = D_80091618[D_8006AF80[0]].unk8A;
                if (D_80091618[s0].unk90 != 0) {
                    return 4;
                }
                return 1;
            }
        } else if (i3_var == 1) {
            return 4;
        }
    }
    if (D_80091618[s0].unk90 != 0) {
        return 1;
    }
    return 4;
}

extern u8 D_800900C0[], D_8008ED68[];
extern s32 func_800E3810(s32);
extern void PushMatrix(void), PopMatrix(void);
extern void func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);
s32 func_800E3A04(s32 arg0, void *v, u8 **o) {
    struct { s16 sx, sy; s32 p, f, z; } t;
    s32 m = func_800E3810(arg0);
    PushMatrix();
    func_8002CEC0(D_800900C0 + m * 0xBC);
    RotTransPers(v, (s32 *)&t.sx, &t.p, &t.f);
    *(s16 *)(*o + 0x46) = (u16)t.sx - M2C_GFIELD(D_8008ED68, s32, 0x108) / 2;
    *(s16 *)(*o + 0x4A) = (u16)t.sy - M2C_GFIELD(D_8008ED68, s32, 0x10C) / 2 + 2;
    PopMatrix();
    return t.z - 4;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3B14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3C24);

#include "gte_inline.h"

s32 func_800E3D10(void) {
    return 0;
}

extern u8 D_800900C0[], D_8008ED68[], D_80063940[], D_80100F38[];
extern s16 D_800F1A68[];
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);
s32 func_800E3D18(s32 a0, void *v, u8 **obj) {
    struct {
        u16 sx;
        u16 sy;
        s32 p;
        s32 flag;
        s32 z;
    } t;
    u8 *scr;
    u8 *pl;
    s32 s;
    u16 k;
    s32 g;

    k = func_800B1260(a0);
    s = func_800E3810(a0);
    PushMatrix();
    func_8002CEC0(D_800900C0 + s * 0xBC);
    gte_ldv0(v);
    gte_rtps();
    gte_stsxy(&t);
    gte_stir0(&t.p);
    gte_stflg(&t.flag);
    GTE_MFC2(t.z, 19);
    t.z >>= 2;
    scr = D_8008ED68;
    *(u16 *)(*obj + 0x46) = t.sx - *(s32 *)(scr + 0x108) / 2;
    *(u16 *)(*obj + 0x4A) = t.sy - *(s32 *)(scr + 0x10C) / 2 + 2;
    PopMatrix();
    g = (*(u32 *)(D_80063940 + k * 60 + 0x20) >> 15) & 0xF;
    pl = D_80100F38 + k * 0x79C;
    *(u16 *)(*obj + 0x46) += (u16)D_800F1A68[(*(s16 *)(pl + 0x2BA) - 10) * 3 + g * 9];
    *(u16 *)(*obj + 0x4A) += (u16)D_800F1A68[(*(s16 *)(pl + 0x2BA) - 10) * 3 + g * 9 + 1];
    t.z += D_800F1A68[(*(s16 *)(pl + 0x2BA) - 10) * 3 + g * 9 + 2];
    return (s16)((u16)t.z - 5);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3F38);

#include "common.h"

extern s32 D_800FAE10[];
extern s32 D_800FDE08[];

void func_800E4158(s32 side) {
    s32 other = 1 - side;

    func_800C5850(D_800FDE08[other], D_800FAE10[other], 0, 1, 4);
}

s32 func_800E41B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    typedef struct {
        u8 pad0[0x10];
        u16 unk10;
        u8 pad12[0x8A - 0x12];
        u16 unk8A;
        u8 pad8C[0x1A8 - 0x8C];
    } S_80091618;
    typedef struct {
        u8 pad0[0x10];
        u8 *unk10;
        u8 pad14[0x1C - 0x14];
    } S_80069EC4;
    extern u8 D_80100F38[];
    extern S_80091618 D_80091618[];
    extern u8 D_800EF364[][8][8];
    extern S_80069EC4 D_80069EC4[][26];
    extern u16 D_8006AF80[], D_80078C20[];
    extern s32 D_800EE9B8[];
    extern s32 func_800B1260(s32), func_800E36E4(s32);
    u16 k = func_800B1260(a0);
    s32 n;
    u8 *p;
    u16 idx, m;
    u8 b;
    if (k == 0xFFFF) return 0;
    n = func_800E36E4(a0);
    p = D_80100F38 + k * 0x79C;
    if (!(*(s16 *)(p + 0x328) < *(s16 *)(p + 0x220) / 2) && D_800EE9B8[1 - a0] != 0) n = n == 1 ? 4 : 1;
    if (n == 1) {
        idx = D_8006AF80[0];
        m = D_80078C20[0];
    } else {
        m = 1 - D_80078C20[0];
        idx = D_80091618[D_8006AF80[0]].unk8A;
    }
    b = D_800EF364[D_80091618[idx].unk10][a2][a3 - 9];
    return (s16)(*(u16 *)(D_80069EC4[(s16)m][n].unk10 + b * 8 + 4) - 4);
}

s32 func_800E43AC(s32 a0, s32 a1, s32 a2, s32 a3) {
    typedef struct {
        u8 pad0[0x10];
        u16 unk10;
        u8 pad12[0x8A - 0x12];
        u16 unk8A;
        u8 pad8C[0x1A8 - 0x8C];
    } S_80091618;
    typedef struct {
        u8 pad0[0x10];
        u8 *unk10;
        u8 pad14[0x1C - 0x14];
    } S_80069EC4;
    extern u8 D_80100F38[];
    extern S_80091618 D_80091618[];
    extern u8 D_800EF364[][8][8];
    extern S_80069EC4 D_80069EC4[][26];
    extern u16 D_8006AF80[], D_80078C20[];
    extern s32 D_800EE9B8[];
    extern s32 func_800B1260(s32), func_800E3810(s32);
    u16 k = func_800B1260(a0);
    s32 n;
    u8 *p;
    u16 idx, m;
    u8 b;
    if (k == 0xFFFF) return 0;
    n = func_800E3810(a0);
    p = D_80100F38 + k * 0x79C;
    if (!(*(s16 *)(p + 0x328) < *(s16 *)(p + 0x220) / 2) && D_800EE9B8[1 - a0] != 0) n = n == 1 ? 4 : 1;
    if (n == 1) {
        idx = D_8006AF80[0];
        m = D_80078C20[0];
    } else {
        m = 1 - D_80078C20[0];
        idx = D_80091618[D_8006AF80[0]].unk8A;
    }
    b = D_800EF364[D_80091618[idx].unk10][a2][a3 - 9];
    return (s16)(*(u16 *)(D_80069EC4[(s16)m][n].unk10 + b * 8 + 4) - 4);
}

s32 func_800E45A8(s32 a0, s32 a1, s32 a2, s32 a3) {
    typedef struct {
        u8 pad0[0x10];
        u16 unk10;
        u8 pad12[0x8A - 0x12];
        u16 unk8A;
        u8 pad8C[0x1A8 - 0x8C];
    } S_80091618;
    typedef struct {
        u8 pad0[0x10];
        u8 *unk10;
        u8 pad14[0x1C - 0x14];
    } S_80069EC4;
    extern S_80091618 D_80091618[];
    extern u8 D_800EF364[][8][8];
    extern S_80069EC4 D_80069EC4[][26];
    extern u16 D_8006AF80[], D_80078C20[];
    extern s32 func_800E36E4();
    s32 n = 4;
    u16 idx, m;
    u8 b;

    if (a0 == 1) {
        n = 1;
    }
    if (func_800E36E4() == 1) {
        idx = D_8006AF80[0];
        m = D_80078C20[0];
    } else {
        m = 1 - D_80078C20[0];
        idx = D_80091618[D_8006AF80[0]].unk8A;
    }
    b = D_800EF364[D_80091618[idx].unk10][a2][a3 - 9];
    return (s16)(*(u16 *)(D_80069EC4[(s16)m][n].unk10 + b * 8 + 4) - 5);
}

void func_800E470C(void) {

}

void func_800E4714(void) {

}

s32 func_800E471C(void) {
    return 0;
}

#include "common.h"

void func_800E4724(void) {
    extern u16 D_8008ED80[];
    extern u8 D_800F1F58[];
    extern u8 D_800F1F70[];
    extern u8 D_80105990[];
    s16 temp_s2;
    s32 temp_s0;
    void *temp_s0_2;
    void *temp_v0;

    M2C_GFIELD(D_80105990, s16, 8) = (s16) (((*D_8008ED80) + rand()) & 1);
    func_800E4838(1, 0);
    temp_s2 = M2C_GFIELD(D_80105990, s16, 0);
    temp_s0 = temp_s2 * 8;
    temp_v0 = temp_s0 + D_800F1F58;
    M2C_GFIELD(D_80105990, s16, 0xC) = GetClut(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4));
    temp_s0_2 = temp_s0 + D_800F1F70;
    M2C_GFIELD(D_80105990, s16, 0xE) = GetTPage(0, 0, M2C_FIELD(temp_s0_2, s32 *, 0), M2C_FIELD(temp_s0_2, s32 *, 4));
    if (temp_s2 == 0) {
        func_800154C4();
    }
}

void func_800E47D8(void) {
    func_800E4AD0();
}

#include "common.h"
#include "gte_inline.h"

void func_800E47F8(void) {
    extern s16 D_80105990[];
    func_800E4838(1, 1);
    if ((*D_80105990) == 0) {
        func_80015524();
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E4838);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E4AD0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E53CC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E5C08);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6158);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E66A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E680C);

typedef struct {
    u8 pad[0x1A2];
    u16 timer;
    u8 tail[4];
} Record_800E68D8;
void func_800E68D8(u32 player) {
    extern Record_800E68D8 D_80091618[];
    u32 base = (u32)D_80091618;
    u32 offset = (player & 0xFFFF) * 0x1A8;
    Record_800E68D8 *record = (Record_800E68D8 *)(base + offset);
    record->timer /= 0x18;
    func_800A752C();
    record->timer = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6948);

s32 func_800E6A14(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6A1C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6AF4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6BD8);
