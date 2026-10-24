#include "common.h"

void func_800AA7DC(void *arg0) {
    extern M2C_UNK D_80078C6C[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE48[];
    extern s32 D_8008F78C[];
    extern M2C_UNK D_800B39CC[];
    extern M2C_UNK D_800B39D8[];
    extern M2C_UNK D_800B39EC[];
    extern M2C_UNK D_800B39FC[];
    extern M2C_UNK D_800B3A00[];
    extern M2C_UNK D_800B3A34[];
    extern M2C_UNK D_800B3A4C[];
    extern M2C_UNK D_800B3A68[];
    extern M2C_UNK D_800B3A84[];
    extern u8 D_800B3D20[];
    extern u8 D_800B3D24[];
    extern s32 D_800B3D30[];
    extern s32 D_800B3D34[];
    extern u8 D_800B3D44[];
    extern u8 D_800B3D45[];
    extern s32 D_800B3D4C[];
    M2C_UNK var_a0;
    M2C_UNK var_a0_2;
    M2C_UNK var_a0_3;
    M2C_UNK var_a0_4;
    M2C_UNK var_a0_5;
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;
    u32 temp_v0;
    u32 temp_v0_3;
    u8 temp_a0;
    u8 temp_v0_2;

    switch ((*D_8008EE48)) {
    case 0:
        temp_v0 = (*D_800B3D30) - 1;
        (*D_800B3D30) = temp_v0;
        if (temp_v0 == 0) {
block_3:
            func_80012578();
            return;
        }
    default:
        return;
    case 1:
        if ((*D_800B3D20) != 0) {
            goto block_3;
        }
        break;
    case 2:
        if (((*D_800B3D20) != 0) && (func_800AB78C(), (((*D_800B3D34) & 0x8F0) != 0))) {
            (*D_800B3D4C) = 0;
            (*D_800B3D20) = 0;
            temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x5D0);
            if (temp_v0_2 == 1) {
                M2C_FIELD(D_8008ED68, s32 *, 0xA1C) = 0;
                M2C_FIELD(D_8008ED68, s32 *, 0xA24) = 2;
                goto block_67;
            }
            if (temp_v0_2 == 0) {
                if ((*D_800B3D24) == 0) {
                    if (M2C_FIELD(D_8008ED68, s32 *, 0xA24) != 1) {
                        M2C_FIELD(D_8008ED68, s32 *, 0xA24) = 1;
                        M2C_FIELD(arg0, u8 *, 0x5D4) = (u8) (M2C_FIELD(arg0, u8 *, 0x5D4) + 1);
                        temp_a0 = M2C_FIELD(arg0, u8 *, 0x5D4);
                        M2C_FIELD(arg0, u8 *, 0x5D6) = (u8) (M2C_FIELD(arg0, u8 *, 0x5D6) | *(M2C_FIELD(arg0, u8 *, 0x5D4) + D_80078C6C));
                        if (temp_a0 >= 8U) {
                            M2C_FIELD(D_8008ED68, s32 *, 0xA1C) = 2;
                            M2C_FIELD(arg0, u8 *, 0x5D8) = (u8) (M2C_FIELD(arg0, u8 *, 0x5D8) + 1);
                            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) | 8);
                        } else if (temp_a0 == 7) {
                            M2C_FIELD(D_8008ED68, s32 *, 0xA1C) = 3;
                            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) | 0x10);
                        }
                    }
                    if (M2C_FIELD(arg0, u8 *, 0x5DC) != 0) {
                        if ((*D_800B3D45) == 0) {
                            goto block_67;
                        }
                        goto block_3;
                    }
                    goto block_23;
                }
                M2C_FIELD(D_8008ED68, s32 *, 0xA24) = 1;
                M2C_FIELD(D_8008ED68, s32 *, 0xA1C) = 1;
                goto block_67;
            }
            (*D_8008F78C) = 3;
            if ((M2C_FIELD(arg0, u8 *, 0x5DC) == 0) || (M2C_FIELD(arg0, u8 *, 0x5DD) == 0)) {
block_23:
                func_800125AC(5);
                return;
            }
            if ((*D_800B3D24) == 0) {
                if ((*D_800B3D45) != 0) {
                    goto block_3;
                }
                goto block_67;
            }
            if ((*D_800B3D44) != 0) {
                goto block_3;
            }
