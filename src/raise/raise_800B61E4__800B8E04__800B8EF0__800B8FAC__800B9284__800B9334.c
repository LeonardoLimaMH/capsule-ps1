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
extern S_80091618 D_80091618[];

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

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800EF2D8 1 0,1,2,3 */
extern u16 D_800EF2D8;
extern s32 func_800D1548(void);
extern void func_800D1CC4(s32, s32, s32, s32);

s32 func_800B94D4(void) {
    extern u16 D_8006AF80[];
    u16 a = D_8006AF80[0], b = D_800EF2D8;
    u8 *e = ((u8 *)D_80091618) + a * 0x1A8;
    u8 *f;
    *(u16 *)(e + 0x8A) = b;
    *(u16 *)(e + 0x8C) = 1;
    f = ((u8 *)D_80091618) + b * 0x1A8;
    *(u16 *)(f + 0x8A) = a;
    *(u16 *)(f + 0x8C) = 0;
    *(u16 *)(e + 0x84) += 1;
    *(u16 *)(f + 0x84) += 1;
    if (func_800D1548() == 0) func_800D1CC4(D_8006AF80[0], 10, 0, 0);
    return 1;
}
