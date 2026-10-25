#include "common.h"

void func_800A3758(void) {
    extern int func_800A37E8();
    extern int func_800CC7BC();
    s32 var_s1;
    void *temp_v0;

    var_s1 = 0;
    do {
        temp_v0 = func_80015B3C(&func_800A37E8, &func_800CC7BC, 3);
        func_8001602C(temp_v0);
        M2C_FIELD(temp_v0, s32 *, 0x5C) = var_s1;
        var_s1 += 1;
        M2C_FIELD(temp_v0, s32 *, 0x50) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x50) | 1) & ~0x40 & ~0x30);
    } while (var_s1 < 2);
}
