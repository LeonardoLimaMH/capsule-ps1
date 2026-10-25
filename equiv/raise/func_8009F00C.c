#include "common.h"

s32 func_8009F00C(s32 arg0) {
    extern u8 D_800EFF58[];
    extern s32 D_800F01E4[];
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    void *temp_a0;

    var_s1 = -1;
    func_800A0014(2, 0, 0);
    switch (arg0) {                                 /* irregular */
    case 2:
        temp_a0 = (M2C_FIELD(D_800EFF58, s32 *, 0x114) * 4) + D_800EFF58;
        if (M2C_FIELD(temp_a0, s32 *, 0x21C) != -1) {
            var_s1 = M2C_FIELD(D_800EFF58, s32 *, 0x28C);
            do {
                var_a0 = 0;
                if (M2C_FIELD(D_800EFF58, s32 *, 0x28C) < (M2C_FIELD(temp_a0, s32 *, 0x21C) - 1)) {
                    var_a0 = M2C_FIELD(D_800EFF58, s32 *, 0x28C) + 1;
                }
                M2C_FIELD(D_800EFF58, s32 *, 0x28C) = var_a0;
            } while (((u32) M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EFF58, s32 *, 0x114) * 0xC) + D_800EFF58 + (var_a0 * 4)), void **, 0x2A0), u32 *, 0x38) >> 6) & 1);
        }
        break;
    case 3:
        if (M2C_FIELD(((M2C_FIELD(D_800EFF58, s32 *, 0x114) * 4) + D_800EFF58), s32 *, 0x21C) != -1) {
            var_s1 = M2C_FIELD(D_800EFF58, s32 *, 0x28C);
            do {
                var_a0_2 = M2C_FIELD(D_800EFF58, s32 *, 0x28C) - 1;
                if (M2C_FIELD(D_800EFF58, s32 *, 0x28C) <= 0) {
                    var_a0_2 = M2C_FIELD(((M2C_FIELD(D_800EFF58, s32 *, 0x114) * 4) + D_800EFF58), s32 *, 0x21C) - 1;
                }
                M2C_FIELD(D_800EFF58, s32 *, 0x28C) = var_a0_2;
            } while (((u32) M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EFF58, s32 *, 0x114) * 0xC) + D_800EFF58 + (var_a0_2 * 4)), void **, 0x2A0), u32 *, 0x38) >> 6) & 1);
        }
        break;
    }
    func_800A0014(1, 0, 0);
    if (var_s1 != (*D_800F01E4)) {
        func_80034AB0(0x84);
    }
    return 1;
}
