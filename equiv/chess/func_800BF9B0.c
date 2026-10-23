#include "common.h"

void func_800BF9B0(void *arg0) {
    extern u16 D_8008EE50[];
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        if (func_800A1330(arg0, M2C_FIELD(arg0, u8 *, 0xBCA)) != 0) {
            func_800220B8(arg0);
            func_80012628();
            return;
        }
        func_8001264C(2);
        return;
    case 1:
        if (func_800220D4(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            func_80012628();
            return;
        }
        return;
    case 2:
        func_800125D8();
        break;
    }
}
