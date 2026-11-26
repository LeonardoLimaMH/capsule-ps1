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

void func_800D4B7C(s32 unused_arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;
    void *temp_s0;

    temp_a1 = arg1 & 0xFFFF;
    temp_s0 = (temp_a1 * 0x79C) + (u8 *)D_80100F38;
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x180);
    if (temp_a0 != 0) {
        func_80013928(temp_a0, temp_a1);
        M2C_FIELD(temp_s0, s32 *, 0x180) = 0;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D4B7C", func_800D4BE4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D4B7C", func_800D4CC4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D4B7C", func_800D4EC0);

void func_800D533C(void) {
    extern struct { u16 unk0; u16 unk2; s32 unk4; } D_8006AF80[];
    extern struct { u8 pad[0xC4]; s32 unkC4; u8 pad2[0x1A8 - 0xC8]; } D_80091618[];
    extern s32 D_800F1D18[];
    extern s32 func_800AECC8(u16);
    extern s32 func_800E14C4(u16);
    extern s32 func_800E1388(u16);
    extern s16 func_800E7B80(s16);
    extern void func_800C0810(s16, u16);
    extern void func_800D262C(s32, s32);
    s32 t;
    s16 r;
    s32 ret;

    t = D_8006AF80[0].unk4 % 1200;
    if (t == 300) {
        if (D_800F1D18[0] == -1) {
            D_800F1D18[0] = D_8006AF80[0].unk0;
        }
        if (func_800AECC8(D_800F1D18[0]) != -1 && func_800E14C4(D_800F1D18[0]) == 0 &&
            func_800E1388(D_800F1D18[0]) != 0 &&
            D_80091618[D_800F1D18[0]].unkC4 > 0xE10) {
            r = func_800E7B80(D_800F1D18[0]);
            if (r != -1) {
                func_800C0810(r, D_800F1D18[0]);
            }
        }
    } else if (t == 900) {
        if (D_800F1D18[0] == -1) {
            D_800F1D18[0] = D_8006AF80[0].unk0;
        }
        ret = func_800AECC8(D_800F1D18[0]);
        if (ret != -1 && D_80091618[D_800F1D18[0]].unkC4 >= 0xE10) {
            func_800D262C(ret, D_800F1D18[0]);
        }
        D_800F1D18[0] = (D_800F1D18[0] + 1) % 6;
    }
}

s32 func_800D5530(void) {
    return 0;
}
