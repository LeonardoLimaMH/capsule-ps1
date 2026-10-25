#include "common.h"

void func_800FE840(void) {
    extern u8 D_80069AD4[];
    extern u8 D_80085FF2[];
    extern u8 D_8008ED68[];
    void *temp_a0;

    temp_a0 = ((1 - (*D_80085FF2)) * 0x10) + D_8008ED68;
    if (M2C_FIELD(temp_a0, s32 *, 0x80) & 0x1000) {
        M2C_FIELD(D_80069AD4, u16 *, 0xE8) = (u16) (M2C_FIELD(D_80069AD4, u16 *, 0xE8) + 0x10);
    }
    if (M2C_FIELD(temp_a0, s32 *, 0x80) & 0x4000) {
        M2C_FIELD(D_80069AD4, u16 *, 0xE8) = (u16) (M2C_FIELD(D_80069AD4, u16 *, 0xE8) - 0x10);
    }
    if (M2C_FIELD(temp_a0, s32 *, 0x80) & 0x2000) {
        M2C_FIELD(D_80069AD4, u16 *, 0xEA) = (u16) (M2C_FIELD(D_80069AD4, u16 *, 0xEA) + 0x10);
    }
    if (M2C_FIELD(temp_a0, s32 *, 0x80) & 0x8000) {
        M2C_FIELD(D_80069AD4, u16 *, 0xEA) = (u16) (M2C_FIELD(D_80069AD4, u16 *, 0xEA) - 0x10);
    }
    if (M2C_FIELD(temp_a0, s32 *, 0x80) & 8) {
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 0x10);
    }
    if (M2C_FIELD(temp_a0, s32 *, 0x80) & 2) {
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) - 0x10);
    }
}
