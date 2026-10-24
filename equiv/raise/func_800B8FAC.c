#include "common.h"

s32 func_800B8FAC(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800ED88C[];
    extern M2C_UNK D_80100F38[];
    s16 temp_v1_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    u16 temp_s1;
    void *temp_s0;
    void *temp_s2;

    temp_s0 = ((*D_8006AF80) * 0x79C) + D_80100F38;
    if ((func_800E14C4((*D_8006AF80)) != 1) && ((temp_v1 = *M2C_FIELD(temp_s0, u8 **, 0x2BC) & 0xFF, (temp_v1 == 0x52)) || (temp_v1 == 0xD) || (temp_v1 == 0x53) || (temp_v1 == 0x69) || (temp_v1 == 0x79) || (temp_v1 == 0x7A) || (temp_v1 == 0x71) || (temp_v1 == 0x74) || (temp_v1 == 0x77) || (temp_v1 == 0x70))) {
        switch (temp_v1) {                          /* irregular */
        case 0x52:
            temp_v1_2 = M2C_FIELD(temp_s0, s16 *, 0x344);
            if (temp_v1_2 != 2) {
                if ((temp_v1_2 < 3) && (temp_v1_2 >= 0)) {
                    goto block_28;
                }
block_23:
                if (M2C_FIELD(temp_s0, s16 *, 0x37E) != 0) {
                    return 0;
                }
                goto block_28;
            }
block_22:
            return 0;
        case 0x53:
            if (M2C_FIELD(temp_s0, s16 *, 0x344) != 3) {
                goto block_22;
            }
            goto block_23;
        case 0x69:
            if (M2C_FIELD(temp_s0, s16 *, 0x344) != 3) {
                return 0;
            }
            goto block_28;
        default:
            var_v0 = 0;
            if (M2C_FIELD(temp_s0, s16 *, 0x344) != 2) {
                goto block_28;
            }
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return var_v0;
        }
    } else {
block_28:
        func_800B8E34();
        temp_s2 = ((*D_8006AF80) * 0x1A8) + D_80091618;
        M2C_FIELD(temp_s2, s32 *, 0xA4) = (s32) M2C_FIELD(temp_s0, s16 *, 0x336);
        temp_s1 = M2C_FIELD(temp_s2, u16 *, 0x12);
        var_s0 = 0;
        M2C_FIELD(temp_s2, s32 *, 0xA8) = (s32) M2C_FIELD(temp_s0, s16 *, 0x338);
        if (temp_s1 != 0) {
            do {
                func_800CCFA4(1, var_s0, 0);
                var_s0 += 1;
            } while (var_s0 < (s32) temp_s1);
        }
        M2C_FIELD(temp_s2, u16 *, 0x12) = 0U;
        (*D_800ED88C) = 1;
        func_800B7264(2);
        var_v0 = 1;
        return var_v0;
    }
}
