#include "common.h"

s32 func_800AB8E8(s32 arg0, s32 arg1) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE48[];
    extern s8 D_800B3D20[];
    extern u8 D_800B3D24[];
    extern u8 D_800B3D25[];
    extern s32 D_800B3D34[];
    extern M2C_UNK D_800B3D38[];
    M2C_UNK var_a0;
    s32 temp_a1;
    s32 var_s0;

    var_s0 = arg1;
    if ((*D_800B3D34) & 0x1000) {
        if (var_s0 >= 3) {
            func_80034AB0(0x84);
            var_s0 -= 3;
        } else {
            goto block_4;
        }
    } else {
block_4:
        if ((*D_800B3D34) & 0x4000) {
            if (var_s0 < 3) {
                func_80034AB0(0x84);
                if (var_s0 == 2) {
                    if ((*D_800B3D24) != arg0) {
                        if ((*D_800B3D25) != 1) {
                            var_s0 = 1;
                        }
                    }
                }
                var_s0 += 3;
            } else {
                goto block_12;
            }
        } else {
block_12:
            if ((*D_800B3D34) & 0x8000) {
                if (var_s0 != ((arg1 / 3) * 3)) {
                    func_80034AB0(0x84, arg1 / 3);
                    var_s0 -= 1;
                } else {
                    goto block_16;
                }
            } else {
block_16:
                if ((*D_800B3D34) & 0x2000) {
                    if (var_s0 == 4) {
                        if ((*D_800B3D24) != arg0) {
                            if ((*D_800B3D25) == 1) {
                                goto block_20;
                            }
                        } else {
block_20:
                            goto block_21;
                        }
                    } else {
block_21:
                        if ((arg1 % 3) < 2) {
                            func_80034AB0(0x84, arg1 / 3);
                            var_s0 += 1;
                        }
                    }
                }
            }
        }
    }
    if ((*D_800B3D34) & 0x20) {
        temp_a1 = arg0 * 3;
        if (M2C_FIELD(((var_s0 * 0x7C) + (arg0 * 0x2E8) + (u8 *)D_80085428), u8 *, 0x613) != 1) {
            if (arg0 != (*D_800B3D24)) {
                if (var_s0 < 5) {
                    if (*(u8 *)((arg0 * 6) + (u8 *)D_800B3D38 + var_s0) == 0) {
                        goto block_29;
                    }
                    goto block_30;
                }
                goto block_30;
            }
block_30:
            func_80034AB0(0x48, temp_a1);
            (*D_800B3D20) = 0;
            if ((*D_8008EE48) == 1) {
                var_a0 = 3;
                if ((*D_800B3D24) == 0) {
                    goto block_33;
                }
                goto block_44;
            }
block_33:
            if ((*D_8008EE48) == 2) {
                var_a0 = 1;
                if ((*D_800B3D24) == 0) {
                    goto block_35;
                }
                goto block_44;
            }
block_35:
            func_80012578();
            return var_s0;
        }
block_29:
        func_80034AB0(0x5D, temp_a1);
        return var_s0;
    }
    if ((*D_800B3D34) & 0x40) {
        func_80034AB0(0x5D);
        if ((*D_8008EE48) == 1) {
            var_a0 = 2;
            if ((*D_800B3D24) == 0) {
                goto block_40;
            }
        } else {
block_40:
            if ((*D_8008EE48) == 2) {
                if ((*D_800B3D24) == 0) {
                    var_a0 = 1;
                } else {
                    goto block_43;
                }
            } else {
block_43:
                (*D_800B3D20) = 0;
                var_a0 = 6;
            }
        }
block_44:
        func_800125AC(var_a0);
    }
    return var_s0;
}
