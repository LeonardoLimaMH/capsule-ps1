#include "common.h"

void func_8009E1BC(s32 arg0) {
    extern M2C_UNK D_8008ED68[];
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    u8 temp_s2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_s1;
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    temp_s2 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    if ((M2C_FIELD(temp_s0, u8 *, 0x61A) == 0) && (M2C_FIELD((*D_8008ED68), u16 *, 0xE0) != 0xD)) {
        if ((M2C_FIELD(((temp_s2 * 0x10) + (*D_8008ED68)), s32 *, 0x88) & 0x10) && (M2C_FIELD(temp_s0, u8 *, 0x62A) == 0) && (func_800CAE6C(temp_s0) == 0)) {
            func_80034AB0(0x48);
            M2C_FIELD(temp_s0, u8 *, 0x624) = 1U;
            func_800125AC(0xD);
        }
        if ((M2C_FIELD(((temp_s2 * 0x10) + (*D_8008ED68)), s32 *, 0x88) & 1) && (M2C_FIELD(temp_s0, u8 *, 0x62A) == 0)) {
            temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x624);
            var_s1 = 5;
            if (temp_v1 != 5) {
                if (temp_v1 != 6) {
                    if (func_800C9414(temp_s0) != 0) {
                        M2C_FIELD(temp_s0, u8 *, 0x624) = 3U;
                    } else {
                        var_a1 = 0;
                        var_a2 = 1;
                        goto block_24;
                    }
                } else {
                    var_a1 = 0;
                    goto block_23;
                }
            } else {
                goto block_15;
            }
        } else {
block_15:
            if (M2C_FIELD(((temp_s2 * 0x10) + (*D_8008ED68)), s32 *, 0x88) & 2) {
                var_s1 = 6;
                if (M2C_FIELD(temp_s0, u8 *, 0x62A) == 0) {
                    temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0x624);
                    if (temp_v1_2 != 6) {
                        if (temp_v1_2 != 5) {
                            if (func_800C9414(temp_s0) != 0) {
                                M2C_FIELD(temp_s0, u8 *, 0x624) = 4U;
                            } else {
                                var_a1 = 1;
                                var_a2 = 1;
                                goto block_24;
                            }
                        } else {
                            var_a1 = 1;
block_23:
                            var_a2 = 2;
block_24:
                            func_8009EB3C(temp_s0, var_a1, var_a2);
                            M2C_FIELD(temp_s0, u8 *, 0x624) = var_s1;
                        }
                    }
                }
            }
        }
        if (func_800CAE6C(temp_s0) != 0) {
            temp_v1_3 = M2C_FIELD(temp_s0, u8 *, 0x624);
            switch (temp_v1_3) {                    /* irregular */
            case 7:
                if (func_8009ED2C(temp_s0) != 0) {
                    M2C_FIELD(temp_s0, u8 *, 0x624) = 0U;
                    return;
                }
                break;
            case 3:
                if (func_800C9414() == 0) {
                    func_8009EB3C(temp_s0, 0, 1);
                    M2C_FIELD(temp_s0, u8 *, 0x624) = 5U;
                    return;
                }
                break;
            case 4:
                if (func_800C9414() == 0) {
                    func_8009EB3C(temp_s0, 1, 1);
                    M2C_FIELD(temp_s0, u8 *, 0x624) = 6U;
                    return;
                }
                break;
            default:
                if ((M2C_FIELD(((temp_s2 * 0x10) + (*D_8008ED68)), s32 *, 0x88) & 0x40) && (M2C_FIELD(temp_s0, u8 *, 0x62A) == 0)) {
                    func_8009ECF8(temp_s0);
                    return;
                }
                func_8009EC40(temp_s0);
                break;
            }
        }
    }
}
