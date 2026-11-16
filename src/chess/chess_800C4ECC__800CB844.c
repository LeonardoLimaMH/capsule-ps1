#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

void func_800CB844(s32 arg0) {
    func_8001A998(arg0 + 0x10, 0x10);
    func_8001A998(arg0 + 0x28, 8);
    func_8001A998(arg0 + 0x40, 0x10);
    func_8001A998(arg0 + 0x58, 8);
}

s32 func_800CB898(s32 arg0) {
    return (arg0 & 0xC0) != 0;
}

s16 func_800CB8A4(s16 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 var_v0;
    s32 var_v0_2;

    if (arg4 == 0) {
        var_v0 = arg0 + ((s32) ((arg1 - arg0) * arg2) / arg3);
    } else {
        var_v0_2 = (arg1 - arg0) * rsin((s32) (arg2 << 0xC) / (s32) (arg3 * 4));
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        var_v0 = arg0 + (var_v0_2 >> 0xC);
    }
    return var_v0;
}

s32 func_800CB960(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;

    if (arg4 == 0) {
        return arg0 + ((s32) ((arg1 - arg0) * arg2) / arg3);
    }
    var_v0 = (arg1 - arg0) * rsin((s32) (arg2 << 0xC) / (s32) (arg3 * 4));
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    return arg0 + (var_v0 >> 0xC);
}

void func_800CB9F4(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s16 *, 0x71C) = 0;
    M2C_FIELD(arg0, s8 *, 0x71E) = arg1;
    M2C_FIELD(arg0, s8 *, 0x71F) = arg2;
}

void func_800CBA04(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x71C) = 0;
    M2C_FIELD(arg0, s8 *, 0x71E) = 0;
    M2C_FIELD(arg0, s8 *, 0x71F) = 0;
}