block_67:
            func_80012544(7);
        }
        break;
    case 3:
        if ((*D_800B3D20) != 0) {
            if (M2C_FIELD(arg0, u8 *, 0x5D0) == 2) {
                var_a0 = -0x88;
                if ((*D_800B3D24) != 0) {
                    var_a0 = 0x10;
                }
                if ((*D_800B3D24) != 0) {

                }
                func_8001F35C(var_a0, -0x10, 0, 1, 1, 2);
                var_a0_2 = -0x7C;
                if ((*D_800B3D24) != 0) {
                    var_a0_2 = 0x1C;
                }
            } else {
                var_a0_2 = -0x88;
                if ((*D_800B3D24) != 0) {
                    var_a0_2 = 0x10;
                }
            }
            func_8001F1A8(var_a0_2, -0x10, 0, 1);
            var_a0_3 = -0x88;
            if ((*D_800B3D24) != 0) {
                var_a0_3 = 0x10;
            }
            func_8001F1A8(var_a0_3, 0, 0, 1, 0, D_800B39D8, 1, 9, 2);
            var_a0_4 = -0x78;
            if ((*D_800B3D24) != 0) {
                var_a0_4 = 0x20;
            }
            var_a2 = 0;
            if ((*D_800B3D4C) == 0) {
                var_a2 = 3;
            }
            func_8001F1A8(var_a0_4, 0x18, var_a2, 1, 0, D_800B39FC, 1, 2, 2);
            var_a0_5 = -0x48;
            if ((*D_800B3D24) != 0) {
                var_a0_5 = 0x50;
            }
            var_a2_2 = 0;
            if ((*D_800B3D4C) != 0) {
                var_a2_2 = 3;
            }
            func_8001F1A8(var_a0_5, 0x18, var_a2_2, 1, 0, D_800B3A00, 1, 3, 2);
            func_800AB78C();
            if ((*D_800B3D34) & 0xA000) {
                func_80034AB0(0x84);
                (*D_800B3D4C) ^= 1;
            }
            if ((*D_800B3D34) & 0x20) {
                func_80034AB0(0x48);
                if ((*D_800B3D4C) == 0) {
                    (*D_800B3D20) = 0;
                    (*D_800B3D30) = 0x50;
                    goto block_3;
                }
                goto block_67;
            }
            if ((*D_800B3D34) & 0x40) {
                (*D_800B3D20) = 0;
                func_800125AC(2);
                return;
            }
        }
        break;
    case 4:
        if ((*D_800B3D20) == 0) {
            (*D_800B3D20) = 1;
            return;
        }
        temp_v0_3 = (*D_800B3D30) - 1;
        (*D_800B3D30) = temp_v0_3;
        if (temp_v0_3 < 0) {
            (*D_800B3D20) = 0;
            (*D_800B3D30) = 0x4A;
            func_80012508(D_800B3D20);
            return;
        }
        break;
    case 5:
        if ((*D_800B3D20) != 0) {
            func_8001F1A8(-0x5A, -0x28, 1, 1, 0, D_800B3A34, 1, 0xC, 2);
            func_8001F1A8(-0x5A, -0x18, 1, 1, 0, D_800B3A4C, 1, 0xD, 2);
            func_8001F1A8(-0x5A, 4, 0, 1, 0, D_800B3A68, 1, 0xD, 2);
            func_8001F1A8(-0x5A, 0x14, 0, 1, 0, D_800B3A84, 1, 0xD, 2);
            func_800AB78C();
            if ((*D_800B3D34) & 0x20) {
                func_80034AB0(0x48);
                (*D_800B3D20) = 0;
                goto block_3;
            }
        }
        break;
    case 6:
        if ((*D_800B3D20) != 0) {
            goto block_67;
        }
        break;
    }
}
