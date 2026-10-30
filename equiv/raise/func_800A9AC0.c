#include "common.h"

void func_800A9AC0(void) {
    extern M2C_UNK D_8006AF80[];
    extern s16 D_80078C28[];
    extern s8 D_8008ED90[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800EEA88[];
    extern s32 D_800EEA8C[];
    extern s32 D_800EEA94[];
    extern s32 D_800EEA98[];
    extern M2C_UNK D_800EEB9C[];
    extern s32 D_800EEBA8[];
    s32 temp_s1;
    s32 var_a0;
    s32 var_a2;
    s32 var_s0;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_v0;

    if ((u32) (M2C_FIELD(D_800EEB9C, s32 *, 0xC) - 0x19) >= 4U) {
        if ((u32) (M2C_FIELD(D_800EEB9C, s32 *, 0xC) - 0x1D) >= 4U) {
            if ((*D_800EEA88) != 1) {
                if (M2C_FIELD(D_8006AF80, u16 *, 0) != 0xFFFF) {
                    if (M2C_FIELD(((M2C_FIELD(D_8006AF80, u16 *, 0) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x10) != 0xFFFF) {
                        if ((*D_80078C28) != 0) {
                            if (func_800E16EC(0xFFFF) != 1) {
                                goto block_7;
                            }
                        } else {
block_7:
                            if (func_800B1198() == 0) {
                                if (func_800E0FB8(M2C_FIELD(D_8006AF80, u16 *, 0), M2C_FIELD(((M2C_FIELD(D_8006AF80, u16 *, 0) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x8A)) != 0) {
                                    var_v1 = func_800B0440(M2C_FIELD(D_8006AF80, u16 *, 0), M2C_FIELD(((M2C_FIELD(D_8006AF80, u16 *, 0) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x8A)) & 0xFFFF;
                                    goto block_24;
                                }
                                if ((u32) (M2C_FIELD(D_800EEB9C, s32 *, 0xC) - 0x28) >= 5U) {
                                    var_v1_2 = 0;
                                    if (M2C_FIELD(D_8006AF80, s32 *, 4) != 0x7FFFFFFF) {
                                        var_v1_2 = M2C_FIELD(D_8006AF80, s32 *, 4) + 1;
                                    }
                                    M2C_FIELD(D_8006AF80, s32 *, 4) = var_v1_2;
                                    var_s0 = 0;
                                    do {
                                        temp_s1 = var_s0 & 0xFFFF;
                                        if (func_800AEEDC(temp_s1) != 1) {
                                            func_800E53CC(temp_s1);
                                        }
                                        var_s0 += 1;
                                    } while (var_s0 < 6);
                                    var_a0 = var_v1_2 - (*D_800EEA98);
                                    var_a2 = MULT_HI(var_a0, 0x91A2B3C5);
                                    if (var_a0 == (((var_v1_2 - (*D_800EEA98)) / 28800) * 0x7080)) {
                                        var_v0 = 1;
                                        goto block_21;
                                    }
                                    var_a0 = var_v1_2 - (*D_800EEA94);
                                    var_a2 = MULT_HI(var_a0, 0x91A2B3C5);
                                    if (var_a0 == (((var_v1_2 - (*D_800EEA94)) / 28800) * 0x7080)) {
                                        var_v0 = 3;
block_21:
                                        (*D_8008ED90) = var_v0;
                                    }
                                    if ((u32) ((*D_800EEBA8) - 0xF) >= 0x19U) {
                                        var_v1 = func_800AF2B0(var_a0, 0x91A2B3C5, var_a2);
                                        if (var_v1 != 0) {
block_24:
                                            (*D_800EEA8C) = var_v1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
