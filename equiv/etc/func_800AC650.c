#include "common.h"

void func_800AC650(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u8 D_800B3D20[];
    extern u8 D_800B3D24[];
    extern u8 D_800B3D25[];
    extern M2C_UNK D_800B3D38[];
    s16 var_v1;
    s32 temp_a1;
    s32 temp_a3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x80);
    var_v0 = (u16) M2C_FIELD(D_8008ED68, u16 *, 0xDC) < 7U;
    if (((M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) && (var_v0 = (u16) M2C_FIELD(D_8008ED68, u16 *, 0xDC) < 7U, (((u16) M2C_FIELD(D_8008ED68, u16 *, 0xE0) < 2U) == 0))) || (var_v0 == 0)) {
        if (temp_a3 == 5) {
            if (((*D_800B3D24) != temp_a1) && ((*D_800B3D25) == 1)) {
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
                goto block_10;
            }
        } else if (*((temp_a1 * 6) + D_800B3D38 + temp_a3) != 0) {
            var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
            goto block_10;
        }
    } else {
        var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
block_10:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0_2;
    }
    if ((M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) && (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 4)) {
        if ((*D_800B3D20) == 0) {
            var_v1 = -2;
            if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
                var_v1 = 2;
            }
            M2C_FIELD(arg0, s16 *, 0x6A) = var_v1;
            var_v0_3 = M2C_FIELD(arg0, s32 *, 0x38) | 8;
            goto block_18;
        }
    } else {
        var_v0_3 = M2C_FIELD(arg0, s32 *, 0x38) & ~8;
block_18:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0_3;
    }
}
