#include "common.h"

void func_8004530C(s32 arg0, M2C_UNK arg1) {
    extern s32 D_80072F24[];
    extern M2C_UNK D_80072F48[];
    extern M2C_UNK (*D_80094C0C)(M2C_UNK, M2C_UNK);
    extern M2C_UNK (*D_80094C10)(M2C_UNK, M2C_UNK, M2C_UNK);
    extern M2C_UNK (*D_80094C14)(M2C_UNK, M2C_UNK);
    M2C_UNK (*var_v0_3)(M2C_UNK, M2C_UNK);
    M2C_UNK var_a0;
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = arg0 & 0xFF;
    if (M2C_FIELD(D_80072F48, s32 *, 0) == 0xC) {
        M2C_FIELD(D_80072F48, s32 *, 0) = 0xD;
        var_v0 = arg0 & 0xFF;
    }
    if (var_v0 == 2) {
        if (M2C_FIELD(D_80072F48, s32 *, 0) == 0xD) {
            if (!(M2C_FIELD(D_80072F48, u8 *, -0xC) & 0x10)) {
                M2C_FIELD(D_80072F48, s32 *, 0) = 0xE;
                M2C_FIELD(D_80072F48, s32 *, -4) = 2;
                M2C_FIELD(D_80072F48, s32 *, 4) = 0x15;
                M2C_FIELD(D_80072F48, s32 *, 0x18) = (s32) (M2C_FIELD(D_80072F48, s32 *, 0x18) + 1);
            }
        } else if (M2C_FIELD(D_80072F48, s32 *, 0) == 0xE) {
            if (M2C_FIELD(D_80072F48, s32 *, 4) == 0x15) {
                if (!(M2C_FIELD(D_80072F48, u8 *, -0xC) & 0x10)) {
                    M2C_FIELD(D_80072F48, s32 *, -4) = 2;
                    M2C_FIELD(D_80072F48, s32 *, 0) = (s32) M2C_FIELD(D_80072F48, s32 *, 0);
                    M2C_FIELD(D_80072F48, s32 *, 4) = 0x16;
                    M2C_FIELD(D_80072F48, s32 *, 0x14) = 0;
                }
            } else if (M2C_FIELD(D_80072F48, s32 *, 4) == 0x16) {
                var_v0_2 = 0x17;
                if (!(M2C_FIELD(D_80072F48, u8 *, -0xC) & 2)) {
                    if (M2C_FIELD(D_80072F48, s32 *, 0x14) >= 0x12D) {
                        M2C_FIELD(D_80072F48, s32 *, -4) = 3;
                        if (D_80094C14 != NULL) {
                            var_a0 = 5;
                            var_v0_3 = D_80094C14;
                            goto block_30;
                        }
                    }
                } else {
                    goto block_16;
                }
            } else {
                var_v0_2 = 0x18;
                switch (M2C_FIELD(D_80072F48, s32 *, 4)) { /* irregular */
                case 23:
block_16:
                    M2C_FIELD(D_80072F48, s32 *, -4) = 2;
                    M2C_FIELD(D_80072F48, s32 *, 0) = (s32) M2C_FIELD(D_80072F48, s32 *, 0);
                    M2C_FIELD(D_80072F48, s32 *, 4) = var_v0_2;
                    return;
                case 24:
                    if (M2C_FIELD(D_80072F48, u8 *, -0xC) == 2) {
                        M2C_FIELD(D_80072F48, s32 *, -4) = 1;
                        M2C_FIELD(D_80072F48, s32 *, 0) = 0xB;
                        M2C_FIELD(D_80072F48, s32 *, 4) = 0;
                        if (D_80094C14 != NULL) {
                            var_a0 = 2;
                            var_v0_3 = D_80094C14;
                            goto block_30;
                        }
                    }
                    break;
                }
            }
        } else if (((u32) (M2C_FIELD(D_80072F48, s32 *, 0) - 0x10) < 2U) && (M2C_FIELD(D_80072F48, s32 *, 0x28) == 0) && !(M2C_FIELD(D_80072F48, u8 *, -0xC) & 2)) {
            M2C_FIELD(D_80072F48, s32 *, -4) = 1;
            M2C_FIELD(D_80072F48, s32 *, 0) = 0xB;
            if ((D_80094C10 != NULL) && (M2C_FIELD(D_80072F48, s32 *, -0x24) != 0)) {
                D_80094C10(5, arg1, 2);
            }
            if (D_80094C0C != NULL) {
                var_a0 = 5;
                if ((*D_80072F24) != 0) {
                    var_v0_3 = D_80094C0C;
block_30:
                    var_v0_3(var_a0, arg1);
                }
            }
        }
    } else {
        if (M2C_FIELD(D_80072F48, u8 *, -0xC) & 0x10) {
            M2C_FIELD(D_80072F48, s32 *, -4) = 2;
            M2C_FIELD(D_80072F48, s32 *, 0) = 0xC;
            return;
        }
        if ((u32) (M2C_FIELD(D_80072F48, s32 *, 0) - 0x10) < 2U) {
            M2C_FIELD(D_80072F48, s32 *, -4) = 1;
            M2C_FIELD(D_80072F48, s32 *, 0) = 0xB;
        }
    }
}
