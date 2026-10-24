#include "common.h"

void func_8009FDAC(void *arg0, s32 arg1, void *arg2) {
    extern void * D_80101B88[];
    extern void * D_80101B8C[];
    M2C_UNK var_a1;
    void *var_a2;

    var_a2 = arg2;
    if (arg1 != 0) {
        if (arg1 < 0xA) {
            var_a1 = 5;
            var_a2 = (*D_80101B88);
            M2C_FIELD(var_a2, s16 *, 0x10) = (s16) (arg1 + 0xC2);
        } else {
            var_a1 = 6;
            var_a2 = (*D_80101B8C);
            M2C_FIELD(var_a2, s16 *, 0x10) = (s16) ((arg1 / 10) + 0xC2);
            M2C_FIELD(var_a2, s16 *, 0x12) = (s16) ((arg1 % 10) + 0xC2);
        }
    } else {
        var_a1 = 4;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, var_a1, var_a2, arg1);
}
