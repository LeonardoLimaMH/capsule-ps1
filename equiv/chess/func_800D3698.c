#include "common.h"

s32 func_800D3698(void) {
    extern u8 D_80085428[];
    extern u8 D_80118C18[];
    extern u8 D_80118C25[];
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_hi;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_a2;
    u8 temp_s2;
    u8 temp_v0_2;
    u8 temp_v0_3;
    void *temp_s0;
    void *temp_s5;
    void *temp_v0;

    temp_s0 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0xB4) + (D_80118C18 + 0xD);
    temp_s5 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + (D_80118C18 + 0x392);
    if ((u8) M2C_FIELD(temp_s0, u8 *, 5) < 6U) {
loop_2:
        temp_a2 = M2C_FIELD(temp_s5, u8 *, 8);
        temp_a3 = (M2C_FIELD(temp_s0, u8 *, 5) + M2C_FIELD(temp_s0, u8 *, 6)) % 6;
        temp_a1 = temp_a3 & 0xFF;
        if ((M2C_FIELD((temp_s5 + ((temp_a1 * 7) + (temp_a2 * 0x2A))), u8 *, 0x12) != 0) && (M2C_FIELD(((temp_a1 * 0x7C) + (temp_a2 * 0x2E8) + D_80085428), u8 *, 0x610) == 0)) {
            if (M2C_FIELD(temp_s0, u8 *, 9) == 0) {
                M2C_FIELD(temp_s5, u8 *, 9) = (u8) ((temp_a2 << 7) | (temp_a3 + 1));
                M2C_FIELD(temp_s0, u8 *, 9) = func_800D4C20(M2C_FIELD(temp_s5, u8 *, 9), temp_s0 + 0xB, temp_a2, temp_a3);
                M2C_FIELD(temp_s0, u8 *, 8) = func_800202A4(M2C_FIELD(temp_s0, u8 *, 9));
            }
            if ((u8) M2C_FIELD(temp_s0, u8 *, 7) < (u8) M2C_FIELD(temp_s0, u8 *, 9)) {
loop_8:
                temp_hi = (s32) (M2C_FIELD(temp_s0, u8 *, 7) + M2C_FIELD(temp_s0, u8 *, 8)) % (s32) M2C_FIELD(temp_s0, u8 *, 9);
                temp_v0 = temp_s0 + temp_hi;
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xB) / 13;
                temp_s4 = M2C_FIELD(temp_v0, u8 *, 0xB) % 13;
                if ((temp_hi == 0) || (M2C_FIELD((((temp_v1 & 0xFF) * 0xD) + temp_s5 + (temp_s4 & 0xFF)), u8 *, 0x64) == 0)) {
                    temp_s2 = M2C_FIELD(temp_s0, u8 *, 0xA);
                    if (((temp_a3 & 0xFF) == 5) || (var_v0 = 1, (func_800D34D4(temp_s5, temp_s0, temp_v1 & 0xFF, temp_s4 & 0xFF) != 1))) {
                        if ((temp_s2 == 0) && (temp_hi != 0)) {
                            M2C_FIELD(temp_s0, s8 *, 2) = (s8) (temp_s4 + ((temp_v1 & 0xFF) * 0xD));
                            M2C_FIELD(temp_s0, s8 *, 1) = 1;
                            M2C_FIELD(temp_s0, s8 *, 3) = 0;
                            M2C_FIELD(temp_s0, u8 *, 0) = (u8) M2C_FIELD(temp_s5, u8 *, 9);
                            M2C_FIELD(temp_s0, u8 *, 4) = (u8) (M2C_FIELD(temp_s0, u8 *, 4) + 1);
                            M2C_FIELD(temp_s0, u8 *, 0xA) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xA) + 1);
                            var_v0 = 1;
                            if (M2C_FIELD(D_80118C18, u8 *, 0x9E8) != 0) {
                                if ((M2C_FIELD(D_80118C18, u8 *, 0xA) != 0) || !(func_800FF8E0((M2C_FIELD(D_80118C18, u8 *, 0xA) * 0xB4) + D_80118C25) & 0xFF)) {
                                    return 1;
                                }
                                goto block_18;
                            }
                            /* Duplicate return node #24. Try simplifying control flow for better match */
                            return var_v0;
                        }
block_18:
                        M2C_FIELD(temp_s0, u8 *, 0xA) = 0U;
                        goto block_19;
                    }
                    /* Duplicate return node #24. Try simplifying control flow for better match */
                    return var_v0;
                }
block_19:
                temp_v0_2 = M2C_FIELD(temp_s0, u8 *, 7) + 1;
                M2C_FIELD(temp_s0, u8 *, 7) = temp_v0_2;
                if ((u32) (temp_v0_2 & 0xFF) >= (u8) M2C_FIELD(temp_s0, u8 *, 9)) {
                    goto block_20;
                }
                goto loop_8;
            }
block_20:
            M2C_FIELD(temp_s0, u8 *, 7) = 0U;
            M2C_FIELD(temp_s0, u8 *, 9) = 0U;
            goto block_21;
        }
block_21:
        temp_v0_3 = M2C_FIELD(temp_s0, u8 *, 5) + 1;
        M2C_FIELD(temp_s0, u8 *, 5) = temp_v0_3;
        if ((u32) (temp_v0_3 & 0xFF) >= 6U) {
            goto block_22;
        }
        goto loop_2;
    }
block_22:
    var_v0 = 0;
    if (M2C_FIELD(temp_s0, u8 *, 5) == 6) {
        var_v0 = 1;
        M2C_FIELD(temp_s0, u8 *, 0) = 0U;
        M2C_FIELD(temp_s0, s8 *, 1) = 0;
        M2C_FIELD(temp_s0, s8 *, 2) = 0;
        M2C_FIELD(temp_s0, s8 *, 3) = 0;
        M2C_FIELD(temp_s0, u8 *, 5) = (u8) (M2C_FIELD(temp_s0, u8 *, 5) + 1);
    }
    return var_v0;
}
