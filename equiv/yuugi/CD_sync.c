#include "common.h"

s32 CD_sync(s32 arg0, u8 *arg1) {
    extern M2C_UNK (*D_80073084)(u8, u8 *);
    extern M2C_UNK (*D_80073088)(u8, M2C_UNK *);
    extern u8 D_800730A5[];
    extern u8 D_800730AC[];
    extern u8 D_8007312C[];
    extern u8 * D_8007334C[];
    extern u8 D_80073364[];
    extern u8 D_80094C18[];
    extern u8 D_80094C20[];
    extern s32 D_80094C30[];
    extern s32 D_80094C34[];
    extern M2C_UNK * D_80094C38[];
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_s1;
    u8 temp_v0_2;

    (*D_80094C30) = VSync(-1) + 0x3C0;
    (*D_80094C34) = 0;
    (*D_80094C38) = "CD_sync";
loop_1:
    if (((*D_80094C30) < VSync(-1)) || (temp_v1 = (*D_80094C34), (*D_80094C34) += 1, ((temp_v1 > 0x3C0000) != 0))) {
        puts("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n", (*D_80094C38), *(s16 *)(((*D_800730A5) * 4) + D_800730AC), *(s16 *)((M2C_FIELD(D_80073364, u8 *, 0) * 4) + D_8007312C), *(s16 *)((M2C_FIELD(D_80073364, u8 *, 1) * 4) + D_8007312C));
        CD_flush();
        var_v0_2 = -1;
    } else {
        var_v0_2 = 0;
    }
    var_v0 = -1;
    if (var_v0_2 == 0) {
        if (CheckCallback() != 0) {
            temp_s1 = *(*D_8007334C) & 3;
loop_8:
            temp_v0 = func_800459CC();
            if (temp_v0 != 0) {
                var_v0_3 = temp_v0 & 2;
                if (temp_v0 & 4) {
                    if (D_80073088 != NULL) {
                        D_80073088(*(s16 *)(D_80073364 + 1), D_80094C20);
                    }
                    var_v0_3 = temp_v0 & 2;
                }
                if ((var_v0_3 != 0) && (D_80073084 != NULL)) {
                    D_80073084(M2C_FIELD(D_80073364, u8 *, 0), D_80094C18);
                }
                goto loop_8;
            }
            *(*D_8007334C) = temp_s1;
        }
        temp_a2 = M2C_FIELD(D_80073364, u8 *, 0) & 0xFF;
        if ((temp_a2 == 2) || (temp_a2 == 5)) {
            M2C_FIELD(D_80073364, u8 *, 0) = 2U;
            var_a1 = arg1;
            var_a0 = D_80094C18;
            var_v1 = 7;
            if (var_a1 != NULL) {
                do {
                    temp_v0_2 = *var_a0;
                    var_a0 += 1;
                    var_v1 -= 1;
                    *var_a1 = temp_v0_2;
                    var_a1 += 1;
                } while (var_v1 != -1);
            }
            return temp_a2;
        }
        var_v0 = 0;
        if (arg0 != 0) {
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_v0;
        }
        goto loop_1;
    }
    return var_v0;
}
