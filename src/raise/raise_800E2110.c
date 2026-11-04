#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2110);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2558);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2714);

void func_800E2A98(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2AA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2D7C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3090);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3260);

void func_800E32D0(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    (*D_800F1EE0) = 1;
    func_800A4984();
    (*D_800F1EE0) = 0;
    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E334C);

void func_800E33E4(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    (*D_800F1EE0) = 0;
    func_800A4984();
    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3450);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E355C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E36E4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3810);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3A04);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3B14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3C24);

s32 func_800E3D10(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3D18);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3F38);

extern s32 D_800FAE10[];
extern s32 D_800FDE08[];

void func_800E4158(s32 side) {
    s32 other = 1 - side;

    func_800C5850(D_800FDE08[other], D_800FAE10[other], 0, 1, 4);
}

extern u8 D_800900C0[], D_8008ED68[];
extern s32 func_800E3810(s32);
extern void PushMatrix(void), PopMatrix(void);
extern void func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);

#include "gte_inline.h"

extern u8 D_800900C0[], D_8008ED68[], D_80063940[], D_80100F38[];
extern s16 D_800F1A68[];
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);

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

typedef struct {
    u8 pad[0x1A2];
    u16 timer;
    u8 tail[4];
} Record_800E68D8;

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E43AC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E45A8);

void func_800E470C(void) {

}

void func_800E4714(void) {

}

s32 func_800E471C(void) {
    return 0;
}

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
