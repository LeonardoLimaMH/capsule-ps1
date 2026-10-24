#include "common.h"

s32 func_8009F3D4(void) {
    extern M2C_UNK D_80069AB4[];
    extern u16 D_8006AF80[];
    extern s16 D_80078C22[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800ED888[];
    extern s16 D_800ED88C[];
    extern s16 D_800EEA78[];
    extern s16 D_800EEA7A[];
    extern s16 D_800EEA7C[];
    extern s16 D_800EEA7E[];
    extern M2C_UNK D_800EFF58[];
    extern u32 D_800EFFE4[];
    extern s32 D_800EFFE8[];
    extern u16 D_800F2CB0[];
    extern u16 D_800F2CB2[];
    extern u16 D_800F2CB4[];
    extern M2C_UNK D_80100F38[];
    extern M2C_UNK D_80103EE0[];
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_a1_2;
    s32 temp_a1_4;
    s32 temp_a3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_a1;
    u16 temp_a1_3;
    void *temp_a2;
    void *temp_a3;
    void *temp_t0;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_3;

    var_s1 = 0;
    if ((*D_800ED888) != 0) {
        (*D_800ED888) = (u16) (*D_800ED888) - 1;
        goto block_50;
    }
    (*D_800F2CB2) = (*D_8006AF80);
    (*D_800F2CB4) = M2C_FIELD((((*D_800F2CB2) * 0x1A8) + D_80091618), u16 *, 0x10);
    switch ((*D_800EFFE4)) {
    case 0:
        if (M2C_FIELD(D_800EFF58, s32 *, 0x84) == 1) {
            if (M2C_FIELD(D_800EFF58, s32 *, 0x88) > 0) {
                M2C_FIELD(D_800EFF58, s32 *, 0x88) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x88) - 1);
                func_800BBC40(1);
            } else {
                M2C_FIELD(D_800EFF58, s32 *, 0x84) = 0;
            }
            goto block_51;
        }
        func_800D1598(D_80103EE0);
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
            if (M2C_FIELD(D_800EFF58, s32 *, 0x114) == 0xD) {
                func_80034AB0(0x48);
                (*D_800ED88C) = 1;
                M2C_FIELD((((*D_800F2CB2) * 0x1A8) + D_80091618), u16 *, 0x12) = (u16) M2C_FIELD(D_800EFF58, u16 *, 0x90);
                func_800BBC28(2, D_80091618);
block_92:
                func_800B7ED8(1);
                func_800B7F40(0);
                return -1;
            }
            temp_a2 = (M2C_FIELD(D_800EFF58, s32 *, 0x114) * 4) + D_800EFF58;
            if (M2C_FIELD(temp_a2, s32 *, 0x21C) != -1) {
                M2C_FIELD(D_800EFF58, s32 *, 0x8C) = 1;
                M2C_FIELD(D_800EFF58, s32 *, 0x28C) = (s32) M2C_FIELD(temp_a2, s32 *, 0x254);
                func_800A0014(0, 0, 0);
                return 0;
            }
            if ((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) == 3) {
block_14:
                func_80034AB0(0x5D);
                return 0;
            }
            func_80034AB0(0x48);
            temp_a1 = (u16) M2C_FIELD(D_800EFF58, s32 *, 0x114) + 3;
            temp_v1 = ((*D_800F2CB2) * 0x1A8) + D_80091618;
            (*D_800F2CB0) = temp_a1;
            M2C_FIELD((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) * 2) + temp_v1), u16 *, 0x14) = temp_a1;
            M2C_FIELD(D_800EFF58, u16 *, 0x90) = (s32) ((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) + 1);
            temp_a0 = *(((*D_800F2CB0) * 2) + D_80069AB4) - 1;
            (*D_80078C22) = temp_a0;
            M2C_FIELD(temp_v1, u16 *, 0x12) = (u16) M2C_FIELD(D_800EFF58, u16 *, 0x90);
            func_800A04B8(temp_a0, M2C_FIELD(D_800EFF58, u16 *, 0x90), D_800F2CB0);
            M2C_FIELD(D_800EFF58, s32 *, 0x8C) = 2;
            (*D_800ED88C) = 1;
            func_800BBC28(2);
            var_v0 = 0 << 0x10;
            goto block_49;
        }
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
            func_80034AB0(0x5D);
            if ((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) > 0) {
                temp_a1_2 = (s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) - 1;
                M2C_FIELD(D_800EFF58, u16 *, 0x90) = temp_a1_2;
                func_800CCFA4(1, temp_a1_2, 0);
                func_800CC40C();
                temp_v1_2 = (*D_800F2CB2) * 0x1A8;
                temp_a3 = temp_v1_2 + D_80091618;
                M2C_FIELD((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) * 2) + temp_a3), s16 *, 0x14) = 0xFFFF;
                M2C_FIELD((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) * 0xC) + temp_v1_2 + D_80091618), s32 *, 0x1C) = -1;
                (*D_80078C22) = 0;
                M2C_FIELD((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) * 0xC) + temp_v1_2 + D_80091618), s32 *, 0x20) = -1;
                (*D_800ED888) = 8;
                M2C_FIELD(temp_a3, u16 *, 0x12) = (u16) M2C_FIELD(D_800EFF58, u16 *, 0x90);
                func_800A0424(M2C_FIELD(D_800EFF58, u16 *, 0x90), D_80091618, -1, temp_a3);
                var_v0 = 0 << 0x10;
                goto block_49;
            }
            (*D_800ED88C) = 0;
            func_800BBC28(2, (M2C_UNK *) (s32) M2C_FIELD(D_800EFF58, u16 *, 0x90));
            return -2;
        }
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x1000)) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0xA4) != 0) {
                temp_v0 = M2C_FIELD((((*D_800EEA7C) * 4) + D_8008ED68), s32 *, 0xA4);
                if (temp_v0 != 7) {
                    var_s1 = 0;
                    if ((temp_v0 & 7) == 7) {
                        goto block_24;
                    }
                } else {
                    var_s1 = 0;
                }
            }
        } else {
block_24:
            var_s1 = func_8009EDA0(2);
        }
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x4000)) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0xAC) != 0) {
                temp_v0_2 = M2C_FIELD((((*D_800EEA7E) * 4) + D_8008ED68), s32 *, 0xA4);
                if (temp_v0_2 != 7) {
                    var_s1 = 0;
                    if ((temp_v0_2 & 7) == 7) {
                        goto block_30;
                    }
                } else {
block_47:
                    var_s1 = 0;
                }
            }
        } else {
block_30:
            var_s1 = func_8009EDA0(3);
        }
