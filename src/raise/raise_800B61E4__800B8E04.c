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

void func_800B8E04(void) {
    func_800A9A74();
}

s32 func_800B8E24(void) {
    return 1;
}

s32 func_800B8E2C(void) {
    return 1;
}
