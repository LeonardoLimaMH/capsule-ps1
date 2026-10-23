#include "common.h"

s32 func_8004CB48(s32 *arg0, void *arg1) {
    u32 **temp_s0;
    u32 *var_s0;
    u32 var_a0;

    temp_s0 = arg0 + 4;
    if (*arg0 != 0x10) {
        return -1;
    }
    var_s0 = temp_s0 + 4;
    M2C_FIELD(arg1, u32 **, 0) = (u32 *) *temp_s0;
    if (GetGraphDebug() == 2) {
        printf("id  =%08x\n", (u32 *)0x10);
    }
    if (GetGraphDebug() == 2) {
        printf("mode=%08x\n", M2C_FIELD(arg1, u32 **, 0));
    }
    if (GetGraphDebug() == 2) {
        printf("timaddr=%08x\n", var_s0);
    }
    if ((s32) M2C_FIELD(arg1, u32 **, 0) & 8) {
        M2C_FIELD(arg1, u32 **, 4) = (u32 *) (var_s0 + 4);
        M2C_FIELD(arg1, u32 **, 8) = (u32 *) (var_s0 + 0xC);
        var_a0 = (u32) *var_s0 >> 2;
        var_s0 = &var_s0[var_a0];
    } else {
        var_a0 = 0;
        M2C_FIELD(arg1, u32 **, 4) = NULL;
        M2C_FIELD(arg1, u32 **, 8) = NULL;
    }
    M2C_FIELD(arg1, u32 **, 0xC) = (u32 *) (var_s0 + 4);
    M2C_FIELD(arg1, u32 **, 0x10) = (u32 *) (var_s0 + 0xC);
    return var_a0 + (((u32) *var_s0 >> 2) + 2);
}
