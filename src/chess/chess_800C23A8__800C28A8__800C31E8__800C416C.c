#include "common.h"

void func_800C3D9C();


void func_800C416C(u8 *arg0) {
    extern u32 D_8008ED84[];
    extern u8 *func_80012544(s16);
    extern u8 *func_800125AC(s16);

    if (arg0[1] != 0 && *D_8008ED84 >= 0xE11U) {
        func_80012544(0xD);
    } else if (arg0[0xBE1] & 1) {
        if (arg0[1] != 0) {
            func_80012544(0xD);
        } else {
            func_800125AC(0xE);
        }
    } else {
        func_800125AC(0xC);
    }
}


