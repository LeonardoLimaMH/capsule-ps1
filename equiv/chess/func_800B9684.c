#include "common.h"

void func_800B9684(void *arg0) {
    extern u16 D_8008EE50[];
    switch ((*D_8008EE50)) {
    case 0:
        if (func_800C9414() == 0) {
            if (func_800A0930(arg0, M2C_FIELD(arg0, u8 *, 0xBCA), 0) == 0) {
                func_8001264C(2);
                return;
            }
block_8:
            func_800220B8(arg0);
            func_80012628();
            return;
        }
    default:
        return;
    case 1:
        if (func_800220D4(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
block_9:
            func_8001264C(4);
            return;
        }
        break;
    case 2:
        if (func_800A0930(arg0, 1 - M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            goto block_8;
        }
        goto block_9;
    case 3:
        if (func_800220D4(arg0, 1, 1 - M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            func_80012628();
            return;
        }
        break;
    case 4:
        func_800125D8();
        break;
    }
}
