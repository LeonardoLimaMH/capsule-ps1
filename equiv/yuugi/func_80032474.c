#include "common.h"

void func_80032474(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    extern s16 D_800922D2[];
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;
    M2C_UNK var_s0;

    var_s0 = 1;
    if ((*D_800922D2) == arg2) {
        var_s0 = 3;
    }
    var_a2 = 0;
    if (arg3 == 1) {
        var_a2 = var_s0;
    }
    func_8001F1A8(arg0, arg1, var_a2, 1, 0, arg4, 1, arg5, 0);
    var_a2_2 = 0;
    if ((arg3 << 0x10) == 0) {
        var_a2_2 = var_s0;
    }
    func_8001F1A8((s16) (arg0 + 0x28), arg1, var_a2_2, 1, 0, arg6, 1, arg7, 0);
}
