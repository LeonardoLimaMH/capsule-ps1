#include "common.h"

void func_800A2A80(void *arg0) {
    extern M2C_UNK D_800B3B38[];
    if (M2C_FIELD(D_800B3B38, s16 *, 0x32) == 6) {
        M2C_FIELD(arg0, u8 *, 0x5E7) = 7U;
        M2C_FIELD(arg0, u8 *, 0x5E6) = 7U;
        M2C_FIELD(D_800B3B38, s16 *, 0x32) = 7;
    } else {
        M2C_FIELD(arg0, u8 *, 0x5E7) = (u8) M2C_FIELD(D_800B3B38, s16 *, 0x32);
        M2C_FIELD(arg0, u8 *, 0x5E6) = (u8) M2C_FIELD(D_800B3B38, s16 *, 0x32);
    }
    M2C_FIELD(arg0, u8 *, 0x5DB) = (u8) M2C_FIELD(D_800B3B38, u8 *, 0x36);
    M2C_FIELD(arg0, u8 *, 0x5E2) = (u8) M2C_FIELD(D_800B3B38, u8 *, 0x28);
    M2C_FIELD(arg0, u8 *, 0x5E3) = (u8) M2C_FIELD(D_800B3B38, u8 *, 0x2A);
    M2C_FIELD(arg0, s16 *, 0x5CC) = (s16) ((u16) M2C_FIELD(D_800B3B38, u8 *, 0x28) | ((u16) M2C_FIELD(D_800B3B38, u8 *, 0x2A) * 8) | (M2C_FIELD(D_800B3B38, u16 *, 0x34) << 7) | ((u16) M2C_FIELD(D_800B3B38, s16 *, 0x32) << 8) | ((u16) M2C_FIELD(D_800B3B38, u8 *, 0x36) << 0xB) | (M2C_FIELD(D_800B3B38, u16 *, 0x2E) << 0xC) | (M2C_FIELD(D_800B3B38, u16 *, 0x30) << 0xF));
    M2C_FIELD(arg0, u8 *, 0x5C9) = (u8) M2C_FIELD(D_800B3B38, u8 *, 0x2C);
    if (M2C_FIELD(D_800B3B38, s16 *, 0x32) == 7) {
        M2C_FIELD(D_800B3B38, s16 *, 0x32) = 6;
    }
}
