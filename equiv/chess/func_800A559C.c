#include "common.h"

void func_800A559C(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE50[];
    switch ((*D_8008EE50)) {
    case 0:
        if (func_800A0540(arg0, M2C_FIELD(arg0, u8 *, 0xBCA)) == 0) {
            func_8001264C(2);
            return;
        }
block_7:
        M2C_FIELD(arg0, s8 *, 0xCFD) = 0;
        M2C_FIELD(arg0, s8 *, 0xBEB) = 0;
        M2C_FIELD(arg0, s8 *, 0xBE0) = 0;
        func_800220B8(arg0);
        func_80012628();
        return;
    case 1:
        if (func_800220D4(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
block_8:
            func_8001264C(4);
            return;
        }
    default:
        return;
    case 2:
        if (func_800A0540(arg0, 1 - M2C_FIELD(arg0, u8 *, 0xBCA)) != 0) {
            goto block_7;
        }
        goto block_8;
    case 3:
        if (func_800220D4(arg0, 1, 1 - M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            func_80012628();
            return;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s8 *, 0xBEB) = 1;
        if (M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0x5E0) == 0) {
            func_80012604(3);
            return;
        }
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        M2C_FIELD((*D_8008ED68), s8 *, 0x102) = 2;
        func_80012604(2);
        func_8001264C(1);
        func_80012684(M2C_FIELD((*D_8008ED68), u16 *, 0x99C));
        break;
    }
}
