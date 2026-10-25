#include "common.h"

void func_800A7340(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern u8 D_80091618[];
    void *temp_v1;
    void *temp_v1_2;

    if (func_800D1548() != 0) {
        temp_v1 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        M2C_FIELD(temp_v1, s16 *, 0xBE) = 0xFA;
        M2C_FIELD(temp_v1, u16 *, 0x9E) = (u16) (M2C_FIELD((((arg1 & 0xFFFF) * 0x3C) + D_80063940), u8 *, 0xB) | 0x80);
        M2C_FIELD(temp_v1, s32 *, 0xC4) = 0;
        M2C_FIELD(temp_v1, s32 *, 0xC8) = 0;
        M2C_FIELD(temp_v1, s32 *, 0xCC) = 0;
        M2C_FIELD(temp_v1, s16 *, 0xD0) = 0;
        M2C_FIELD(temp_v1, s16 *, 0xD2) = 0x80;
        M2C_FIELD(temp_v1, s16 *, 0xD4) = 0;
        M2C_FIELD(temp_v1, s16 *, 0xD6) = 0;
        M2C_FIELD(temp_v1, s16 *, 0xD8) = 0x80;
        M2C_FIELD(temp_v1, s16 *, 0xDA) = 0x80;
        M2C_FIELD(temp_v1, s16 *, 0xDC) = 0x80;
        M2C_FIELD(temp_v1, s16 *, 0xDE) = 0x80;
        M2C_FIELD(temp_v1, s16 *, 0xE0) = 0x80;
        M2C_FIELD(temp_v1, s16 *, 0xE2) = 0x80;
        M2C_FIELD(temp_v1, s16 *, 0xE4) = 0x80;
        M2C_FIELD(temp_v1, s16 *, 0xE6) = (s16) ((u16) M2C_FIELD(temp_v1, u16 *, 0x9E) >> 1);
        return;
    }
    temp_v1_2 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
    M2C_FIELD(temp_v1_2, s16 *, 0xBE) = 0xFA;
    M2C_FIELD(temp_v1_2, s32 *, 0xC8) = 0;
    M2C_FIELD(temp_v1_2, s32 *, 0xCC) = 0;
    M2C_FIELD(temp_v1_2, s16 *, 0xD0) = 0;
    M2C_FIELD(temp_v1_2, s16 *, 0xD2) = 0;
    M2C_FIELD(temp_v1_2, s16 *, 0xD4) = 0x64;
    M2C_FIELD(temp_v1_2, s16 *, 0xD6) = 0x64;
    M2C_FIELD(temp_v1_2, s16 *, 0xD8) = 0;
    M2C_FIELD(temp_v1_2, s16 *, 0xDA) = 0;
    M2C_FIELD(temp_v1_2, s16 *, 0xDC) = 0;
    M2C_FIELD(temp_v1_2, s16 *, 0xDE) = 0;
    M2C_FIELD(temp_v1_2, s16 *, 0xE0) = 0;
    M2C_FIELD(temp_v1_2, s16 *, 0xE2) = 0;
    M2C_FIELD(temp_v1_2, u16 *, 0x9E) = (u16) (M2C_FIELD((((arg1 & 0xFFFF) * 0x3C) + D_80063940), u8 *, 0xB) | 0x80);
    M2C_FIELD(temp_v1_2, s16 *, 0xE4) = 0xC8;
    M2C_FIELD(temp_v1_2, s16 *, 0xE6) = (s16) ((u16) M2C_FIELD(temp_v1_2, u16 *, 0x9E) >> 1);
}
