#include "common.h"
#include "ghidra.h"

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

void func_800CB6A0(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0x14);
    long t;
    *(s32 *)(p + 0x00) += *(s32 *)(p + 0x10);
    *(s32 *)(p + 0x04) += *(s32 *)(p + 0x14);
    *(s32 *)(p + 0x08) += *(s32 *)(p + 0x18);
    t = 0x1000;
    *(u16 *)(p + 0x20) = *(u16 *)(p + 0x20) + t + *(u16 *)(p + 0x28);
    *(u16 *)(p + 0x22) = *(u16 *)(p + 0x22) + t + *(u16 *)(p + 0x2A);
    *(u16 *)(p + 0x24) = *(u16 *)(p + 0x24) + t + *(u16 *)(p + 0x2C);
    *(s16 *)(p + 0x20) = *(s16 *)(p + 0x20) % 4096;
    *(s16 *)(p + 0x22) = *(s16 *)(p + 0x22) % 4096;
    *(s16 *)(p + 0x24) = *(s16 *)(p + 0x24) % 4096;
    *(s32 *)(p + 0x30) += *(s32 *)(p + 0x40);
    *(s32 *)(p + 0x34) += *(s32 *)(p + 0x44);
    *(s32 *)(p + 0x38) += *(s32 *)(p + 0x48);
    *(u16 *)(p + 0x50) = *(u16 *)(p + 0x50) + t + *(u16 *)(p + 0x58);
    *(u16 *)(p + 0x52) = *(u16 *)(p + 0x52) + t + *(u16 *)(p + 0x5A);
    *(u16 *)(p + 0x54) = *(u16 *)(p + 0x54) + t + *(u16 *)(p + 0x5C);
    *(s16 *)(p + 0x50) = *(s16 *)(p + 0x50) % 4096;
    *(s16 *)(p + 0x52) = *(s16 *)(p + 0x52) % 4096;
    *(s16 *)(p + 0x54) = *(s16 *)(p + 0x54) % 4096;
}
