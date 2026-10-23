#include "common.h"

void func_800B780C(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    s8 temp_v1;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x40);
    M2C_FIELD(arg0, u16 *, 0x46) = (u16) M2C_FIELD(temp_a2, u16 *, 0x5C);
    if (!(M2C_FIELD(arg0, s32 *, 0x34) & 0x7F)) {
        M2C_FIELD(arg0, u16 *, 0x4A) = (u16) M2C_FIELD(temp_a2, u16 *, 0x60);
    } else {
        M2C_FIELD(arg0, u16 *, 0x4A) = (u16) M2C_FIELD(temp_a2, u16 *, 0x74);
    }
    M2C_FIELD(arg0, s16 *, 0x4E) = (s16) (M2C_FIELD(temp_a2, u16 *, 0x64) - 1);
    M2C_FIELD(arg0, u16 *, 0x54) = (u16) M2C_FIELD(temp_a2, u16 *, 0x68);
    M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((M2C_FIELD(temp_a2, s32 *, 0x6C) << 0xC) / 97);
    M2C_FIELD(arg0, s16 *, 0x52) = (s16) ((M2C_FIELD(temp_a2, s32 *, 0x70) << 0xC) / 79);
    M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) - ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1));
    M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) - ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) >> 0x1F)) >> 1));
    if ((u8) M2C_FIELD(D_80085428, u8 *, 0xCE7) >= 2U) {
        temp_v1 = ((0xA - M2C_FIELD(temp_a2, s32 *, 0x54)) << 7) / 10;
        M2C_FIELD(arg0, s8 *, 0x5A) = temp_v1;
        M2C_FIELD(arg0, s8 *, 0x59) = temp_v1;
        M2C_FIELD(arg0, s8 *, 0x58) = temp_v1;
        if ((u32) (temp_v1 & 0xFF) < 0x50U) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x40);
        }
    }
    func_800161C4(arg0, arg0, temp_a2, D_80085428);
}
