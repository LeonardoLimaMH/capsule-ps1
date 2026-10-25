#include "common.h"

void func_800D926C(void *arg0, u8 *arg2) {
    extern u16 D_8006AF80[];
    extern u8 D_8006AF90[];
    extern s16 D_8006AFA4[];
    extern s16 D_80078C20[];
    extern u16 D_8008EE44[];
    extern u8 D_80091618[];
    extern u8 D_800EE630[];
    extern s32 D_800EEB64[];
    extern s32 D_800EEB68[];
    extern u8 D_800EFF58[];
    extern u32 D_800F1DA4[];
    extern s16 D_80105308[];
    u8 *var_a2;
    s16 *temp_a0_2;
    s16 *temp_a1;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_a0;
    void *temp_a1_3;
    void *temp_s3;

    var_a2 = arg2;
    temp_s3 = M2C_FIELD(arg0, void **, 0x40);
    if ((((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 8) & 1) == (*D_80078C20)) {
        if ((u16) (*D_8008EE44) < 0x41U) {
            switch ((*D_800F1DA4)) {
            case 0:
                temp_a1 = D_80105308 + 2;
                (*D_80105308) = 1;
                *temp_a1 = 0x40;
                (*D_800F1DA4) += 1;
                if (M2C_FIELD(arg0, s32 *, 0x3C) == 4) {
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
                    func_80034AB0(0x8F, temp_a1);
                }
            default:
block_36:
                if (!(M2C_FIELD(arg0, s32 *, 0x38) & 1)) {
                    if ((s32) (*D_800F1DA4) < 4) {
                        temp_a1_2 = M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A) & 0xFFFF;
                        if (((*D_8006AF80) != 0xFFFF) && (temp_a1_2 != 0xFFFF)) {
                            temp_a0 = M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), void **, 0x178);
                            temp_a1_3 = M2C_FIELD(((temp_a1_2 * 0x1A8) + D_80091618), void **, 0x178);
                            M2C_FIELD(arg0, u16 *, 0x46) = (u16) ((s32) (M2C_FIELD(temp_a0, s16 *, 0x46) + M2C_FIELD(temp_a1_3, s16 *, 0x46)) / 2);
                            M2C_FIELD(arg0, s16 *, 0x4A) = (s16) ((s32) (M2C_FIELD(temp_a0, s16 *, 0x4A) + M2C_FIELD(temp_a1_3, s16 *, 0x4A)) / 2);
                            M2C_FIELD(arg0, u16 *, 0x4E) = (u16) ((s32) (M2C_FIELD(temp_a0, s16 *, 0x4E) + M2C_FIELD(temp_a1_3, s16 *, 0x4E)) / 2);
                            goto block_41;
                        }
                    } else {
block_41:
                        goto block_42;
                    }
                } else {
block_42:
                    temp_v0 = (M2C_FIELD(temp_s3, s32 *, 0x38) & ~1) | (M2C_FIELD(arg0, s32 *, 0x38) & 1);
                    M2C_FIELD(temp_s3, s32 *, 0x38) = temp_v0;
                    M2C_FIELD(temp_s3, s32 *, 0x38) = (s32) ((temp_v0 & ~8) | (M2C_FIELD(arg0, s32 *, 0x38) & 8));
                    M2C_FIELD(temp_s3, u16 *, 0x46) = (u16) M2C_FIELD(arg0, u16 *, 0x46);
                    M2C_FIELD(temp_s3, u16 *, 0x4A) = (u16) M2C_FIELD(arg0, s16 *, 0x4A);
                    M2C_FIELD(temp_s3, u16 *, 0x4E) = (u16) M2C_FIELD(arg0, u16 *, 0x4E);
                    M2C_FIELD(temp_s3, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x6A);
                    M2C_FIELD(temp_s3, u16 *, 0x6E) = (u16) M2C_FIELD(arg0, u16 *, 0x6E);
                    M2C_FIELD(temp_s3, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 0x72);
                    M2C_FIELD(temp_s3, u16 *, 0x50) = (u16) M2C_FIELD(arg0, s16 *, 0x50);
                    M2C_FIELD(temp_s3, u16 *, 0x52) = (u16) M2C_FIELD(arg0, u16 *, 0x52);
                    M2C_FIELD(temp_s3, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 0x74);
                    M2C_FIELD(temp_s3, u16 *, 0x76) = (u16) M2C_FIELD(arg0, u16 *, 0x76);
                }
                return;
            case 1:
                temp_a0_2 = D_80105308 + 2;
                if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x1000) {
                    M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                    M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~8);
                }
                if (*temp_a0_2 > 0) {
                    *temp_a0_2 = (u16) *temp_a0_2 - 1;
                } else if ((*D_80105308) > 0) {
                    (*D_80105308) = (u16) (*D_80105308) - 1;
                    *temp_a0_2 = 0x40;
block_32:
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                } else {
block_20:
block_21:
                    (*D_800F1DA4) += 1;
                }
                goto block_36;
            case 2:
                if ((*D_800EEB64) == 2) {
                    if ((*D_800EEB68) != M2C_FIELD(D_800EFF58, s32 *, 0x348)) {
                        var_v0 = M2C_FIELD(((M2C_FIELD((((*D_800EEB68) * 4) + D_800EFF58), s32 *, 0x3D4) * 4) + D_800EFF58), s32 *, 0x398);
                        goto block_19;
                    }
                    if (M2C_FIELD(D_8006AF90, s16 *, 0x14) != 0) {
                        var_v0 = M2C_FIELD(((M2C_FIELD(D_8006AF90, s16 *, 0x16) * 4) + D_800EFF58), s32 *, 0x398);
                        goto block_19;
                    }
                    goto block_20;
                }
                if (M2C_FIELD(D_8006AF90, s16 *, 0x14) == 2) {
                    var_a2 = D_800EE630;
                    var_v0 = M2C_FIELD(((M2C_FIELD(D_8006AF90, s16 *, 0x18) * 4) + D_800EFF58), s32 *, 0x398);
block_19:
                    temp_s1 = M2C_FIELD(D_800EE630, s32 *, 0x18) + var_v0;
                    temp_v0_2 = func_80019F30(M2C_FIELD(D_800EE630, s32 *, 0) | 0x70000, temp_s1, var_a2);
                    func_80015CD0(arg0 + 0x14, temp_v0_2, 0);
                    (*D_80105308) = 1;
                    *(D_80105308 + 2) = 0x40;
                    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0_2;
                    M2C_FIELD(arg0, s32 *, 0x7C) = temp_s1;
                    M2C_FIELD(arg0, s32 *, 0x80) = temp_v0_2;
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                    (*D_800F1DA4) -= 1;
                } else {
                    goto block_21;
                }
                goto block_36;
            case 3:
                (*D_800F1DA4) = 0;
                temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x3C) - 1;
                M2C_FIELD(arg0, s32 *, 0x3C) = temp_v0_3;
                if (temp_v0_3 == 0) {
                    func_80034AB0(0x3A);
                    M2C_FIELD(arg0, u16 *, 0x6E) = -4U;
                    (*D_800F1DA4) = 4;
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
                } else if ((*D_800EEB64) == 2) {
                    if ((*D_800EEB68) != M2C_FIELD(D_800EFF58, s32 *, 0x348)) {
                        var_v0_2 = M2C_FIELD(((M2C_FIELD((((*D_800EEB68) * 4) + D_800EFF58), s32 *, 0x3D4) * 4) + D_800EFF58), s32 *, 0x398);
                        goto block_31;
                    }
                    if ((*D_8006AFA4) != 0) {
                        var_v0_2 = M2C_FIELD(((M2C_FIELD((((*D_800EEB68) * 4) + D_800EFF58), s32 *, 0x3D4) * 4) + D_800EFF58), s32 *, 0x398);
                        goto block_31;
                    }
                } else if (M2C_FIELD(D_8006AF90, s16 *, 0x14) == 2) {
                    var_a2 = D_800EE630;
                    var_v0_2 = M2C_FIELD(((M2C_FIELD(D_8006AF90, s16 *, 0x16) * 4) + D_800EFF58), s32 *, 0x398);
block_31:
                    temp_s1_2 = M2C_FIELD(D_800EE630, s32 *, 0x18) + var_v0_2;
                    temp_v0_4 = func_80019F30(M2C_FIELD(D_800EE630, s32 *, 0) | 0x70000, temp_s1_2, var_a2);
                    func_80015CD0(arg0 + 0x14, temp_v0_4, 0);
                    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0_4;
                    M2C_FIELD(arg0, s32 *, 0x7C) = temp_s1_2;
                    M2C_FIELD(arg0, s32 *, 0x80) = temp_v0_4;
                    goto block_32;
                }
                goto block_36;
            case 4:
                if (M2C_FIELD(arg0, s16 *, 0x4A) < -0x96) {
                    goto block_34;
                }
                goto block_36;
            }
        } else {
block_34:
            goto block_35;
        }
    } else {
block_35:
        func_80013920(arg0);
        func_80013928(temp_s3);
    }
}
