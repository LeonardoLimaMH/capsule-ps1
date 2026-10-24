#include "common.h"

void func_8011B100(void) {
    extern M2C_UNK D_801321DC[];
    extern s16 D_801321DE[];
    extern u16 D_8013220C[];
    extern u16 * D_80133268[];
    extern u16 * D_8013326C[];
    extern s32 D_80133274[];
    M2C_UNK (**var_s2)();
    M2C_UNK (*temp_v0_3)();
    s32 var_s1;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 var_s0;

    if (M2C_FIELD(D_801321DC, u16 *, 0) == 0) {
        slpm_printf("unexpected interrupt(%04x)\n", *(*D_80133268));
        func_8011B554();
    }
    M2C_FIELD(D_801321DC, s16 *, 2) = 1;
    temp_v0 = *(*D_8013326C) & (M2C_FIELD(D_801321DC, u16 *, 0x30) & *(*D_80133268));
    var_s0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            var_s1 = 0;
            if (var_s0 != 0) {
                var_s2 = D_801321DC + 4;
loop_6:
                if (var_s1 < 0xB) {
                    if (var_s0 & 1) {
                        *(*D_80133268) = ~(1 << var_s1);
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
            temp_v0_2 = *(*D_8013326C) & ((*D_8013220C) & *(*D_80133268));
            var_s0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
    if (*(*D_80133268) & *(*D_8013326C)) {
        (*D_80133274) += 1;
        if ((*D_80133274) >= 0x801) {
            slpm_printf("intr timeout(%04x:%04x)\n", *(*D_80133268), *(*D_8013326C));
            (*D_80133274) = 0;
            *(*D_80133268) = 0;
        }
    } else {
        (*D_80133274) = 0;
    }
    (*D_801321DE) = 0;
    func_8011B554();
}
