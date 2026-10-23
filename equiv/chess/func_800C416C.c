#include "common.h"

void func_800C416C(void *arg0) {
    extern u32 D_8008ED84[];
    M2C_UNK var_a0;

    if (M2C_FIELD(arg0, u8 *, 1) != 0) {
        if ((u32) (*D_8008ED84) < 0xE11U) {
            goto block_2;
        }
        goto block_4;
    }
block_2:
    if (M2C_FIELD(arg0, u8 *, 0xBE1) & 1) {
        var_a0 = 0xE;
        if (M2C_FIELD(arg0, u8 *, 1) != 0) {
block_4:
            func_80012544(0xD);
            return;
        }
        goto block_6;
    }
    var_a0 = 0xC;
block_6:
    func_800125AC(var_a0);
}
