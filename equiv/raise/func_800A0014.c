#include "common.h"

void func_800A0014(s32 arg0, s32 arg2) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EFF58[];
    M2C_UNK var_a0;

    if (arg2 != 0) {
        if (M2C_FIELD(D_800EFF58, s32 *, 0x114) < M2C_FIELD(D_800EFF58, s32 *, 0x32C)) {
            var_a0 = 0;
            goto block_6;
        }
        var_a0 = 1;
        if ((M2C_FIELD(D_800EFF58, s32 *, 0x330) < M2C_FIELD(D_800EFF58, s32 *, 0x114)) || ((M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10) == 0) && (var_a0 = -1, (M2C_FIELD(D_800EFF58, s32 *, 0x32C) == 1)))) {
block_6:
            func_800A0540(var_a0, M2C_FIELD(D_800EFF58, s32 *, 0x32C));
            goto block_7;
        }
    } else {
block_7:
        func_800A04F4();
    }
    func_800A0780(arg0);
    func_800A0618(arg0);
}
