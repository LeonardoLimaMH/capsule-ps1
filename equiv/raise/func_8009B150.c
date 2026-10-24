#include "common.h"

s32 func_8009B150(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008F704[];
    extern s32 D_8008F710[];
    extern M2C_UNK D_80091618[];
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    void *temp_v1;
    void *temp_v1_2;

    temp_s0 = M2C_FIELD(D_8008ED68, s32 *, 0x99C);
    var_a3 = 0;
    if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
        func_80034AB0(0x48, 0);
        var_a3 = 1;
    } else if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
        func_80034AB0(0x5D, 0);
        var_a3 = -1;
    } else {
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x2000) {
            do {
                temp_a0 = (M2C_FIELD(D_8008ED68, s32 *, 0x99C) + 1) % 6;
                temp_v1 = (temp_a0 * 0x1A8) + D_80091618;
                M2C_FIELD(D_8008ED68, s32 *, 0x99C) = temp_a0;
                var_v0_2 = 0;
                if ((M2C_FIELD(temp_v1, u16 *, 0x10) != 0xFFFF) && (temp_a0 != (*D_8006AF80))) {
                    var_v0_2 = 0;
                    if (M2C_FIELD(temp_v1, u16 *, 0x8A) == 0xFFFF) {
                        var_v0_2 = (u16) M2C_FIELD(temp_v1, u16 *, 0x84) < 3U;
                    }
                }
            } while (var_v0_2 == 0);
            var_v0_3 = 2;
            goto block_20;
        }
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8000) {
            do {
                temp_a0_2 = (M2C_FIELD(D_8008ED68, s32 *, 0x99C) + 5) % 6;
                temp_v1_2 = (temp_a0_2 * 0x1A8) + D_80091618;
                M2C_FIELD(D_8008ED68, s32 *, 0x99C) = temp_a0_2;
                var_v0_4 = 0;
                if ((M2C_FIELD(temp_v1_2, u16 *, 0x10) != 0xFFFF) && (temp_a0_2 != (*D_8006AF80))) {
                    var_v0_4 = 0;
                    if (M2C_FIELD(temp_v1_2, u16 *, 0x8A) == 0xFFFF) {
                        var_v0_4 = (u16) M2C_FIELD(temp_v1_2, u16 *, 0x84) < 3U;
                    }
                }
            } while (var_v0_4 == 0);
            var_v0_3 = 1;
block_20:
            (*D_8008F710) = var_v0_3;
        }
    }
    var_v0 = var_a3;
    if (temp_s0 != (*D_8008F704)) {
        func_80034AB0(0x84);
        var_v0 = 2;
    }
    return var_v0;
}
