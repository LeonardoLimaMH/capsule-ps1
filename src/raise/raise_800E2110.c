#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2110);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2558);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2714);

void func_800E2A98(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2AA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2D7C);

typedef struct {
    u8 pad0[0x30];
    struct { u32 unk0:3, unk3:1, unk4:2, unk6:3, unk9:23; } f30;
    struct { u32 unk0:8, unk8:1, unk9:1, unk10:2, unk12:20; } f34;
    struct { u32 unk0:1, unk1:2, unk3:1, unk4:2, unk6:1, unk7:25; } f38;
} Flags_800E3090;

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
            register u32 v30 asm("v1");
            register u32 v34 asm("a0");
            Flags_800E3090 *p=temp_v0;

            *(s32 *)((u8 *)temp_v0 + 0x18) = temp_v0_2;
            v30 = *(s32 *)((u8 *)temp_v0 + 0x30);
            v34 = *(s32 *)((u8 *)temp_v0 + 0x34);
            *(s16 *)((u8 *)temp_v0 + 0x66) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x1C) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x8C) = temp_s5;

            v30 = (v30 & ~0x1C0) | 0x40;
            v34 &= ~0x100;
            v34 |= ((var_s6 & 1) << 8);
            v34 &= ~0x200;
            v34 |= ((arg0 & 1) << 9);
            v34 &= ~0xC00;
            v34 |= ((temp_s3 & 3) << 10);
            v30 &= m_30;
            v30 &= m_8;
            *(s32 *)((u8 *)temp_v0 + 0x30) = v30;
            *(s32 *)((u8 *)temp_v0 + 0x34) = v34;
            p->f38.unk0=1;
            p->f38.unk3=0;
            p->f38.unk4=0;
            p->f38.unk6=0;
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
    s32 s3 = arg0;
    s32 s1 = arg1;
    register s32 s5 asm("s5") = arg2;
    s32 s = s3 != 1;
    u8 *temp_s0 = (u8 *)D_80100F38 + ((func_800B1260() & 0xFFFF) * 0x79C);
    register u8 *temp_s4 asm("s4") = temp_s0 + 0x1CC;
    s32 temp_s1 = s1 - 1;
    s16 val = temp_s1 * 8 - 1;
    u8 **temp_s2;
    val += s5;

    *(s16 *)(temp_s0 + 0x32C) = val;
    *(s16 *)(temp_s0 + 0x32A) = val;
    *(s16 *)(temp_s0 + 0x326) = 0;
    *(s16 *)(temp_s0 + 0x324) = 0;
    func_800D0730(temp_s4, (s16)temp_s1, (s16)(s5 - 1), 0);
    func_800CED80(s3, *(s16 *)(temp_s0 + 0x32A), *(s16 *)(temp_s0 + 0x32C));
    temp_s2 = &D_800FDE08[s];
    *(s16 *)(*temp_s2 + 0x4E) = func_800E3A04(s3, temp_s4, temp_s2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E355C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E36E4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3810);

#include "gte_inline.h"

extern u8 D_800900C0[], D_8008ED68[];
extern s32 func_800E3810(s32);
extern void PushMatrix(void), PopMatrix(void);
extern void func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);
INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3A04);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3B14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3C24);

#include "gte_inline.h"

s32 func_800E3D10(void) {
    return 0;
}

extern u8 D_800900C0[], D_8008ED68[], D_80063940[], D_80100F38[];
extern s16 D_800F1A68[];
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);
INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3D18);

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

s32 func_800E680C(u16 a0, u16 a1) {
    typedef struct {
        u8 pad0[0xA0];
        u16 unkA0;
        u8 padA2[0x1A8 - 0xA2];
    } S_80091618;
    typedef struct {
        u8 pad0[0x26];
        s16 unk26;
    } S_801061E0;
    extern S_80091618 D_80091618[];
    extern s16 D_800ED228[][3];
    extern S_801061E0 D_801061E0[];
    s16 v;
    s32 r;
    D_801061E0[a0].unk26 = v = D_800ED228[a1][D_80091618[a0].unkA0];
    switch (v) {
    case 0:
        r = 0;
        break;
    case 1:
    default:
        r = 1;
        break;
    case 2:
        r = 2;
        break;
    }
    return r;
}

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

void func_800E6948(u16 a0) {
    typedef struct {
        u8 pad0[0x92];
        u16 unk92;
        u8 pad94[0xD2 - 0x94];
        s16 unkD2[12];
        u8 padEA[0x1A8 - 0xEA];
    } S_80091618;
    extern S_80091618 D_80091618[];
    extern u16 D_800ED75C[][13];
    s16 *v = &D_80091618[a0].unkD2[0];
    s16 i;
    for (i = 2; i < 12; i++, v++) {
        *v += D_800ED75C[D_80091618[a0].unk92][i];
        if (*v < 0) *v = 0;
        else if (*v >= 0x100) *v = 0xFF;
    }
}

s32 func_800E6A14(void) {
    return 0;
}

s32 func_800E6A1C(u16 a0, s16 a1) {
    typedef struct {
        u8 pad0[0xC4];
        s32 unkC4;
        u8 padC8[0x1A8 - 0xC8];
    } S_80091618;
    extern S_80091618 D_80091618[];
    s32 t = D_80091618[a0].unkC4 / 0x7080;
    if (t >= 0x13) {
        a1 = (s16)(a1 * 80) / 100;
    } else if (t >= 0xE) {
        a1 = (s16)(a1 * (100 - (t - 13) * 4)) / 100;
    }
    return a1;
}

void func_800E6AF4(u16 a0, u16 a1)
{
    extern u8 D_800916E8[];
    extern u8 D_800ECBEC[];
    s16 *e = (s16 *)(D_800916E8 - 0xD0 + a0 * 0x1A8);
    s16 *q = (s16 *)(D_800ECBEC + a1 * 0x22);
    s32 i;

    for (i = 2; i < 17; i++) {
        if (i != 16 || e[0x77] != 0) {
            e[0x67 + i] += q[i];
        }
        if (e[0x67 + i] < 0) {
            e[0x67 + i] = 0;
        } else if (i >= 13) {
            if (e[0x67 + i] > 100) {
                e[0x67 + i] = 100;
            }
        } else if (e[0x67 + i] > 0xFF) {
            e[0x67 + i] = 0xFF;
        }
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6BD8);
