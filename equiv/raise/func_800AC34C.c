#include "common.h"

void func_800AC34C(u32 arg0, s16 arg1) {
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern u8 D_800EEA00[];
    extern s8 D_800EEA04[];
    extern u8 D_800EEB9C[];
    extern s32 D_800EEBAC[];
    u8 *var_a1_2;
    u8 *var_a2;
    u8 *var_a2_2;
    u8 *var_a2_3;
    u8 *var_t0;
    u8 *var_v1;
    M2C_UNK var_a0;
    s16 var_a1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_s0;
    s32 var_s4;
    s32 var_v0;
    void **var_a1_3;
    void *temp_v1;

    var_a1 = arg1;
    switch (arg0) {
    case 8:
        func_800ABF7C(1);
        return;
    case 6:
    case 7:
        func_800ABF7C(1);
        if (arg0 == 6) {
            M2C_FIELD(D_800EEB9C, s32 *, 8) = 0;
            M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + D_800EEB9C), void **, 0x28), s16 *, 0x66) = 0;
            M2C_FIELD(D_800EEB9C, s32 *, 0x24) = 2;
            M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = 0;
            M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x30), s16 *, 0x66) = 1;
            M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4) + D_800EEB9C), s32 *, 0x7C) = 0;
            M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 0x24) + D_800EEB9C + (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4)), void **, 0xD4), s16 *, 0x66) = 1;
            M2C_FIELD(D_800EEB9C, s32 *, 0x418) = 0;
            M2C_FIELD(D_800EEB9C, s32 *, 0x41C) = 0;
            (*D_800EEA04) = 0;
        } else {
            M2C_FIELD(D_800EEB9C, s32 *, 0x418) = 1;
            M2C_FIELD(D_800EEB9C, s32 *, 0x41C) = 1;
            (*D_800EEA04) = 1;
        }
        if (M2C_FIELD(D_800EEB9C, s32 *, 0x18) == 1) {
            func_800B7FA8(1);
        }
        if (M2C_FIELD(D_800EEB9C, s32 *, 0x10) == 0) {
            func_800B7ED8(0);
            var_a0 = 1;
block_64:
            func_800B7F40(var_a0);
        }
        return;
    case 4:
        var_s4 = 3;
