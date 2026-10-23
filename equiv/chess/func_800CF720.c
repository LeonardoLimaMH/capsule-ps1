#include "common.h"

s32 func_800CF720(void *arg0) {
    extern M2C_UNK D_80085FE4[];
    extern M2C_UNK D_80118C18[];
    s32 var_v0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a2_2;

    if (M2C_FIELD(arg0, u8 *, 8) == 0) {
        if (M2C_FIELD(arg0, s16 *, 0) < M2C_FIELD(arg0, s16 *, 0x10E)) {
            M2C_FIELD(arg0, s16 *, 0) = (s16) (u16) M2C_FIELD(arg0, s16 *, 0x10E);
            if (M2C_FIELD(D_80118C18, u8 *, 0xA) == 0) {
                temp_a1 = (M2C_FIELD(D_80118C18, u8 *, 0x39A) * 6) + D_80085FE4;
                temp_a2 = D_80118C18 + 0xD;
                M2C_FIELD(temp_a1, s8 *, 0) = (s8) ((M2C_FIELD(D_80118C18, u8 *, 0xD) & 0x7F) - 1);
                M2C_FIELD(temp_a1, u8 *, 1) = (u8) M2C_FIELD(temp_a2, u8 *, 1);
                M2C_FIELD(temp_a1, s8 *, 2) = (s8) (M2C_FIELD(temp_a2, u8 *, 2) / 13);
                M2C_FIELD(temp_a1, s8 *, 3) = (s8) (M2C_FIELD(temp_a2, u8 *, 2) % 13);
                M2C_FIELD(temp_a1, s8 *, 4) = (s8) (M2C_FIELD(temp_a2, u8 *, 3) / 13);
                M2C_FIELD(temp_a1, s8 *, 5) = (s8) (M2C_FIELD(temp_a2, u8 *, 3) % 13);
            }
            var_v0 = 1;
            if (M2C_FIELD(arg0, s16 *, 0) >= M2C_FIELD(arg0, s16 *, 4)) {
                return 0;
            }
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return var_v0;
        }
        goto block_10;
    }
    if (M2C_FIELD(arg0, s16 *, 0x10E) < M2C_FIELD(arg0, s16 *, 0)) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (u16) M2C_FIELD(arg0, s16 *, 0x10E);
        if (M2C_FIELD(D_80118C18, u8 *, 0xA) == 0) {
            temp_a1_2 = (M2C_FIELD(D_80118C18, u8 *, 0x39A) * 6) + D_80085FE4;
            temp_a2_2 = D_80118C18 + 0xD;
            M2C_FIELD(temp_a1_2, s8 *, 0) = (s8) ((M2C_FIELD(D_80118C18, u8 *, 0xD) & 0x7F) - 1);
            M2C_FIELD(temp_a1_2, u8 *, 1) = (u8) M2C_FIELD(temp_a2_2, u8 *, 1);
            M2C_FIELD(temp_a1_2, s8 *, 2) = (s8) (M2C_FIELD(temp_a2_2, u8 *, 2) / 13);
            M2C_FIELD(temp_a1_2, s8 *, 3) = (s8) (M2C_FIELD(temp_a2_2, u8 *, 2) % 13);
            M2C_FIELD(temp_a1_2, s8 *, 4) = (s8) (M2C_FIELD(temp_a2_2, u8 *, 3) / 13);
            M2C_FIELD(temp_a1_2, s8 *, 5) = (s8) (M2C_FIELD(temp_a2_2, u8 *, 3) % 13);
        }
        var_v0 = 0;
        if (M2C_FIELD(arg0, s16 *, 4) < M2C_FIELD(arg0, s16 *, 0)) {
            goto block_10;
        }
    } else {
block_10:
        var_v0 = 1;
    }
    return var_v0;
}
