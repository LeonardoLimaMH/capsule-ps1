#include "common.h"

s32 slpm_CD_sync(s32 arg0, u8 *arg1) {
    extern M2C_UNK (*D_80131D1C)(u8, u8 *);
    extern M2C_UNK (*D_80131D20)(u8, M2C_UNK *);
    extern u8 D_80131D3D[];
    extern u8 D_80131D44[];
    extern u8 D_80131DC4[];
    extern u8 * D_80131FE4[];
    extern u8 D_80131FFC[];
    extern u8 D_80134ED8[];
    extern u8 D_80134EE0[];
    extern s32 D_80134EF0[];
    extern s32 D_80134EF4[];
    extern M2C_UNK * D_80134EF8[];
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

    (*D_80134EF0) = slpm_VSync(-1) + 0x3C0;
    (*D_80134EF4) = 0;
    (*D_80134EF8) = "CD_sync";
loop_1:
    if (((*D_80134EF0) < slpm_VSync(-1)) || (temp_v1 = (*D_80134EF4), (*D_80134EF4) += 1, ((temp_v1 > 0x3C0000) != 0))) {
        slpm_puts("CD timeout: ");
        slpm_printf("%s:(%s) Sync=%s, Ready=%s\n", (*D_80134EF8), *(u16 *)(((*D_80131D3D) * 4) + D_80131D44), *(u16 *)((M2C_FIELD(D_80131FFC, u8 *, 0) * 4) + D_80131DC4), *(u16 *)((M2C_FIELD(D_80131FFC, u8 *, 1) * 4) + D_80131DC4));
        slpm_CD_flush();
        var_v0_2 = -1;
    } else {
        var_v0_2 = 0;
    }
    var_v0 = -1;
    if (var_v0_2 == 0) {
        if (slpm_CheckCallback() != 0) {
            temp_s1 = *(*D_80131FE4) & 3;
loop_8:
            temp_v0 = func_80117224();
            if (temp_v0 != 0) {
                var_v0_3 = temp_v0 & 2;
                if (temp_v0 & 4) {
                    if (D_80131D20 != NULL) {
                        D_80131D20(*(u16 *)(D_80131FFC + 1), D_80134EE0);
                    }
                    var_v0_3 = temp_v0 & 2;
                }
                if ((var_v0_3 != 0) && (D_80131D1C != NULL)) {
                    D_80131D1C(M2C_FIELD(D_80131FFC, u8 *, 0), D_80134ED8);
                }
                goto loop_8;
            }
            *(*D_80131FE4) = temp_s1;
        }
        temp_a2 = M2C_FIELD(D_80131FFC, u8 *, 0) & 0xFF;
        if ((temp_a2 == 2) || (temp_a2 == 5)) {
            M2C_FIELD(D_80131FFC, u8 *, 0) = 2U;
            var_a1 = arg1;
            var_a0 = D_80134ED8;
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