block_18:
block_19:
        temp_s1 = M2C_FIELD(D_800EEB9C, s32 *, 0x24);
        temp_s2 = M2C_FIELD(D_800EEB9C, s32 *, 0xD0);
        func_800ABF7C(M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF, var_a1);
        if (var_s4 == 1) {
            M2C_FIELD(D_800EEB9C, s32 *, 0x24) = temp_s1;
            M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = temp_s2;
        } else if (var_s4 == 2) {
            var_s0 = 1;
            if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) < 2) {
loop_24:
                temp_a0 = func_800B1260(var_s0) & 0xFFFF;
                if ((temp_a0 == 0xFFFF) || (M2C_FIELD(((temp_a0 * 0x1A8) + D_80091618), u16 *, 0x10) == 0xFFFF) || (var_v0 = 1, (func_800E14C4(temp_a0) != 0))) {
                    var_s0 -= 1;
                    var_v0 = 0;
                    if (var_s0 >= 0) {
                        goto loop_24;
                    }
                }
                if (var_v0 != 1) {
                    func_800AC9E8(0);
                    M2C_FIELD(D_800EEB9C, s32 *, 8) = 0;
                    M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + D_800EEB9C), void **, 0x28), s16 *, 0x66) = 0;
                    M2C_FIELD(D_800EEB9C, s32 *, 0x24) = 2;
                    M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = 0;
                    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x30), s16 *, 0x66) = 1;
                    M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4) + D_800EEB9C), s32 *, 0x7C) = 0;
                    M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 0x24) + D_800EEB9C + (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4)), void **, 0xD4), s16 *, 0x66) = 1;
                }
            }
        } else {
            var_a3 = 0;
            if (var_s4 == 3) {
                func_800AC9E8(0);
                M2C_FIELD(D_800EEB9C, s32 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + D_800EEB9C), void **, 0x28), s16 *, 0x66) = 0;
                M2C_FIELD(D_800EEB9C, s32 *, 0x24) = 2;
                M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = 0;
                M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x30), s16 *, 0x66) = 1;
                M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4) + D_800EEB9C), s32 *, 0x7C) = 0;
                M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 0x24) + D_800EEB9C + (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4)), void **, 0xD4), s16 *, 0x66) = 1;
            } else {
                var_v1 = D_800EEB9C;
                var_a2 = D_800EEB9C;
loop_33:
                if (*(var_a3 + D_800EEA00) == 1) {
                    temp_v0 = M2C_FIELD(var_v1, s32 *, 0x60);
                    var_a0_2 = 0;
                    if (temp_v0 > 0) {
                        var_v1_2 = var_a2 + 0x3C8;
loop_36:
                        if (*var_v1_2 != 1) {
                            var_a0_2 += 1;
                            var_v1_2 += 4;
                            if (var_a0_2 < temp_v0) {
                                goto loop_36;
                            }
                        } else {
                            M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = var_a0_2;
                        }
                    }
                    M2C_FIELD(D_800EEB9C, s32 *, 0x24) = var_a3;
                } else {
                    var_v1 += 4;
                    var_a3 += 1;
                    var_a2 += 0x24;
                    if (var_a3 < 7) {
                        goto loop_33;
                    }
                }
                var_a3_2 = 0;
                var_a1_2 = D_800EEB9C;
                var_a2_2 = D_800EEB9C;
                do {
                    var_a0_3 = 0;
                    if (M2C_FIELD(var_a1_2, s32 *, 0x60) > 0) {
                        var_v1_3 = var_a2_2 + 0x3C8;
loop_44:
                        if (*var_v1_3 == 1) {
                            M2C_FIELD(var_a1_2, s32 *, 0x7C) = var_a0_3;
                        } else {
                            var_a0_3 += 1;
                            var_v1_3 += 4;
                            if (var_a0_3 < M2C_FIELD(((var_a3_2 * 4) + D_800EEB9C), s32 *, 0x60)) {
                                goto loop_44;
                            }
                        }
                    }
                    var_a1_2 += 4;
                    var_a3_2 += 1;
                    var_a2_2 += 0x24;
                } while (var_a3_2 < 7);
                var_a3_3 = 0;
                var_a2_3 = D_800EEB9C;
                var_t0 = D_800EEB9C;
                do {
                    var_a0_4 = 0;
                    if (M2C_FIELD(var_a2_3, s32 *, 0x60) > 0) {
                        var_a1_3 = var_t0 + 0xD4;
                        do {
                            M2C_FIELD(*var_a1_3, s16 *, 0x66) = (s16) (var_a0_4 == M2C_FIELD(var_a2_3, s32 *, 0x7C));
                            var_a0_4 += 1;
                            var_a1_3 += 4;
                        } while (var_a0_4 < M2C_FIELD(var_a2_3, s32 *, 0x60));
                    }
                    temp_v1 = M2C_FIELD(var_a2_3, void **, 0x28);
                    var_a2_3 += 4;
                    temp_v0_2 = var_a3_3 ^ M2C_FIELD(D_800EEB9C, s32 *, 0x24);
                    var_a3_3 += 1;
                    M2C_FIELD(temp_v1, s16 *, 0x66) = (s16) (temp_v0_2 == 0);
                    var_t0 += 0x24;
                } while (var_a3_3 < 7);
            }
        }
        if (var_s4 == 3) {
            if (M2C_FIELD(D_800EEB9C, s32 *, 0x10) == 0) {
                func_800B7ED8(0);
                func_800B7F40(1);
            }
            if (M2C_FIELD(D_800EEB9C, s32 *, 0x18) == 1) {
                func_800B7FA8(1);
                return;
            }
        } else {
            if (arg0 != 5) {
                func_800B7ED8(0);
                var_a0 = 1;
                goto block_64;
            }
            if ((*D_800EEBAC) == 0) {
                func_800B7ED8(0);
                var_a0 = 1;
                goto block_64;
            }
        }
        break;
    case 3:
    case 5:
        var_s4 = 1;
        goto block_18;
    case 2:
        var_s4 = 2;
        goto block_18;
    case 1:
        var_a1 = 0xFFFF;
        var_s4 = 0;
        if ((*D_8006AF80) != 0xFFFF) {
            if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF) {
                var_a1 = func_800E158C(D_80091618, 0xFFFF);
                if (var_a1 == 1) {
                    if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 3) {
                        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x34), s16 *, 0x66) = 0;
                        M2C_FIELD(D_800EEB9C, s32 *, 0x24) = 2;
                        M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = 0;
                        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x30), s16 *, 0x66) = var_a1;
                        M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4) + D_800EEB9C), s32 *, 0x7C) = 0;
                        M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 0x24) + D_800EEB9C + (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4)), void **, 0xD4), s16 *, 0x66) = var_a1;
                    }
                }
            }
        }
        goto block_19;
    default:
        func_800B7ED8(1);
        var_a0 = 0;
        goto block_64;
    }
}
