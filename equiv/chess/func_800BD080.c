#include "common.h"

void func_800BD080(void *arg0) {
    extern u16 D_8008EE50[];
    switch ((*D_8008EE50)) {
    case 0:
        if (M2C_FIELD(arg0, u8 *, 0xBE1) & 1) {
block_11:
            func_8001264C(5);
            return;
        }
block_10:
        func_80012628();
        return;
    case 1:
        if (func_800A0C54(arg0, 1 - M2C_FIELD(arg0, u8 *, 0xBCA)) == 0) {
            func_8001264C(3);
            return;
        }
block_9:
        func_800220B8(arg0);
        goto block_10;
    case 2:
        if (func_800220D4(arg0, 1, 1 - M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            goto block_11;
        }
    default:
        return;
    case 3:
        if (func_800A0C54(arg0, M2C_FIELD(arg0, u8 *, 0xBCA)) != 0) {
            goto block_9;
        }
        goto block_11;
    case 4:
        if (func_800220D4(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            goto block_10;
        }
        break;
    case 5:
        func_800125D8();
        break;
    }
}
