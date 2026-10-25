#include "common.h"

s32 func_800BF414(void) {
    extern u16 D_8006AF80[];
    extern s32 D_8008EDF0[];
    extern s8 D_8008EE6A[];
    extern u8 D_80091618[];
    extern s32 D_800ED8DC[];
    extern s16 D_800F0668[];
    extern s16 D_800F066A[];
    extern s16 D_800F067C[];
    extern s16 D_800F067E[];
    extern s16 D_800F0682[];
    extern s16 D_800F0684[];
    extern s16 D_800F0708[];
    extern s16 D_800F0710[];
    extern u8 D_800F07E4[];
    extern u8 D_800F1EB4[];
    extern u8 D_800FAE10[];
    extern u8 D_800FDE08[];
    extern s16 D_80100D80[];
    extern u8 D_80100F38[];
    s16 temp_s1;
    s16 temp_s2;
    s16 var_v0_2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s4;
    s32 var_v0;
    void **temp_a0_2;
    void **temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_v1;
    void *temp_v1_2;

    var_s4 = 0;
    temp_s2 = M2C_FIELD(D_800F1EB4, s16 *, 0x20);
    temp_s1 = M2C_FIELD(D_800F1EB4, s16 *, 0x1E);
    temp_a0 = temp_s2 ^ 1;
    temp_s3 = temp_s2 != 1;
    switch ((*D_80100D80)) {
    case 0:
        if ((*D_800F0710) != 1) {
            (*D_8008EE6A) = 2;
            func_800C0020(1, (*D_80100D80));
            func_800BF800(1);
            func_800C0560();
            (*D_80100D80) = (u16) (*D_80100D80) + 1;
        }
    default:
block_21:
        var_v0 = var_s4;
        return var_v0;
    case 1:
        var_v0 = 0;
        if ((*D_800F0708) != 1) {
            if (func_800BFA3C(temp_a0, (*D_80100D80)) == 1) {
                (*D_80100D80) = (u16) (*D_80100D80) + 1;
                func_800C0590();
                func_80027C14(temp_s1 & 0xFFFF);
                func_800C62A4(temp_s2, 0);
                temp_s0 = temp_s3 * 4;
                if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A) != 0xFFFF) {
                    temp_a0_2 = temp_s0 + D_800FDE08;
                    temp_v1 = *temp_a0_2;
                    M2C_FIELD(temp_v1, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x38) | 1);
                    temp_s0_2 = temp_s0 + D_800FAE10;
                    temp_v1_2 = *temp_s0_2;
                    M2C_FIELD(temp_v1_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x38) | 1);
                    func_80013928(*temp_a0_2);
                    func_80013928(*temp_s0_2);
                    return 1;
                }
                temp_s0_3 = (temp_s1 * 0x1A8) + D_80091618;
                func_800A8E78(M2C_FIELD(temp_s0_3, s32 *, 0x178));
                func_800A8E78(M2C_FIELD(temp_s0_3, s32 *, 0x17C));
                return 1;
            }
            var_v0 = 0;
            if (func_800C0648() == 0) {
                if ((*D_8008EDF0) & 0x40) {
                    func_800D1CC4(temp_s1 & 0xFFFF, 0x23, 3, 1);
                    (*D_800F0668) = 0x3C;
                    (*D_80100D80) = 4;
                }
                goto block_21;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return var_v0;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return var_v0;
    case 2:
        func_800C0038(temp_a0, (*D_80100D80));
        if ((*D_800F0708) == 1) {
            func_800BFA3C();
            return 0;
        }
        temp_v0 = func_800BFA3C();
        var_v0 = 0;
        if (temp_v0 == 2) {
            func_800C0118();
            func_800BFA30();
            func_800B0A94(temp_s1 & 0xFFFF, 0);
            temp_s0_4 = (temp_s1 * 0x79C) + D_80100F38;
            M2C_FIELD(temp_s0_4, s16 *, 0x2CA) = 0;
            M2C_FIELD(temp_s0_4, s16 *, 0x2C8) = 0;
            M2C_FIELD(temp_s0_4, u8 **, 0x2C4) = D_800F07E4;
            M2C_FIELD(temp_s0_4, s16 *, 0x2B8) = 0;
            M2C_FIELD(temp_s0_4, s16 *, 0x2C0) = 0;
            M2C_FIELD(temp_s0_4, s16 *, 0x2BA) = 0;
            M2C_FIELD(temp_s0_4, s16 *, 0x2C2) = 0;
            M2C_FIELD(temp_s0_4, s16 *, 0x364) = func_800B5034(temp_s2, temp_s1, 7);
            (*D_800ED8DC) = temp_v0;
            (*D_800F0668) = 0xB4;
            (*D_80100D80) = (u16) (*D_80100D80) + 1;
            goto block_21;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return var_v0;
    case 3:
        var_v0_2 = (u16) (*D_800F0668) - 1;
        if ((*D_800F0668) == 0) {
            (*D_8008EE6A) = 0;
            var_s4 = 3;
        } else {
block_19:
            (*D_800F0668) = var_v0_2;
        }
        goto block_21;
    case 4:
        func_800C0038(temp_a0, (*D_80100D80));
        func_800BFA3C();
        var_v0_2 = (u16) (*D_800F0668) - 1;
        if ((*D_800F0668) != 0) {
            goto block_19;
        }
        var_s4 = 4;
        func_800C0118(D_800F0668);
        func_800BFA30();
        (*D_800F0684) = 0;
        (*D_800F0682) = 1;
        (*D_800F0708) = 0;
        (*D_800F067C) = 2;
        (*D_800F067E) = 0;
        (*D_800F066A) = 0;
        (*D_8008EE6A) = 0;
        goto block_21;
    }
}
