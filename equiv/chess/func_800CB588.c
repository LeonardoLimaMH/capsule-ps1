#include "common.h"

void func_800CB588(void *arg0, s32 arg1) {
    extern u8 D_80069BAC[];
    extern u8 D_80102888[];
    void *temp_s0;

    temp_s0 = (arg1 * 0xF0) + D_80102888;
    M2C_FIELD(arg0, void **, 0x14) = temp_s0;
    bcopy(D_80069BAC, temp_s0, 0x10);
    bcopy(D_80069BAC + 0x10, temp_s0 + 0x20, 8);
    bcopy(D_80069BAC - 0xA8, temp_s0 + 0x64, 0x20);
    bcopy(D_80069BAC - 0x20, temp_s0 + 0xA4, 0x20);
    bcopy(D_80069BAC - 0x68, temp_s0 + 0xC4, 0x20);
    bcopy(D_80069BAC - 0x28, temp_s0 + 0xE4, 8);
    bcopy(D_80069BAC - 0x6C, temp_s0 + 0x60, 4);
    M2C_FIELD(temp_s0, s16 *, 0xEC) = 0;
    M2C_FIELD(temp_s0, s8 *, 0xEE) = 0;
    func_8001A998(temp_s0 + 0x10, 0x10);
    func_8001A998(temp_s0 + 0x28, 8);
    func_8001A998(temp_s0 + 0x84, 0x20);
    func_8001A998(temp_s0 + 0x30, 0x10);
    func_8001A998(temp_s0 + 0x40, 0x10);
    func_8001A998(temp_s0 + 0x50, 8);
    func_8001A998(temp_s0 + 0x58, 8);
}
