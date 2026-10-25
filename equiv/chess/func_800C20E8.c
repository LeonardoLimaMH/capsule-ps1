#include "common.h"

u32 func_800C20E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_UNK var_a2;
    s16 var_v0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v1;
    void *temp_v0;

    temp_s1 = arg1 + ((arg4 * 0x2E8) + 0x18) + (arg5 * 0x7C);
    temp_v0 = func_800A8EE8(arg1, arg2, arg3);
    temp_s0 = (((u32) M2C_FIELD(temp_v0, u32 *, 0x10) >> 2) & 0x1F) - 2;
    if (temp_s0 >= 0) {
        var_v1 = 4;
        if (temp_s0 < 5) {
            var_v1 = temp_s0;
        }
    } else {
        var_v1 = 0;
    }
    func_800CAA44(arg0, temp_s1);
    temp_a0 = (arg2 << 7) | (arg3 + 1);
    temp_a1 = (arg4 << 7) | (arg5 + 1);
    switch (var_v1) {
    case 4:
        break;
    case 1:
        var_v0 = func_800D8490(temp_a0 & 0xFF, temp_a1 & 0xFF);
        var_a2 = 1;
block_10:
        func_800CA7B0(arg0, temp_s1, var_a2, ((u32) M2C_FIELD(temp_v0, u32 *, 0x10) >> 0x1A) & 7, (s32) var_v0);
        break;
    case 0:
        var_v0 = func_800D82A0(temp_a0 & 0xFF, temp_a1 & 0xFF);
        var_a2 = 0;
        goto block_10;
    case 2:
        var_v0 = func_800D8508(temp_a0 & 0xFF, temp_a1 & 0xFF);
        var_a2 = 2;
        goto block_10;
    case 3:
        var_v0 = func_800D8580(temp_a0 & 0xFF, temp_a1 & 0xFF);
        var_a2 = 3;
        goto block_10;
    }
    return (u32) var_v1;
}
