#include "common.h"

void func_8009B088(void) {
    extern u16 D_8006AF80[];
    extern u8 D_8008ED68[];
    extern u8 D_80091618[];
    extern void * D_800EFF4C[];
    u8 *var_v1;
    s32 var_a0;
    s32 var_v0;

    var_a0 = 0;
    var_v1 = D_80091618;
loop_1:
    var_v0 = 0;
    if ((M2C_FIELD(var_v1, u16 *, 0x10) != 0xFFFF) && (var_a0 != (*D_8006AF80))) {
        var_v0 = 0;
        if (M2C_FIELD(var_v1, u16 *, 0x8A) == 0xFFFF) {
            var_v0 = (u16) M2C_FIELD(var_v1, u16 *, 0x84) < 3U;
        }
    }
    if (var_v0 == 0) {
        var_a0 += 1;
        var_v1 += 0x1A8;
        if (var_a0 >= 6) {

        } else {
            goto loop_1;
        }
    }
    M2C_FIELD(D_8008ED68, s32 *, 0x99C) = var_a0;
    M2C_FIELD(D_8008ED68, s32 *, 0x9A0) = 0;
    M2C_FIELD(D_8008ED68, s32 *, 0x9A4) = 0x54;
    M2C_FIELD(D_8008ED68, s32 *, 0x9A8) = 0;
    M2C_FIELD(D_8008ED68, s32 *, 0x9AC) = 0;
    func_800B8700(0x18, (*D_8006AF80), 1);
    M2C_FIELD((*D_800EFF4C), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800EFF4C), s32 *, 0x38) | 1);
}
