#include "common.h"

void func_800B8E04(void) {
    func_800A9A74();
}

s32 func_800B8E24(void) {
    return 1;
}

s32 func_800B8E2C(void) {
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B8E34);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B8EF0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B8FAC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B91C8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B9284);

#include "common.h"

typedef struct {
    u8 _p0[0xA4];
    u16 f_A4;
    u8 _pA6[0x2];
    u16 f_A8;
    u8 _pAA[0xE2];
    s32 f_18C;
    u8 _p190[0x18];
} S_80091618;
typedef struct {
    u8 _p0[0x332];
    u16 f_332;
    u16 f_334;
    u16 f_336;
    u16 f_338;
    u8 _p33A[0x8];
    s16 f_342;
    s16 f_344;
    u8 _p346[0x456];
} S_80100F38;

s32 func_800B9334(void) {
    extern u16 D_8006AF80[];
    extern S_80091618 D_80091618[];
    extern s16 D_800ED88C[];
    extern s32 D_800EEB9C[];
    extern M2C_UNK D_800EFF58[];
    extern S_80100F38 D_80100F38[];
    u16 temp_a0;
    u16 temp_v1_2;
    S_80100F38 *temp_v0;
    S_80091618 *temp_v1;

    if ((*D_800EEB9C) == 1) {
        if (func_800A9A74() == -1) {
            M2C_GFIELD(D_800EFF58, s32, 0x84) = 0;
            M2C_GFIELD(D_800EFF58, s32, 0x88) = 0;
            temp_v1 = &D_80091618[(*D_8006AF80)];
            temp_a0 = temp_v1->f_A4;
            temp_v0 = &D_80100F38[(*D_8006AF80)];
            temp_v0->f_336 = temp_a0;
            temp_v0->f_332 = temp_a0;
            temp_v1_2 = temp_v1->f_A8;
            temp_v0->f_338 = temp_v1_2;
            temp_v0->f_334 = temp_v1_2;
            D_80100F38[(*D_8006AF80)].f_344 = 0;
            D_80100F38[(*D_8006AF80)].f_342 = 0;
            func_800ABF7C(1, ((u8 *)D_80100F38));
            return 1;
        }
        goto block_7;
    }
    if (M2C_GFIELD(D_800EFF58, s32, 0x84) == 2) {
        if (func_8009ED54(2) == -1) {
            func_800B9F50(1);
            (*D_800ED88C) = 0;
            func_800B7264(1);
        }
    } else {
        M2C_GFIELD(D_800EFF58, s32, 0x84) = 2;
        M2C_GFIELD(D_800EFF58, s32, 0x88) = 0;
    }
block_7:
    func_800ABF7C(1);
    return 0;
}

void func_800B94B4(void) {
    func_800A8E48();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B94D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B95AC);

#include "common.h"

s32 func_800B9610(void) {
    extern u16 D_8006AF80[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    s32 temp_s0;
    s32 var_s1;

    var_s1 = 1;
    (*D_800EFA4A) = 0;
    (*D_800EFA4C) = 0;
    do {
        temp_s0 = func_800B1260(var_s1) & 0xFFFF;
        if (temp_s0 != 0xFFFF) {
            func_800B4860(var_s1, temp_s0);
            func_800B4AAC(temp_s0);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
    func_800B6FA0();
    if (func_800D1548() != 0) {
        func_800D1CC4((*D_8006AF80), 0xA, 0, 0);
    }
    func_800ABF7C(1);
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B96C0);

#include "common.h"

void func_800B980C(void) {
    extern u16 D_8006AF80[];
    extern S_80091618 D_80091618[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    func_800B8BF0(1);
    func_800B8BF0(0);
    func_800A8E48();
    func_800D1CC4((*D_8006AF80), 0xB, 0, 0);
    (*D_800EFA4C) = 0;
    if ((*D_800EFA4A) != 0) {
        func_80024990(D_80091618[(*D_8006AF80)].f_18C, 1, 0x32, 0);
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B98AC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B8E04", func_800B9914);
