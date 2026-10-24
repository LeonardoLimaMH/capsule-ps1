#include "common.h"

s32 func_80015D14(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s16 temp_a1;
    s16 var_v0_2;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_v0;
    u16 temp_v1_2;
    u32 temp_v0;
    u8 var_v1;
    void *temp_a3;
    void *temp_v1_3;

    var_v0 = 0;
    if ((M2C_FIELD(D_8008ED68, u8 *, 0x99A) == 0) && (temp_a3 = M2C_FIELD(arg0, void **, 8), (temp_a3 != NULL))) {
        var_v1 = 1;
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v1 = M2C_FIELD(D_8008ED68, u8 *, 0x103);
        }
        temp_a1 = M2C_FIELD(arg0, s16 *, 0x10);
        temp_a2 = ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 9) & 7;
        var_v0_2 = temp_a1 - var_v1;
        if (temp_a2 >= 2) {
            var_v0_2 = temp_a1 - (var_v1 * temp_a2);
        }
        M2C_FIELD(arg0, s16 *, 0x10) = var_v0_2;
        var_v0 = 0;
        if (var_v0_2 & 0x8000) {
            temp_v0 = M2C_FIELD(arg0, u32 *, 0xC) + 1;
            M2C_FIELD(arg0, u32 *, 0xC) = temp_v0;
            if (temp_v0 >= (u32) M2C_FIELD(temp_a3, u32 *, 0)) {
                temp_v1 = M2C_FIELD(arg0, u32 *, 0x1C) & 7;
                switch (temp_v1) {                  /* irregular */
                case 3:
                    temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x12);
                    if (temp_v1_2 == 1) {
                        M2C_FIELD(arg0, u16 *, 0x12) = (u16) (temp_v1_2 + 1);
                        M2C_FIELD(arg0, void **, 8) = NULL;
                        return 0;
                    }
                case 0:
                    M2C_FIELD(arg0, u32 *, 0xC) = 0U;
                    M2C_FIELD(arg0, u16 *, 0x12) = (u16) (M2C_FIELD(arg0, u16 *, 0x12) + 1);
                    goto block_19;
                case 2:
                    M2C_FIELD(arg0, s32 *, 4) = 0;
                    /* fallthrough */
                case 1:
                    M2C_FIELD(arg0, void **, 8) = NULL;
                    return 0;
                }
            } else {
block_19:
                temp_v1_3 = M2C_FIELD(temp_a3, s32 *, 4) + (M2C_FIELD(arg0, u32 *, 0xC) * 8);
                M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_v1_3, s32 *, 0);
                var_v0 = 1;
                M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(temp_v1_3, u16 *, 4);
                /* Duplicate return node #20. Try simplifying control flow for better match */
                return var_v0;
            }
        } else {
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_v0;
        }
    } else {
        return var_v0;
    }
}
