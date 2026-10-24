#include "common.h"

s32 func_800A52F0(void) {
    extern M2C_UNK D_800EFF58[];
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    if (M2C_FIELD(D_800EFF58, s32 *, 0x420) != 0) {
        if (M2C_FIELD(D_800EFF58, s32 *, 0x420) >= 0) {
            var_v0 = 0;
            if (M2C_FIELD(D_800EFF58, s32 *, 0x420) < 3) {
                if (M2C_FIELD(D_800EFF58, s32 *, 0x424) > 0) {
                    M2C_FIELD(D_800EFF58, s32 *, 0x424) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x424) - 1);
                    func_800BD684(M2C_FIELD(D_800EFF58, s32 *, 0x420));
                    return 0;
                }
                M2C_FIELD(D_800EFF58, s32 *, 0x420) = 0;
                goto block_8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_v0;
        }
        goto block_8;
    }
    var_v0 = 0;
    if (M2C_FIELD(D_800EFF58, s32 *, 0x424) == 0) {
        var_s0 = -1;
block_8:
        var_v0 = var_s0;
    }
    return var_v0;
}
