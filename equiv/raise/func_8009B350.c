#include "common.h"

s32 func_8009B350(s32 arg0) {
    extern u8 D_8008ED68[];
    s32 var_s0;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a2;
    u32 temp_v1;
    u32 var_v0_2;
    u32 var_v0_3;

    var_s0 = 1;
    if (M2C_FIELD(D_8008ED68, u16 *, 0xE8) != 1) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xE8) < 2) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xE8) != 0) {
                return 1;
            }
            var_v0 = 1;
            if (arg0 == 2) {
                goto block_8;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return var_v0;
        }
        switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) { /* irregular */
        case 2:
            if (arg0 != 0) {
                var_s0 = 0;
                goto block_21;
            }
block_8:
            func_80012628(D_8008ED68);
            return 1;
        case 3:
            temp_a0 = M2C_FIELD(D_8008ED68, u32 *, 0x9A4);
            M2C_FIELD(D_8008ED68, u32 *, 0x9A4) = (u32) (temp_a0 + 0xA8);
            if (M2C_FIELD(D_8008ED68, s32 *, 0x9A8) == 1) {
                var_v0_2 = temp_a0 + 0xA2;
            } else {
                var_v0_2 = temp_a0 + 0xAE;
            }
            M2C_FIELD(D_8008ED68, u32 *, 0x9A4) = var_v0_2;
            temp_a0_2 = M2C_FIELD(D_8008ED68, u32 *, 0x9A4) % 168;
            M2C_FIELD(D_8008ED68, u32 *, 0x9A4) = temp_a0_2;
            if (temp_a0_2 == 0x54) {
                var_s0 = 2;
            }
            goto block_21;
        default:
            return 1;
        }
    } else {
        temp_v1 = M2C_FIELD(D_8008ED68, u32 *, 0x9A4);
        M2C_FIELD(D_8008ED68, u32 *, 0x9A4) = (u32) (temp_v1 + 0xA8);
        if (M2C_FIELD(D_8008ED68, s32 *, 0x9A8) == 1) {
            var_v0_3 = temp_v1 + 0xA2;
        } else {
            var_v0_3 = temp_v1 + 0xAE;
        }
        M2C_FIELD(D_8008ED68, u32 *, 0x9A4) = var_v0_3;
        temp_a2 = M2C_FIELD(D_8008ED68, u32 *, 0x9A4) / 84;
        temp_a0_3 = M2C_FIELD(D_8008ED68, u32 *, 0x9A4) % 168;
        M2C_FIELD(D_8008ED68, u32 *, 0x9A4) = temp_a0_3;
        if (temp_a0_3 == 0) {
            func_80012628((u8 *) temp_a0_3, D_8008ED68, temp_a2);
            var_s0 = 0;
        }
block_21:
        var_v0 = var_s0;
        return var_v0;
    }
}
