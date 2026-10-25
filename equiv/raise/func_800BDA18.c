#include "common.h"

void func_800BDA18(void) {
    extern u8 D_800EE5F0[];
    extern u8 D_800EFF58[];
    u8 *var_s0;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    var_s0 = D_800EFF58;
    var_s1 = 0x01680000;
    do {
        var_s2 += 1;
        M2C_FIELD(var_s0, s32 *, 0x5B8) = func_800BDE30(0x19, 0x108, var_s1 >> 0x10, 4, 0, D_800EE5F0, M2C_FIELD(var_s0, s32 *, 0x5C4), 1, 0, 0, 2, 0, 0);
        var_s1 += 0x140000;
        var_s0 += 4;
    } while (var_s2 < 3);
    M2C_FIELD(D_800EFF58, s32 *, 0x5D0) = func_800BDE30(0x19, 0x108, 0x1A4, 4, 0, D_800EE5F0, M2C_FIELD(D_800EFF58, s32 *, 0x5D4), 1, 0, 0, 2, 0, 0);
    M2C_FIELD(D_800EFF58, s32 *, 0x5D8) = func_800BDE30(0x19, 0x108, 0x1B8, 4, 0, D_800EE5F0, M2C_FIELD(D_800EFF58, s32 *, 0x5DC), 1, 0, 0, 2, 0, 0);
}
