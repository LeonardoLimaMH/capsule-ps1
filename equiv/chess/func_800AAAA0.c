#include "common.h"

void func_800AAAA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s16 D_80100F38[];
    extern s32 D_80100F3C[];
    s16 temp_s0;

    temp_s0 = arg3 + 0x1D;
    func_8001F35C((s16) (arg2 + 0x40), temp_s0, (*D_80100F38), 0, 0, 5 - M2C_FIELD((arg0 + arg1), u8 *, 0xBDA), 1, (*D_80100F3C));
    func_800188F0((s16) (arg2 + 0x2D), temp_s0, 3, 0, (*D_80100F3C));
    func_800A9810(arg0, arg1, arg2, arg3, 0);
}