block_48:
        var_v0 = var_s1 << 0x10;
block_49:
        if (var_v0 == 0) {
block_50:
block_51:
            func_800A0014(0, 0, 0);
            return 0;
        }
        return 0;
    case 1:
        func_800D1598(D_80103EE0);
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
            if ((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) != 3) {
                func_80034AB0(0x48);
                temp_a1_3 = (u16) M2C_FIELD(D_800EFF58, s32 *, 0x28C) + (M2C_FIELD(D_800EFF58, s32 *, 0x114) * 3);
                (*D_800F2CB0) = temp_a1_3;
                temp_v1_3 = ((*D_800F2CB2) * 0x1A8) + D_80091618;
                M2C_FIELD((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) * 2) + temp_v1_3), u16 *, 0x14) = temp_a1_3;
                M2C_FIELD(D_800EFF58, u16 *, 0x90) = (s32) ((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) + 1);
                temp_a0_2 = *(((*D_800F2CB0) * 2) + D_80069AB4) - 1;
                (*D_80078C22) = temp_a0_2;
                M2C_FIELD(temp_v1_3, u16 *, 0x12) = (u16) M2C_FIELD(D_800EFF58, u16 *, 0x90);
                func_800A04B8(temp_a0_2, M2C_FIELD(D_800EFF58, u16 *, 0x90), D_800F2CB0);
                M2C_FIELD(D_800EFF58, s32 *, 0x8C) = 2;
                (*D_800ED88C) = 1;
                func_800BBC28(2);
                var_v0 = 0 << 0x10;
                goto block_49;
            }
            goto block_14;
        }
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
            func_80034AB0(0x5D);
            (*D_800ED888) = 8;
            M2C_FIELD((((*D_800F2CB2) * 0x1A8) + D_80091618), u16 *, 0x12) = (u16) M2C_FIELD(D_800EFF58, u16 *, 0x90);
            M2C_FIELD(D_800EFF58, s32 *, 0x8C) = 0;
        } else {
            if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x1000)) {
                if (M2C_FIELD(D_8008ED68, s32 *, 0xA4) != 0) {
                    temp_v0_3 = M2C_FIELD((((*D_800EEA7C) * 4) + D_8008ED68), s32 *, 0xA4);
                    if (temp_v0_3 != 7) {
                        var_s1 = 0;
                        if ((temp_v0_3 & 7) == 7) {
                            goto block_40;
                        }
                    } else {
                        var_s1 = 0;
                    }
                }
            } else {
block_40:
                var_s1 = func_8009F00C(2);
            }
            if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x4000)) {
                if (M2C_FIELD(D_8008ED68, s32 *, 0xAC) != 0) {
                    temp_v0_4 = M2C_FIELD((((*D_800EEA7E) * 4) + D_8008ED68), s32 *, 0xA4);
                    if (temp_v0_4 != 7) {
                        var_s1 = 0;
                        if ((temp_v0_4 & 7) == 7) {
                            goto block_46;
                        }
                    } else {
                        goto block_47;
                    }
                }
            } else {
block_46:
                var_s1 = func_8009F00C(3);
            }
        }
        goto block_48;
    case 2:
        if (M2C_FIELD(D_800EFF58, s32 *, 0x84) == 2) {
            if (M2C_FIELD(D_800EFF58, s32 *, 0x88) > 0) {
                M2C_FIELD(D_800EFF58, s32 *, 0x88) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x88) - 1);
                func_800BBC40(2);
                var_v0_2 = 0;
            } else {
                M2C_FIELD(D_800EFF58, s32 *, 0x84) = 0;
                var_v0_2 = -1;
            }
            if (var_v0_2 != 0) {
                temp_v0_5 = ((*D_8006AF80) * 0x79C) + D_80100F38;
                func_800A967C(M2C_FIELD(temp_v0_5, s16 *, 0x336) - 1, M2C_FIELD(temp_v0_5, s16 *, 0x338) - 1, M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10));
                func_800A9738(1);
                func_800CCAA8(1, (*D_800EFFE8) - 1, (*D_800F2CB0));
                return 0;
            }
            goto block_94;
        }
        func_800D1598(D_80103EE0);
        (*D_800F2CB2) = (*D_8006AF80);
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
            if (func_800A00E4(D_8008ED68) == 0) {
                goto block_60;
            }
            if (func_800A021C() != 0) {
                func_800CC40C();
                temp_a3_2 = (*D_800F2CB2) * 0x1A8;
                M2C_FIELD(((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) - 1) * 0xC) + temp_a3_2 + D_80091618), s32 *, 0x1C) = (s32) M2C_FIELD((((*D_8006AF80) * 0x79C) + D_80100F38), s16 *, 0x336);
                M2C_FIELD(((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) - 1) * 0xC) + temp_a3_2 + D_80091618), s32 *, 0x20) = (s32) M2C_FIELD((((*D_8006AF80) * 0x79C) + D_80100F38), s16 *, 0x338);
                M2C_FIELD(((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) - 1) * 0xC) + temp_a3_2 + D_80091618), s32 *, 0x24) = 5;
                M2C_FIELD(D_800EFF58, s32 *, 0x8C) = 3;
                func_800CCF2C(1, (s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) - 1, 0, temp_a3_2);
                M2C_FIELD((((*D_800F2CB2) * 0x1A8) + D_80091618), u16 *, 0x12) = (u16) M2C_FIELD(D_800EFF58, u16 *, 0x90);
                func_800A0424();
                return 0;
            }
