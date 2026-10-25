#include "common.h"

s32 func_800CF960(void) {
    extern u16 D_800859F4[];
    extern u8 D_80118C18[];
    extern u8 D_80118C22[];
    s32 temp_a0;
    s32 var_v0_2;
    u8 var_v0;
    void *temp_a2;

    if (func_800D3698() == 0) {
        var_v0 = M2C_FIELD(D_80118C18, u8 *, 0xA) - 1;
        if (M2C_FIELD(D_80118C18, u8 *, 0xA) == 0) {
            goto block_2;
        }
        goto block_15;
    }
    func_800D0360();
    temp_a2 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + (D_80118C18 + 0x392);
    temp_a0 = (u8) M2C_FIELD(D_80118C18, u8 *, 0xA) < (u8) M2C_FIELD(D_80118C18, u8 *, 0xB);
    var_v0_2 = 0;
    if (temp_a0 != 0) {
        var_v0_2 = 0;
        if ((u8) M2C_FIELD(temp_a2, u8 *, 0xC) < 5U) {
            if ((u8) M2C_FIELD(temp_a2, u8 *, 0xD) >= 5U) {
                var_v0_2 = 0;
            } else if (((u32) (((u32) ((*D_800859F4) & 0x700) >> 8) - 1) >= 6U) || ((var_v0_2 = 0, (M2C_FIELD(temp_a2, u8 *, 0xA) != 0)) && (var_v0_2 = 0, (M2C_FIELD(temp_a2, u8 *, 0xB) != 0)))) {
                var_v0_2 = 0;
                if (M2C_FIELD(temp_a2, u8 *, 0xE) != 0) {
                    var_v0_2 = M2C_FIELD(temp_a2, u8 *, 0xF) != 0;
                }
            }
        }
    }
    if (var_v0_2 != 0) {
        func_800D3408((*D_80118C22), D_80118C18, temp_a2);
        return 1;
    }
    M2C_FIELD(((M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + D_80118C18), s16 *, 0x392) = func_800D113C(temp_a0, D_80118C18, temp_a2);
    var_v0 = M2C_FIELD(D_80118C18, u8 *, 0xA) - 1;
block_15:
    M2C_FIELD(D_80118C18, u8 *, 0xA) = var_v0;
    if (func_800CF720((M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + (D_80118C18 + 0x392)) == 0) {
        if (M2C_FIELD(D_80118C18, u8 *, 0xA) != 0) {
            M2C_FIELD(D_80118C18, u8 *, 0xA) = (u8) (M2C_FIELD(D_80118C18, u8 *, 0xA) - 1);
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return 1;
        }
block_2:
        return 0;
    }
    return 1;
}
