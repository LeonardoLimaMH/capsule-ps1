#include "common.h"

void func_800A2BB0(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    extern M2C_UNK D_800B3B38[];
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;
    M2C_UNK var_s0;
    s32 var_v0;

    var_s0 = 1;
    if (M2C_FIELD((*D_800B3B38), s16 *, 0) == 1) {
        var_v0 = arg0 << 0x10;
        if (M2C_FIELD((*D_800B3B38), s16 *, 0xC) == arg2) {
            var_s0 = 3;
            goto block_3;
        }
    } else {
block_3:
        var_v0 = arg0 << 0x10;
    }
    var_a2 = 0;
    if (arg3 == 1) {
        var_a2 = var_s0;
    }
    func_8001F1A8(var_v0 >> 0x10, arg1, var_a2, 1, 0, arg4, 1, arg5, 3);
    var_a2_2 = 0;
    if ((arg3 << 0x10) == 0) {
        var_a2_2 = var_s0;
    }
    func_8001F1A8((s32) (s16) (arg0 + 0x30), arg1, var_a2_2, 1, 0, arg6, 1, arg7, 3);
}
