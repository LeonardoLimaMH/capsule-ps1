#include "common.h"

void func_800994FC(void *arg0) {
    extern u16 D_8006AF80[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE4C[];
    extern u8 D_8008F702[];
    extern s32 D_8008F704[];
    extern s32 D_8008F70C[];
    extern u32 D_8008F714[];
    extern u8 D_80091618[];
    extern u8 D_800E8A9C[];
    extern u8 D_800E8AA4[];
    extern u8 D_800EFA04[];
    extern u8 D_800EFF4C[];
    extern void * D_800EFF50[];
    u32 temp_s1;
    u32 temp_v0;
    u32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_5;
    u16 temp_v1;
    u16 var_v0_2;
    u16 var_v0_3;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 var_v0_4;
    u32 var_v1;
    void *temp_s0;
    void *var_a0;
    void *var_v1_2;

    var_a0 = arg0;
    temp_s0 = var_a0;
    temp_s1 = M2C_FIELD(temp_s0, s32 *, 0x34) & 0x7F;
    var_v1 = temp_s1 - 1;
    if ((*D_8008F702) != 1) {
        temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x7A);
        switch (temp_v1) {                          /* switch 1 */
        case 0:                                     /* switch 1 */
            var_v1 = temp_s1 - 1;
            if ((*D_8008EE4C) == 2) {
                temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x38);
                var_a0 = (void *)-2;
                M2C_FIELD(temp_s0, u32 *, 0x38) = (u32) (temp_v0 & ~1);
                if (temp_s1 == 0xB) {
                    var_v1_2 = M2C_FIELD(D_800EFF4C, void **, 0);
                    goto block_8;
                }
                if (temp_s1 == 0xC) {
                    var_v1_2 = (*D_800EFF50);
block_8:
                    M2C_FIELD(var_v1_2, s32 *, 0x38) = (s32) (M2C_FIELD(var_v1_2, s32 *, 0x38) & ~1);
                }
                M2C_FIELD(temp_s0, u32 *, 0x3C) = 0U;
                M2C_FIELD(temp_s0, u32 *, 0x38) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x38) | 8);
                M2C_FIELD(temp_s0, u16 *, 0x7A) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x7A) + 1);
            case 1:                                 /* switch 1 */
                temp_v0_2 = M2C_FIELD(temp_s0, u32 *, 0x3C) + 1;
                M2C_FIELD(temp_s0, u32 *, 0x3C) = temp_v0_2;
                if (M2C_FIELD(temp_s0, s16 *, 0x76) != 0) {
                    var_v1 = temp_s1 - 1;
                    if (temp_v0_2 < 9U) {
                        var_v0 = var_v1 < 0x10U;
                    } else {
                        goto block_14;
                    }
                } else {
                    var_v1 = temp_s1 - 1;
                    if (temp_v0_2 >= 0x29U) {
block_14:
                        if (temp_s1 == 3) {
                            func_800125D8(var_a0);
                        }
                        M2C_FIELD(temp_s0, u32 *, 0x38) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x38) & ~8);
                        M2C_FIELD(temp_s0, u16 *, 0x7A) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x7A) + 1);
                        if ((temp_s1 == 3) || (temp_s1 == 5) || (temp_s1 == 8) || (var_v1 = temp_s1 - 1, (temp_s1 == 1))) {
                            var_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x7A) + 1;
block_30:
                            M2C_FIELD(temp_s0, u16 *, 0x7A) = var_v0_2;
                        default:                    /* switch 1 */
