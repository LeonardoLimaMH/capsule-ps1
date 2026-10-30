#include "common.h"

#include "common.h"

void func_800BAD64(s32 arg0) {
    extern M2C_UNK D_800EFF58[];
    M2C_FIELD(D_800EFF58, s32 *, 0) = arg0;
    M2C_FIELD(D_800EFF58, s32 *, 4) = 0x20;
    M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x7C), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x7C), s32 *, 0x38) | 1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BAD90);

#include "common.h"

void func_800BAF3C(void) {
    extern M2C_UNK D_800EFF58[];
    M2C_FIELD(D_800EFF58, s32 *, 0) = 1;
    M2C_FIELD(D_800EFF58, s32 *, 4) = 0x20;
    M2C_FIELD(D_800EFF58, s32 *, 8) = 1;
    M2C_FIELD(D_800EFF58, s32 *, 0xC) = 0;
    M2C_FIELD(D_800EFF58, s32 *, 0x1C) = 1;
    func_8001E388(1);
}

#include "common.h"

void func_800BAF7C(void) {
    extern u8 D_800EFF58[];
    s32 var_s0;
    s32 var_s0_2;

    func_8001611C(0x1000);
    M2C_GFIELD(D_800EFF58, s32, 0) = 1;
    M2C_GFIELD(D_800EFF58, s32, 4) = 0x20;
    M2C_GFIELD(D_800EFF58, s32, 8) = 1;
    M2C_GFIELD(D_800EFF58, s32, 0xC) = 0;
    M2C_GFIELD(D_800EFF58, s32, 0x1C) = 1;
    func_8001E388();
    var_s0 = 0;
    func_800BB20C();
    do {
        func_800BB284(var_s0);
        func_800BB310(var_s0, 1);
        var_s0 += 1;
    } while (var_s0 < 7);
    var_s0_2 = 0;
    do {
        func_800BB034(var_s0_2);
        var_s0_2 += 1;
    } while (var_s0_2 < 3);
    func_800BB69C();
    func_800BB714();
    func_800BB79C(0);
    func_800BE020(0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB034);

#include "common.h"

extern u8 D_800EE5D0[];
extern u8 D_800EFF58[];

s32 func_800BB194(void) {
    s32 r = func_800BBA38(0x1A, 0x60, -0x30, 5, 0, D_800EE5D0, M2C_GFIELD(D_800EFF58, s32, 0x18), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x14) = r;
    return r;
}

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BB20C(void) {
    s32 r = func_800BBA38(0x1A, -0x180, 0x30, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x24), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x20) = r;
    return r;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB284);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB310);

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BB69C(void) {
    s32 r = func_800BBA38(0x1A, 0x38, 0x118, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x70), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x6C) = r;
    return r;
}

#include "common.h"

void func_800BB714(void) {
    extern u8 D_800EE5F0[];
    extern s32 D_800EF2D8[];
    extern u8 D_800EFF58[];
    M2C_GFIELD(D_800EFF58, s32, 0x74) = func_800BBA38(0x1A, 0x78, 0x120, 4, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x78) + (*D_800EF2D8) + 1, 1, 0, 0, 2, 0, 0);
}

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BB79C(void) {
    s32 r = func_800BBA38(0x19, 0x20, 0x38, 4, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x80), 0, 1, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x7C) = r;
    return r;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB814);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BBA38);
