#include "common.h"

void *func_8009D11C(void) {
    extern int func_800161C4();
    extern int func_8009CFC4();
    s16 temp_v0_2;
    s16 var_v0;
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_8009CFC4, &func_800161C4, 2);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 1);
    func_80015CD0(temp_v0 + 0x14, func_80019F30(0x7000E, 0xA9), 0);
    if (func_80020304(2) != 0) {
        M2C_FIELD(temp_v0, s16 *, 0x46) = 0xB4;
        var_v0 = -6;
    } else {
        M2C_FIELD(temp_v0, s16 *, 0x46) = -0xB4;
        var_v0 = 6;
    }
    M2C_FIELD(temp_v0, s16 *, 0x6A) = var_v0;
    M2C_FIELD(temp_v0, s16 *, 0x4A) = (s16) (func_80020304(0x64) - 0x32);
    temp_v0_2 = func_80020304(6) - 3;
    M2C_FIELD(temp_v0, s16 *, 0x6E) = temp_v0_2;
    M2C_FIELD(temp_v0, s16 *, 0x54) = (s16) (0xE00 - ratan2(M2C_FIELD(temp_v0, s16 *, 0x6A), temp_v0_2));
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 7;
    M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x7F);
    return temp_v0;
}
