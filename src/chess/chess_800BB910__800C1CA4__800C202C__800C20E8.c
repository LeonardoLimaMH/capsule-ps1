#include "ghidra.h"
#include "common.h"

static inline s32 clamp_800C20E8(s32 value) {
    s32 result;
    if (value >= 0) {
        result = 4;
        if (value < 5) result = value;
    } else {
        result = 0;
    }
    return result;
}

u32 func_800C20E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    extern void *func_800A8EE8();
    s32 var_a2;
    s16 var_v0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v1;
    void *temp_v0;

    temp_s1 = (s32)((u8 *)arg1 + ((arg4 * 0x2E8) + 0x18) + (arg5 * 0x7C));
    temp_v0 = func_800A8EE8(arg1, arg2, arg3);
    temp_s0 = (((u32) M2C_FIELD(temp_v0, u32 *, 0x10) >> 2) & 0x1F) - 2;
    temp_s0 = clamp_800C20E8(temp_s0);
    func_800CAA44(arg0, temp_s1);
    temp_a0 = (arg2 << 7) | (arg3 + 1);
    temp_a1 = (arg4 << 7) | (arg5 + 1);
    switch (temp_s0) {
    case 4:
        break;
    case 1:
        var_v0 = func_800D8490(temp_a0 & 0xFF, temp_a1 & 0xFF);
        func_800CA7B0(arg0, temp_s1, 1, ((u32) M2C_FIELD(temp_v0, u32 *, 0x10) >> 0x1A) & 7, (s32)var_v0);
        break;
    case 0:
        var_v0 = func_800D82A0(temp_a0 & 0xFF, temp_a1 & 0xFF);
        func_800CA7B0(arg0, temp_s1, 0, ((u32) M2C_FIELD(temp_v0, u32 *, 0x10) >> 0x1A) & 7, (s32)var_v0);
        break;
    case 2:
        var_v0 = func_800D8508(temp_a0 & 0xFF, temp_a1 & 0xFF);
        func_800CA7B0(arg0, temp_s1, 2, ((u32) M2C_FIELD(temp_v0, u32 *, 0x10) >> 0x1A) & 7, (s32)var_v0);
        break;
    case 3:
        var_v0 = func_800D8580(temp_a0 & 0xFF, temp_a1 & 0xFF);
        func_800CA7B0(arg0, temp_s1, 3, ((u32) M2C_FIELD(temp_v0, u32 *, 0x10) >> 0x1A) & 7, (s32)var_v0);
        break;
    }
    return (u32) temp_s0;
}
