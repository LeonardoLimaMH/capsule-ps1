#include "common.h"

s32 func_800B9B2C(void) {
    extern u16 D_8006AF80[];
    extern u16 D_800EFA4A[];
    extern u16 D_800EFA4C[];
    extern u8 D_80091618[];
    u8 *e = D_80091618 + D_8006AF80[0] * 0x1A8;
    u8 *f;
    u16 b = *(u16 *)(e + 0x8A);
    u16 c;
    *(u16 *)(e + 0x8A) = 0xFFFF;
    *(u16 *)(e + 0x8C) = 0;
    f = D_80091618 + b * 0x1A8;
    *(u16 *)(f + 0x8A) = 0xFFFF;
    *(u16 *)(f + 0x8C) = 0;
    *(u16 *)(e + 0x86) += 1;
    c = *(u16 *)(f + 0x86);
    D_800EFA4A[0] = 0;
    *(u16 *)(f + 0x86) = c + 1;
    D_800EFA4C[0] = 0;
    func_800B4C40(D_8006AF80[0]);
    func_800B6FA0();
    func_800ABF7C(1);
    return 1;
}

s32 func_800B9BF4(void) {
    extern s16 D_800EFA4E[];
    (*D_800EFA4E) = 0x3C;
    return 1;
}