block_60:
            func_80034AB0(0x4C);
            return 0;
        }
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
            func_80034AB0(0x5D);
            temp_a1_4 = (s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) - 1;
            M2C_FIELD(D_800EFF58, u16 *, 0x90) = temp_a1_4;
            func_800CCFA4(1, temp_a1_4, 0);
            func_800CC43C();
            temp_v1_4 = (*D_800F2CB2) * 0x1A8;
            temp_t0 = temp_v1_4 + D_80091618;
            M2C_FIELD((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) * 2) + temp_t0), s16 *, 0x14) = 0xFFFF;
            M2C_FIELD((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) * 0xC) + temp_v1_4 + D_80091618), s32 *, 0x1C) = -1;
            M2C_FIELD((((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) * 0xC) + temp_v1_4 + D_80091618), s32 *, 0x20) = -1;
            (*D_80078C22) = 0;
            M2C_FIELD(temp_t0, u16 *, 0x12) = (u16) M2C_FIELD(D_800EFF58, u16 *, 0x90);
            func_800A9738(0, (s32) M2C_FIELD(D_800EFF58, u16 *, 0x90), D_80091618, -1);
            (*D_800ED88C) = 1;
            func_800BBC28(1);
            M2C_FIELD(D_800EFF58, s32 *, 0x8C) = 0;
            (*D_800ED888) = 8;
            goto block_94;
        }
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8000)) {
            if ((M2C_FIELD(D_8008ED68, s32 *, 0xB0) != 0) && (temp_v0_6 = M2C_FIELD((((*D_800EEA78) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_6 != 7))) {
                if ((temp_v0_6 & 7) == 7) {
                    goto block_69;
                }
            }
        } else {
block_69:
            func_8009F1C4(0);
        }
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x2000)) {
            if ((M2C_FIELD(D_8008ED68, s32 *, 0xA8) != 0) && (temp_v0_7 = M2C_FIELD((((*D_800EEA7A) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_7 != 7))) {
                if ((temp_v0_7 & 7) == 7) {
                    goto block_75;
                }
            }
        } else {
block_75:
            func_8009F1C4(1);
        }
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x1000)) {
            if ((M2C_FIELD(D_8008ED68, s32 *, 0xA4) != 0) && (temp_v0_8 = M2C_FIELD((((*D_800EEA7C) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_8 != 7))) {
                if ((temp_v0_8 & 7) == 7) {
                    goto block_81;
                }
            }
        } else {
block_81:
            func_8009F1C4(2);
        }
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x4000)) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0xAC) != 0) {
                temp_v0_9 = M2C_FIELD((((*D_800EEA7E) * 4) + D_8008ED68), s32 *, 0xA4);
                if (temp_v0_9 != 7) {
                    if ((temp_v0_9 & 7) == 7) {
                        goto block_87;
                    }
                    /* Duplicate return node #95. Try simplifying control flow for better match */
                    return 0;
                }
            }
        default:
block_94:
            /* Duplicate return node #95. Try simplifying control flow for better match */
            return 0;
        }
block_87:
        func_8009F1C4(3);
        return 0;
    case 3:
        (*D_800EFFE4) = 4;
        goto block_94;
    case 4:
        (*D_800EFFE4) = 5;
        func_80034AB0(0x69);
        return 0;
    case 5:
        M2C_FIELD(D_800EFF58, s32 *, 0x8C) = 0;
        func_800A9738(0);
        if ((s32) M2C_FIELD(D_800EFF58, u16 *, 0x90) == 3) {
            M2C_FIELD((((*D_800F2CB2) * 0x1A8) + D_80091618), u16 *, 0x12) = (u16) M2C_FIELD(D_800EFF58, u16 *, 0x90);
            goto block_92;
        }
        (*D_800ED88C) = 1;
        func_800BBC28(1);
        goto block_94;
    }
}
