#include "common.h"

s32 func_8009EDA0(s32 arg0) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EFF58[];
    extern s32 D_800F006C[];
    s32 sp10;
    s32 temp_s0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    sp10 = 0;
    func_800A0014(2, 0, 0);
    temp_s0 = M2C_FIELD(D_800EFF58, s32 *, 0x114);
    switch (arg0) {                                 /* irregular */
    case 2:
        if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10) == 0) {
            do {
                var_a1 = temp_s0;
                if (M2C_FIELD(D_800EFF58, s32 *, 0x114) > 0) {
                    var_a1 = M2C_FIELD(D_800EFF58, s32 *, 0x114) - 1;
                }
                M2C_FIELD(D_800EFF58, s32 *, 0x114) = var_a1;
                if (var_a1 == temp_s0) {
                    sp10 = 0;
                    goto block_9;
                }
                temp_a0 = (var_a1 * 4) + D_800EFF58;
                sp10 += 1;
                if (!(((u32) M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x120), u32 *, 0x38) >> 6) & 1)) {
                    var_v0 = 1;
                    if (M2C_FIELD(temp_a0, s32 *, 0x21C) != -1) {
                        M2C_FIELD(D_800EFF58, s32 *, 0x28C) = (s32) M2C_FIELD(temp_a0, s32 *, 0x254);
block_9:
                        var_v0 = 1;
                    }
                } else {
                    var_v0 = 0;
                    if (var_a1 == 0) {
                        M2C_FIELD(D_800EFF58, s32 *, 0x114) = temp_s0;
                        var_v0 = 2;
                    }
                }
            } while (var_v0 == 0);
        } else {
            do {
                var_v0_3 = temp_s0;
                if (M2C_FIELD(D_800EFF58, s32 *, 0x114) > 0) {
                    var_v0_3 = M2C_FIELD(D_800EFF58, s32 *, 0x114) - 1;
                }
                M2C_FIELD(D_800EFF58, s32 *, 0x114) = var_v0_3;
                if (var_v0_3 == temp_s0) {
                    sp10 = 0;
                    goto block_21;
                }
                temp_a0_2 = (var_v0_3 * 4) + D_800EFF58;
                sp10 += 1;
                if (!(((u32) M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 0x120), u32 *, 0x38) >> 6) & 1)) {
                    var_v0_2 = 1;
                    if (M2C_FIELD(temp_a0_2, s32 *, 0x21C) != -1) {
                        M2C_FIELD(D_800EFF58, s32 *, 0x28C) = (s32) M2C_FIELD(temp_a0_2, s32 *, 0x254);
block_21:
                        var_v0_2 = 1;
                    }
                } else {
                    var_v0_2 = 0;
                }
            } while (var_v0_2 == 0);
        }
        break;
    case 3:
        do {
            var_v1 = temp_s0;
            if (M2C_FIELD(D_800EFF58, s32 *, 0x114) < 0xD) {
                var_v1 = M2C_FIELD(D_800EFF58, s32 *, 0x114) + 1;
            }
            M2C_FIELD(D_800EFF58, s32 *, 0x114) = var_v1;
            if (var_v1 == temp_s0) {
                sp10 = 0;
                goto block_33;
            }
            temp_a0_3 = (var_v1 * 4) + D_800EFF58;
            sp10 += 1;
            if (!(((u32) M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 0x120), u32 *, 0x38) >> 6) & 1)) {
                var_v0_4 = 1;
                if (M2C_FIELD(temp_a0_3, s32 *, 0x21C) != -1) {
                    M2C_FIELD(D_800EFF58, s32 *, 0x28C) = (s32) M2C_FIELD(temp_a0_3, s32 *, 0x254);
block_33:
                    var_v0_4 = 1;
                }
            } else {
                var_v0_4 = 0;
            }
        } while (var_v0_4 == 0);
        break;
    }
    func_800A0014(1, 0, sp10);
    if (temp_s0 != (*D_800F006C)) {
        func_80034AB0(0x84);
    }
    return 1;
}