block_43:
                            var_v1 = temp_s1 - 1;
                        }
                    }
                    goto block_44;
                }
            } else {
                goto block_44;
            }
            goto block_45;
        case 2:                                     /* switch 1 */
            var_v1 = temp_s1 - 1;
            if ((u32) (*D_8008F714) >= 2U) {
                M2C_FIELD(temp_s0, u16 *, 0x7A) = 4U;
                M2C_FIELD(temp_s0, u16 *, 0x6A) = (u16) -(s32) M2C_FIELD(temp_s0, u16 *, 0x6A);
                M2C_FIELD(temp_s0, u16 *, 0x6E) = (u16) -(s32) M2C_FIELD(temp_s0, u16 *, 0x6E);
                goto block_43;
            }
            goto block_44;
        case 3:                                     /* switch 1 */
            if ((u32) (*D_8008F714) >= 2U) {
                var_v0_3 = 0xA;
                if (temp_s1 == 3) {
                    var_v0_3 = -0xAU;
                }
                M2C_FIELD(temp_s0, u16 *, 0x6A) = var_v0_3;
                M2C_FIELD(temp_s0, s16 *, 0x76) = 0;
                M2C_FIELD(temp_s0, s32 *, 0x6C) = 0;
                goto block_29;
            }
            var_v1 = temp_s1 - 1;
            if ((*D_8008F714) == 1) {
                M2C_FIELD(temp_s0, s32 *, 0x6C) = 0;
                M2C_FIELD(temp_s0, s32 *, 0x68) = 0;
                M2C_FIELD(temp_s0, s16 *, 0x76) = -0x200;
block_29:
                var_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x7A) + 1;
                goto block_30;
            }
            goto block_44;
        case 4:                                     /* switch 1 */
            M2C_FIELD(temp_s0, u32 *, 0x3C) = 0U;
            M2C_FIELD(temp_s0, u32 *, 0x38) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x38) | 8);
            M2C_FIELD(temp_s0, u16 *, 0x7A) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x7A) + 1);
            /* fallthrough */
        case 5:                                     /* switch 1 */
            temp_v0_3 = M2C_FIELD(temp_s0, u32 *, 0x3C) + 1;
            M2C_FIELD(temp_s0, u32 *, 0x3C) = temp_v0_3;
            if (M2C_FIELD(temp_s0, s16 *, 0x76) != 0) {
                var_v1 = temp_s1 - 1;
                if (temp_v0_3 < 9U) {
                    var_v0 = var_v1 < 0x10U;
                } else {
                    goto block_36;
                }
            } else {
                var_v1 = temp_s1 - 1;
                if (temp_v0_3 >= 0x29U) {
block_36:
                    if (temp_s1 == 3) {
                        func_800125D8();
                    }
                    M2C_FIELD(temp_s0, u16 *, 0x7A) = 6U;
                    M2C_FIELD(temp_s0, u32 *, 0x38) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x38) | 1);
                    goto block_43;
                }
                goto block_44;
            }
            goto block_45;
        case 6:                                     /* switch 1 */
            if ((u32) (*D_8008F714) >= 2U) {
                func_800185F8(temp_s0);
                return;
            }
            var_v1 = temp_s1 - 1;
            if ((*D_8008F714) == 0) {
                M2C_FIELD(temp_s0, s32 *, 0x6C) = 0;
                M2C_FIELD(temp_s0, s32 *, 0x68) = 0;
                M2C_FIELD(temp_s0, s16 *, 0x76) = 0x200;
                M2C_FIELD(temp_s0, u16 *, 0x7A) = 0U;
                goto block_43;
            }
            goto block_44;
        }
    } else {
block_44:
        var_v0 = var_v1 < 0x10U;
block_45:
        if (var_v0 != 0) {
            switch (var_v1) {                       /* switch 2 */
            case 15:                                /* switch 2 */
                func_800BE190(temp_s0);
                return;
            case 4:                                 /* switch 2 */
                if (!(((u32) M2C_FIELD(temp_s0, u32 *, 0x38) >> 3) & 1) || (M2C_FIELD(temp_s0, s16 *, 0x76) == 0)) {
                    func_8001F1A8((s16) (M2C_FIELD(temp_s0, s16 *, 0x46) + 0x12), (s16) (M2C_FIELD(temp_s0, s16 *, 0x4A) + 0x48), 0, 1, 0, D_800E8A9C, 1, 4, M2C_FIELD(temp_s0, s16 *, 0x4E) - 1);
                    return;
                }
                break;
            case 7:                                 /* switch 2 */
                temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 0x7C);
                if (temp_v1_2 == (*D_8006AF80)) {
                    M2C_FIELD(temp_s0, s16 *, 0x66) = 2;
                    return;
                }
                if (temp_v1_2 == (*D_8008F704)) {
                    M2C_FIELD(temp_s0, s16 *, 0x66) = 1;
                    return;
                }
                M2C_FIELD(temp_s0, s16 *, 0x66) = 0;
                return;
            case 0:                                 /* switch 2 */
                if (!(((u32) M2C_FIELD(temp_s0, u32 *, 0x38) >> 3) & 1)) {
                    M2C_FIELD(temp_s0, s16 *, 0x46) = (s16) (((*D_8008F704) << 5) - 0x38);
                    return;
                }
                break;
            case 8:                                 /* switch 2 */
                func_8001F1A8((s16) (M2C_FIELD(temp_s0, s16 *, 0x46) + 0x18), M2C_FIELD(temp_s0, s16 *, 0x4A), 0, 1, 0, (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10) * 8) + D_800EFA04, 1, 4, M2C_FIELD(temp_s0, s16 *, 0x4E) - 1);
                return;
            case 9:                                 /* switch 2 */
                if ((*D_8008EE4C) == 3) {
                    var_v0_4 = M2C_FIELD(temp_s0, u32 *, 0x38) & ~1;
                    goto block_63;
                }
                if ((*D_8008EE4C) == 4) {
                    var_v0_4 = M2C_FIELD(temp_s0, u32 *, 0x38) | 1;
block_63:
                    M2C_FIELD(temp_s0, u32 *, 0x38) = var_v0_4;
                    if ((*D_8008EE4C) != 4) {
                        goto block_64;
                    }
                } else {
block_64:
                    func_8001F1A8((s16) (M2C_FIELD(temp_s0, s16 *, 0x46) + 0x18), M2C_FIELD(temp_s0, s16 *, 0x4A), 0, 1, 0, (M2C_FIELD((((*D_8008F704) * 0x1A8) + D_80091618), u16 *, 0x10) * 8) + D_800EFA04, 1, 4, M2C_FIELD(temp_s0, s16 *, 0x4E) - 1);
                }
                M2C_FIELD(temp_s0, s32 *, 0x18) = func_80019F30(0x6000E, (*D_8008F704) + 0xDB);
                return;
            case 10:                                /* switch 2 */
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 0), s16 *, 0x46) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x46) + 0x28);
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 0), s16 *, 0x4A) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x4A) + 0x30);
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 0), s32 *, 0x68) = (s32) M2C_FIELD(temp_s0, s32 *, 0x68);
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 0), s32 *, 0x6C) = (s32) M2C_FIELD(temp_s0, s32 *, 0x6C);
                return;
            case 11:                                /* switch 2 */
                if (M2C_FIELD(D_8008ED68, s32 *, 0x9A4) == 0) {
                    M2C_FIELD(temp_s0, s32 *, 0x18) = func_80019F30(0x6000E, *(s8 *)(M2C_FIELD(((M2C_FIELD(D_8008ED68, s32 *, 0x99C) * 0x1A8) + D_80091618), u16 *, 0x10) + D_800E8AA4) + 0x83);
                }
                if (!(((u32) M2C_FIELD(temp_s0, u32 *, 0x38) >> 3) & 1)) {
                    M2C_FIELD(temp_s0, s16 *, 0x46) = (s16) ((u16) M2C_FIELD(D_8008ED68, s32 *, 0x9A4) - 0x24);
                }
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s16 *, 0x46) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x46) + 0x28);
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s16 *, 0x4A) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x4A) + 0x30);
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s32 *, 0x68) = (s32) M2C_FIELD(temp_s0, s32 *, 0x68);
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s32 *, 0x6C) = (s32) M2C_FIELD(temp_s0, s32 *, 0x6C);
                if (M2C_FIELD(D_8008ED68, s32 *, 0x9A4) == 0) {
                    M2C_FIELD(temp_s0, u32 *, 0x38) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x38) | 1);
                    var_v0_5 = M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s32 *, 0x38) | 1;
                } else {
                    M2C_FIELD(temp_s0, u32 *, 0x38) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x38) & ~1);
                    var_v0_5 = M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s32 *, 0x38) & ~1;
                }
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s32 *, 0x38) = var_v0_5;
                if ((*D_8008F70C) == 0x54) {
                    M2C_FIELD(temp_s0, s8 *, 0x5B) = 0;
                    M2C_FIELD((*D_800EFF50), s8 *, 0x5B) = 0;
                    return;
                }
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s8 *, 0x5B) = 1;
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s16 *, 0x5C) = 0xCE;
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s16 *, 0x5E) = 0;
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s16 *, 0x60) = 0x54;
                M2C_FIELD(M2C_FIELD(D_800EFF4C, void **, 4), s16 *, 0x62) = 0xF0;
                M2C_FIELD(temp_s0, s8 *, 0x5B) = 1;
                M2C_FIELD(temp_s0, s16 *, 0x5C) = 0xCE;
                M2C_FIELD(temp_s0, s16 *, 0x5E) = 0;
                M2C_FIELD(temp_s0, s16 *, 0x60) = 0x54;
                M2C_FIELD(temp_s0, s16 *, 0x62) = 0xF0;
                break;
            }
        }
    }
}
