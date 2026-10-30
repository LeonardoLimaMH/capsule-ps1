#include "common.h"

void func_80042C88(void) {
    extern M2C_UNK D_80071D84[];
    extern s16 D_80071D86[];
    extern u16 D_80071DB4[];
    extern u16 * D_80072E10[];
    extern u16 * D_80072E14[];
    extern s32 D_80072E1C[];
    M2C_UNK (**var_s2)();
    M2C_UNK (*temp_v0_3)();
    s32 var_s1;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 var_s0;

    if (M2C_FIELD(D_80071D84, u16 *, 0) == 0) {
        printf("unexpected interrupt(%04x)\n", *(*D_80072E10));
        func_8004FEAC();
    }
    M2C_FIELD(D_80071D84, s16 *, 2) = 1;
    temp_v0 = *(*D_80072E14) & (M2C_FIELD(D_80071D84, u16 *, 0x30) & *(*D_80072E10));
    var_s0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            var_s1 = 0;
            if (var_s0 != 0) {
                var_s2 = (u8 *)D_80071D84 + 4;
loop_6:
                if (var_s1 < 0xB) {
                    if (var_s0 & 1) {
                        *(*D_80072E10) = ~(1 << var_s1);
                        temp_v0_3 = *var_s2;
                        if (temp_v0_3 != NULL) {
                            temp_v0_3();
                        }
                    }
                    var_s2 += 4;
                    var_s0 = var_s0 >> 1;
                    var_s1 += 1;
                    if (var_s0 & 0xFFFF) {
                        goto loop_6;
                    }
                }
            }
            temp_v0_2 = *(*D_80072E14) & ((*D_80071DB4) & *(*D_80072E10));
            var_s0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
    if (*(*D_80072E10) & *(*D_80072E14)) {
        (*D_80072E1C) += 1;
        if ((*D_80072E1C) >= 0x801) {
            printf("intr timeout(%04x:%04x)\n", *(*D_80072E10), *(*D_80072E14));
            (*D_80072E1C) = 0;
            *(*D_80072E10) = 0;
        }
    } else {
        (*D_80072E1C) = 0;
    }
    (*D_80071D86) = 0;
    func_8004FEAC();
}
