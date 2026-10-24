#include "common.h"

void func_8001E4A4(void *arg0) {
    extern M2C_UNK D_8008ED68;
    s16 var_a0;
    s32 temp_a1;
    s32 var_a1;
    s32 var_s3;
    s32 var_s6_2;
    u16 *temp_v1;
    u16 *var_s1;
    u16 *var_s1_2;
    u16 *var_s2;
    u16 temp_a3;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 var_s4;
    u16 var_s5;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_fp;
    u8 var_s6;
    u8 var_v0;

    temp_v1 = M2C_FIELD(arg0, u16 **, 0);
    if (temp_v1 != NULL) {
        var_s1 = temp_v1;
        if (M2C_FIELD(arg0, u8 *, 0x12) != 2) {
            if (M2C_FIELD(arg0, u8 *, 0xD) == 0) {
                var_s6 = 0;
                if (*var_s1 != 0xFFEE) {
                    do {
                        var_s1 += 2;
                        var_s6 += 1;
                    } while (*var_s1 != 0xFFEE);
                }
                M2C_FIELD(arg0, u8 *, 6) = var_s6;
                M2C_FIELD(arg0, u8 *, 0x12) = 2U;
            } else {
                if (((u8) M2C_FIELD(arg0, u8 *, 7) % (u8) M2C_FIELD(arg0, u8 *, 0xD)) == 0) {
                    M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
                }
                var_s6_2 = 0;
                if (*var_s1 != 0xFFEE) {
                    do {
                        var_s1 += 2;
                        var_s6_2 += 1;
                    } while (*var_s1 != 0xFFEE);
                }
                if (var_s6_2 < (s32) M2C_FIELD(arg0, u8 *, 6)) {
                    M2C_FIELD(arg0, u8 *, 6) = (u8) var_s6_2;
                    M2C_FIELD(arg0, u8 *, 0x12) = 2U;
                }
                goto block_14;
            }
        } else {
block_14:
            var_s6 = M2C_FIELD(arg0, u8 *, 6);
        }
        var_s1_2 = M2C_FIELD(arg0, u16 **, 0);
        var_s4 = M2C_FIELD(arg0, u16 *, 0x14);
        var_s5 = M2C_FIELD(arg0, u16 *, 0x16);
        var_fp = M2C_FIELD(arg0, u8 *, 8);
        var_s3 = 0;
        if ((s32) var_s6 > 0) {
            var_s2 = var_s1_2 + 2;
loop_17:
            temp_a3 = *var_s1_2;
            switch (temp_a3) {                      /* irregular */
            case -4294901777:
                var_s4 += 7;
            case -4294901772:
block_65:
                var_s3 += 1;
block_66:
                var_s2 += 2;
                var_s1_2 += 2;
                if (var_s3 < (s32) var_s6) {
                    goto loop_17;
                }
                break;
            case -4294901792:
                var_s2 += 2;
                var_s1_2 += 2;
                var_s3 += 1;
                M2C_FIELD(arg0, u16 **, 0) = var_s2;
                if (M2C_FIELD(arg0, u8 *, 0xD) != 0) {
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                }
                M2C_FIELD(arg0, u8 *, 7) = 0U;
                M2C_FIELD(arg0, u8 *, 0x11) = 0U;
                goto block_65;
            case -4294901791:
                if (!(func_800337EC() & 1) || ((u8) M2C_FIELD(arg0, u8 *, 0x11) >= 0xB5U)) {
                    func_80034AB0(M2C_FIELD(var_s2, u16 *, -4));
                    M2C_FIELD(arg0, u8 *, 0x11) = 0U;
                    M2C_FIELD(arg0, u16 **, 0) = var_s2;
                    if (M2C_FIELD(arg0, u8 *, 0xD) != 0) {
                        M2C_FIELD(arg0, u8 *, 6) = 0U;
                    }
block_43:
                    M2C_FIELD(arg0, u8 *, 7) = 0U;
                } else {
block_30:
                    M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) - 1);
                    M2C_FIELD(arg0, u8 *, 0x11) = (u8) (M2C_FIELD(arg0, u8 *, 0x11) + 1);
                    M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) - 1);
                }
                goto block_65;
            case -4294901771:
                if ((func_800337EC() & 4) || ((u8) M2C_FIELD(arg0, u8 *, 0x11) >= 0xB5U)) {
                    goto block_30;
                }
                M2C_FIELD(arg0, u8 *, 0x12) = 1U;
                M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 0xD) + (M2C_FIELD(arg0, u8 *, 7) + 0xFF));
                goto block_65;
            case -4294901770:
                if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
                    M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) - 1);
                    M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) - 1);
                } else {
                    M2C_FIELD(arg0, u16 **, 0) = var_s2;
                    if (M2C_FIELD(arg0, u8 *, 0xD) != 0) {
                        M2C_FIELD(arg0, u8 *, 6) = 0U;
                    }
                    goto block_43;
                }
                goto block_65;
            case -4294901779:
                M2C_FIELD(arg0, u8 *, 0xE) = 0U;
                M2C_FIELD(arg0, s8 *, 0xF) = 0;
                M2C_FIELD(arg0, u16 **, 0) = var_s2;
                if (M2C_FIELD(arg0, u8 *, 0xD) != 0) {
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                }
                goto block_43;
            case -4294901767:
                M2C_FIELD(arg0, u8 *, 0xE) = 1U;
                M2C_FIELD(arg0, u16 **, 0) = var_s2;
                if (M2C_FIELD(arg0, u8 *, 0xD) != 0) {
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                }
                goto block_43;
            case -4294901781:
                M2C_FIELD(arg0, u8 *, 0xE) = 0U;
                if (M2C_FIELD(arg0, u8 *, 0xD) != 0) {
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                }
                M2C_FIELD(arg0, u16 **, 0) = var_s2;
                goto block_43;
            case -4294901783:
                M2C_FIELD(arg0, s8 *, 0xF) = 1;
                goto block_65;
            case -4294901784:
                M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) - 1);
                if ((u8) M2C_FIELD(arg0, u8 *, 0xE) >= 3U) {
                    func_8003422C(0x8000);
                    var_s3 += 1;
                } else {
                    M2C_FIELD(arg0, u8 *, 0xE) = 2U;
                    M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) - 1);
                    goto block_65;
                }
                goto block_66;
            case -4294901776:
                var_s4 = M2C_FIELD(arg0, u16 *, 0x14);
                var_s5 += 0x10;
                goto block_65;
            case -4294901775:
                var_s2 += 2;
                var_s1_2 += 2;
                var_s3 += 1;
                M2C_FIELD(arg0, u16 **, 0) = var_s2;
                M2C_FIELD(arg0, u8 *, 5) = (u8) *var_s1_2;
                if (M2C_FIELD(arg0, u8 *, 0xD) != 0) {
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                }
                goto block_43;
            case -4294901773:
                var_s2 += 2;
                var_s1_2 += 2;
                var_s3 += 1;
                M2C_FIELD(arg0, u8 *, 5) = (u8) *var_s1_2;
                goto block_65;
            case -4294901788:
                var_s2 += 2;
                var_s1_2 += 2;
                temp_v1_2 = *var_s1_2;
                var_s3 += 1;
                M2C_FIELD(arg0, u16 **, 0) = var_s2;
                var_fp = temp_v1_2 & 0xFF;
                M2C_FIELD(arg0, u8 *, 8) = temp_v1_2;
                if (M2C_FIELD(arg0, u8 *, 0xD) != 0) {
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                }
                goto block_43;
            case -4294901769:
            case -4294901768:
                M2C_FIELD(arg0, u16 **, 0) = var_s2;
                if (M2C_FIELD(arg0, u8 *, 0xD) != 0) {
                    M2C_FIELD(arg0, u8 *, 6) = 0U;
                }
                goto block_43;
            case -4294901774:
                var_s2 += 2;
                var_s1_2 += 2;
                var_s3 += 1;
                var_s5 += *var_s1_2;
                goto block_65;
            case -4294901790:
                var_s2 += 2;
                var_s1_2 += 2;
                var_s3 += 1;
                var_s4 = *var_s1_2;
                M2C_FIELD(arg0, u16 *, 0x14) = var_s4;
                goto block_65;
            case -4294901789:
                var_s2 += 2;
                var_s1_2 += 2;
                var_s3 += 1;
                var_s5 = *var_s1_2;
                M2C_FIELD(arg0, u16 *, 0x16) = var_s5;
                goto block_65;
            default:
                if (M2C_FIELD(arg0, u8 *, 4) != 1) {
                    temp_a1 = var_s5 + M2C_FIELD(D_8008ED68, u16 *, 0x98E);
                    if ((u32) ((temp_a1 + 0xD) & 0xFFFF) < 0x10DU) {
                        var_a0 = var_s4 + M2C_FIELD(D_8008ED68, u16 *, 0x98A);
                        var_a1 = temp_a1 << 0x10;
                        goto block_63;
                    }
                } else {
                    var_a0 = (s16) var_s4;
                    var_a1 = var_s5 << 0x10;
block_63:
                    func_8001EA24(var_a0, var_a1 >> 0x10, var_fp, temp_a3, 0, 3);
                }
                /* fallthrough */
            case -4294901761:
                var_s4 += 0xE;
                goto block_65;
            }
        }
        if (M2C_FIELD(D_8008ED68, u8 *, 0x99A) != 1) {
            temp_v1_3 = M2C_FIELD(arg0, u8 *, 7);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0 = temp_v1_3 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0 = temp_v1_3 + 1;
            }
            M2C_FIELD(arg0, u8 *, 7) = var_v0;
        }
        if (M2C_FIELD(D_8008ED68, u16 *, 0x994) == 1) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0x998) == 0) {
                temp_v0 = M2C_FIELD(D_8008ED68, u16 *, 0x996) + 1;
                M2C_FIELD(D_8008ED68, u16 *, 0x996) = temp_v0;
                if ((s16) temp_v0 >= 0x81) {
                    M2C_FIELD(D_8008ED68, u16 *, 0x996) = 0x80U;
                }
            }
            if (M2C_FIELD(D_8008ED68, u16 *, 0x998) == 1) {
                temp_v0_2 = M2C_FIELD(D_8008ED68, u16 *, 0x996) - 1;
                M2C_FIELD(D_8008ED68, u16 *, 0x996) = temp_v0_2;
                if (temp_v0_2 & 0x8000) {
                    M2C_FIELD(D_8008ED68, u16 *, 0x996) = 0U;
                }
            }
        }
    }
}
