#include "common.h"

s32 slpm_CD_cw(u8 arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    extern M2C_UNK (*D_80131D1C)(u8, u8 *);
    extern M2C_UNK (*D_80131D20)(u8, M2C_UNK *);
    extern s32 D_80131D28[];
    extern u8 D_80131D38[];
    extern u8 D_80131D3C[];
    extern u8 D_80131D3D[];
    extern u8 D_80131D44[];
    extern u8 D_80131DC4[];
    extern u8 D_80131E64[];
    extern u8 D_80131F64[];
    extern u8 * D_80131FE4[];
    extern u8 * D_80131FE8[];
    extern u8 * D_80131FEC[];
    extern s32 D_80131FFC[];
    extern u8 D_80134ED8[];
    extern u8 D_80134EE0[];
    extern s32 D_80134EF0[];
    extern s32 D_80134EF4[];
    extern M2C_UNK * D_80134EF8[];
    s32 *temp_v1_2;
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    u8 *var_a0_3;
    u8 *var_a2;
    u8 *var_v0_2;
    u8 *var_v0_3;
    u8 temp_s1;
    u8 temp_v0_2;

    if ((*D_80131D28) >= 2) {
        slpm_printf("%s...\n", *(D_80131D44 + ((arg0 & 0xFF) * 4)));
    }
    temp_v1 = (arg0 & 0xFF) * 4;
    if (*(D_80131F64 + temp_v1) != 0) {
        if (arg1 == NULL) {
            var_v0 = -2;
            if ((*D_80131D28) > 0) {
                slpm_printf("%s: no param\n", *(D_80131D44 + temp_v1));
                return -2;
            }
            /* Duplicate return node #42. Try simplifying control flow for better match */
            return var_v0;
        }
        goto block_6;
    }
block_6:
    slpm_CD_sync(0, 0);
    var_v1 = arg0 & 0xFF;
    if (var_v1 == 2) {
        var_a0 = 0;
        var_v0_2 = arg1;
        do {
            *(D_80131D38 + var_a0) = *var_v0_2;
            var_a0 += 1;
            var_v0_2 = arg1 + var_a0;
        } while (var_a0 < 4);
        var_v1 = arg0 & 0xFF;
    }
    if (var_v1 == 0xE) {
        (*D_80131D3C) = *arg1;
    }
    var_a1 = D_80131FFC;
    temp_a0 = var_v1 * 4;
    M2C_FIELD(D_80131FFC, u8 *, 0) = 0U;
    if (*(D_80131E64 + temp_a0) != 0) {
        M2C_FIELD(D_80131FFC, u8 *, 1) = 0U;
    }
    *(*D_80131FE4) = 0;
    temp_v1_2 = temp_a0 + (D_80131E64 + 0x100);
    var_a0_2 = 0;
    if (*temp_v1_2 > 0) {
        var_a1 = temp_v1_2;
        var_v0_3 = arg1;
        do {
            *(*D_80131FEC) = *var_v0_3;
            var_a0_2 += 1;
            var_v0_3 = arg1 + var_a0_2;
        } while (var_a0_2 < *var_a1);
    }
    (*D_80131D3D) = arg0;
    *(*D_80131FE8) = arg0;
    var_v0 = 0;
    if (arg3 == 0) {
        (*D_80134EF0) = slpm_VSync(-1, var_a1) + 0x3C0;
        (*D_80134EF4) = 0;
        (*D_80134EF8) = "CD_cw\0$Id: bios.c,v 1.86 1997/03/28 07:42:42 makoto Exp $";
        var_a2 = arg2;
        if (M2C_FIELD(D_80131FFC, u8 *, 0) == 0) {
loop_20:
            if ((*D_80134EF0) >= slpm_VSync(-1)) {
                temp_v1_3 = (*D_80134EF4);
                (*D_80134EF4) += 1;
                if (temp_v1_3 > 0x3C0000) {
                    goto block_22;
                }
                var_v0_4 = 0;
            } else {
block_22:
                slpm_puts("CD timeout: ");
                slpm_printf("%s:(%s) Sync=%s, Ready=%s\n", (*D_80134EF8), *(((*D_80131D3D) * 4) + D_80131D44), *((M2C_FIELD(D_80131FFC, u8 *, 0) * 4) + D_80131DC4), *((M2C_FIELD(D_80131FFC, u8 *, 1) * 4) + D_80131DC4));
                slpm_CD_flush();
                var_v0_4 = -1;
            }
            var_v0 = -1;
            if (var_v0_4 == 0) {
                if (slpm_CheckCallback() != 0) {
                    temp_s1 = *(*D_80131FE4) & 3;
loop_27:
                    temp_v0 = func_80117224();
                    if (temp_v0 != 0) {
                        var_v0_5 = temp_v0 & 2;
                        if (temp_v0 & 4) {
                            if (D_80131D20 != NULL) {
                                D_80131D20(*((u8 *)D_80131FFC + 1), D_80134EE0);
                            }
                            var_v0_5 = temp_v0 & 2;
                        }
                        if (var_v0_5 != 0) {
                            if (D_80131D1C != NULL) {
                                D_80131D1C(M2C_FIELD(D_80131FFC, u8 *, 0), D_80134ED8);
                            }
                        }
                        goto loop_27;
                    }
                    *(*D_80131FE4) = temp_s1;
                }
                var_a2 = arg2;
                if (M2C_FIELD(D_80131FFC, u8 *, 0) != 0) {
                    goto block_37;
                }
                goto loop_20;
            }
        } else {
block_37:
            var_a0_3 = D_80134ED8;
            var_v1_2 = 7;
            if (var_a2 != NULL) {
                do {
                    temp_v0_2 = *var_a0_3;
                    var_a0_3 += 1;
                    var_v1_2 -= 1;
                    *var_a2 = temp_v0_2;
                    var_a2 += 1;
                } while (var_v1_2 != -1);
            }
            var_v0 = 0;
            if (M2C_FIELD(D_80131FFC, u8 *, 0) == 5) {
                var_v0 = -1;
            }
        }
    }
    return var_v0;
}
