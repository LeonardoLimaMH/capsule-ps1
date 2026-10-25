#include "common.h"

void func_800A70EC(void *arg0) {
    extern u8 D_80085428[];
    M2C_UNK var_a1;
    s32 temp_s2;

    temp_s2 = M2C_FIELD(D_80085428, u8 *, 0xBF4) - 5;
    if (func_800CAE6C(D_80085428 + 0x5D0) < 3) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    var_a1 = 0x32;
    if (M2C_FIELD(D_80085428, s8 *, 0xBF8) != 5) {
        var_a1 = 0x33;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60012, var_a1);
    func_8001F35C(-0x75, 0x2D, 0, 1, 0, M2C_FIELD(D_80085428, s8 *, 0xBF8) + 1, 1, 3);
    func_800AA15C(D_80085428, temp_s2, M2C_FIELD(D_80085428, s8 *, 0xBF8), -0x50, -0x42);
}
