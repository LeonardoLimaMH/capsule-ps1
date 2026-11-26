#include "common.h"

typedef struct {
    u8 pad0[0x30];
    struct { u32 unk0:3, unk3:1, unk4:2, unk6:3, unk9:23; } f30;
    struct { u32 unk0:8, unk8:1, unk9:1, unk10:2, unk12:20; } f34;
    struct { u32 unk0:1, unk1:2, unk3:1, unk4:2, unk6:1, unk7:25; } f38;
} Flags_800E3090;

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E3810);

#include "gte_inline.h"

extern u8 D_800900C0[], D_8008ED68[];
extern s32 func_800E3810(s32);
extern void PushMatrix(void), PopMatrix(void);
extern void func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);
INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E3A04);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E3B14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E3C24);

#include "gte_inline.h"

s32 func_800E3D10(void) {
    return 0;
}

extern u8 D_800900C0[], D_8008ED68[], D_80063940[], D_80100F38[];
extern s16 D_800F1A68[];
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);
INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E3D18);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E3F38);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E4838);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E4AD0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E53CC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E5C08);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E6158);

void func_800E66A4(u16 a0, u16 a1) {
    typedef struct {
        u8 pad0[0xD2];
        u16 unkD2[12];
        u8 padEA[0x198 - 0xEA];
        s16 unk198;
        s16 unk19A;
        s16 unk19C;
        u8 pad19E[0x1A8 - 0x19E];
    } S_80091618;
    extern S_80091618 D_80091618[];
    extern u16 D_800EC898[][17];
    register s16 neg1 asm("a1");
    u16 *v;
    s16 i;

    D_80091618[a0].unk19A = (neg1 = -1);
    D_80091618[a0].unk198 = neg1;
    if (a1 == 0x14) {
        if (D_80091618[a0].unk19C == 0) {
            D_80091618[a0].unk198 = 5;
        } else {
            D_80091618[a0].unk19A = 5;
        }
    } else if (a1 == 0x15) {
        D_80091618[a0].unk19A = 5;
        D_80091618[a0].unk198 = neg1;
    }

    v = &D_80091618[a0].unkD2[0];
    for (i = 2; i < 12; i++, v++) {
        u16 s = *v + D_800EC898[a1][i];
        *v = s;
        if (D_80091618[a0].unk19C != 0 && (u16)(i - 3) < 2) {
            *v = s + 4;
        }
        if ((s16)*v < 0) {
            *v = 0;
        } else if ((s16)*v >= 0x100) {
            *v = 0xFF;
        }
    }
}

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110__800E3810", func_800E6AF4);

s32 func_800E6BD8(u16 a0, u16 a1) {
    typedef struct {
        u8 pad0[0xA0];
        u16 unkA0;
        u8 padA2[0xC2 - 0xA2];
        s16 unkC2;
        u8 padC4[0x1A8 - 0xC4];
    } S_80091618;
    typedef struct {
        u8 pad0[0x26];
        s16 unk26;
    } S_801061E0;
    extern S_80091618 D_80091618[];
    extern s16 D_800ED228[][3];
    extern S_801061E0 D_801061E0[];
    extern u32 D_8008ED80[];
    s16 v;
    s32 n;
    float f;

    D_801061E0[a0].unk26 = v = D_800ED228[a1][D_80091618[a0].unkA0];
    switch (v) {
    default: n = 1; break;
    case 0: n = 0; break;
    case 1: n = 1; break;
    case 2: n = 2; break;
    }
    f = (float)n * (float)D_80091618[a0].unkC2 / 255.0f * 100.0f;
    if (f < (float)(D_8008ED80[0] % 100)) {
        return -1;
    }
    return 0;
}
