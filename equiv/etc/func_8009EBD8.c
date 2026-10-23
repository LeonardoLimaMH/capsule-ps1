#include "common.h"

void func_8009EBD8(void *arg0) {
    extern u16 D_8008EE48[];
    extern s16 D_800B3B64[];
    M2C_UNK var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_v0;
    u8 temp_a0;

    var_s0 = 0;
    var_v0 = 0 < 3;
    do {
        if (var_v0 != 0) {
            var_a0 = 0x20013;
            var_a1 = var_s0 + 0x10;
        } else {
            var_a0 = 0x20014;
            var_a1 = var_s0 + 0x18;
        }
        var_s0 += 1;
        func_80012A20(func_80019F30(var_a0, var_a1), 1, 0, 0);
        var_v0 = var_s0 < 3;
    } while (var_s0 < 8);
    func_80012A20(func_80019F30(0x50014, 5), 1, 0, 0);
    if ((*D_8008EE48) == 0) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x5D0);
        if ((temp_a0 == 2) || (M2C_FIELD(arg0, u8 *, 0x5DA) == 1)) {
            func_80012544(0x12);
            goto block_11;
        }
        if (temp_a0 == 1) {
            func_80012544(0x11);
            if ((*D_800B3B64) == 0) {
block_11:
                func_800125AC(2);
            }
        } else {
            goto block_12;
        }
    } else {
block_12:
        func_80012544(0xC);
    }
}
