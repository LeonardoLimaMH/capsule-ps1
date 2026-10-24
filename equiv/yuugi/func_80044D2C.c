#include "common.h"

void func_80044D2C(void) {
    extern s32 D_80072F24[];
    extern s32 D_80072F40[];
    extern M2C_UNK D_80072F44[];
    extern M2C_UNK D_80072F64[];
    extern s32 D_80072F68[];
    extern s32 D_80073074[];
    extern M2C_UNK (*D_80094C08)();
    s8 sp10;
    M2C_UNK var_a0;
    s32 temp_v0;

    temp_v0 = (*D_80072F68) - 1;
    if ((*D_80072F68) > 0) {
        (*D_80072F68) = temp_v0;
        if (temp_v0 == 0) {
            func_80044FFC();
            return;
        }
        goto block_3;
    }
block_3:
    if (M2C_FIELD(D_80072F64, s32 *, 0) > 0) {
        M2C_FIELD(D_80072F64, s32 *, 0) = (s32) (M2C_FIELD(D_80072F64, s32 *, 0) - 1);
    }
    if (M2C_FIELD(D_80072F64, s32 *, 0xC) > 0) {
        M2C_FIELD(D_80072F64, s32 *, 0xC) = (s32) (M2C_FIELD(D_80072F64, s32 *, 0xC) - 1);
    }
    if (M2C_FIELD(D_80072F64, s32 *, -0x20) != 1) {
        if (M2C_FIELD(D_80072F64, s32 *, -0x20) == 2) {
            switch (M2C_FIELD(D_80072F64, s32 *, -0x1C)) { /* irregular */
            case 12:
                if ((*D_80073074) != 0) {
                    sp10 = 0;
                    if ((*D_80072F68) <= 0) {
                        M2C_FIELD(D_80072F64, s32 *, -0x24) = 0x20;
                        func_80044C04(0xE, &sp10);
                    }
                    (*D_80073074) = 0;
                } else {
                    if ((*D_80072F68) <= 0) {
                        M2C_FIELD(D_80072F64, s32 *, -0x24) = 0x20;
                        func_80044C04(1, NULL);
                    }
                    (*D_80073074) = 1;
                }
                break;
            case 13:
                (*D_80073074) = 0;
block_41:
                if ((*D_80072F68) <= 0) {
block_42:
                    M2C_FIELD(D_80072F64, s32 *, -0x24) = 0x20;
                    var_a0 = 1;
block_43:
                    func_80044C04(var_a0, NULL);
                }
                break;
            case 14:
                switch (M2C_FIELD(D_80072F64, s32 *, -0x18)) { /* switch 1; irregular */
                case 22:                            /* switch 1 */
                    M2C_FIELD(D_80072F64, s32 *, -8) = (s32) (M2C_FIELD(D_80072F64, s32 *, -8) + 1);
                    if ((*D_80072F68) <= 0) {
                        goto block_42;
                    }
                    break;
                case 23:                            /* switch 1 */
                    if ((*D_80072F68) <= 0) {
                        M2C_FIELD(D_80072F64, s32 *, -0x24) = 0x20;
                        var_a0 = 0x13;
                        goto block_43;
                    }
                    break;
                case 21:                            /* switch 1 */
                case 24:                            /* switch 1 */
block_40:
                    goto block_41;
                }
                break;
            case 15:
                if (M2C_FIELD(D_80072F64, s32 *, 0) == 0) {
                    M2C_FIELD(D_80072F64, s32 *, -0x20) = 1;
block_39:
                    M2C_FIELD(D_80072F64, s32 *, -0x1C) = 0xB;
                }
                break;
            case 16:
                if (M2C_FIELD(D_80072F64, u8 *, -0xC) != 0) {
                    M2C_FIELD(D_80072F64, s32 *, -0x20) = 1;
                    goto block_39;
                }
                goto block_40;
            case 17:
                if (M2C_FIELD(D_80072F64, u8 *, -0xA) != 0) {
                    M2C_FIELD(D_80072F64, s32 *, -0x20) = 1;
                    goto block_39;
                }
                goto block_40;
            }
        }
    }
    if (D_80094C08 != NULL) {
        if ((*D_80072F24) != 0) {
            D_80094C08();
        }
    }
    if (M2C_FIELD(D_80072F44, s32 *, 0) == 1) {
        if (M2C_FIELD(D_80072F44, u8 *, 0x17) != 0) {
            goto block_49;
        }
        goto block_50;
    }
block_49:
    if (M2C_FIELD(D_80072F44, s32 *, 0) == 3) {
block_50:
        if ((*D_80072F68) <= 0) {
            (*D_80072F40) = 0x21;
            func_80044C04(1, NULL);
        }
    }
}
